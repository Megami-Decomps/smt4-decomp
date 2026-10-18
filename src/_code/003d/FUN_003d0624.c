/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0624` (_code @ 0x3d0624, 0x2e8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_6_stack;

/* Supplied declaration required: FUN_00227df4. */
/* Supplied declaration required: FUN_00227eac. */
/* Supplied declaration required: FUN_00228140. */
/* Supplied declaration required: FUN_00229888. */
extern int FUN_00229aa8(int *, int, int);
/* Supplied declaration required: FUN_0023c22c. */
/* Supplied declaration required: FUN_0023c274. */
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_002553ec. */
/* Supplied declaration required: FUN_0027e1a0. */
extern int FUN_002934d4(int);


int FUN_003d0624(int *param_1,int param_2,int param_3,int param_4,int param_5,unsigned int *param_6)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar9;
  
  temp_v4 = 0;
  temp_v7 = 0xffffffff;
  temp_v0 = (int)*(short *)(param_5 + 0x62);
  FUN_00228140();
  puVar9 = param_6 + 0x40;
  temp_v1 = temp_v0;
  if (0 < temp_v0) {
    temp_v1 = param_3;
  }
  if (0 < temp_v1) {
    temp_v1 = param_2 + *(short *)(param_5 + 0x62) * 10;
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9d4);
    if ((int)temp_v2 <= param_3) {
      param_3 = temp_v2 - 1;
      if ((temp_v0 == 2) && ((*(unsigned short *)((int)param_6 + 0x1c6) & 8) == 0)) {
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9d6);
      }
      FUN_0023c274(0,param_2,(int)*(short *)((int)param_6 + 0x6e));
      FUN_00227eac((int)*(short *)(param_5 + 0x62));
    }
  }
  FUN_0023c22c(param_1,param_2,(int)*(short *)(param_5 + 0x62),-param_3);
  temp_v1 = FUN_00229aa8(param_1,param_2,(int)*(short *)(param_5 + 0x62));
  if (((temp_v1 != 0) && (temp_v4 = 1, (*param_6 & 0x10) != 0)) && (*(int *)(*param_1 + 0xb8) == 1)) {
    *(unsigned int *)(*param_1 + 0x88) = 0xd;
  }
  temp_v3 = 0xffffffff;
  temp_v5 = 0xffffffff;
  temp_v6 = 0xffffffff;
  if ((*param_6 & 0x10) == 0) {
    temp_v3 = 0;
    temp_v5 = 0xb;
  }
  temp_v1 = FUN_002934d4(*param_1);
  if (temp_v1 == 0) {
    temp_v6 = 0;
  }
  FUN_002553ec(param_4,param_2,param_5,0,param_3,0xffffffff,0xffffffff,
               *(unsigned short *)(param_2 + *(short *)(param_5 + 0x62) * 10 + 0x9d4),
               (int)*(short *)((int)puVar9 + 0xb6),0,0,temp_v4,0,1,0,0x1e,0,temp_v3,temp_v6,temp_v5,
               0xffffffff,1,0,1,1);
  FUN_00250800(param_4,param_2,0x1000185,0,0,0,0);
  if (-1 < (int)temp_v7) {
    FUN_0027e1a0(param_4,param_2,param_5,0,temp_v7,0xffffffff,0xffffffff,0,temp_v3,temp_v6,temp_v5,0,0);
  }
  if (temp_v4 != 0) {
    if ((*(unsigned int *)(*(int *)(param_2 + 0x24) + 0x50) & 0x400) != 0) {
      FUN_00229888(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),param_4,0x3c,
                   0x3c);
      FUN_00227df4(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),param_4 + 0x3c,0
                  );
    }
    else {
      FUN_00229888(param_1,param_2,(int)*(short *)(param_5 + 0x62),param_4,0x1e,0x1e);
      FUN_00227df4(param_1,param_2,(int)*(short *)(param_5 + 0x62),param_4 + 0x1e,param_4);
    }
  }
  else {
    FUN_00229888(param_1,param_2,(int)*(short *)(param_5 + 0x62),param_4,0x1e,0x1e);
  }
  return temp_v4;
}
