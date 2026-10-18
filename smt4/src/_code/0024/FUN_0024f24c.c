/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f24c` (_code @ 0x24f24c, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_19: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_19_stack;

extern int DAT_00447a2c; /* 0x447a2c */

/* Supplied declaration required: FUN_0021c694. */
/* Supplied declaration required: FUN_002524bc. */


void FUN_0024f24c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned char param_7,unsigned char param_8,
                 unsigned char param_9,unsigned char param_10,unsigned char param_11,unsigned char param_12,
                 unsigned char param_13,unsigned char param_14,unsigned char param_15,unsigned int param_16,
                 unsigned int param_17,unsigned int param_18,unsigned int param_19)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  
  temp_v0 = DAT_00447a2c;
  temp_v1 = DAT_00447a2c * 0x8c;
  *(unsigned int *)(temp_v1 + 0x4afd7c) = 1;
  *(unsigned int *)(temp_v1 + 0x4afd84) = in_s3;
  *(unsigned int *)(temp_v1 + 0x4afd80) = in_s4;
  *(unsigned int *)(temp_v1 + 0x4afd8c) = param_4;
  *(unsigned int *)(temp_v1 + 0x4afd88) = 1;
  *(unsigned int *)(temp_v1 + 0x4afd90) = param_16;
  *(unsigned int *)(temp_v1 + 0x4afd94) = param_17;
  *(unsigned int *)(temp_v1 + 0x4afd98) = param_18;
  *(unsigned char *)(temp_v1 + 0x4afd9c) = param_7;
  *(unsigned char *)(temp_v1 + 0x4afd9d) = param_8;
  *(unsigned char *)(temp_v1 + 0x4afd9e) = param_9;
  *(unsigned char *)(temp_v1 + 0x4afd9f) = param_10;
  *(unsigned char *)(temp_v1 + 0x4afda0) = param_11;
  *(unsigned char *)(temp_v1 + 0x4afda1) = param_12;
  *(unsigned short *)(temp_v1 + 0x4afda2) = 1;
  *(int *)(temp_v1 + 0x4afda4) = temp_v1 + 0x4afd7c;
  *(int *)(temp_v1 + 0x4afdd4) = temp_v1 + 0x4afd88;
  *(int *)(temp_v1 + 0x4afdcc) = temp_v1 + 0x4afda8;
  *(unsigned int *)(temp_v1 + 0x4afda8) = in_s0;
  *(unsigned int *)(temp_v1 + 0x4afdb4) = 0;
  *(unsigned int *)(temp_v1 + 0x4afdb8) = in_s5;
  *(unsigned int *)(temp_v1 + 0x4afdbc) = 0;
  *(unsigned int *)(temp_v1 + 0x4afdac) = in_s1;
  *(unsigned int *)(temp_v1 + 0x4afdb0) = in_s2;
  *(unsigned int *)(temp_v1 + 0x4afdc8) = param_3;
  temp_v1 = temp_v1 + 0x4afdc0;
  FUN_0021c694();
  temp_v2 = param_1;
  FUN_002524bc(param_1,param_5,param_6,param_19);
  temp_v1 = temp_v1 * 0x178;
  *(unsigned int *)(temp_v1 + 0x4a1388) = temp_v2;
  *(unsigned char *)(temp_v1 + 0x4a13d0) = param_13;
  *(unsigned char *)(temp_v0 * 0x178 + 0x4a13d1) = param_14;
  *(unsigned int *)(temp_v1 + 0x4a1390) = param_1;
  *(unsigned int *)(temp_v1 + 0x4a1394) = param_2;
  *(unsigned int *)(temp_v1 + 0x4a1398) = 0xffffffff;
  *(unsigned short *)(temp_v1 + 0x4a13c0) = 0;
  *(unsigned short *)(temp_v1 + 0x4a13c2) = 0xffff;
  *(unsigned char *)(temp_v1 + 0x4a13c8) = 0;
  *(unsigned char *)(temp_v1 + 0x4a138c) = param_15;
  *(unsigned char *)(temp_v1 + 0x4a13d2) = 0;
  *(unsigned short *)(temp_v1 + 0x4a13c4) = 0;
  *(unsigned short *)(temp_v1 + 0x4a13c6) = 0;
  DAT_00447a2c = DAT_00447a2c + 1;
  return;
}
