/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e9fc` (_code @ 0x35e9fc, 0x1d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238308. */
/* Supplied declaration required: FUN_00238c44. */


void FUN_0035e9fc(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  int *piVar5;
  int temp_v4;
  int *piVar7;
  
  temp_v4 = *(int *)(param_2 + 4);
  piVar5 = (int *)param_1[1];
  do {
    while( 1 ) {
      if (piVar5 == param_1) {
        return;
      }
      if (temp_v4 == param_2) {
        do {
          piVar7 = (int *)piVar5[1];
          *(int **)(*piVar5 + 4) = piVar7;
          *(int *)piVar5[1] = *piVar5;
          FUN_00238308(param_1[2],piVar5,1);
          piVar5 = piVar7;
        } while (piVar7 != param_1);
        return;
      }
      temp_v0 = *(unsigned short *)(piVar5 + 2);
      temp_v1 = *(unsigned short *)(temp_v4 + 8);
      temp_v2 = *(unsigned short *)((int)piVar5 + 10);
      temp_v3 = *(unsigned short *)(temp_v4 + 10);
      if (temp_v0 == temp_v1) break;
      if (temp_v1 <= temp_v0) {
        if (temp_v0 <= temp_v3) {
          if (temp_v2 <= temp_v3) {
            piVar5 = (int *)piVar5[1];
            continue;
          }
          *(unsigned short *)((int)piVar5 + 10) = temp_v3;
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
          temp_v4 = *(int *)(temp_v4 + 4);
          continue;
        }
        temp_v4 = *(int *)(temp_v4 + 4);
        continue;
      }
      if (temp_v2 < temp_v1) {
        piVar7 = (int *)piVar5[1];
        *(int **)(*piVar5 + 4) = piVar7;
        *(int *)piVar5[1] = *piVar5;
        FUN_00238308(param_1[2],piVar5,1);
        piVar5 = piVar7;
      }
      else {
        *(unsigned short *)(piVar5 + 2) = temp_v1;
        if (temp_v3 >= temp_v2) {
          piVar5 = (int *)piVar5[1];
        }
        else {
          *(unsigned short *)((int)piVar5 + 10) = temp_v3;
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
          temp_v4 = *(int *)(temp_v4 + 4);
        }
      }
    }
    if (temp_v2 == temp_v3) {
      piVar5 = (int *)piVar5[1];
    }
    else {
      if (temp_v2 < temp_v3) {
        piVar5 = (int *)piVar5[1];
        continue;
      }
      *(unsigned short *)((int)piVar5 + 10) = temp_v3;
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
    temp_v4 = *(int *)(temp_v4 + 4);
  } while( 1 );
}
