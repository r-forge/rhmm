/**************************************************************
 *** RHmm version 1.3.2                                      
 ***                                                         
 *** File: cOTError.h 
 ***                                                         
 *** Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> 
 ***                                                         
 *** Date: 2009/12/07                                      
 ***                                                         
 **************************************************************/

#ifndef _COTERROR_H_
#define _COTERROR_H_
#include <cstdlib>
#include <iostream>

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