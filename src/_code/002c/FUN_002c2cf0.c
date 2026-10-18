/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2cf0` (_code @ 0x2c2cf0, 0x25c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam00000000; /* 0x0 */
extern unsigned int uRam00000004; /* 0x4 */
extern int iRam00000008; /* 0x8 */
extern unsigned int uRam00000034; /* 0x34 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
extern int FUN_0011bc4c(int);


unsigned int FUN_002c2cf0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_s16, in_s2, in_s3, in_s4; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_cr0;
  unsigned int in_cr1;
  float in_s2;
  float in_s3;
  float in_s4;
  unsigned int in_s16;
  
  if (*(int *)(*param_1 + 0x2c) < 1) {
    temp_v1 = FUN_0011bc4c(*param_1);
    if (temp_v1 != 0) {
      uRam00000004 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iRam00000008 = iRam00000008 + 1;
    }
    return (unsigned int)(temp_v1 != 0);
  }
  temp_v1 = *(int *)(*param_1 + 0x30);
  if (temp_v1 != 0) {
    temp_v0 = *param_1 + 0x30 + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 == 0) {
    uRam00000034 = in_s16;
    coprocessor_store(0,in_cr0,0xe0);
    return 0;
  }
  VectorFloatToUnsigned(in_s3 + in_s2 * in_s4,3);
  coprocessor_load(0,in_cr1,0x3fc);
  iRam00000000 = temp_v1;
  *(unsigned int *)(param_4 + 8) = 0;
  *(unsigned int *)(param_4 + 4) = 0;
  *(unsigned char *)(param_4 + 0x10) = 2;
  *(int *)(param_4 + 0xc) = temp_v0;
  return param_4;
}
