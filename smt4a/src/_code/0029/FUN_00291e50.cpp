/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291e50` (_code @ 0x291e50, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);
int FUN_003b5714(...);
int VectorSignedToFloat(int, int);

extern int DAT_00580238; /* 0x580238 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b5cb4. */
extern int FUN_003798f0(void);
/* Supplied declaration required: FUN_003b5714. */


void FUN_00291e50(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = DAT_00580238;
  if (param_1 != 0) {
    FUN_003b5714(*(unsigned int *)(DAT_00580238 + 0x40),param_1,param_2);
    temp_v1 = FUN_003798f0();
    temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x9310) = temp_v4;
    temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x9314) = temp_v4;
    temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x9318) = temp_v4;
  }
  else {
    temp_v4 = *(unsigned int *)(DAT_00581288 + 0x20);
    temp_v2 = *(unsigned int *)(DAT_00581288 + 0x24);
    *(unsigned int *)(DAT_00580238 + 0x9310) = *(unsigned int *)(DAT_00581288 + 0x1c);
    *(unsigned int *)(temp_v0 + 0x9314) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x9318) = temp_v2;
  }
  FUN_003b5714(*(unsigned int *)(temp_v0 + 0x40),param_3,param_4);
  temp_v1 = FUN_003798f0();
  temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x931c) = temp_v4;
  temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x9320) = temp_v4;
  temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x9324) = temp_v4;
  temp_v5 = *(float *)(temp_v0 + 0x9310);
  FUN_002b5cb4();
  temp_v7 = *(float *)(temp_v0 + 0x931c) - *(float *)(temp_v0 + 0x9310);
  *(float *)(temp_v0 + 0x9330) = *(float *)(temp_v0 + 0x9324) - *(float *)(temp_v0 + 0x9318);
  *(float *)(temp_v0 + 0x9328) = temp_v7;
  *(float *)(temp_v0 + 0x932c) = *(float *)(temp_v0 + 0x9320) - *(float *)(temp_v0 + 0x9314);
  temp_v6 = 1.0f / temp_v5;
  *(float *)(temp_v0 + 0x9328) = temp_v7 * temp_v6;
  *(float *)(temp_v0 + 0x932c) = *(float *)(temp_v0 + 0x932c) * temp_v6;
  *(float *)(temp_v0 + 0x9330) = *(float *)(temp_v0 + 0x9330) * temp_v6;
  *(unsigned int *)(temp_v0 + 0x9334) = 0x41f00000;
  *(unsigned int *)(temp_v0 + 0x9338) = 0;
  *(int *)(temp_v0 + 0x933c) = (int)(temp_v5 / 30.0f);
  temp_v1 = DAT_00581288;
  temp_v4 = *(unsigned int *)(temp_v0 + 0x9310);
  temp_v2 = *(unsigned int *)(temp_v0 + 0x9314);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x9318);
  puVar5 = (unsigned int *)(DAT_00581288 + 0x28);
  *(unsigned int *)(DAT_00581288 + 0x1c) = temp_v4;
  *(unsigned int *)(temp_v1 + 0x20) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x24) = temp_v3;
  *puVar5 = temp_v4;
  *(unsigned int *)(temp_v1 + 0x2c) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x30) = temp_v3;
  temp_v0 = DAT_00580238;
  DAT_005f15fc = 0x65;
  DAT_005f1600 = param_3;
  if (*(int *)(DAT_00580238 + 0xcc) != 5) {
    *(unsigned int *)(DAT_00580238 + 0xd0) = 0;
    *(unsigned int *)(temp_v0 + 0xcc) = 5;
    *(unsigned int *)(temp_v0 + 0xd4) = 0;
  }
  return;
}

} /* extern "C" */
