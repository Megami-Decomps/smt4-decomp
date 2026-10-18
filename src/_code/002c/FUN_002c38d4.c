/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c38d4` (_code @ 0x2c38d4, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_002c38d4(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)param_1[1];
  if (puVar1 == (unsigned int *)0x0) {
    *param_1 = (unsigned int)param_2;
    param_1[1] = (unsigned int)param_2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    do {
      if (*puVar1 < *param_2) {
        if (puVar1 != (unsigned int *)0x0) {
          temp_v0 = puVar1[3];
          puVar1[3] = (unsigned int)param_2;
          param_2[2] = (unsigned int)puVar1;
          param_2[3] = temp_v0;
          if (temp_v0 == 0) {
            param_1[1] = (unsigned int)param_2;
          }
          else {
            *(unsigned int **)(temp_v0 + 8) = param_2;
          }
          param_1[2] = param_1[2] + 1;
          return;
        }
        break;
      }
      puVar1 = (unsigned int *)puVar1[2];
    } while (puVar1 != (unsigned int *)0x0);
    param_2[2] = 0;
    param_2[3] = *param_1;
    *param_1 = (unsigned int)param_2;
    *(unsigned int **)(param_2[3] + 8) = param_2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}
