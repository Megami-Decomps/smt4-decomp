/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004398b4` (_code @ 0x4398b4, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_22: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_22_stack;

extern unsigned char LAB_00140312; /* 0x140312 */
extern int DAT_005c0a80; /* 0x5c0a80 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_004398b4(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,
                unsigned int param_5,int param_6,unsigned int param_7,int param_8,unsigned int param_9,
                int param_10,unsigned int param_11,int param_12,unsigned int param_13,int param_14,
                unsigned int param_15,int param_16,unsigned int param_17,int param_18,
                unsigned int *param_19,unsigned int param_20,unsigned int param_21,int param_22)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00140312;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(int *)(temp_v1 + 0xa8) = param_18;
  *(unsigned int *)(temp_v1 + 0x88) = param_2;
  *(int *)(temp_v1 + 0x8c) = param_4;
  *(int *)(temp_v1 + 0x98) = param_10;
  *(int *)(temp_v1 + 0x9c) = param_12;
  *(int *)(temp_v1 + 0xa0) = param_14;
  *(int *)(temp_v1 + 0xa4) = param_16;
  *(int *)(temp_v1 + 0x90) = param_6;
  *(int *)(temp_v1 + 0x94) = param_8;
  *(unsigned int *)(temp_v1 + 0xac) = param_20;
  *(int *)(temp_v1 + 0xb0) = param_22;
  *(unsigned int *)(temp_v1 + 0xb4) = (param_4 << 0x14) | 0x402;
  *(unsigned int *)(temp_v1 + 0xb8) = param_3;
  *(unsigned int *)(temp_v1 + 0xbc) = (param_6 << 0x14) | 2;
  *(unsigned int *)(temp_v1 + 0xc0) = param_5;
  *(unsigned int *)(temp_v1 + 0xc4) = (param_12 << 0x11) | 0x802;
  *(unsigned int *)(temp_v1 + 200) = param_11;
  *(unsigned int *)(temp_v1 + 0xd0) = param_7;
  *(unsigned int *)(temp_v1 + 0xcc) = (param_8 * 0x1400) | 10;
  *(unsigned int *)(temp_v1 + 0xd4) = (param_10 * 0x1400) | 10;
  *(unsigned int *)(temp_v1 + 0xd8) = param_9;
  *(unsigned int *)(temp_v1 + 0xe0) = param_13;
  *(unsigned int *)(temp_v1 + 0xdc) = (param_14 * 0xc00) | 10;
  *(unsigned int *)(temp_v1 + 0xe4) = (param_16 << 10) | 10;
  *(unsigned int *)(temp_v1 + 0xe8) = param_15;
  *(unsigned int *)(temp_v1 + 0xec) = (param_18 << 4) | 0xc;
  *(unsigned int *)(temp_v1 + 0xf0) = param_17;
  *(unsigned int *)(temp_v1 + 0xf8) = param_21;
  *(unsigned int *)(temp_v1 + 0xf4) = (param_22 << 4) | 0xc;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a80;
  if (-1 < DAT_005c0a80) {
    *param_19 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
