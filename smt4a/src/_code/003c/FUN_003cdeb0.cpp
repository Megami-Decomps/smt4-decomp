/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cdeb0` (_code @ 0x3cdeb0, 0x404 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00185e84(...);
int FUN_002a4894(...);
int FUN_0032fea0(...);
int largeGridDrawButtonStrip(int, int, int, int);
int statDrawClampedDelta(...);
int FUN_004bd6b0(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_4_stack;

extern unsigned char LAB_003ce2d8; /* 0x3ce2d8 */
extern unsigned char LAB_003ce2f0; /* 0x3ce2f0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bd84(unsigned short);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
extern int recordGetModeForId(int);
extern int resourceRunOperationIfUnblocked(void);
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: largeGridDrawButtonStrip. */
/* Supplied declaration required: statDrawClampedDelta. */
extern int recordContainsPairedId(unsigned int, unsigned short);
extern unsigned int FUN_004bcbb4(unsigned int, unsigned short);
/* Supplied declaration required: FUN_004bd6b0. */


void FUN_003cdeb0(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  short temp_v5;
  short temp_v6;
  short temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int in_fpscr;
  unsigned char temp_v16 [84];
  int iStack_34;
  unsigned int temp_v17;
  int iStack_2c;
  int iStack_28;
  
  temp_v8 = param_1 + 0x8e14;
  iStack_34 = param_1;
  temp_v17 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  temp_v9 = resourceRunOperationIfUnblocked();
  temp_v10 = FUN_002a4894(temp_v8);
  temp_v9 = temp_v9 + temp_v10;
  temp_v10 = FUN_002a4894(temp_v8);
  temp_v10 = FUN_001834a4(0x1a,temp_v10 + 0x1a7);
  efctSetSpeed();
  temp_v11 = FUN_002a4894(temp_v8);
  largeGridDrawButtonStrip(param_1,*(short *)(temp_v10 + 8) + param_3,*(short *)(temp_v10 + 10) + param_4,temp_v11);
  temp_v12 = *(int *)(param_1 + 0x8e80);
  FUN_001835b4(2,0x1a,0x19f,*(short *)(temp_v10 + 8) + param_3,*(short *)(temp_v10 + 10) + param_4,0x83)
  ;
  if (temp_v9 < temp_v12) {
    FUN_001835b4(2,0x1a,0x1a0,*(short *)(temp_v10 + 8) + param_3,*(short *)(temp_v10 + 10) + param_4,
                 0x83);
  }
  else {
    temp_v13 = FUN_001834a4(0x1a,0x1a7);
    temp_v0 = *(short *)(temp_v13 + 8);
    temp_v13 = FUN_001834a4(0x1a,0x185);
    temp_v1 = *(short *)(temp_v13 + 8);
    temp_v13 = FUN_001834a4(0x1a,0x1a0);
    temp_v2 = *(short *)(temp_v13 + 8);
    temp_v13 = FUN_001834a4(0x1a,0x176);
    temp_v3 = *(short *)(temp_v13 + 8);
    temp_v13 = FUN_001834a4(0x1a,0x1a7);
    temp_v4 = *(short *)(temp_v13 + 10);
    temp_v13 = FUN_001834a4(0x1a,0x185);
    temp_v5 = *(short *)(temp_v13 + 10);
    temp_v13 = FUN_001834a4(0x1a,0x1a0);
    temp_v6 = *(short *)(temp_v13 + 10);
    temp_v13 = FUN_001834a4(0x1a,0x176);
    temp_v7 = *(short *)(temp_v13 + 10);
    temp_v13 = FUN_002a4894(temp_v8);
    temp_v13 = FUN_001834a4(0x1a,temp_v13 + 0x234);
    FUN_001835b4(2,0x1a,0x233,
                 (int)*(short *)(temp_v13 + 8) +
                 param_3 + ((((int)temp_v0 - (int)temp_v1) + (int)temp_v2) - (int)temp_v3),
                 (int)*(short *)(temp_v13 + 10) +
                 param_4 + ((((int)temp_v4 - (int)temp_v5) + (int)temp_v6) - (int)temp_v7),0x83);
  }
  temp_v11 = recordGetModeForId((int)*(short *)(param_1 + temp_v11 * 2 + 0x438));
  temp_v15 = 0x9fe7ffff;
  if (temp_v9 >= temp_v12) {
    temp_v15 = 0x9b9b9bff;
  }
  else {
    temp_v13 = param_1 + 0x8b60;
    FUN_0032fea0(temp_v13,8,*(unsigned short *)(param_1 + temp_v9 * 2 + 0x8b70));
    if (temp_v13 != 0) {
      temp_v15 = 0x57d8ffff;
    }
    else if ((temp_v11 == 1 || temp_v11 == 2) || temp_v11 == 6) {
      temp_v15 = 0xf5ff9fff;
    }
  }
  param_1 = param_1 + temp_v9 * 2;
  temp_v14 = FUN_0014bd84(*(unsigned short *)(param_1 + 0x8b70));
  textFormatBuffer(temp_v16,&LAB_003ce2d8,temp_v14);
  temp_v11 = FUN_001834a4(0x1a,0x1a2);
  VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v11 + 10) + param_4,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) + param_3,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,temp_v15,temp_v16,(int)*(short *)(temp_v10 + 8));
  temp_v11 = FUN_001834a4(0x1a,0x1a1);
  FUN_00185e84((int)*(short *)(param_1 + 0x8b70),
               (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) + param_3,
               (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v11 + 10) + param_4,0x8d,0,0);
  temp_v13 = recordContainsPairedId(temp_v17,*(unsigned short *)(param_1 + 0x8b70));
  if (temp_v13 == 0) {
    temp_v15 = FUN_002a4894(temp_v8);
    FUN_004bd6b0(temp_v17,*(unsigned short *)(param_1 + 0x8b70),temp_v15);
  }
  statDrawClampedDelta(temp_v17,(int)*(short *)(param_1 + 0x8b70),
               (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) + param_3,
               (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + param_4,0x8d,0);
  if (temp_v9 < temp_v12) {
    temp_v8 = FUN_001834a4(0x1a,0x1a6);
    temp_v15 = FUN_004bcbb4(temp_v17,*(unsigned short *)(param_1 + 0x8b70));
    FUN_00180310(1,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v8 + 8) + param_3,
                 (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v10 + 10) + param_4,1,4,0x8d,
                 &LAB_003ce2f0,temp_v15);
  }
  else {
    FUN_001834a4(0x1a,0x19b);
  }
  return;
}

} /* extern "C" */
