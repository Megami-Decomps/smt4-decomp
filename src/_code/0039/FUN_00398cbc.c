/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398cbc` (_code @ 0x398cbc, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
extern int FUN_002aed40(unsigned int);
extern int *FUN_002b5498(int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002be77c. */


int * FUN_00398cbc(int *param_1,unsigned int param_2,unsigned int param_3,romwright_code *param_4,int param_5,
                  int param_6)

{
/* irregular: irregular input(s): in_cr1, in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  romwright_code *pcVar4;
  romwright_code *pcVar5;
  int *piVar6;
  unsigned int unaff_r5;
  unsigned int in_fpscr;
  unsigned int in_cr1;
  unsigned char uStack_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  
  if (param_2 == 0xffffffff) {
    return param_1;
  }
  pcVar5 = param_4;
  temp_v1 = FUN_002aed40(3);
  pcVar4 = *(romwright_code **)(**(int **)(temp_v1 + 8) + 0x44);
  temp_v1 = (*pcVar4)(*(int **)(temp_v1 + 8),param_2 & 0xffff);
  if (temp_v1 == 0) {
    param_2 = 0xffff8140;
  }
  temp_v2 = 0x323232ff;
  if (param_6 != 0) {
    temp_v2 = 0x72e027ff;
  }
  if (param_5 != 0) {
    in_fpscr = in_fpscr & 0xfffffff;
  }
  uStack_28 = (unsigned char)(param_2 >> 8);
  uStack_27 = (unsigned char)param_2;
  uStack_26 = 0;
  if (param_6 != 0) {
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(4,temp_v2,&uStack_28);
    temp_v1 = temp_v3;
  }
  else {
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,temp_v2,&uStack_28);
    temp_v1 = temp_v4;
  }
  coprocessor_loadlong(0,in_cr1,pcVar4 + 4);
  temp_v0 = (*pcVar5)(0);
  if (temp_v0 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_002b5498(temp_v0,unaff_r5,0,temp_v1 << 4);
  }
  (**(romwright_code **)(*piVar6 + 0x24))(piVar6,unaff_r5);
  return piVar6;
}
