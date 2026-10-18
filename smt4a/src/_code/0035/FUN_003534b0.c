/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003534b0` (_code @ 0x3534b0, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_19: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_19_stack;

extern int DAT_00580c94; /* 0x580c94 */

/* Supplied declaration required: FUN_00244c70. */
/* Supplied declaration required: FUN_00305760. */


int FUN_003534b0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned char param_7,unsigned char param_8,
                unsigned char param_9,unsigned char param_10,unsigned char param_11,unsigned char param_12,
                unsigned char param_13,unsigned char param_14,unsigned char param_15,unsigned int param_16,
                unsigned int param_17,unsigned int param_18,unsigned int param_19)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  unsigned int in_s6;
  
  temp_v1 = DAT_00580c94;
  temp_v0 = DAT_00580c94 * 0x8c;
  *(unsigned int *)(temp_v0 + 0x602028) = 2;
  *(unsigned int *)(temp_v0 + 0x602030) = in_s3;
  *(unsigned int *)(temp_v0 + 0x60202c) = in_s4;
  *(unsigned int *)(temp_v0 + 0x602034) = in_s5;
  *(unsigned int *)(temp_v0 + 0x602048) = param_4;
  *(unsigned int *)(temp_v0 + 0x602044) = 1;
  *(unsigned int *)(temp_v0 + 0x60204c) = param_16;
  *(unsigned int *)(temp_v0 + 0x602050) = param_17;
  *(unsigned int *)(temp_v0 + 0x602054) = param_18;
  *(unsigned char *)(temp_v0 + 0x602058) = param_7;
  *(unsigned char *)(temp_v0 + 0x602059) = param_8;
  *(unsigned char *)(temp_v0 + 0x60205a) = param_9;
  *(unsigned char *)(temp_v0 + 0x60205b) = param_10;
  *(unsigned char *)(temp_v0 + 0x60205c) = param_11;
  *(unsigned char *)(temp_v0 + 0x60205d) = param_12;
  *(unsigned short *)(temp_v0 + 0x60205e) = 1;
  *(int *)(temp_v0 + 0x602090) = temp_v0 + 0x602044;
  *(int *)(temp_v0 + 0x602060) = temp_v0 + 0x602028;
  *(unsigned int **)(temp_v0 + 0x602088) = (unsigned int *)(temp_v0 + 0x602064);
  *(unsigned int *)(temp_v0 + 0x602070) = 0;
  *(unsigned int *)(temp_v0 + 0x602074) = in_s6;
  *(unsigned int *)(temp_v0 + 0x602078) = 0;
  *(unsigned int *)(temp_v0 + 0x602064) = in_s0;
  *(unsigned int *)(temp_v0 + 0x602068) = in_s1;
  *(unsigned int *)(temp_v0 + 0x60206c) = in_s2;
  temp_v2 = temp_v0 + 0x60207c;
  *(unsigned int *)(temp_v0 + 0x602084) = param_3;
  FUN_00305760();
  temp_v3 = param_1;
  FUN_00244c70(param_1,param_5,param_6,param_19);
  temp_v0 = temp_v2 * 0x17c;
  *(unsigned int *)(temp_v0 + 0x5f33c4) = temp_v3;
  *(unsigned char *)(temp_v0 + 0x5f340c) = param_13;
  *(unsigned char *)(temp_v1 * 0x17c + 0x5f340d) = param_14;
  *(unsigned int *)(temp_v0 + 0x5f33cc) = param_1;
  *(unsigned int *)(temp_v0 + 0x5f33d0) = param_2;
  *(unsigned int *)(temp_v0 + 0x5f33d4) = 0xffffffff;
  *(unsigned short *)(temp_v0 + 0x5f33fc) = 0;
  *(unsigned short *)(temp_v0 + 0x5f33fe) = 0xffff;
  *(unsigned char *)(temp_v0 + 0x5f3404) = 0;
  *(unsigned char *)(temp_v0 + 0x5f33c8) = param_15;
  *(unsigned char *)(temp_v0 + 0x5f340e) = 0;
  *(unsigned short *)(temp_v0 + 0x5f3400) = 0;
  *(unsigned short *)(temp_v0 + 0x5f3402) = 0;
  *(unsigned int *)(temp_v0 + 0x5f3414) = param_16;
  DAT_00580c94 = DAT_00580c94 + 1;
  return temp_v2;
}
