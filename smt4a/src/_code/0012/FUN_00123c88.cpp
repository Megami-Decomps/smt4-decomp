/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123c88` (_code @ 0x123c88, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002fc046(int);


unsigned long long FUN_00123c88(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 0x105c);
  if (((*(int *)(*(int *)(param_1 + 0x109c) + 0x18) == 0) &&
      (temp_v0 = FUN_002fc046(param_1 + 0x10a0), temp_v0 != 0)) && (*(char *)(param_1 + 0x108c) != '\0')
     ) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,temp_v1);
}

} /* extern "C" */
