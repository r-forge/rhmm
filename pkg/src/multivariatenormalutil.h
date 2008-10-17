/***********************************************************
 * RHmm version 1.1.0                                      *
 *                                                         *
 *                                                         *
 * Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> *
 *                                                         *
 * Date: 2008/10/17                                        *
 *                                                         *
 ***********************************************************/
#ifndef _MULTIVARIATENORMALUTIL_H_
#define _MULTIVARIATENORMALUTIL_H_
#include "otmathutil.h"

#ifndef _RDLL_
	#include "r_equivalents.h"
#else
	#include <stdio.h>
	#include <stdlib.h>
	#include <R.h>
	#include <Rinternals.h>
	#include <Rmath.h>
#endif // _RDLL_


#ifndef SQRT_TWO_PI
	#define SQRT_TWO_PI	2.5066282746310002
#endif //SQRT_TWO_PI
#ifndef uint
	typedef unsigned int uint ;
#endif //int

void SymetricInverseAndDet	(	cOTMatrix&	theMat,
								double&		theDet,
								cOTMatrix&	theInvMat
							) ;
/*void dens_normale_multivariee	(	cOTVector&	thex,
									uint		theDimObs,	// dim de la loi multivari�e
									cOTVector&	theMu,
									cOTMatrix&	theCov,
									double*		theDens
								) ;
*/

void MultivariateNormalDensity	(	cOTVector&	thex,
									cOTVector&	theMu,
									cOTMatrix&	theInvCov,
									double		theDet,
									double*		theDens
								) ;

#endif //_MULTIVARIATENORMALUTIL_H_
