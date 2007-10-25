/***********************************************************
 * RHmm version 0.9.2                                      *
 *                                                         *
 *                                                         *
 * Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> *
 *                                                         *
 * Date: 2007/10/25                                        *
 *                                                         *
 ***********************************************************/
#ifndef _SAMPLESUTIL_HPP_
#define _SAMPLESUTIL_HPP_
#include "OTMathUtil.hpp"

void flatSamples(cOTVector* theInVect, uint theNSample, uint theDimObs, uint theNObsAllSamples, cOTVector& theOutVect) ;
void listSamples(cOTVector& theInVect, uint theNSample, uint theDimObs, uint* theNObsSample, cOTVector* theOutVect) ;
#endif // _SAMPLESUTIL_HPP_