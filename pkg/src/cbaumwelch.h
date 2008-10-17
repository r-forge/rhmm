/***********************************************************
 * RHmm version 1.1.0                                      *
 *                                                         *
 *                                                         *
 * Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> *
 *                                                         *
 * Date: 2008/10/17                                        *
 *                                                         *
 ***********************************************************/
#ifndef _CBAUMWELCH_H_
#define _CBAUMWELCH_H_
#include "cinparam.h"
#include "chmm.h"

class cBaumWelch
{	private :
			uint	mvNSample		;
			uint*	mvT				;
	public :						;
			cOTMatrix*	mAlpha		;
			cOTMatrix*	mBeta		;
			cOTVector*	mRho		;
			cOTMatrix*	mGamma		;
			cOTMatrix**	mXsi		;
			cOTMatrix*	mSumXsi		;
			cOTVector	mLogVrais	;
	public :
		cBaumWelch(uint theNSample, uint* theT, uint theNClass) ;
		cBaumWelch(const cInParam &theInParam) ;
		void ForwardBackward(cOTMatrix* theCondProba, cHmm& theHMM) ;
		uint GetSampleSize(uint theN){ return mvT[theN] ;}
		virtual ~cBaumWelch() ;
} ;

#endif // _CBAUMWELCH_H_