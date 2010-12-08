/**************************************************************
 *** RHmm version 1.4.4                                     
 ***                                                         
 *** File: cMultivariateNormal.h 
 ***                                                         
 *** Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> 
 *** Author: Sebastian BAUER <sebastian.bauer@charite.de>
 *** Date: 2010/12/08                                     
 ***                                                         
 **************************************************************/

#ifndef _ CMULTIVARIATENORMAL_H_ 
#define _CMULTIVARIATENORMAL_H_ 
#pragma once

#include "cDistribution.h"
#include "SamplesUtil.h"

class cMultivariateNormal : public cDistribution
{       private :
                uint    mvNClass        ;
        public :
                cOTVector*      mMean   ;
                cOTMatrix*      mCov    ;
        public :
                cMultivariateNormal(uint theNClass = 0, uint theDimObs = 1) ;
                virtual ~cMultivariateNormal() ;
                virtual void ComputeCondProba(cOTVector* theY, uint theNSample, cOTMatrix* theCondProba) ;
                virtual void UpdateParameters(cInParam& theInParam, cBaumWelch& theBaumWelch, cOTMatrix* theCondProba=NULL) ;
                virtual void InitParameters(cBaumWelchInParam &theInParam) ;
                virtual void Print() ;
                virtual void GetParam(uint theDeb, cOTVector& theParam) ;
                virtual void SetParam(uint theDeb, cOTVector& theParam) ;
                uint GetDimObs() ;
                void CopyDistr(cDistribution* theSrc) ;
                uint GetNParam(void){ return mMean[0].mSize + mMean[0].mSize * mMean[0].mSize ; }

} ;
#endif //_CMULTIVARIATENORMAL_H_ 
