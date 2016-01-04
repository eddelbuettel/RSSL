// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// harmonic_function_cpp
arma::mat harmonic_function_cpp(const arma::mat& W, const arma::mat& Y);
RcppExport SEXP RSSL_harmonic_function_cpp(SEXP WSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    __result = Rcpp::wrap(harmonic_function_cpp(W, Y));
    return __result;
END_RCPP
}
// svmlin_rcpp
List svmlin_rcpp(S4 X, NumericVector y, int l, int algorithm, double lambda, double lambda_u, int max_switch, double pos_frac, double Cp, double Cn, NumericVector costs, bool verbose);
RcppExport SEXP RSSL_svmlin_rcpp(SEXP XSEXP, SEXP ySEXP, SEXP lSEXP, SEXP algorithmSEXP, SEXP lambdaSEXP, SEXP lambda_uSEXP, SEXP max_switchSEXP, SEXP pos_fracSEXP, SEXP CpSEXP, SEXP CnSEXP, SEXP costsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< int >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_u(lambda_uSEXP);
    Rcpp::traits::input_parameter< int >::type max_switch(max_switchSEXP);
    Rcpp::traits::input_parameter< double >::type pos_frac(pos_fracSEXP);
    Rcpp::traits::input_parameter< double >::type Cp(CpSEXP);
    Rcpp::traits::input_parameter< double >::type Cn(CnSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(svmlin_rcpp(X, y, l, algorithm, lambda, lambda_u, max_switch, pos_frac, Cp, Cn, costs, verbose));
    return __result;
END_RCPP
}
