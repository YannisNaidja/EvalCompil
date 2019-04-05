#ifndef __PARCOURS_ARBRE_ABSTRAIT__
#define __PARCOURS_ARBRE_ABSTRAIT__

#include "syntabs.h"
#include "code3a.h"

void parcours_n_prog(n_prog *n);
int nb_arguments_dec(n_l_dec *n);
int nb_arguments_exp(n_l_exp *n);
void parcours_n_prog(n_prog *n);
void parcours_l_instr(n_l_instr *n);
void parcours_instr(n_instr *n);
void parcours_instr_si(n_instr *n);
void parcours_instr_tantque(n_instr *n);
void parcours_instr_affect(n_instr *n);
void parcours_instr_appel(n_instr *n);
void parcours_instr_retour(n_instr *n);
void parcours_instr_ecrire(n_instr *n);
void parcours_l_exp(n_l_exp *n);
operande* parcours_exp(n_exp *n);
operande* parcours_varExp(n_exp *n);
operande* parcours_opExp(n_exp *n);
operande* parcours_intExp(n_exp *n);
operande* parcours_lireExp(n_exp *n);
operande* parcours_appelExp(n_exp *n);
void parcours_l_dec(n_l_dec *n);
void parcours_dec(n_dec *n);
void parcours_foncDec(n_dec *n);
void parcours_varDec(n_dec *n);
void parcours_tabDec(n_dec *n);
operande* parcours_var(n_var *n);
operande* parcours_var_simple(n_var *n);
operande * parcours_var_indicee(n_var *n);
operande* parcours_appel(n_appel *n);
char* concatenate(char* s1,char* s2);
char* intToString(int nb);
char* getE();
void deleteE(operande* e);

#endif

