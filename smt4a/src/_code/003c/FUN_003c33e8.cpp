/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c33e8` (_code @ 0x3c33e8, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int FUN_00180310(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00185e84(...);
int FUN_00389d9c(...);
int FUN_004bd6b0(...);
int VectorSignedToFloat(...);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_6_stack;

extern unsigned char LAB_003c363c; /* 0x3c363c */
extern unsigned char LAB_003c3644; /* 0x3c3644 */
extern unsigned char LAB_003c3650; /* 0x3c3650 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bd84(unsigned short);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: FUN_00389d9c. */
extern int recordContainsPairedId(unsigned int, unsigned short);
extern unsigned int FUN_004bcbb4(unsigned int, unsigned short);
/* Supplied declaration required: FUN_004bd6b0. */


void FUN_003c33e8(int param_1,int param_2,unsigned int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned char temp_v5 [84];
  int iStack_34;
  int iStack_30;
  unsigned int temp_v6;
  int iStack_28;
  
  temp_v0 = param_1 + param_2 * 2;
  temp_v4 = 0xffffffff;
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v6 = param_3;
  iStack_28 = param_4;
  if (*(short *)(temp_v0 + 0x8b60) != 0) {
    FUN_001835b4(2,0x1a,0x174,param_5,param_6,0x6a);
    FUN_001835b4(2,0x1a,0x175,param_5,param_6,0x6a);
    FUN_001835b4(2,0x1a,0x176,param_5,param_6,0x6f);
    if (param_2 < param_4 - *(int *)(param_1 + 0x8e7c)) {
      temp_v4 = 0x9fe7ffff;
    }
    temp_v1 = FUN_0014bd84(*(unsigned short *)(temp_v0 + 0x8b60));
    textFormatBuffer(temp_v5,&LAB_003c363c,temp_v1);
    temp_v2 = FUN_001834a4(0x1a,0x178);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v4,temp_v5);
    temp_v2 = FUN_001834a4(0x1a,0x177);
    FUN_00185e84((int)*(short *)(temp_v0 + 0x8b60),*(short *)(temp_v2 + 8) + param_5,
                 *(short *)(temp_v2 + 10) + param_6,0x74,0,0);
    temp_v3 = recordContainsPairedId(temp_v6,*(unsigned short *)(temp_v0 + 0x8b60));
    if (temp_v3 == 0) {
      FUN_004bd6b0(temp_v6,*(unsigned short *)(temp_v0 + 0x8b60),param_2);
    }
    FUN_00389d9c(temp_v6,(int)*(short *)(temp_v0 + 0x8b60),*(short *)(temp_v2 + 8) + param_5,
                 *(short *)(temp_v2 + 10) + param_6,0x74,0);
    temp_v2 = FUN_001834a4(0x1a,0x17c);
    temp_v4 = FUN_004bcbb4(temp_v6,*(unsigned short *)(temp_v0 + 0x8b60));
    FUN_00180310(1,*(short *)(temp_v2 + 8) + param_5,*(short *)(temp_v2 + 10) + param_6,1,4,0x79,
                 &LAB_003c3650,temp_v4);
  }
  else {
    textFormatBuffer(temp_v5,&LAB_003c3644);
    temp_v0 = FUN_001834a4(0x1a,0x178);
    VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v0 + 8) + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffffffff,temp_v5);
  }
  return;
}

} /* extern "C" */
