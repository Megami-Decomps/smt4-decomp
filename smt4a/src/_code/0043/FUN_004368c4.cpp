/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004368c4` (_code @ 0x4368c4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043596c(int *, unsigned int, int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0043596c. */


void FUN_004368c4(int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  *param_1 = *(int *)(*param_1 + 4);
  param_1[6] = param_1[6] + 1;
  temp_v0 = *param_3;
  piVar1 = param_1;
  FUN_0043596c(param_1,param_2,&temp_v0);
  if ((piVar1 == (int *)0x0) && (*(char *)(*param_1 + 8) == '\n')) {
    param_1[6] = param_1[6] - 1;
    *param_1 = *(int *)(*param_1 + 4);
  }
  return;
}

} /* extern "C" */
