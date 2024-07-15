#include <Rcpp.h>
#include <boost/multiprecision/mpfr.hpp>
#include <boost/math/special_functions/expm1.hpp>

// [[Rcpp::depends(BH)]]
// [[Rcpp::export]]
std::string mpfrExp100(double x) {
  boost::multiprecision::mpfr_float_100 bx = x;
  boost::multiprecision::mpfr_float_100 expx = exp(bx);
  return expx.str(50);
}
