/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aff74` (_code @ 0x2aff74, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 11 slot(s), 32 byte(s) */
typedef struct {
    unsigned char sp5; /* 0x5: local_5 */
    unsigned char sp6; /* 0x6: local_6 */
    unsigned char sp7; /* 0x7: local_7 */
    unsigned char sp8; /* 0x8: local_8 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_004e339c; /* 0x4e339c */

/* Supplied declaration required: FUN_002a9170. */


void FUN_002aff74(unsigned int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_38;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  if ((in_s0 & 0x7fffffff) == 0) {
    temp_v2 = (in_s0 >> 0x1f) << 0x17;
  }
  else {
    temp_v2 = *(unsigned int *)(((in_s0 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((in_s0 & 0x7fffff) >> 7) | ((in_s0 >> 0x1f) << 0x17);
  }
  if ((in_s1 & 0x7fffffff) == 0) {
    temp_v0 = (in_s1 >> 0x1f) << 0x17;
  }
  else {
    temp_v0 = ((in_s1 & 0x7fffff) >> 7) | ((in_s1 >> 0x1f) << 0x17) |
            *(unsigned int *)(((in_s1 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  if ((in_s2 & 0x7fffffff) == 0) {
    temp_v1 = (in_s2 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = ((in_s2 & 0x7fffff) >> 7) | ((in_s2 >> 0x1f) << 0x17) |
            *(unsigned int *)(((in_s2 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v2 = temp_v2 | (temp_v0 << 0x18);
  uStack_38 = (DAT_004e339c << 8) | (temp_v1 >> 0x10);
  temp_v3 = (temp_v1 << 0x10) | (temp_v0 >> 8);
  if ((in_s3 & 0x7fffffff) == 0) {
    temp_v7 = (in_s3 >> 0x1f) << 0x17;
  }
  else {
    temp_v7 = *(unsigned int *)(((in_s3 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((in_s3 & 0x7fffff) >> 7) | ((in_s3 >> 0x1f) << 0x17);
  }
  if ((in_s4 & 0x7fffffff) == 0) {
    temp_v8 = (in_s4 >> 0x1f) << 0x17;
  }
  else {
    temp_v8 = ((in_s4 & 0x7fffff) >> 7) | ((in_s4 >> 0x1f) << 0x17) |
               *(unsigned int *)(((in_s4 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v7 = temp_v7 | (temp_v8 << 0x18);
  temp_v8 = temp_v8 >> 8;
  temp_v0 = *(unsigned int *)(((param_1 >> 0x10) & 0xff) * 4 + 0x4e35a0);
  temp_v4 = *(unsigned int *)((param_1 >> 0x18) * 4 + 0x4e35a0) | (temp_v0 << 0x18);
  temp_v1 = *(unsigned int *)(((param_1 >> 8) & 0xff) * 4 + 0x4e35a0);
  temp_v5 = (temp_v1 << 0x10) | (temp_v0 >> 8);
  temp_v6 = (*(int *)((param_1 & 0xff) * 4 + 0x4e35a0) << 8) | (temp_v1 >> 0x10);
  temp_v9 = param_1;
  FUN_002a9170(&temp_v2,&temp_v4,&temp_v7);
                    /* WARNING: Treating indirect jump as return */
  return;
}
