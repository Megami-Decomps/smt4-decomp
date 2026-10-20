/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f67c4` (_code @ 0x2f67c4, 0x380 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001835b4(...);
int FUN_00185e84(...);
int FUN_00389d9c(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_4_stack;

extern unsigned char LAB_002f6b80; /* 0x2f6b80 */
extern unsigned char LAB_002f6b8c; /* 0x2f6b8c */
extern unsigned char LAB_002f6b94; /* 0x2f6b94 */
extern int g_statusDown; /* 0x588fe8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(short);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: FUN_00389d9c. */
extern unsigned int FUN_003df57c(short, unsigned int);
extern unsigned int FUN_004bcbb4(unsigned int, short);


void FUN_002f67c4(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  unsigned char temp_v6 [84];
  
  temp_v2 = g_statusDown;
  temp_v5 = 0xffffffff;
  temp_v0 = *(short *)(g_statusDown + 0x24ac + param_1 * 8);
  efctSetSpeed();
  FUN_001835b4(2,0x12,0x556,param_2,param_3,param_4);
  FUN_001835b4(2,0x12,0x557,param_2,param_3,param_4);
  FUN_001835b4(2,0x12,0x558,param_2,param_3,param_4);
  FUN_001835b4(2,0x12,0x5bd,param_2,param_3,param_4);
  FUN_001835b4(2,0x12,0x5be,param_2,param_3,param_4);
  if ((*(char *)(temp_v2 + 0x24f0) != '\0') && (*(int *)(temp_v2 + 0x24f4) == param_1)) {
    temp_v5 = 0xff;
    FUN_001835b4(2,0x12,0x559,param_2,param_3,param_4 + 3);
  }
  temp_v4 = param_4 + 5;
  if (*(int *)(temp_v2 + 0x24ec) <= param_1) {
    FUN_001835b4(2,0x12,0x58e,param_2,param_3,temp_v4);
    return;
  }
  if (temp_v0 != 0) {
    FUN_001835b4(2,0x12,0x55d,param_2,param_3,temp_v4);
    FUN_001835b4(2,0x12,0x55e,param_2,param_3,temp_v4);
    FUN_001835b4(2,0x12,0x55f,param_2,param_3,temp_v4);
    temp_v4 = FUN_001834a4(0x12,0x560);
    if (*(short *)(temp_v2 + 0x598) < 1) {
      FUN_00185e84((int)temp_v0,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,
                   param_4 + 10,1,0);
      temp_v1 = FUN_003df57c(temp_v0,1);
    }
    else {
      FUN_00185e84((int)temp_v0,*(short *)(temp_v4 + 8) + param_2,*(short *)(temp_v4 + 10) + param_3,
                   param_4 + 10,0,0);
      FUN_00389d9c(*(unsigned int *)(temp_v2 + 0x24fc),(int)temp_v0,*(short *)(temp_v4 + 8) + param_2,
                   *(short *)(temp_v4 + 10) + param_3,param_4 + 10,0);
      temp_v1 = FUN_004bcbb4(*(unsigned int *)(temp_v2 + 0x24fc),temp_v0);
    }
    temp_v2 = FUN_001834a4(0x12,0x561);
    temp_v3 = FUN_0014bd84(temp_v0);
    FUN_00100388(temp_v6,&LAB_002f6b8c,temp_v3);
    VectorSignedToFloat(0xf9 - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v5,temp_v6);
    temp_v2 = FUN_001834a4(0x12,0x565);
    FUN_00180310(1,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,1,4,param_4 + 7,
                 &LAB_002f6b94,temp_v1);
    efctSetSpeed();
    return;
  }
  temp_v2 = FUN_001834a4(0x12,0x561);
  FUN_00100388(temp_v6,&LAB_002f6b80);
  VectorSignedToFloat(0xf9 - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v5,temp_v6);
  return;
}

} /* extern "C" */
