#include <Rcpp.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/special_functions/expm1.hpp>

// [[Rcpp::depends(BH)]]
// [[Rcpp::export]]
std::string BoostExp100(double x) {
  boost::multiprecision::cpp_dec_float_100 bx = x;
  boost::multiprecision::cpp_dec_float_100 expx = exp(bx);
  return expx.str(60); 
}
