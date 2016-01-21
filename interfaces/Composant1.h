#pragma once
#ifndef COMPOSANT1_H
#define COMPOSANT1_H


//#define COMPOSANT1_VERSION 1,2,0,0
//#define COMPOSANT_VERSION_STR "1,2,0,0"


#ifdef COMPOSANT1_EXPORTS
	#define COMPOSANT1_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT1_INTERFACE __declspec(dllimport)
#endif



// interface du composant1
COMPOSANT1_INTERFACE int composant1(int p1, int p2);

COMPOSANT1_INTERFACE char * getComposant1Version(void);
#endif

class Composant4
{
public:
	Composant4();
	~Composant4();
};

