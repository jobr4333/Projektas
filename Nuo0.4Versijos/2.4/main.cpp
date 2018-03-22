// 2.4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "main.h"
#include "funkcijosSuStruktura.h"
#include "funkcijosBeStrukturos.h"
#include <chrono>

int main() {
	int failuSkaicius = 5;										//kiek failu bus generuojama
	int pazymiuSkaicius = 6;									//kiek pazymiu bus generuojama
	int iter{};
	for (size_t iter = 0; iter != failuSkaicius; ++iter) {
		auto start = std::chrono::high_resolution_clock::now(); //laiko matavimo start
		irasytiFailan(pazymiuSkaicius, iter);					//generuojami nauji failai su duomenimis
		skaitymas(iter);										//tada jie perskaitomi
		//rikioti();											//V0.4 atveju to nereikia
		skaiciuotiGalutiniBala(pazymiuSkaicius, iter);
		kietasArNe(pazymiuSkaicius, iter);

		auto finish = std::chrono::high_resolution_clock::now();//laiko matavimo finish
		spausdinti(iter);		
		sunaikinti();											//sunaikinama naudota struktura (kad duomenys nesusilietu)
		std::chrono::duration<double> elapsed = finish - start;
		cout << "Programos vykdymo laikas " << iter << ": " << elapsed.count() << " s" << endl;
	}
}