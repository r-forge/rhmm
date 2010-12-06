/**************************************************************
 *** RHmm version 1.4.3                                     
 ***                                                         
 *** File: cOTError.h 
 ***                                                         
 *** Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> 
 *** Author: Sebastian BAUER <sebastian.bauer@charite.de>
 *** Date: 2010/12/01                                     
 ***                                                         
 **************************************************************/

#pragma once
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
                cOTError(const char *theMess) ;
} ;
