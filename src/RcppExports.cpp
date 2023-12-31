// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// BOG_simmat_cpp
Rcpp::NumericMatrix BOG_simmat_cpp(Rcpp::List& d2g, int totalGeneNum, Rcpp::List& GeneNumList);
RcppExport SEXP dSimer_BOG_simmat_cpp(SEXP d2gSEXP, SEXP totalGeneNumSEXP, SEXP GeneNumListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type d2g(d2gSEXP);
    Rcpp::traits::input_parameter< int >::type totalGeneNum(totalGeneNumSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type GeneNumList(GeneNumListSEXP);
    rcpp_result_gen = Rcpp::wrap(BOG_simmat_cpp(d2g, totalGeneNum, GeneNumList));
    return rcpp_result_gen;
END_RCPP
}
// BOG_normat_cpp
Rcpp::NumericMatrix BOG_normat_cpp(Rcpp::CharacterVector D1, Rcpp::CharacterVector D2, Rcpp::NumericMatrix& simmat, Rcpp::List& matnameloc, Rcpp::List& maxsim, Rcpp::List& IC);
RcppExport SEXP dSimer_BOG_normat_cpp(SEXP D1SEXP, SEXP D2SEXP, SEXP simmatSEXP, SEXP matnamelocSEXP, SEXP maxsimSEXP, SEXP ICSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type D1(D1SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type D2(D2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type simmat(simmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type matnameloc(matnamelocSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type maxsim(maxsimSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type IC(ICSEXP);
    rcpp_result_gen = Rcpp::wrap(BOG_normat_cpp(D1, D2, simmat, matnameloc, maxsim, IC));
    return rcpp_result_gen;
END_RCPP
}
// go2g_full
Rcpp::List go2g_full(Rcpp::List& go2g, Rcpp::List& go_offsp);
RcppExport SEXP dSimer_go2g_full(SEXP go2gSEXP, SEXP go_offspSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type go2g(go2gSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type go_offsp(go_offspSEXP);
    rcpp_result_gen = Rcpp::wrap(go2g_full(go2g, go_offsp));
    return rcpp_result_gen;
END_RCPP
}
// TDistanceMat_cpp
Rcpp::NumericMatrix TDistanceMat_cpp(Rcpp::NumericMatrix& SDistanceMat, float& A, float& b);
RcppExport SEXP dSimer_TDistanceMat_cpp(SEXP SDistanceMatSEXP, SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type SDistanceMat(SDistanceMatSEXP);
    Rcpp::traits::input_parameter< float& >::type A(ASEXP);
    Rcpp::traits::input_parameter< float& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(TDistanceMat_cpp(SDistanceMat, A, b));
    return rcpp_result_gen;
END_RCPP
}
// ICod_onepair_cpp
float ICod_onepair_cpp(Rcpp::NumericMatrix& SDis, Rcpp::NumericMatrix& TDis, float& C);
RcppExport SEXP dSimer_ICod_onepair_cpp(SEXP SDisSEXP, SEXP TDisSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type SDis(SDisSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type TDis(TDisSEXP);
    Rcpp::traits::input_parameter< float& >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(ICod_onepair_cpp(SDis, TDis, C));
    return rcpp_result_gen;
END_RCPP
}
// PSB_termsim_cpp
Rcpp::NumericMatrix PSB_termsim_cpp(Rcpp::NumericMatrix& go_jaccardindex, Rcpp::List& IC);
RcppExport SEXP dSimer_PSB_termsim_cpp(SEXP go_jaccardindexSEXP, SEXP ICSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type go_jaccardindex(go_jaccardindexSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type IC(ICSEXP);
    rcpp_result_gen = Rcpp::wrap(PSB_termsim_cpp(go_jaccardindex, IC));
    return rcpp_result_gen;
END_RCPP
}
// Sun_topology_cpp
Rcpp::NumericMatrix Sun_topology_cpp(Rcpp::CharacterVector& D1, Rcpp::CharacterVector& D2, Rcpp::List& d2g, Rcpp::NumericMatrix& graphlet_signature, Rcpp::NumericVector& weight);
RcppExport SEXP dSimer_Sun_topology_cpp(SEXP D1SEXP, SEXP D2SEXP, SEXP d2gSEXP, SEXP graphlet_signatureSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type D1(D1SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type D2(D2SEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type d2g(d2gSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type graphlet_signature(graphlet_signatureSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type weight(weightSEXP);
    rcpp_result_gen = Rcpp::wrap(Sun_topology_cpp(D1, D2, d2g, graphlet_signature, weight));
    return rcpp_result_gen;
END_RCPP
}
