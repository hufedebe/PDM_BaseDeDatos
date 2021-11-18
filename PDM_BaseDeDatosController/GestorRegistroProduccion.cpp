#include "GestorRegistroProduccion.h"
#include "GestorRegistroVenta.h"


using namespace PDM_BaseDeDatosController;
using namespace System::IO;
using namespace System;

GestorRegistroProduccion::GestorRegistroProduccion() {
	this->objConexion = gcnew SqlConnection();
}

void GestorRegistroProduccion::AbrirConexion(){
	/*Datos para la conexión a la BD: servidor, nombreBD, usuarioBD, passBD*/
	String^ pass = "cerveza123";
	this->objConexion->ConnectionString = "Server=pdm-grupo1.clpiohd4aqw1.us-east-1.rds.amazonaws.com;DataBase=PDM_BD; User ID=admin;Password=cerveza123;";
	this->objConexion->Open(); /*Ya establecí contacto con la BD*/
}

void GestorRegistroProduccion::CerrarConexion() {
	this->objConexion->Close();
}

List<RegistroProduccion^>^ GestorRegistroProduccion::devuelveRegistroProducciones() {
    List<RegistroProduccion^>^ listaProduccion = gcnew List<RegistroProduccion^>();
    AbrirConexion();
    SqlDataReader^ objData;
    SqlCommand^ objQuery = gcnew SqlCommand();
    objQuery->Connection = this->objConexion;
    objQuery->CommandText = "select * from RegistroProduccion;";
    objData = objQuery->ExecuteReader();
    while (objData->Read()) {
        int codigo = safe_cast<int>(objData[0]);
        String^ fecha = safe_cast<String^>(objData[1]);
        int cantBotellas = safe_cast<int>(objData[2]);
        float tempMaceracion = safe_cast<double>(objData[3]);
        float tempCoccion = safe_cast<double>(objData[4]);
        float tempFermentacion = safe_cast<double>(objData[5]);
        RegistroProduccion^ objRegistroProduccion = gcnew RegistroProduccion(codigo, fecha, cantBotellas, tempMaceracion, tempCoccion, tempFermentacion);
        listaProduccion->Add(objRegistroProduccion);
    }
    objData->Close();
    CerrarConexion();
    return listaProduccion;

}

int GestorRegistroProduccion::devolverStockActual() {
    List<RegistroProduccion^>^ listaProduccion = gcnew List<RegistroProduccion^>();
    List<RegistroVenta^>^ listaVentas = gcnew List<RegistroVenta^>();

    GestorRegistroVenta^ objGestorRegistroVenta = gcnew GestorRegistroVenta();
    listaProduccion = this->devuelveRegistroProducciones();
    listaVentas = objGestorRegistroVenta->devolverListaVentas();

    int totalBotellasProd = 0;
    int totalBotellasVend = 0;
    int stockBotellasLlenas;

    //Hallando total de botellas producidas
    for (int i = 0; i < listaProduccion->Count; i++) {
        totalBotellasProd += listaProduccion[i]->cantBotellas;
    }

    //Hallando total de botellas vendidas
    for (int i = 0; i < listaVentas->Count; i++) {
        totalBotellasVend += listaVentas[i]->cantVendida;
    }

    stockBotellasLlenas = totalBotellasProd - totalBotellasVend;

    // Actualizando Inventario
    AbrirConexion();
    SqlCommand^ objQuery = gcnew SqlCommand();
    objQuery->Connection = this->objConexion;
    objQuery->CommandText = "update Inventario set cantBotellasLlenas= " + stockBotellasLlenas + " ;";
    objQuery->ExecuteNonQuery();
    CerrarConexion();

    return stockBotellasLlenas;
}