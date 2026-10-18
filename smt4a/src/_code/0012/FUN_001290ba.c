/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001290ba` (_code @ 0x1290ba, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_0030cf8c. */


unsigned long long FUN_001290ba(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v0;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v0 = param_4;
  FUN_002e6e34(&iStack_18,param_1 + 0x24);
  while (*(int *)(param_1 + 0x68) != 0) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 100) + 8);
    FUN_0030cf8c(param_1 + 0x54,&temp_v0);
  }
  FUN_002e6e5c(&iStack_18);
  return romwright_piece_4_4(uStack_14,iStack_18);
}
