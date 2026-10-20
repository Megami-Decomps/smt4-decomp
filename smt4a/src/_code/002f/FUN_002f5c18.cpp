/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5c18` (_code @ 0x2f5c18, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00115472(int *, unsigned int, unsigned int);
int FUN_002e6e34(int *, int *);
int FUN_002e6e5c(int *);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00115472. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


unsigned long long FUN_002f5c18(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,param_1 + 4);
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,param_2,param_3);
  FUN_00115472(param_1,param_2,param_3);
  FUN_002e6e5c(&uStack_20);
  return romwright_piece_4_4(uStack_20,temp_v0);
}

} /* extern "C" */
