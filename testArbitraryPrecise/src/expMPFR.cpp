#include <Rcpp.h>
#include <mpfr.h>

// [[Rcpp::export]]
std::string expMPFR(double x) {
  mpfr_t result;
  mpfr_init2(result, 336); // about 100 decimal digits
  
  // Compute exp(x)
  mpfr_set_d(result, x, MPFR_RNDN);
  mpfr_exp_t(result, result, MPFR_RNDN);
  
  // Convert result to string
  char* result_str = mpfr_get_str(NULL, NULL, 10, 0, result, MPFR_RNDN);
  std::string result_cpp(result_str);
  
  // Free memory
  mpfr_free_str(result_str);
  mpfr_clear(result);
  
  return result_cpp;
}
