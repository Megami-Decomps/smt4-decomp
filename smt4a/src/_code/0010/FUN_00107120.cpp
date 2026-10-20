/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107120` (_code @ 0x107120, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107100(unsigned int, unsigned char [256], int);
int FUN_00107110(unsigned int, unsigned char [256], int);
int FUN_0010715a(unsigned int, unsigned char [256], int);
int FUN_0010716a(unsigned int, unsigned char [256], int);
int FUN_00107190(unsigned int, unsigned char [256], int);

/* Supplied declaration required: FUN_00107100. */
/* Supplied declaration required: FUN_00107110. */
/* Supplied declaration required: FUN_0010715a. */
/* Supplied declaration required: FUN_0010716a. */
/* Supplied declaration required: FUN_00107190. */


void FUN_00107120(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [256];
  
  FUN_0010716a(param_1,temp_v0,0x80);
  FUN_00107100(param_1,temp_v0,0x80);
  FUN_00107110(param_1,temp_v0,0x80);
  FUN_0010715a(param_1,temp_v0,0x80);
  FUN_00107190(param_1,temp_v0,0x80);
  return;
}

} /* extern "C" */
