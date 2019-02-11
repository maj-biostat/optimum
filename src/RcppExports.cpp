// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// pnorm_mat
arma::mat pnorm_mat(arma::mat& m);
RcppExport SEXP _optimum_pnorm_mat(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(pnorm_mat(m));
    return rcpp_result_gen;
END_RCPP
}
// dnorm_mat
arma::mat dnorm_mat(arma::mat& m);
RcppExport SEXP _optimum_dnorm_mat(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(dnorm_mat(m));
    return rcpp_result_gen;
END_RCPP
}
// jaakkola_jordan
double jaakkola_jordan(const arma::mat& X, const arma::vec& y, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p);
RcppExport SEXP _optimum_jaakkola_jordan(SEXP XSEXP, SEXP ySEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    rcpp_result_gen = Rcpp::wrap(jaakkola_jordan(X, y, eta1, eta2, eta1_p, eta2_p));
    return rcpp_result_gen;
END_RCPP
}
// saul_jordan
double saul_jordan(const arma::mat& X, const arma::vec& y, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p, arma::vec& omega1);
RcppExport SEXP _optimum_saul_jordan(SEXP XSEXP, SEXP ySEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP, SEXP omega1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type omega1(omega1SEXP);
    rcpp_result_gen = Rcpp::wrap(saul_jordan(X, y, eta1, eta2, eta1_p, eta2_p, omega1));
    return rcpp_result_gen;
END_RCPP
}
// knowles_minka_wand
double knowles_minka_wand(const arma::mat& X, const arma::vec& y, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p, const arma::vec& MS_p, const arma::vec& MS_s);
RcppExport SEXP _optimum_knowles_minka_wand(SEXP XSEXP, SEXP ySEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP, SEXP MS_pSEXP, SEXP MS_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type MS_p(MS_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type MS_s(MS_sSEXP);
    rcpp_result_gen = Rcpp::wrap(knowles_minka_wand(X, y, eta1, eta2, eta1_p, eta2_p, MS_p, MS_s));
    return rcpp_result_gen;
END_RCPP
}
// vb_logistic
List vb_logistic(const arma::mat& X, const arma::vec& y, const arma::vec& mu0, const arma::mat& Sigma0, double tol, int maxiter, int maxiter_jj, std::string alg);
RcppExport SEXP _optimum_vb_logistic(SEXP XSEXP, SEXP ySEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP maxiter_jjSEXP, SEXP algSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter_jj(maxiter_jjSEXP);
    Rcpp::traits::input_parameter< std::string >::type alg(algSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_logistic(X, y, mu0, Sigma0, tol, maxiter, maxiter_jj, alg));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_optimum_pnorm_mat", (DL_FUNC) &_optimum_pnorm_mat, 1},
    {"_optimum_dnorm_mat", (DL_FUNC) &_optimum_dnorm_mat, 1},
    {"_optimum_jaakkola_jordan", (DL_FUNC) &_optimum_jaakkola_jordan, 6},
    {"_optimum_saul_jordan", (DL_FUNC) &_optimum_saul_jordan, 7},
    {"_optimum_knowles_minka_wand", (DL_FUNC) &_optimum_knowles_minka_wand, 8},
    {"_optimum_vb_logistic", (DL_FUNC) &_optimum_vb_logistic, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_optimum(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
