/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0dbc` (_code @ 0x2c0dbc, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4d08(int, unsigned char [64]);
int FUN_00237438(int, int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern int DAT_0058020c; /* 0x58020c */
extern int DAT_00580218; /* 0x580218 */
extern int DAT_00580220; /* 0x580220 */

/* Supplied declaration required: FUN_001f4d08. */
/* Supplied declaration required: FUN_00237438. */


void FUN_002c0dbc(int param_1,unsigned short param_2,unsigned short param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s10, in_s11, in_s12, in_s13, in_s14, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  float in_s8;
  float in_s9;
  float in_s10;
  float in_s11;
  float in_s12;
  float in_s13;
  float in_s14;
  unsigned char temp_v2 [64];
  
  if (param_1 != 0) {
    temp_v1 = 0x5e2714;
    temp_v0 = DAT_00580218;
    DAT_00580218 = DAT_00580218 + 1;
  }
  else {
    temp_v1 = DAT_00580220;
    temp_v0 = DAT_0058020c;
    DAT_0058020c = DAT_0058020c + 1;
  }
  temp_v1 = temp_v1 + temp_v0 * 0xa8;
  *(float *)(temp_v1 + 0xc) = in_s12;
  *(float *)(temp_v1 + 0x10) = in_s13;
  *(float *)(temp_v1 + 0x14) = in_s14;
  *(float *)(temp_v1 + 0x18) = in_s12 * in_s0 + in_s13 * in_s1 + in_s14 * in_s2;
  *(float *)(temp_v1 + 0x5c) = in_s0;
  *(float *)(temp_v1 + 0x60) = in_s1;
  *(float *)(temp_v1 + 100) = in_s2;
  *(float *)(temp_v1 + 0x68) = in_s3;
  *(float *)(temp_v1 + 0x6c) = in_s4;
  *(float *)(temp_v1 + 0x70) = in_s5;
  *(float *)(temp_v1 + 0x74) = in_s6;
  *(float *)(temp_v1 + 0x78) = in_s7;
  *(float *)(temp_v1 + 0x7c) = in_s8;
  *(float *)(temp_v1 + 0x80) = in_s9;
  *(float *)(temp_v1 + 0x84) = in_s10;
  *(float *)(temp_v1 + 0x88) = in_s11;
  *(unsigned short *)(temp_v1 + 6) = param_3;
  *(char *)(temp_v1 + 9) = (char)param_1;
  *(unsigned short *)(temp_v1 + 10) = param_2;
  *(unsigned char *)(temp_v1 + 5) = 4;
  *(unsigned char *)(temp_v1 + 4) = 1;
  *(unsigned char *)(temp_v1 + 8) = 1;
  *(float *)(temp_v1 + 0x8c) = (in_s0 + in_s3 + in_s6 + in_s9) * 0.25f;
  *(float *)(temp_v1 + 0x90) = (in_s1 + in_s4 + in_s7 + in_s10) * 0.25f;
  *(float *)(temp_v1 + 0x94) = (in_s2 + in_s5 + in_s8 + in_s11) * 0.25f;
  FUN_001f4d08(1,temp_v2);
  FUN_00237438((int)*(char *)(temp_v1 + 4),0,temp_v1 + 0x1c,temp_v1 + 0x4c);
  FUN_00237438((int)*(char *)(temp_v1 + 4),1,temp_v1 + 0x28,temp_v1 + 0x50);
  FUN_00237438((int)*(char *)(temp_v1 + 4),2,temp_v1 + 0x34,temp_v1 + 0x54);
  FUN_00237438((int)*(char *)(temp_v1 + 4),2,temp_v1 + 0x40,temp_v1 + 0x58);
  return;
}

} /* extern "C" */
