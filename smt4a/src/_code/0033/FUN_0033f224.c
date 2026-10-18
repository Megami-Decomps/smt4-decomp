/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f224` (_code @ 0x33f224, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00581288; /* 0x581288 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_002e5db4(void);
extern int FUN_00325340(void);
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */


void FUN_0033f224(unsigned char param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = DAT_00581288;
  if (*(int *)(temp_v0 + 0x109c) == 0) {
    return;
  }
  temp_v2 = *(float *)(temp_v0 + 0x1528);
  temp_v4 = 0;
  *(unsigned int *)(DAT_00581288 + 0x1d4) = 0;
  temp_v3 = VectorSignedToFloat((int)(temp_v2 / *(float *)(temp_v1 + 0x1e4)),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  *(unsigned int *)(temp_v1 + 0x1ec) = temp_v3;
  *(unsigned char *)(temp_v1 + 0x224) = 1;
  temp_v0 = FUN_00325340();
  temp_v1 = DAT_00581288;
  if (temp_v0 != 0) {
    *(unsigned int *)(DAT_00581288 + 0x1d0) = 10;
    *(unsigned char *)(temp_v1 + 0x214) = param_1;
    temp_v1 = FUN_0018719c(0x4c9);
    if ((temp_v1 == 0) || (temp_v1 = FUN_002e5db4(), temp_v1 != 0)) {
      temp_v1 = DAT_00581288;
      *(unsigned int *)(DAT_00581288 + 0x228) = 4;
      *(unsigned int *)(temp_v1 + 0x238) = 4;
    }
    *(unsigned int *)(DAT_00581288 + 0x240) = 0x40000000;
    temp_v1 = FUN_0018719c(0x4c9);
    if ((temp_v1 != 0) && (temp_v1 = FUN_002e5db4(), temp_v1 == 0)) {
      temp_v3 = *(unsigned int *)(*(int *)(DAT_00581288 + 0x18c) + 4);
      FUN_003fd7c0(temp_v3,4,2);
      *(unsigned int *)(DAT_00581288 + 0x238) = 0xd;
      FUN_003fd924(temp_v3,0xd,2);
      return;
    }
  }
  else {
    *(unsigned int *)(DAT_00581288 + 0x1d0) = 2;
    *(unsigned char *)(temp_v1 + 0x214) = param_1;
    temp_v1 = FUN_0018719c(0x4c9);
    if ((temp_v1 == 0) || (temp_v1 = FUN_002e5db4(), temp_v1 != 0)) {
      temp_v1 = DAT_00581288;
      *(unsigned int *)(DAT_00581288 + 0x228) = 10;
      *(unsigned int *)(temp_v1 + 0x238) = 10;
    }
    *(unsigned int *)(DAT_00581288 + 0x240) = temp_v4;
    temp_v1 = FUN_0018719c(0x4c9);
    if ((temp_v1 != 0) && (temp_v1 = FUN_002e5db4(), temp_v1 == 0)) {
      temp_v1 = *(int *)(*(int *)(DAT_00581288 + 0x18c) + 4);
      *(unsigned int *)(temp_v1 + 0x1fc) = 0x3f800000;
      FUN_003fd7c0(temp_v1,5,2);
      return;
    }
  }
  FUN_003fd7c0(*(unsigned int *)(*(int *)(DAT_00581288 + 0x18c) + 4),0,2);
  return;
}
