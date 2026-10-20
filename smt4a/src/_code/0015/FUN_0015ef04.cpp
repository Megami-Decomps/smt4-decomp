/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ef04` (_code @ 0x15ef04, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00175f48(int, int *);
int nw_ut_IsValidBinaryFile(int *, int, int, int, int, int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00175f48. */
/* Supplied declaration required: nw_ut_IsValidBinaryFile. */


unsigned int FUN_0015ef04(int param_1,int *param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*param_2 != 0x554e4643) {
      piVar1 = param_2;
      nw_ut_IsValidBinaryFile(param_2,0x544e4643,0x3000000,2,param_1,param_2);
      temp_v0 = 0;
      if (piVar1 != (int *)0x0) {
        piVar1 = (int *)0x0;
        temp_v1 = 0;
        piVar4 = (int *)((unsigned int)*(unsigned short *)((int)param_2 + 6) + (int)param_2);
        if ((short)param_2[4] != 0) {
          do {
            temp_v2 = *piVar4;
            if (temp_v2 != 0x50414d43) {
              if (temp_v2 < 0x50414d43) {
                if (temp_v2 != 0x464e4946) {
                  if (temp_v2 != 0x48445743) {
                    return 0;
                  }
                  if (piVar4[3] != 0) {
                    piVar4[3] = piVar4[3] + (int)param_2;
                  }
                }
                else {
                  piVar1 = piVar4 + 2;
                  piVar4[4] = piVar4[4] + (int)param_2;
                  if (piVar4[5] != 0) {
                    piVar4[5] = piVar4[5] + (int)param_2;
                  }
                  if (piVar4[6] != 0) {
                    piVar4[6] = piVar4[6] + (int)param_2;
                  }
                }
              }
              else if (temp_v2 != 0x504c4754) {
                if (temp_v2 != 0x52474c47) {
                  return 0;
                }
              }
              else {
                piVar4[7] = piVar4[7] + (int)param_2;
              }
            }
            else if (piVar4[4] != 0) {
              piVar4[4] = piVar4[4] + (int)param_2;
            }
            temp_v1 = temp_v1 + 1;
            piVar4 = (int *)((int)piVar4 + piVar4[1]);
          } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(param_2 + 4));
        }
        *param_2 = 0x554e4643;
LAB_0015f090:
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        FUN_00175f48(param_1,param_2);
        temp_v0 = 1;
      }
      return temp_v0;
    }
    temp_v1 = 0;
    piVar1 = (int *)((unsigned int)*(unsigned short *)((int)param_2 + 6) + (int)param_2);
    if (*(unsigned short *)(param_2 + 4) != 0) {
      do {
        if (*piVar1 == 0x464e4946) {
          piVar1 = piVar1 + 2;
          goto LAB_0015f090;
        }
        temp_v1 = temp_v1 + 1;
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(param_2 + 4));
    }
  }
  return 0;
}

} /* extern "C" */
