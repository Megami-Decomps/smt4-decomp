/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef6e2` (_code @ 0x2ef6e2, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb338(int *, int *, int);
int FUN_002eb588(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: FUN_002eb588. */


unsigned long long FUN_002ef6e2(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  
  temp_v0 = param_1;
  temp_v1 = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_002eb588(&uStack_18);
  FUN_002eb338(&temp_v0,&uStack_18,param_2);
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x14) = temp_v1;
  *(int *)(param_1 + 0x10) = temp_v0;
  *(int *)(param_1 + 0x1c) = param_2 >> 0x1f;
  return romwright_piece_4_4(temp_v1,temp_v0);
}

} /* extern "C" */
