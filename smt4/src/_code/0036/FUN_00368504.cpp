/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368504` (_code @ 0x368504, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00373ee0(unsigned int);
int nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(...);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00373ee0. */
/* Supplied declaration required: nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object. */


void FUN_00368504(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  *param_1 = param_2;
  temp_v0 = nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(param_1 + 0x13);
  temp_v1 = nw_ut_MoveArray_nn_math_MTX34_MoveArray_sub_object(temp_v0 - 0x10);
  temp_v3 = *(unsigned int *)(temp_v1 - 0xc);
  temp_v4 = *(unsigned int *)(temp_v1 - 8);
  temp_v2 = temp_v1;
  if (temp_v3 < temp_v4) {
    temp_v2 = temp_v4 - temp_v3;
  }
  if (temp_v3 < temp_v4) {
    temp_v2 = temp_v2 << 0x19;
  }
  if (temp_v3 < temp_v4) {
    temp_v2 = temp_v2 >> 0x1f;
  }
  else {
    temp_v2 = 0;
  }
  temp_v0 = temp_v2 + 1;
  if (temp_v0 < ((int)(temp_v4 - temp_v3) >> 6) + 1) {
    do {
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < ((int)(temp_v4 - temp_v3) >> 6) + 1);
  }
  *(unsigned int *)(temp_v1 - 8) = temp_v3;
  piVar4 = *(int **)(temp_v1 - 0x10);
  if (piVar4 != (int *)0x0 && temp_v3 != 0) {
    piVar4 = (int *)(**(romwright_code **)(*piVar4 + 0xc))();
  }
  temp_v2 = *(unsigned int *)(temp_v1 - 0x1c);
  temp_v3 = *(unsigned int *)(temp_v1 - 0x18);
  if (temp_v2 < temp_v3) {
    piVar4 = (int *)(temp_v3 - temp_v2);
  }
  if (temp_v2 < temp_v3) {
    piVar4 = (int *)((int)piVar4 << 0x19);
  }
  if (temp_v2 < temp_v3) {
    temp_v4 = (unsigned int)piVar4 >> 0x1f;
  }
  else {
    temp_v4 = 0;
  }
  temp_v0 = temp_v4 + 1;
  if (temp_v0 < ((int)(temp_v3 - temp_v2) >> 6) + 1) {
    do {
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < ((int)(temp_v3 - temp_v2) >> 6) + 1);
  }
  *(unsigned int *)(temp_v1 - 0x18) = temp_v2;
  if (*(int **)(temp_v1 - 0x20) != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(**(int **)(temp_v1 - 0x20) + 0xc))();
  }
  FUN_00373ee0(temp_v1 - 0x3c);
  return;
}

} /* extern "C" */
