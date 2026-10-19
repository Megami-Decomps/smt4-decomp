/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f87e8` (_code @ 0x2f87e8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002eb6c0. */


unsigned long long FUN_002f87e8(int *param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *temp_v1;
  int temp_v2;
  int *temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = *param_3;
  temp_v1 = param_1;
  temp_v2 = temp_v0;
  temp_v3 = param_3;
  temp_v4 = param_4;
  FUN_002eb6c0(&temp_v1,param_2 + 4,&temp_v2);
  *param_3 = (int)temp_v1;
  temp_v4 = 0;
  temp_v3 = (int *)0x0;
  *(unsigned int *)(temp_v0 + 0x108) = 0;
  *(unsigned int *)(temp_v0 + 0x10c) = 0;
  FUN_002e7232(temp_v0,temp_v0 + 0x110);
  *param_1 = *param_3;
  return romwright_piece_4_4(temp_v2,temp_v1);
}
