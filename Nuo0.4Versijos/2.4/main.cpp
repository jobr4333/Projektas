// 2.4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "main.h"
#include "funkcijosSuStruktura.h"
#include "funkcijosBeStrukturos.h"
#include "funkcijosSuList.h"
#include "funkcijosSuDeque.h"
#include <chrono>

int main() {

	list<studentas> studList;
	list<studentas> kietasList;
	list<studentas> luzerisList;


	int failuSkaicius = 5;										//kiek failu bus generuojama
	int pazymiuSkaicius = 5+1;									//kiek pazymiu bus generuojama
	int iter{};
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		irasytiFailan(pazymiuSkaicius, iter);					//generuojami nauji failai su duomenimis
	}
	int i = 1; //SVARBU. Tai Strategijos NR.
	cout << "PIRMA STRATEGIJA" << endl;
	cout << "Vektoriai" << endl;
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		skaitymas(iter);										//skaitomi failai
		skaiciuotiGalutiniBala(pazymiuSkaicius, iter);
		kietasArNe(pazymiuSkaicius, iter, i);
		spausdinti(iter);		
		sunaikinti();											//sunaikinama naudota struktura (kad duomenys nesusilietu)
		cout << "______________________________" << endl;
	}
	cout << "Listai" << endl;
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		skaitymasList(iter, studList);										//skaitomi failai
		skaiciuotiGalutiniBalaList(pazymiuSkaicius, iter, studList);
		kietasArNeList(pazymiuSkaicius, iter, i, studList, kietasList, luzerisList);
		spausdintiList(iter, studList);
		sunaikintiList(studList);											//sunaikinama naudota struktura (kad duomenys nesusilietu)
		cout << "______________________________" << endl;
	}
	cout << "Dekai" << endl;
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		skaitymasDeque(iter);										//skaitomi failai
		skaiciuotiGalutiniBalaDeque(pazymiuSkaicius, iter);
		kietasArNeDeque(pazymiuSkaicius, iter, i);
		spausdintiDeque(iter);
		sunaikintiDeque();											//sunaikinama naudota struktura (kad duomenys nesusilietu)
		cout << "______________________________" << endl;
	}
	//IKI cia yra I strategija kur naudojami 3 konteineriai
	//NUO cia yra II strategija kur naudojami 2 konteineriai

	//-------------------------------------
	i = 2; //SVARBU. Tai Strategijos NR.
	//-------------------------------------

	cout << "ANTRA STRATEGIJA" << endl;
	cout << "vektoriai" << endl;
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		skaitymas(iter);										//skaitomi failai
		skaiciuotiGalutiniBala(pazymiuSkaicius, iter);
		kietasArNe(pazymiuSkaicius, iter, i);
		spausdinti(iter);
		sunaikinti();											//sunaikinama naudota struktura (kad duomenys nesusilietu)
		cout << "______________________________" << endl;
	}
	cout << "Listai" << endl;
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		skaitymasList(iter, studList);										//skaitomi failai
		skaiciuotiGalutiniBalaList(pazymiuSkaicius, iter, studList);
		kietasArNeList(pazymiuSkaicius, iter, i, studList, kietasList, luzerisList);
		spausdintiList(iter, studList);
		sunaikintiList(studList);										//sunaikinama naudota struktura (kad duomenys nesusilietu)
		cout << "______________________________" << endl;
	}
	cout << "Dekai" << endl;
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		skaitymasDeque(iter);										//skaitomi failai
		skaiciuotiGalutiniBalaDeque(pazymiuSkaicius, iter);
		kietasArNeDeque(pazymiuSkaicius, iter, i);
		spausdintiDeque(iter);
		sunaikintiDeque();											//sunaikinama naudota struktura (kad duomenys nesusilietu)
		cout << "______________________________" << endl;
	}
}