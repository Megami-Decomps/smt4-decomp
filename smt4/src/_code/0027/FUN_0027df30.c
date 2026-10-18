/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027df30` (_code @ 0x27df30, 0x3d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_13: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_13_stack;

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_002268d0. */
/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_002550d8. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00282924. */
extern unsigned int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


unsigned int
FUN_0027df30(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,int param_6,
            unsigned int param_7,unsigned int param_8,int param_9,int param_10,int param_11,
            unsigned int param_12,unsigned int param_13)

{
/* irregular: 2 unstructured edge(s); 1 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = *(short *)(param_3 + 0x62) < 0x6d;
  if (temp_v0) {
    FUN_002550d8((int)*(short *)(param_3 + 0x62),1,1,0);
  }
  temp_v1 = (short)param_9 + (short)param_1;
  if (-1 < param_9) {
    temp_v2 = FUN_002939f4();
    FUN_00282924(temp_v2,(int)*(short *)(param_3 + 0x62));
    if (((temp_v0) && (temp_v2 != 0)) && (-1 < param_11)) {
      temp_v4 = DAT_00434290;
      FUN_0022699c(DAT_00434290,(int)temp_v1,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 6;
      *(int *)(temp_v4 + 0x18) = temp_v2;
      *(int *)(temp_v4 + 0x28) = param_11;
    }
  }
  temp_v2 = (int)(short)((short)param_1 + (short)param_10);
  param_1 = param_1 + param_10;
  if (param_5 >= 1) {
    if (param_6 >= 1) {
      if ((temp_v0) && (-1 < param_10)) {
        FUN_002268d0(param_1,0,param_2,param_3,param_5,param_6,5,param_12,1);
      }
      temp_v4 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v2,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x1c;
      *(int *)(temp_v4 + 0x14) = param_3;
      *(unsigned int *)(temp_v4 + 0x28) = 0;
      *(int *)(temp_v4 + 0x4c) = param_5;
      temp_v4 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v2,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x1c;
      *(int *)(temp_v4 + 0x14) = param_3;
      *(unsigned int *)(temp_v4 + 0x28) = 1;
      *(int *)(temp_v4 + 0x4c) = param_6;
      FUN_002939f4();
      temp_v3 = FUN_00293230();
    }
    else {
LAB_0027e16c:
      if ((temp_v0) && (-1 < param_10)) {
        FUN_002268d0(param_1,0,param_2,param_3,param_5,0,2,param_12,1);
      }
      temp_v4 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v2,0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x1c;
      *(int *)(temp_v4 + 0x14) = param_3;
      *(unsigned int *)(temp_v4 + 0x28) = 0;
      *(int *)(temp_v4 + 0x4c) = param_5;
      FUN_002939f4();
      temp_v3 = FUN_00293230();
      temp_v3 = temp_v3 & ~param_13;
    }
    if (temp_v3 != 0) {
      FUN_002505c0(0,0,0x10001c1,0,1,0,0);
    }
  }
  else if (param_6 >= 1) {
    if ((temp_v0) && (-1 < param_10)) {
      FUN_002268d0(param_1,0,param_2,param_3,param_6,0,3,param_12,1);
    }
    temp_v4 = DAT_00434290;
    FUN_0022699c(DAT_00434290,temp_v2,0,param_2);
    *(unsigned char *)(temp_v4 + 4) = 0x1c;
    *(int *)(temp_v4 + 0x14) = param_3;
    *(unsigned int *)(temp_v4 + 0x28) = 1;
    *(int *)(temp_v4 + 0x4c) = param_6;
    FUN_002939f4();
    temp_v3 = FUN_00293230();
    if (temp_v3 != 0) {
      FUN_002505c0(0,0,0x10001c1,0,1,0,0);
    }
  }
  else if (param_5 >= 1) goto LAB_0027e16c;
  if (param_8 != 0) {
    temp_v3 = 0;
    temp_v0 = *(short *)(param_3 + 0x62) < 0x6d;
    if (temp_v0) {
      temp_v2 = FUN_002939f4();
      FUN_0027da30(temp_v2,(int)*(short *)(param_3 + 0x62));
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0xfa);
      }
    }
    temp_v2 = DAT_00434290;
    FUN_0022699c(DAT_00434290,(int)(short)((short)param_1 + 1),0,param_2);
    *(unsigned char *)(temp_v2 + 4) = 0x1d;
    *(int *)(temp_v2 + 0x14) = param_3;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + 0x4c) = param_8;
    if ((temp_v0) && ((temp_v3 & ~param_8 & 0x586) == 0)) {
      temp_v4 = (int)(short)((short)param_1 + 2);
      temp_v2 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v4,0,param_2);
      *(unsigned char *)(temp_v2 + 4) = 0x14;
      *(int *)(temp_v2 + 0x14) = param_3;
      temp_v2 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v4,0,param_2);
      *(unsigned char *)(temp_v2 + 4) = 10;
      *(int *)(temp_v2 + 0x14) = param_3;
      *(unsigned int *)(temp_v2 + 0x28) = param_8;
    }
  }
  return 1;
}
