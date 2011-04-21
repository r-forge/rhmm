/**************************************************************
 *** RHmm version 1.4.9
 ***                                                         
 *** File: MultivariateNormalUtil.h 
 ***                                                         
 *** Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> 
 *** Author: Sebastian BAUER <sebastian.bauer@charite.de>
 *** Date: 2011/04/21                                     
 ***                                                         
 **************************************************************/

#ifndef _MULTIVARIATENORMALUTIL_H_
#define _MULTIVARIATENORMALUTIL_H_
#pragma once
#include "OTMathUtil.h"

#ifndef _RDLL_
        #include "REquivalents.h"
#else
        #include <cstdio>
        #include <cstdlib>
        #include <R.h>
        #include <Rinternals.h>
        #include <Rmath.h>
#endif // _RDLL_


#ifndef SQRT_TWO_PI
        #define SQRT_TWO_PI     2.5066282746310002
#endif //SQRT_TWO_PI
#ifndef uint
        typedef unsigned int uint ;
#endif //int

void SymetricInverseAndDet(cOTMatrix& theMat, double& theDet, cOTMatrix& theInvMat) ;

void MultivariateNormalDensity(cOTVector& thex, cOTVector& theMu, cOTMatrix& theInvCov, double theDet, double* theDens) ;

void MultivariateNormalDensity(cOTVector& thex, cOTVector& theMu, cOTMatrix& theInvCov, double theDet, cDVector& theDens) ;

#endif //_MULTIVARIATENORMALUTIL_H_
