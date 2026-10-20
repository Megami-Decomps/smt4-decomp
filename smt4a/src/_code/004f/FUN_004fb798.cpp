/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fb798` (_code @ 0x4fb798, 0x48c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001568f8(...);
int FUN_003f0e20(int, int);
int FUN_004102d8(...);
int FUN_004c571c(int, int, int, int);
int FUN_004fb43c(...);
int FUN_004fd0ec(...);

/* stack frame of param_15: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_15_stack;

extern int g_btlActionReflect; /* 0x5712f0 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern unsigned int FUN_003e8430(void);
extern int FUN_003eb1cc(void);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004102d8. */
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fd0ec. */


unsigned int
FUN_004fb798(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,int param_6,
            int param_7,unsigned int param_8,unsigned int param_9,int param_10,int param_11,int param_12,
            unsigned int param_13,unsigned int param_14,int param_15)

{
/* irregular: 3 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = *(short *)(param_4 + 0x6a) < 0x6d;
  if (temp_v0) {
    FUN_004c571c((int)*(short *)(param_4 + 0x6a),1,1,0);
  }
  temp_v1 = (short)param_1 + (short)param_10;
  if (-1 < param_10) {
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,(int)*(short *)(param_4 + 0x6a));
    if (((temp_v0) && (temp_v2 != 0)) && (-1 < param_12)) {
      temp_v4 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,(int)temp_v1,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 7;
      *(int *)(temp_v4 + 0x18) = temp_v2;
      *(int *)(temp_v4 + 0x28) = param_12;
    }
  }
  temp_v2 = (int)(short)((short)param_1 + (short)param_11);
  param_1 = param_1 + param_11;
  if (param_6 >= 1) {
    if (param_7 >= 1) {
      if ((temp_v0) && (-1 < param_11)) {
        FUN_004fd0ec(param_1,0,param_2,param_4,param_6,param_7,5,param_13,1);
      }
      temp_v4 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,temp_v2,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x25;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(unsigned int *)(temp_v4 + 0x28) = 0;
      *(int *)(temp_v4 + 0x4c) = param_6;
      temp_v4 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,temp_v2,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x25;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(unsigned int *)(temp_v4 + 0x28) = 1;
      *(int *)(temp_v4 + 0x4c) = param_7;
      if (param_15 != 0) {
        btlGetMainState();
        temp_v3 = FUN_003e8430();
        if (temp_v3 != 0) {
          FUN_004fb43c(0,0,0x1000263,0,1,0,0);
        }
      }
    }
    else {
LAB_004fba00:
      if ((temp_v0) && (-1 < param_11)) {
        FUN_004fd0ec(param_1,0,param_2,param_4,param_6,0,2,param_13,1);
      }
      temp_v4 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,temp_v2,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x25;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(unsigned int *)(temp_v4 + 0x28) = 0;
      *(int *)(temp_v4 + 0x4c) = param_6;
      if (param_15 == 0) goto LAB_004fbabc;
      btlGetMainState();
      temp_v3 = FUN_003e8430();
      temp_v3 = temp_v3 & ~param_14;
      if (temp_v3 != 0) {
        FUN_004fb43c(0,0,0x1000263,0,1,0,0);
      }
    }
  }
  else if (param_7 >= 1) {
    if ((temp_v0) && (-1 < param_11)) {
      FUN_004fd0ec(param_1,0,param_2,param_4,param_7,0,3,param_13,1);
    }
    temp_v4 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,temp_v2,0,param_2);
    *(unsigned char *)(temp_v4 + 4) = 0x25;
    *(int *)(temp_v4 + 0x14) = param_4;
    *(unsigned int *)(temp_v4 + 0x28) = 1;
    *(int *)(temp_v4 + 0x4c) = param_7;
    if (param_15 != 0) {
      btlGetMainState();
      temp_v3 = FUN_003e8430();
      if (temp_v3 != 0) {
        FUN_004fb43c(0,0,0x1000263,0,1,0,0);
      }
    }
  }
  else {
    if (param_6 < 1) goto LAB_004fbabc;
    goto LAB_004fba00;
  }
LAB_004fbabc:
  if (param_9 != 0) {
    temp_v3 = 0;
    temp_v0 = *(short *)(param_4 + 0x6a) < 0x6d;
    if (temp_v0) {
      temp_v2 = btlGetMainState();
      FUN_001568f8(temp_v2,(int)*(short *)(param_4 + 0x6a));
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x110);
      }
    }
    temp_v6 = 0;
    temp_v2 = g_btlActionReflect;
    temp_v5 = param_9;
    FUN_004102d8(g_btlActionReflect,(int)(short)((short)param_1 + 1),0,param_2);
    *(unsigned char *)(temp_v2 + 4) = 0x26;
    *(int *)(temp_v2 + 0x14) = param_4;
    *(unsigned int *)(temp_v2 + 0x28) = temp_v6;
    *(unsigned int *)(temp_v2 + 0x4c) = temp_v5;
    if ((temp_v0) && ((temp_v3 & ~param_9 & 0x582) == 0)) {
      temp_v4 = (int)(short)((short)param_1 + 2);
      temp_v2 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,temp_v4,0,param_2);
      *(unsigned char *)(temp_v2 + 4) = 0x1c;
      *(int *)(temp_v2 + 0x14) = param_4;
      temp_v2 = g_btlActionReflect;
      FUN_004102d8(g_btlActionReflect,temp_v4,0,param_2);
      *(unsigned char *)(temp_v2 + 4) = 0xb;
      *(int *)(temp_v2 + 0x14) = param_4;
      *(unsigned int *)(temp_v2 + 0x28) = param_9;
    }
  }
  if (((param_3 != 0) && ((*(unsigned int *)(param_3 + 0x50) & 0x800) != 0)) &&
     ((0 < param_6 || (param_9 != 0)))) {
    temp_v2 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,0,0);
    *(unsigned char *)(temp_v2 + 4) = 0x41;
    btlGetMainState();
    temp_v4 = FUN_003eb1cc();
    if (temp_v4 == 0) {
      *(unsigned int *)(temp_v2 + 0x28) = 1;
    }
  }
  return 1;
}

} /* extern "C" */
