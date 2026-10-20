/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00437e98` (_code @ 0x437e98, 0x368 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004387bc(...);
int FUN_004387f0(int *, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */


/* WARNING: Removing unreachable block (ram,0x0043807c) */

unsigned int FUN_00437e98(int *param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  short temp_v0;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  int temp_v1;
  int *piVar7;
  int *temp_v2;
  int *temp_v3;
  int *temp_v4;
  
  temp_v2 = (int *)&temp_v2;
  temp_v3 = (int *)&temp_v2;
  piVar5 = (int *)param_1[1];
  if (piVar5 != param_1) {
    temp_v1 = 0;
    piVar4 = piVar5;
    do {
      piVar4 = (int *)piVar4[1];
      temp_v1 = temp_v1 + 1;
    } while (piVar4 != param_1);
    if (((temp_v1 != 1) || ((short)piVar5[2] != 0)) || (*(short *)((int)piVar5 + 10) != 0)) {
      piVar5 = (int *)param_1[2];
      piVar7 = (int *)param_1[1];
      piVar4 = piVar7;
      ppiVar2 = &temp_v2;
      ppiVar3 = &temp_v2;
      temp_v4 = piVar5;
      if ((short)piVar7[2] == 0) goto LAB_00437f90;
      FUN_004387f0(piVar5,1);
      if (piVar5 == (int *)0x0) {
        if ((temp_v4 != (int *)0x0) && (piVar5 = temp_v3, (int **)temp_v3 != &temp_v2)) {
          do {
            piVar4 = (int *)piVar5[1];
            FUN_004387bc(temp_v4,piVar5,1);
            piVar5 = piVar4;
          } while ((int **)piVar4 != &temp_v2);
        }
        return 0;
      }
      *piVar5 = (int)temp_v2;
      piVar5[1] = (int)&temp_v2;
      *(int **)(*piVar5 + 4) = piVar5;
      temp_v0 = (short)piVar7[2];
      *(unsigned short *)(piVar5 + 2) = 0;
      while( 1 ) {
        *(short *)((int)piVar5 + 10) = temp_v0 - 1;
        piVar4 = piVar7;
        ppiVar2 = (int **)piVar5;
        ppiVar3 = (int **)temp_v3;
LAB_00437f90:
        temp_v3 = (int *)ppiVar3;
        temp_v2 = (int *)ppiVar2;
        piVar7 = (int *)piVar4[1];
        if (piVar7 == param_1) break;
        piVar5 = temp_v4;
        FUN_004387f0(temp_v4,1);
        if (piVar5 == (int *)0x0) {
          if (temp_v4 == (int *)0x0) {
            return 0;
          }
          piVar5 = temp_v3;
          if ((int **)temp_v3 == &temp_v2) {
            return 0;
          }
          do {
            piVar4 = (int *)piVar5[1];
            FUN_004387bc(temp_v4,piVar5,1);
            piVar5 = piVar4;
          } while ((int **)piVar4 != &temp_v2);
          return 0;
        }
        *piVar5 = (int)temp_v2;
        piVar5[1] = (int)&temp_v2;
        *(int **)(*piVar5 + 4) = piVar5;
        temp_v0 = (short)piVar7[2];
        *(short *)(piVar5 + 2) = *(short *)((int)piVar4 + 10) + 1;
      }
      if (*(short *)((int)piVar4 + 10) != -1) {
        piVar5 = temp_v4;
        FUN_004387f0(temp_v4,1);
        if (piVar5 == (int *)0x0) {
          if (temp_v4 == (int *)0x0) {
            return 0;
          }
          piVar5 = temp_v3;
          if ((int **)temp_v3 == &temp_v2) {
            return 0;
          }
          do {
            piVar4 = (int *)piVar5[1];
            FUN_004387bc(temp_v4,piVar5,1);
            piVar5 = piVar4;
          } while ((int **)piVar4 != &temp_v2);
          return 0;
        }
        *piVar5 = (int)temp_v2;
        piVar5[1] = (int)&temp_v2;
        *(int **)(*piVar5 + 4) = piVar5;
        *(short *)(piVar5 + 2) = *(short *)((int)piVar4 + 10) + 1;
        *(unsigned short *)((int)piVar5 + 10) = 0xffff;
        temp_v2 = piVar5;
      }
      if (param_1[2] != 0) {
        piVar5 = (int *)param_1[1];
        while (piVar5 != param_1) {
          piVar4 = (int *)piVar5[1];
          FUN_004387bc(param_1[2],piVar5,1);
          piVar5 = piVar4;
        }
        param_1[2] = 0;
        *param_1 = (int)param_1;
        param_1[1] = (int)param_1;
      }
      param_1[1] = (int)temp_v3;
      *temp_v3 = (int)param_1;
      *param_1 = (int)temp_v2;
      temp_v2[1] = (int)param_1;
      param_1[2] = (int)temp_v4;
    }
    else {
      *(int *)(*piVar5 + 4) = piVar5[1];
      *(int *)piVar5[1] = *piVar5;
      FUN_004387bc(param_1[2],piVar5,1);
    }
  }
  else {
    piVar5 = (int *)param_1[2];
    FUN_004387f0(piVar5,1);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    *piVar5 = *param_1;
    piVar5[1] = (int)param_1;
    *param_1 = (int)piVar5;
    *(int **)(*piVar5 + 4) = piVar5;
    *(unsigned short *)(piVar5 + 2) = 0;
    *(unsigned short *)((int)piVar5 + 10) = 0xffff;
  }
  return 1;
}

} /* extern "C" */
