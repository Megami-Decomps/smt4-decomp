/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c920` (_code @ 0x19c920, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_0019c920(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)param_1[1];
  if (puVar1 == (unsigned int *)0x0) {
    *param_1 = (unsigned int)param_2;
    param_1[1] = (unsigned int)param_2;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  else {
    do {
      if (*puVar1 < *param_2) {
        if (puVar1 != (unsigned int *)0x0) {
          temp_v0 = puVar1[4];
          puVar1[4] = (unsigned int)param_2;
          param_2[3] = (unsigned int)puVar1;
          param_2[4] = temp_v0;
          if (temp_v0 == 0) {
            param_1[1] = (unsigned int)param_2;
          }
          else {
            *(unsigned int **)(temp_v0 + 0xc) = param_2;
          }
          param_1[2] = param_1[2] + 1;
          return;
        }
        break;
      }
      puVar1 = (unsigned int *)puVar1[3];
    } while (puVar1 != (unsigned int *)0x0);
    param_2[3] = 0;
    param_2[4] = *param_1;
    *param_1 = (unsigned int)param_2;
    *(unsigned int **)(param_2[4] + 0xc) = param_2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}
