/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e8d0` (_code @ 0x35e8d0, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238308. */
/* Supplied declaration required: FUN_00238c44. */


void FUN_0035e8d0(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int *piVar5;
  
  piVar3 = (int *)param_1[1];
  while( 1 ) {
    if (piVar3 == param_1) {
      return;
    }
    temp_v0 = *(unsigned short *)(piVar3 + 2);
    temp_v1 = *(unsigned short *)((int)piVar3 + 10);
    temp_v2 = (unsigned int)temp_v1;
    if (temp_v0 == param_2) {
      if (temp_v2 == param_2) {
        *(int *)(*piVar3 + 4) = piVar3[1];
        *(int *)piVar3[1] = *piVar3;
        FUN_00238308(param_1[2],piVar3,1);
        return;
      }
      *(unsigned short *)(piVar3 + 2) = temp_v0 + 1;
      return;
    }
    if (temp_v2 == param_2) {
      *(unsigned short *)((int)piVar3 + 10) = temp_v1 - 1;
      return;
    }
    if ((temp_v0 <= param_2) && (param_2 <= temp_v2)) break;
    piVar3 = (int *)piVar3[1];
  }
  *(short *)((int)piVar3 + 10) = (short)param_2 - 1;
  piVar5 = (int *)piVar3[1];
  piVar3 = (int *)param_1[2];
  FUN_00238c44(piVar3,1);
  if (piVar3 == (int *)0x0) {
    return;
  }
  *piVar3 = *piVar5;
  piVar3[1] = (int)piVar5;
  *piVar5 = (int)piVar3;
  *(int **)(*piVar3 + 4) = piVar3;
  *(short *)(piVar3 + 2) = (short)param_2 + 1;
  *(unsigned short *)((int)piVar3 + 10) = temp_v1;
  return;
}
