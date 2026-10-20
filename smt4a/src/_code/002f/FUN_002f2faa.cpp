/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2faa` (_code @ 0x2f2faa, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128e56(int, unsigned int *, unsigned char [12]);
int FUN_002e75fa(unsigned int);
int FUN_002e9538(int, unsigned int);
int FUN_002eb588(unsigned char [12]);
int FUN_002f8264(unsigned char [4]);

/* Supplied declaration required: FUN_00128e56. */
/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002e9538. */
extern int FUN_002e995c(unsigned char *);
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f8264. */


void FUN_002f2faa(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [36];
  unsigned char temp_v3 [12];
  
  FUN_002eb588(temp_v3);
  temp_v0 = FUN_002e995c(temp_v2);
  *(unsigned int *)(temp_v0 - 4) = param_2;
  FUN_002e75fa(param_2);
  FUN_002e9538(temp_v0,param_3);
  FUN_00128e56(param_1 + 8,(unsigned int *)(temp_v0 - 4),temp_v3);
  FUN_002f8264(temp_v1);
  return;
}

} /* extern "C" */
