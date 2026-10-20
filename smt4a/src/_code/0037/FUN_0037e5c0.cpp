/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e5c0` (_code @ 0x37e5c0, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_001677c0(void);
int FUN_00180310(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00185e84(int, int, int, int, int, int);
int FUN_002ca71c(int, int, int);
int FUN_00389d9c(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

extern unsigned char LAB_0037e888; /* 0x37e888 */
extern unsigned char LAB_0037e894; /* 0x37e894 */
extern unsigned char LAB_0037e89c; /* 0x37e89c */
extern int DAT_00588fe8; /* 0x588fe8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(short);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185e84. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002ca71c. */
/* Supplied declaration required: FUN_00389d9c. */
extern unsigned int FUN_003df57c(short, unsigned int);
extern unsigned int FUN_004bcbb4(unsigned int, short);


void FUN_0037e5c0(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  unsigned char temp_v6 [84];
  
  temp_v3 = DAT_00588fe8;
  temp_v5 = 0x9fe7ffff;
  temp_v0 = *(short *)(DAT_00588fe8 + 0x24ac + param_1 * 8);
  FUN_001677c0();
  temp_v1 = FUN_00284140((int)*(short *)(temp_v3 + param_1 * 2 + 0x544));
  if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6) {
    temp_v5 = 0xf5ff9fff;
  }
  if (*(int *)(temp_v3 + 0x24f4) == param_1) {
    temp_v5 = 0x57d8ffff;
  }
  FUN_002ca71c(param_2,param_3,(temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6);
  FUN_001677c0();
  if (temp_v0 != 0) {
    FUN_001835b4(2,0x12,0x576,param_2,param_3,0xce);
    FUN_001835b4(2,0x12,0x577,param_2,param_3,0xce);
    temp_v1 = FUN_001834a4(0x12,0x578);
    if (*(short *)(temp_v3 + 0x598) < 1) {
      FUN_00185e84((int)temp_v0,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0xd3,
                   1,0);
      temp_v2 = FUN_003df57c(temp_v0,1);
    }
    else {
      FUN_00185e84((int)temp_v0,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0xd3,
                   0,0);
      FUN_00389d9c(*(unsigned int *)(temp_v3 + 0x24fc),(int)temp_v0,*(short *)(temp_v1 + 8) + param_2,
                   *(short *)(temp_v1 + 10) + param_3,0xd3,0);
      temp_v2 = FUN_004bcbb4(*(unsigned int *)(temp_v3 + 0x24fc),temp_v0);
    }
    temp_v3 = FUN_001834a4(0x12,0x579);
    temp_v4 = FUN_0014bd84(temp_v0);
    FUN_00100388(temp_v6,&LAB_0037e894,temp_v4);
    VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v3 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v5,temp_v6);
    temp_v3 = FUN_001834a4(0x12,0x57d);
    FUN_00180310(1,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,1,4,0xdd,
                 &LAB_0037e89c,temp_v2);
    FUN_001677c0();
    return;
  }
  temp_v3 = FUN_001834a4(0x12,0x579);
  FUN_00100388(temp_v6,&LAB_0037e888);
  VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v3 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,temp_v5,temp_v6);
  return;
}

} /* extern "C" */
