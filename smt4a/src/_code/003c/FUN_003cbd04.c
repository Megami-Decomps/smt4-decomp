/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cbd04` (_code @ 0x3cbd04, 0x498 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_7_stack;

extern unsigned char LAB_003cc114; /* 0x3cc114 */
extern unsigned char LAB_003cc19c; /* 0x3cc19c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(unsigned short);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
extern int FUN_002a4860(void);
/* Supplied declaration required: FUN_0032fea0. */
extern int FUN_00348ed0(int);
/* Supplied declaration required: FUN_00389d9c. */
extern unsigned int FUN_004bcbb4(unsigned int, unsigned short);
/* Supplied declaration required: FUN_004bd6b0. */


void FUN_003cbd04(int param_1,int param_2,unsigned int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  unsigned char temp_v7 [84];
  int iStack_34;
  int iStack_30;
  unsigned int temp_v8;
  int iStack_28;
  
  temp_v0 = param_1 + 0x8e14;
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v8 = param_3;
  iStack_28 = param_4;
  temp_v1 = FUN_002a4860();
  FUN_001677c0();
  temp_v2 = FUN_001834a4(0x1a,param_2 + 0x185);
  FUN_001835b4(2,0x1a,0x16f,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65);
  FUN_001835b4(2,0x1a,0x170,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65);
  FUN_001835b4(2,0x1a,0x26f,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65);
  FUN_001835b4(2,0x1a,0x270,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65);
  if (param_7 != 0) {
    FUN_001835b4(2,0x1a,0x173,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x65)
    ;
  }
  else {
    if (*(int *)(param_1 + 0x8e84) <= temp_v1 + param_2) {
      FUN_001835b4(2,0x1a,0x229,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                   0x65);
      return;
    }
    temp_v3 = *(short *)(temp_v2 + 10) + param_6;
    temp_v5 = *(short *)(temp_v2 + 8) + param_5;
    if (param_4 != 0) {
      FUN_001835b4(2,0x1a,0x171,temp_v5,temp_v3,0x65);
    }
    else {
      FUN_001835b4(2,0x1a,0x171,temp_v5,temp_v3,0x65);
      FUN_001835b4(2,0x1a,0x244,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                   0x65);
    }
  }
  temp_v0 = FUN_00348ed0(temp_v0);
  if (param_2 < temp_v0) {
    FUN_001835b4(2,0x1a,0x174,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6a)
    ;
    FUN_001835b4(2,0x1a,0x175,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,0x6a)
    ;
    if (param_4 != 0) {
      FUN_001835b4(2,0x1a,0x176,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,
                   0x6f);
      temp_v6 = 0xffffffff;
      if (param_7 != 0) {
        temp_v6 = 0xff;
      }
      else {
        temp_v0 = param_1 + 0x8b60;
        FUN_0032fea0(temp_v0,8,*(unsigned short *)(param_1 + (temp_v1 + param_2) * 2 + 0x8b70));
        if (temp_v0 != 0) {
          temp_v6 = 0x57d8ffff;
        }
      }
    }
    else {
      temp_v0 = FUN_001834a4(0x1a,param_2 + 0x234);
      FUN_001835b4(2,0x1a,0x233,*(short *)(temp_v0 + 8) + param_5,*(short *)(temp_v0 + 10) + param_6,
                   0x6f);
      temp_v6 = 0x9b9b9bff;
    }
    param_1 = param_1 + (temp_v1 + param_2) * 2;
    temp_v4 = FUN_0014bd84(*(unsigned short *)(param_1 + 0x8b70));
    FUN_00100388(temp_v7,&LAB_003cc114,temp_v4);
    temp_v0 = FUN_001834a4(0x1a,0x178);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10) + param_6,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v6,temp_v7,(int)*(short *)(temp_v2 + 8));
    temp_v0 = FUN_001834a4(0x1a,0x177);
    FUN_00185e84((int)*(short *)(param_1 + 0x8b70),
                 (int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + param_5,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10) + param_6,0x74,0,0);
    FUN_004bd6b0(temp_v8,*(unsigned short *)(param_1 + 0x8b70),param_2);
    FUN_00389d9c(temp_v8,(int)*(short *)(param_1 + 0x8b70),
                 (int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + param_5,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10) + param_6,0x74,0);
    if (param_4 != 0) {
      temp_v0 = FUN_001834a4(0x1a,0x17c);
      temp_v6 = FUN_004bcbb4(temp_v8,*(unsigned short *)(param_1 + 0x8b70));
      FUN_00180310(1,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v0 + 8) + param_5,
                   (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10) + param_6,1,4,0x79,
                   &LAB_003cc19c,temp_v6);
    }
    FUN_001677c0();
  }
  return;
}
