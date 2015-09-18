
#ifndef __FACTORLIB_HPP__
#define __FACTORLIB_HPP__

#include <NTL/ZZ.h>

namespace FL
{

   /* Factorization algorithms */

   NTL::ZZ pollard_rho(NTL::ZZ &n, long k=2);

}

#endif
