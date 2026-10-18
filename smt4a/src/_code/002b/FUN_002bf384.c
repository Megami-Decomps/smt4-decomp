/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf384` (_code @ 0x2bf384, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


int FUN_002bf384(int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_r12 */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int in_r12;
  int temp_v1;
  int *piVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0x4e494246) {
    temp_v0 = 0;
  }
  else {
    piVar2 = param_1 + 3;
    if (piVar2 != (int *)0x0) {
      in_r12 = param_1[1];
    }
    temp_v0 = 0;
    if (piVar2 != (int *)0x0 && param_2 < in_r12) {
      temp_v0 = 0;
      if (param_2 != 0) {
        piVar3 = param_1 + 2;
        if ((param_2 & 1) != 0) {
          temp_v0 = *piVar2;
          piVar3 = piVar2;
        }
        temp_v1 = 0;
        for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
          piVar2 = piVar3 + 1;
          piVar5 = piVar3 + 2;
          piVar3 = piVar3 + 2;
          temp_v0 = temp_v0 + *piVar2;
          temp_v1 = temp_v1 + *piVar5;
        }
        temp_v0 = temp_v0 + temp_v1;
      }
      temp_v1 = 0;
      if (param_1 != (int *)0x0) {
        if (*param_1 == 0x4e494246) {
          temp_v1 = param_1[2];
        }
        else {
          temp_v1 = 0;
        }
      }
      temp_v0 = temp_v0 + temp_v1;
    }
    temp_v0 = (int)param_1 + temp_v0;
  }
  return temp_v0;
}
