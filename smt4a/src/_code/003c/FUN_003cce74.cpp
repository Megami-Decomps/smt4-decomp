/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cce74` (_code @ 0x3cce74, 0x310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00185e84(...);
int largeGridDrawButtonStrip(int, int, int, int);
int statDrawClampedDelta(...);
int FUN_004bd6b0(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_4_stack;

extern unsigned char LAB_003cd194; /* 0x3cd194 */
extern unsigned char LAB_003cd1a0; /* 0x3cd1a0 */
extern unsigned char LAB_003cd1b0; /* 0x3cd1b0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bd84(unsigned short);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
extern int FUN_00284140(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: largeGridDrawButtonStrip. */
/* Supplied declaration required: statDrawClampedDelta. */
extern int recordContainsPairedId(unsigned int, unsigned short);
extern unsigned int FUN_004bcbb4(unsigned int, unsigned short);
/* Supplied declaration required: FUN_004bd6b0. */


void FUN_003cce74(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
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
  unsigned int temp_v8;
  int iStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  temp_v8 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  temp_v0 = FUN_002a4894(param_1 + 0x8db0);
  temp_v1 = FUN_001834a4(0x1a,temp_v0 + 0x23c);
  temp_v2 = FUN_002a4894(param_1 + 0x8db0);
  temp_v2 = temp_v2 + 0x20;
  largeGridDrawButtonStrip(param_1,*(short *)(temp_v1 + 8) + param_3,*(short *)(temp_v1 + 10) + param_4,temp_v2);
  temp_v3 = param_1 + temp_v0 * 2;
  temp_v6 = 0x9fe7ffff;
  if (*(short *)(temp_v3 + 0x8b60) != 0) {
    FUN_001835b4(2,0x1a,0x19f,*(short *)(temp_v1 + 8) + param_3,*(short *)(temp_v1 + 10) + param_4,0x83)
    ;
    FUN_001835b4(2,0x1a,0x1a0,*(short *)(temp_v1 + 8) + param_3,*(short *)(temp_v1 + 10) + param_4,0x83)
    ;
    temp_v2 = FUN_00284140((int)*(short *)(param_1 + temp_v2 * 2 + 0x438));
    if ((temp_v2 == 1 || temp_v2 == 2) || temp_v2 == 6) {
      temp_v6 = 0xf5ff9fff;
    }
    temp_v4 = FUN_0014bd84(*(unsigned short *)(temp_v3 + 0x8b60));
    textFormatBuffer(temp_v7,&LAB_003cd194,temp_v4);
    temp_v2 = FUN_001834a4(0x1a,0x1a2);
    VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v6,temp_v7,(int)*(short *)(temp_v1 + 8));
    temp_v2 = FUN_001834a4(0x1a,0x1a1);
    FUN_00185e84((int)*(short *)(temp_v3 + 0x8b60),
                 (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_3,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,0x74,0,0);
    temp_v5 = recordContainsPairedId(temp_v8,*(unsigned short *)(temp_v3 + 0x8b60));
    if (temp_v5 == 0) {
      FUN_004bd6b0(temp_v8,*(unsigned short *)(temp_v3 + 0x8b60),temp_v0);
    }
    statDrawClampedDelta(temp_v8,(int)*(short *)(temp_v3 + 0x8b60),
                 (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_3,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,0x74,0);
    temp_v0 = FUN_001834a4(0x1a,0x1a6);
    temp_v6 = FUN_004bcbb4(temp_v8,*(unsigned short *)(temp_v3 + 0x8b60));
    FUN_00180310(1,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_3,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,4,0x79,
                 &LAB_003cd1b0,temp_v6);
  }
  else {
    temp_v0 = FUN_00284140((int)*(short *)(param_1 + temp_v2 * 2 + 0x438));
    if ((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 6) {
      temp_v6 = 0xf5ff9fff;
    }
    textFormatBuffer(temp_v7,&LAB_003cd1a0);
    temp_v0 = FUN_001834a4(0x1a,0x1a2);
    VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v6,temp_v7,(int)*(short *)(temp_v0 + 10));
  }
  return;
}

} /* extern "C" */
