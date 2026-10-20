/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e306c` (_code @ 0x2e306c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd38(unsigned int *, unsigned int *, unsigned int, int, unsigned int, unsigned int);
int software_interrupt(int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd38. */


unsigned int * FUN_002e306c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  if ((int)param_1[2] < 1) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = param_1[2] & 1;
    if (temp_v2 == 1) {
      *param_2 = **(unsigned int **)param_1[1];
    }
  }
  if ((int)temp_v2 < (int)param_1[2]) {
    do {
      puVar4 = param_2 + temp_v2;
      temp_v0 = temp_v2 * 4;
      temp_v1 = temp_v2 * 4;
      temp_v2 = temp_v2 + 2;
      *puVar4 = **(unsigned int **)(param_1[1] + temp_v1);
      puVar4[1] = **(unsigned int **)(param_1[1] + temp_v0 + 4);
    } while ((int)temp_v2 < (int)param_1[2]);
  }
  puVar4 = (unsigned int *)*param_1;
  if (param_1[2] != 1) {
    FUN_0017fd38(puVar4,param_2,param_1[2],(int)*(char *)(param_1 + 3),*(unsigned int *)param_1[4],
                 ((unsigned int *)param_1[4])[1]);
    return puVar4;
  }
  *puVar4 = 0;
  software_interrupt(0x24);
  return (unsigned int *)*param_2;
}

} /* extern "C" */
