#pragma once
// Composant2.h : main header file for the Composant2 DLL
//
#ifndef COMPOSANT2_H
#define COMPOSANT2_ 
#include "Composant2Version.h" 


#ifdef COMPOSANT2_EXPORTS
	#define COMPOSANT2_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT2_INTERFACE __declspec(dllimport)
#endif



// interface du composant2
COMPOSANT2_INTERFACE int composant2(int p1, int p2);
#endif
