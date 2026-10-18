/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e7b8` (_code @ 0x35e7b8, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238308. */
/* Supplied declaration required: FUN_00238c44. */


void FUN_0035e7b8(int *param_1,int param_2)

{
/* irregular: 5 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  int *piVar5;
  int temp_v4;
  int *piVar7;
  
  temp_v4 = *(int *)(param_2 + 4);
  piVar5 = (int *)param_1[1];
LAB_0035e7d0:
  while( 1 ) {
    if (piVar5 == param_1 || temp_v4 == param_2) {
      return;
    }
    temp_v0 = *(unsigned short *)(piVar5 + 2);
    temp_v1 = *(unsigned short *)(temp_v4 + 8);
    temp_v2 = *(unsigned short *)((int)piVar5 + 10);
    temp_v3 = *(unsigned short *)(temp_v4 + 10);
    if (temp_v0 != temp_v1) break;
    if (temp_v3 < temp_v2) {
      *(unsigned short *)(piVar5 + 2) = temp_v3 + 1;
      temp_v4 = *(int *)(temp_v4 + 4);
      continue;
    }
LAB_0035e804:
    piVar7 = (int *)piVar5[1];
    *(int **)(*piVar5 + 4) = piVar7;
    *(int *)piVar5[1] = *piVar5;
    FUN_00238308(param_1[2],piVar5,1);
    piVar5 = piVar7;
  }
  if (temp_v1 >= temp_v0) {
    if (temp_v2 < temp_v1) {
      piVar5 = (int *)piVar5[1];
      goto LAB_0035e7d0;
    }
    *(unsigned short *)((int)piVar5 + 10) = temp_v1 - 1;
    if (temp_v2 <= temp_v3) {
      piVar5 = (int *)piVar5[1];
      goto LAB_0035e7d0;
    }
    piVar7 = (int *)piVar5[1];
    piVar5 = (int *)param_1[2];
    FUN_00238c44(piVar5,1);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = *piVar7;
      piVar5[1] = (int)piVar7;
      *piVar7 = (int)piVar5;
      *(int **)(*piVar5 + 4) = piVar5;
    }
    if (piVar5 == (int *)0x0) {
      return;
    }
    *(unsigned short *)(piVar5 + 2) = temp_v3 + 1;
    *(unsigned short *)((int)piVar5 + 10) = temp_v2;
  }
  else if (temp_v0 <= temp_v3) {
    if (temp_v2 <= temp_v3) goto LAB_0035e804;
    *(unsigned short *)(piVar5 + 2) = temp_v3 + 1;
    goto LAB_0035e7d0;
  }
  temp_v4 = *(int *)(temp_v4 + 4);
  goto LAB_0035e7d0;
}
