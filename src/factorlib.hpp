
#ifndef __FACTORLIB_HPP__
#define __FACTORLIB_HPP__

#include <NTL/ZZ.h>
#include <NTL/RR.h>
#include <NTL/ZZX.h>

namespace FL
{

   /* Factorization algorithms */

   NTL::ZZ pollard_rho(NTL::ZZ &n, long k=2);
   NTL::ZZ pollard_pm1(NTL::ZZ &n, NTL::ZZ &B);


   /* NTL extension */

   bool ZZX_is_reducible(NTL::ZZX &f, NTL::ZZ &n);

   NTL::ZZ ZZX_evaluate(const NTL::ZZX &f, NTL::ZZ &x);
   NTL::RR ZZX_evaluate(const NTL::ZZX &f, NTL::RR &x);


}

#endif
