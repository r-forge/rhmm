/***********************************************************
 * RHmm version 1.0.4                                      *
 *                                                         *
 *                                                         *
 * Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> *
 *                                                         *
 * Date: 2008/08/05                                       *
 *                                                         *
 ***********************************************************/
#ifndef _COTERROR_H_
#define _COTERROR_H_
#ifndef _RDLL_
	#include <iostream>
	using namespace std ;
#else
	#include <R.h>
	#include <Rinternals.h>
	#include <Rmath.h>
#endif _RDLL_

#ifndef NULL
	#define NULL 0
#endif // NULL

#ifndef uint
	typedef unsigned int uint ;
#endif // uint

class cOTError
{
	public :
		cOTError(char *theMess) ;
} ;

#endif //_COTERROR_H_