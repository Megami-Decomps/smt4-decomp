/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010360e` (_code @ 0x10360e, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


void FUN_0010360e(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_20;
  int iStack_1c;
  unsigned int uStack_18;
  
  iStack_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&iStack_20,param_1 + 4);
  if (param_2 < *(int *)(param_1 + 0x34)) {
    param_1 = param_2 * 8 + param_1;
    temp_v0 = *(unsigned int *)(param_1 + 0x3c);
    *(unsigned int *)(param_3 + 8) =
         (temp_v0 & 0xff000000) | (((temp_v0 >> 0x10) & 0xff) << 0x10) | (((temp_v0 >> 8) & 0xff) << 8) |
         (temp_v0 & 0xff);
    *(unsigned short *)(param_3 + 6) = *(unsigned short *)(param_1 + 0x3a);
  }
  FUN_002e6e5c(&iStack_20);
  return;
}

} /* extern "C" */
