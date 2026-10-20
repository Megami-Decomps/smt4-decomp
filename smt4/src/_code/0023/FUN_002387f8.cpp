/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002387f8` (_code @ 0x2387f8, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238170(int, int *, int);
int FUN_00238aac(int *, int);

/* Supplied declaration required: FUN_00238170. */
/* Supplied declaration required: FUN_00238aac. */


void FUN_002387f8(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 unstructured edge(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = 0;
  piVar4 = (int *)param_1[1];
  do {
    if (piVar4 == param_1) {
      if (!temp_v1) {
        piVar3 = (int *)param_1[2];
        FUN_00238aac(piVar3,1);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = *param_1;
          piVar3[1] = (int)param_1;
          *param_1 = (int)piVar3;
          *(int **)(*piVar3 + 4) = piVar3;
        }
        if (piVar3 != (int *)0x0) {
          *(short *)(piVar3 + 2) = (short)param_2;
          *(short *)((int)piVar3 + 10) = (short)param_3;
        }
      }
      return;
    }
    temp_v2 = (unsigned int)*(unsigned short *)(piVar4 + 2);
    temp_v0 = *(unsigned short *)((int)piVar4 + 10);
    temp_v3 = (unsigned int)temp_v0;
    temp_v5 = param_2 <= temp_v2;
    temp_v4 = temp_v2 == param_2;
    if (!temp_v5 || temp_v4) {
      temp_v5 = temp_v3 <= param_3;
      temp_v4 = param_3 == temp_v3;
    }
    if (!temp_v5 || temp_v4) {
      return;
    }
    temp_v5 = temp_v2 <= param_2;
    temp_v4 = param_2 == temp_v2;
    if (!temp_v5 || temp_v4) {
      temp_v5 = param_3 <= temp_v3;
      temp_v4 = temp_v3 == param_3;
    }
    if (temp_v5 && !temp_v4) {
      temp_v5 = param_2 <= temp_v2;
      temp_v4 = temp_v2 == param_2;
      if (!temp_v5 || temp_v4) {
        temp_v5 = temp_v3 <= param_2;
        temp_v4 = param_2 == temp_v3;
      }
      if ((!temp_v5 || temp_v4) || ((temp_v3 != 0xffff && (temp_v3 + 1 == param_2)))) {
        temp_v1 = 1;
        *(short *)((int)piVar4 + 10) = (short)param_3;
        piVar4 = (int *)piVar4[1];
        continue;
      }
      temp_v5 = param_3 <= temp_v2;
      temp_v4 = temp_v2 == param_3;
      if (!temp_v5 || temp_v4) {
        temp_v5 = temp_v3 <= param_3;
        temp_v4 = param_3 == temp_v3;
      }
      if ((!temp_v5 || temp_v4) || ((param_3 != 0xffff && (param_3 + 1 == temp_v2)))) {
        if (!temp_v1) {
          *(short *)(piVar4 + 2) = (short)param_2;
          return;
        }
        piVar3 = (int *)piVar4[1];
        *(int **)(*piVar4 + 4) = piVar3;
        *(int *)piVar4[1] = *piVar4;
        FUN_00238170(param_1[2],piVar4,1);
        *(unsigned short *)(*piVar3 + 10) = temp_v0;
        return;
      }
      if (param_3 >= temp_v2) {
        piVar4 = (int *)piVar4[1];
        continue;
      }
      if (temp_v1) {
        return;
      }
      piVar3 = (int *)param_1[2];
      FUN_00238aac(piVar3,1);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = *piVar4;
        piVar3[1] = (int)piVar4;
        *piVar4 = (int)piVar3;
        *(int **)(*piVar3 + 4) = piVar3;
      }
      if (piVar3 != (int *)0x0) {
        *(short *)(piVar3 + 2) = (short)param_2;
        *(short *)((int)piVar3 + 10) = (short)param_3;
      }
      return;
    }
    piVar3 = (int *)piVar4[1];
    *(int **)(*piVar4 + 4) = piVar3;
    *(int *)piVar4[1] = *piVar4;
    FUN_00238170(param_1[2],piVar4,1);
    piVar4 = piVar3;
  } while( 1 );
}

} /* extern "C" */
