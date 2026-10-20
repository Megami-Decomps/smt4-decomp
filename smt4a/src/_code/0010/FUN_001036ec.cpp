/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001036ec` (_code @ 0x1036ec, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);
int FUN_002e7228(unsigned int);
int FUN_002e7232(unsigned int);

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7228. */
/* Supplied declaration required: FUN_002e7232. */


void FUN_001036ec(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int *puStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  puStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  temp_v1 = *param_3;
  FUN_002e7228(temp_v1);
  FUN_002e7232(temp_v1);
  FUN_002e6e5c(&uStack_18);
  return;
}

} /* extern "C" */
