// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// jaccard_coeff
NumericMatrix jaccard_coeff(SEXP R_idx, SEXP R_weight);
RcppExport SEXP _monocle_jaccard_coeff(SEXP R_idxSEXP, SEXP R_weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_idx(R_idxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_weight(R_weightSEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_coeff(R_idx, R_weight));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_monocle_jaccard_coeff", (DL_FUNC) &_monocle_jaccard_coeff, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_monocle(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
