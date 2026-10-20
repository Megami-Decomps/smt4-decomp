/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157194` (_code @ 0x157194, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006ec(int, int, int);
int FUN_00157110(void);
int vcallSlot12IfValid(unsigned int);
int sysFatalBreak(void);
int asdMemFree(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001006ec. */
/* Supplied declaration required: FUN_00157110. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: asdMemFree. */


int * FUN_00157194(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00157110();
  if (*param_1 != 0) {
    asdMemFree();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  temp_v1 = param_1[4];
  if (temp_v1 != 0) {
    if ((*(unsigned int *)(temp_v1 + 4) & 0xfffffffe) != 0) {
      if ((*(unsigned int *)(temp_v1 + 4) & 1) != 0) {
        sysFatalBreak();
      }
      vcallSlot12IfValid(*(unsigned int *)(temp_v1 + 4) & 0xfffffffe);
      *(unsigned int *)(temp_v1 + 4) = 0;
      if (param_1[4] != 0) {
        (**(romwright_code **)(*(int *)param_1[4] + 4))();
      }
    }
    else {
      (**(romwright_code **)(*(int *)param_1[4] + 4))();
    }
    param_1[4] = 0;
  }
  temp_v1 = param_1[6];
  if (0 < (param_1[7] - temp_v1) >> 2) {
    for (temp_v0 = (param_1[7] - temp_v1) >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
    }
  }
  FUN_001006ec(temp_v1,(param_1[8] - temp_v1) >> 2,0);
  return param_1;
}

} /* extern "C" */
