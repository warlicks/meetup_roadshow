// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_bindrcpp_RCPPEXPORTS_H_GEN_
#define RCPP_bindrcpp_RCPPEXPORTS_H_GEN_

#include "bindrcpp_types.h"
#include <Rcpp.h>

namespace bindrcpp {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("bindrcpp", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("bindrcpp", "bindrcpp_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in bindrcpp");
            }
        }
    }

    inline Environment create_env_string(CharacterVector names, bindrcpp::GETTER_FUNC_STRING fun, bindrcpp::PAYLOAD payload, Environment enclos) {
        typedef SEXP(*Ptr_create_env_string)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_create_env_string p_create_env_string = NULL;
        if (p_create_env_string == NULL) {
            validateSignature("Environment(*create_env_string)(CharacterVector,bindrcpp::GETTER_FUNC_STRING,bindrcpp::PAYLOAD,Environment)");
            p_create_env_string = (Ptr_create_env_string)R_GetCCallable("bindrcpp", "bindrcpp_create_env_string");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_create_env_string(Rcpp::wrap(names), Rcpp::wrap(fun), Rcpp::wrap(payload), Rcpp::wrap(enclos));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Environment >(rcpp_result_gen);
    }

    inline Environment populate_env_string(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_STRING fun, bindrcpp::PAYLOAD payload) {
        typedef SEXP(*Ptr_populate_env_string)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_populate_env_string p_populate_env_string = NULL;
        if (p_populate_env_string == NULL) {
            validateSignature("Environment(*populate_env_string)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_STRING,bindrcpp::PAYLOAD)");
            p_populate_env_string = (Ptr_populate_env_string)R_GetCCallable("bindrcpp", "bindrcpp_populate_env_string");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_populate_env_string(Rcpp::wrap(env), Rcpp::wrap(names), Rcpp::wrap(fun), Rcpp::wrap(payload));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Environment >(rcpp_result_gen);
    }

    inline Environment create_env_symbol(CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL fun, bindrcpp::PAYLOAD payload, Environment enclos) {
        typedef SEXP(*Ptr_create_env_symbol)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_create_env_symbol p_create_env_symbol = NULL;
        if (p_create_env_symbol == NULL) {
            validateSignature("Environment(*create_env_symbol)(CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL,bindrcpp::PAYLOAD,Environment)");
            p_create_env_symbol = (Ptr_create_env_symbol)R_GetCCallable("bindrcpp", "bindrcpp_create_env_symbol");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_create_env_symbol(Rcpp::wrap(names), Rcpp::wrap(fun), Rcpp::wrap(payload), Rcpp::wrap(enclos));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Environment >(rcpp_result_gen);
    }

    inline Environment populate_env_symbol(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL fun, bindrcpp::PAYLOAD payload) {
        typedef SEXP(*Ptr_populate_env_symbol)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_populate_env_symbol p_populate_env_symbol = NULL;
        if (p_populate_env_symbol == NULL) {
            validateSignature("Environment(*populate_env_symbol)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL,bindrcpp::PAYLOAD)");
            p_populate_env_symbol = (Ptr_populate_env_symbol)R_GetCCallable("bindrcpp", "bindrcpp_populate_env_symbol");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_populate_env_symbol(Rcpp::wrap(env), Rcpp::wrap(names), Rcpp::wrap(fun), Rcpp::wrap(payload));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Environment >(rcpp_result_gen);
    }

}

#endif // RCPP_bindrcpp_RCPPEXPORTS_H_GEN_
