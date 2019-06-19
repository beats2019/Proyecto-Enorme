#include <iostream>
#include <cmath>
using namespace std;

#include "Enorme.h"


	Enorme::Enorme()
	{
		for( int i = 0; i < 40; i++ )
			elementos[ i ] = 0;
	}
	
	/*
		Utilizar el log10 para encontrar el largo del número
	*/
	void Enorme::recibir( long int a , const int pos)
	{
		int eval = static_cast<int>( log10(a) ) + 1;
		elementos[ pos ] = ( eval <= 40 ) ? a : 0;
		
	}
	
	void Enorme::imprimir()
	{
		for( int i = 0; i < 40; i++ )
		{
			if( elementos[ i ] != 0 )
			{
				cout<<"\nelementos[ " << i << " ] = " << elementos[ i ];
			}
		}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

