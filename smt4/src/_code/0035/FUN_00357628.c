/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357628` (_code @ 0x357628, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002c40f8. */


void FUN_00357628(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  if ((int)param_1[2] < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = param_1[2] & 1;
    if (temp_v1 == 1) {
      *param_2 = **(unsigned int **)param_1[1];
    }
  }
  temp_v2 = param_1[2];
  if ((int)temp_v1 < temp_v2) {
    do {
      puVar4 = param_2 + temp_v1;
      temp_v2 = temp_v1 * 4;
      temp_v0 = temp_v1 * 4;
      temp_v1 = temp_v1 + 2;
      *puVar4 = **(unsigned int **)(param_1[1] + temp_v0);
      puVar4[1] = **(unsigned int **)(param_1[1] + temp_v2 + 4);
      temp_v2 = param_1[2];
    } while ((int)temp_v1 < temp_v2);
  }
  FUN_002c40f8(*param_1,param_2,temp_v2,(int)*(char *)(param_1 + 3),*(unsigned int *)param_1[4],
               ((unsigned int *)param_1[4])[1]);
  return;
}
