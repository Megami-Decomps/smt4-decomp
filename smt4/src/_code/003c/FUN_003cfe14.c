/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cfe14` (_code @ 0x3cfe14, 0x344 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

/* Supplied declaration required: FUN_00227c60. */
/* Supplied declaration required: FUN_00227d18. */
/* Supplied declaration required: FUN_00227fac. */
/* Supplied declaration required: FUN_002296f4. */
extern int FUN_00229914(int *, int, int);
/* Supplied declaration required: FUN_0023c0d0. */
/* Supplied declaration required: FUN_0023c118. */
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_002551ac. */
/* Supplied declaration required: FUN_0027df30. */
extern int FUN_00293230(int);


unsigned char FUN_003cfe14(int *param_1,int param_2,int param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v2 = 0xffffffff;
  *(unsigned int *)(*(int *)(param_2 + 0x20) + 200) = 0;
  temp_v0 = (int)*(short *)(*(int *)(param_2 + 0x24) + 0x62);
  FUN_00227fac();
  temp_v1 = temp_v0;
  if (0 < temp_v0) {
    temp_v1 = param_3;
  }
  if ((temp_v1 >= 1) &&
     (temp_v1 = param_2 + *(short *)(*(int *)(param_2 + 0x24) + 0x62) * 10,
     param_3 >= (int)(unsigned int)*(unsigned short *)(temp_v1 + 0x9d4))) {
    if (temp_v0 != 2) {
      if (temp_v0 == 1) {
        temp_v2 = 1;
      }
    }
    else if ((*(unsigned short *)(*(int *)(param_2 + 0x20) + 0x1c6) & 8) == 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9d6);
    }
    else {
      temp_v2 = 1;
    }
    FUN_0023c118(0x1e,param_2,(int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e));
    FUN_00227d18((int)*(short *)(*(int *)(param_2 + 0x24) + 0x62));
  }
  FUN_0023c0d0(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),-param_3);
  temp_v1 = FUN_00229914(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62));
  temp_v6 = temp_v1 != 0;
  if ((int)temp_v2 >= 1) {
    temp_v6 = 0;
  }
  else if (((temp_v6) && ((**(unsigned int **)(param_2 + 0x20) & 0x10) != 0)) &&
          (*(int *)(*param_1 + 0xb8) == 1)) {
    *(unsigned int *)(*param_1 + 0x88) = 0xd;
  }
  temp_v3 = 0xffffffff;
  temp_v4 = 0xffffffff;
  temp_v5 = 0xffffffff;
  if ((**(unsigned int **)(param_2 + 0x20) & 0x10) == 0) {
    temp_v3 = 0;
    temp_v4 = 0xb;
  }
  temp_v1 = FUN_00293230(*param_1);
  if (temp_v1 == 0) {
    temp_v5 = 0;
  }
  FUN_002551ac(10,param_2,*(int *)(param_2 + 0x24),0,param_3,0xffffffff,0xffffffff,
               *(unsigned short *)(param_2 + *(short *)(*(int *)(param_2 + 0x24) + 0x62) * 10 + 0x9d4),
               (int)*(short *)(*(int *)(param_2 + 0x28) + 0xea),0,0,temp_v6,0,1,0,0x1e,0,temp_v3,temp_v5,
               temp_v4,0xffffffff,1,0,1,1);
  FUN_002505c0(10,param_2,0x1000185,0,0,0,0);
  if (-1 < (int)temp_v2) {
    FUN_0027df30(0x1e,param_2,*(unsigned int *)(param_2 + 0x24),0,temp_v2,0xffffffff,0xffffffff,0,temp_v3,
                 temp_v5,temp_v4,0,1);
    FUN_002505c0(0x1e,param_2,0x10001c5,0,1,0,0);
  }
  if (temp_v6 != 0) {
    temp_v1 = *(int *)(param_2 + 0x24);
    if ((*(unsigned int *)(temp_v1 + 0x50) & 0x400) != 0) {
      FUN_002296f4(param_1,param_2,(int)*(short *)(temp_v1 + 0x62),10,0x3c,0x3c);
      FUN_00227c60(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),0x46,0);
    }
    else {
      FUN_002296f4(param_1,param_2,(int)*(short *)(temp_v1 + 0x62),10,0x1e,0x1e);
      FUN_00227c60(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),0x28,0);
    }
  }
  else {
    FUN_002296f4(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),10,0x1e,0x1e);
  }
  return temp_v6;
}
