/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00507b7c` (_code @ 0x507b7c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_005090d4(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_005090d4. */


void FUN_00507b7c(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar3;
  
  temp_v0 = *(unsigned int *)(param_1 + 4);
  FUN_005090d4(temp_v0);
  piVar3 = *(int **)(param_1 + 8);
  temp_v2 = temp_v1;
  if (piVar3 != (int *)0x0) {
    temp_v2 = (unsigned int)*(unsigned char *)(piVar3 + 1);
  }
  if (piVar3 == (int *)0x0 || temp_v2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00507bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*piVar3 + 0x50))(piVar3,param_2,temp_v0);
  return;
}

} /* extern "C" */
