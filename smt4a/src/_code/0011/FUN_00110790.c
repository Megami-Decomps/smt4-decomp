/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110790` (_code @ 0x110790, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern unsigned char LAB_001107b8; /* 0x1107b8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e9768. */


unsigned long long FUN_00110790(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = 0;
  temp_v3 = param_1;
  temp_v4 = param_3;
  for (temp_v1 = 0; temp_v1 < param_3; temp_v1 = temp_v1 + 1) {
    temp_v0 = temp_v2 * 2 + param_2;
    FUN_002e9768(temp_v0,3,&LAB_001107b8,*(unsigned char *)(param_1 + temp_v1),temp_v3,param_2,temp_v4);
    temp_v2 = temp_v0 + temp_v2;
  }
  return romwright_piece_4_4(temp_v3,temp_v2);
}
