/***********************************************************
 * RHmm version 1.0.4                                      *
 *                                                         *
 *                                                         *
 * Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> *
 *                                                         *
 * Date: 2008/08/05                                       *
 *                                                         *
 ***********************************************************/
#ifndef _CRANDOMGENERATOR_H_
#define _CRANDOMGENERATOR_H_
#ifdef _GSL_
#include <gsl/gsl_rng.h>
	class cRandomGenerator
	{	public :
			const gsl_rng_type	*mT	;
			gsl_rng				*mr	;
		public :
			cRandomGenerator() ;
			~cRandomGenerator() ;
	} ;
#endif // _GSL_
#endif //_CRANDOMGENERATOR_H_
