/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b40f4` (_code @ 0x4b40f4, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00168594. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_002c0940. */


void FUN_004b40f4(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned char temp_v5 [72];
  
  temp_v0 = FUN_001834a4(0x1d,0xca);
  FUN_001835b4(2,0x1d,0xc2,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x65);
  FUN_001835b4(2,0x1d,0xc3,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x6a);
  FUN_001835b4(2,0x1d,0xc4,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x6f);
  FUN_001835b4(2,0x1d,0xc5,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x74);
  FUN_001835b4(2,0x1d,0xc6,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x79);
  temp_v3 = *(unsigned int *)(param_1 + 0x7e3c) >> 0xc;
  if (temp_v3 >= 10000) {
    temp_v3 = 9999;
  }
  temp_v1 = FUN_001834a4(0x1d,0xcb);
  FUN_002c0940(temp_v5,temp_v3);
  temp_v4 = 1.0f;
  FUN_00168594(temp_v5,3);
  temp_v2 = (int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_3,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v2 + param_2 + (0x38 - (int)temp_v4) / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0x9fddddff,temp_v5,temp_v2);
  FUN_00183bb0();
  return;
}
