// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_ICLExact
Rcpp::List cpp_ICLExact(arma::cube adj, arma::mat z, bool verbose, double eta0, double zeta0, double ap, double aq, double bp, double bq, double delta);
RcppExport SEXP _GreedySBTM_cpp_ICLExact(SEXP adjSEXP, SEXP zSEXP, SEXP verboseSEXP, SEXP eta0SEXP, SEXP zeta0SEXP, SEXP apSEXP, SEXP aqSEXP, SEXP bpSEXP, SEXP bqSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type eta0(eta0SEXP);
    Rcpp::traits::input_parameter< double >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< double >::type ap(apSEXP);
    Rcpp::traits::input_parameter< double >::type aq(aqSEXP);
    Rcpp::traits::input_parameter< double >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< double >::type bq(bqSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ICLExact(adj, z, verbose, eta0, zeta0, ap, aq, bp, bq, delta));
    return rcpp_result_gen;
END_RCPP
}
// cpp_GreedyICL
Rcpp::List cpp_GreedyICL(arma::cube adj, arma::mat z, unsigned int max_n_iter, bool verbose, double eta0, double zeta0, double ap, double aq, double bp, double bq, double delta);
RcppExport SEXP _GreedySBTM_cpp_GreedyICL(SEXP adjSEXP, SEXP zSEXP, SEXP max_n_iterSEXP, SEXP verboseSEXP, SEXP eta0SEXP, SEXP zeta0SEXP, SEXP apSEXP, SEXP aqSEXP, SEXP bpSEXP, SEXP bqSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type max_n_iter(max_n_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type eta0(eta0SEXP);
    Rcpp::traits::input_parameter< double >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< double >::type ap(apSEXP);
    Rcpp::traits::input_parameter< double >::type aq(aqSEXP);
    Rcpp::traits::input_parameter< double >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< double >::type bq(bqSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_GreedyICL(adj, z, max_n_iter, verbose, eta0, zeta0, ap, aq, bp, bq, delta));
    return rcpp_result_gen;
END_RCPP
}
// cpp_GreedyMerge
Rcpp::List cpp_GreedyMerge(arma::cube adj, arma::mat z, bool verbose, double eta0, double zeta0, double ap, double aq, double bp, double bq, double delta);
RcppExport SEXP _GreedySBTM_cpp_GreedyMerge(SEXP adjSEXP, SEXP zSEXP, SEXP verboseSEXP, SEXP eta0SEXP, SEXP zeta0SEXP, SEXP apSEXP, SEXP aqSEXP, SEXP bpSEXP, SEXP bqSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type eta0(eta0SEXP);
    Rcpp::traits::input_parameter< double >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< double >::type ap(apSEXP);
    Rcpp::traits::input_parameter< double >::type aq(aqSEXP);
    Rcpp::traits::input_parameter< double >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< double >::type bq(bqSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_GreedyMerge(adj, z, verbose, eta0, zeta0, ap, aq, bp, bq, delta));
    return rcpp_result_gen;
END_RCPP
}
// cpp_CollapseLabels
Rcpp::List cpp_CollapseLabels(arma::vec vec);
RcppExport SEXP _GreedySBTM_cpp_CollapseLabels(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_CollapseLabels(vec));
    return rcpp_result_gen;
END_RCPP
}
