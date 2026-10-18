/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294ad8` (_code @ 0x294ad8, 0x538 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
} param_9_stack;

extern unsigned char LAB_00294e6c; /* 0x294e6c */
extern unsigned char LAB_00294e9c; /* 0x294e9c */
extern unsigned char LAB_00294ec0; /* 0x294ec0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a94fc. */
/* Supplied declaration required: FUN_0025bcc4. */
/* Supplied declaration required: FUN_0025bcf0. */
/* Supplied declaration required: FUN_0025bd1c. */
/* Supplied declaration required: FUN_0025bd48. */
extern unsigned int FUN_0025bd6c(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0025ccb8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */


void FUN_00294ad8(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned long long param_7,unsigned long long param_8,unsigned long long param_9)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v1;
  unsigned int in_s1;
  float temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int temp_v7 [26];
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  unsigned int uStack_14;
  
  temp_v12 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = temp_v12 * 0.003921569f;
  temp_v13 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = 0;
  temp_v6 = 0;
  temp_v7[0] = 0;
  temp_v5 = temp_v5 * 0.003921569f;
  temp_v9 = (float)VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorSignedToFloat(param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = temp_v13 * 0.003921569f;
  temp_v10 = temp_v10 * 0.003921569f;
  temp_v9 = temp_v9 * 0.003921569f;
  temp_v11 = temp_v11 * 0.003921569f;
  temp_v2 = in_s0 * 0.017453292f;
  temp_v1 = temp_v2;
  iStack_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  uStack_14 = param_4;
  FUN_0028277c();
  temp_v4 = temp_v2;
  FUN_00282600();
  VectorSignedToFloat((int)param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)((unsigned long long)param_7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)param_8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)((unsigned long long)param_8 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)((unsigned long long)param_9 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = temp_v1;
  temp_v0 = FUN_0025bd6c(1,&LAB_00294e6c,0);
  temp_v3 = FUN_0025bd48(temp_v0,0);
  if (!((param_1 == 0 && param_2 == 0) && param_3 == 0)) {
    FUN_0025bd1c(&temp_v3);
    FUN_0025bcf0(&temp_v3);
    FUN_0025bcc4(&temp_v3);
    *(unsigned int *)(temp_v3 + 0x10c) = 0x3da3d70a;
    *(unsigned int *)(temp_v3 + 0x110) = 0xbcf5c28f;
    *(unsigned int *)(temp_v3 + 0x114) = 0xbd23d70a;
  }
  else {
    FUN_0025bd1c(&temp_v3);
    FUN_0025bcf0(&temp_v3);
    FUN_0025bcc4(&temp_v3);
    *(float *)(temp_v3 + 0x10c) = temp_v4;
    *(unsigned int *)(temp_v3 + 0x110) = in_s1;
    *(float *)(temp_v3 + 0x114) = temp_v8;
  }
  temp_v0 = FUN_0025bd6c(1,&LAB_00294e9c,0);
  temp_v6 = FUN_0025bd48(temp_v0,0);
  if (!((param_1 == 0 && param_2 == 0) && param_3 == 0)) {
    FUN_0025bd1c(&temp_v6);
    FUN_0025bcf0(&temp_v6);
    FUN_0025bcc4(&temp_v6);
  }
  else {
    FUN_0025bd1c(&temp_v6);
    FUN_0025bcf0(&temp_v6);
    FUN_0025bcc4(&temp_v6);
  }
  temp_v0 = FUN_0025bd6c(1,&LAB_00294ec0,0);
  temp_v7[0] = FUN_0025bd48(temp_v0,0);
  if (!((param_1 == 0 && param_2 == 0) && param_3 == 0)) {
    FUN_0025bd1c(temp_v7);
    FUN_0025bcf0(temp_v7);
    FUN_0025bcc4(temp_v7);
  }
  else {
    FUN_0025bd1c(temp_v7);
    FUN_0025bcf0(temp_v7);
    FUN_0025bcc4(temp_v7);
  }
  temp_v0 = FUN_0025bd6c(1,&LAB_00294e9c,0);
  FUN_0025ccb8(temp_v0,0);
  temp_v0 = FUN_0025bd6c(1,&LAB_00294ec0,0);
  FUN_0025ccb8(temp_v0,0);
  FUN_001a94fc(0);
  return;
}
