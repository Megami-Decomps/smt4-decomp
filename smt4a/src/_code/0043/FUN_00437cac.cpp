/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00437cac` (_code @ 0x437cac, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004387bc(int, int *, int);
int FUN_004387f0(int *, int);

/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */


void FUN_00437cac(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  int *piVar6;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = 0;
  if ((int *)param_1[1] != param_1) {
    piVar4 = (int *)param_1[1];
    do {
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
      if (!(temp_v5 && !temp_v4)) {
        piVar6 = (int *)piVar4[1];
        *(int **)(*piVar4 + 4) = piVar6;
        *(int *)piVar4[1] = *piVar4;
        FUN_004387bc(param_1[2],piVar4,1);
      }
      else {
        temp_v5 = param_2 <= temp_v2;
        temp_v4 = temp_v2 == param_2;
        if (!temp_v5 || temp_v4) {
          temp_v5 = temp_v3 <= param_2;
          temp_v4 = param_2 == temp_v3;
        }
        if ((!temp_v5 || temp_v4) || ((temp_v3 != 0xffff && (temp_v3 + 1 == param_2)))) {
          temp_v1 = 1;
          *(short *)((int)piVar4 + 10) = (short)param_3;
        }
        else {
          temp_v5 = param_3 <= temp_v2;
          temp_v4 = temp_v2 == param_3;
          if (!temp_v5 || temp_v4) {
            temp_v5 = temp_v3 <= param_3;
            temp_v4 = param_3 == temp_v3;
          }
          if ((!temp_v5 || temp_v4) || ((param_3 != 0xffff && (param_3 + 1 == temp_v2)))) {
            if (temp_v1) {
              piVar6 = (int *)piVar4[1];
              *(int **)(*piVar4 + 4) = piVar6;
              *(int *)piVar4[1] = *piVar4;
              FUN_004387bc(param_1[2],piVar4,1);
              *(unsigned short *)(*piVar6 + 10) = temp_v0;
              return;
            }
            *(short *)(piVar4 + 2) = (short)param_2;
            return;
          }
          if (param_3 < temp_v2) {
            if (temp_v1) {
              return;
            }
            piVar6 = (int *)param_1[2];
            FUN_004387f0(piVar6,1);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = *piVar4;
              piVar6[1] = (int)piVar4;
              *piVar4 = (int)piVar6;
              *(int **)(*piVar6 + 4) = piVar6;
            }
            if (piVar6 != (int *)0x0) {
              *(short *)(piVar6 + 2) = (short)param_2;
              *(short *)((int)piVar6 + 10) = (short)param_3;
            }
            return;
          }
        }
        piVar6 = (int *)piVar4[1];
      }
      piVar4 = piVar6;
    } while (piVar6 != param_1);
    if (temp_v1) {
      return;
    }
  }
  piVar6 = (int *)param_1[2];
  FUN_004387f0(piVar6,1);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *piVar6 = *param_1;
    piVar6[1] = (int)param_1;
    *param_1 = (int)piVar6;
    *(int **)(*piVar6 + 4) = piVar6;
  }
  if (piVar6 != (int *)0x0) {
    *(short *)(piVar6 + 2) = (short)param_2;
    *(short *)((int)piVar6 + 10) = (short)param_3;
  }
  return;
}

} /* extern "C" */
