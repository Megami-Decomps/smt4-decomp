/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307dc2` (_code @ 0x307dc2, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fd5d4(int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002fd5d4. */
extern int *FUN_00307dfe(int, unsigned int);


void FUN_00307dc2(int *param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)FUN_00307dfe(param_2,0);
  FUN_002fd5d4(piVar1 + 2,param_4);
  *piVar1 = *param_3;
  piVar1[1] = *(int *)(*param_3 + 4);
  **(int **)(*param_3 + 4) = (int)piVar1;
  *(int **)(*param_3 + 4) = piVar1;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *param_1 = (int)piVar1;
  return;
}

} /* extern "C" */
