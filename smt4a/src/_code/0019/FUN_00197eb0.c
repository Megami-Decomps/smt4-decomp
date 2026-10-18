/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00197eb0` (_code @ 0x197eb0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Supplied declaration required: FUN_00198bc8. */


unsigned char FUN_00197eb0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned char temp_v0;
  int temp_v1;
  
  piVar3 = *(int **)(param_1 + 0xc);
  for (piVar1 = *(int **)(param_1 + 8); (piVar1 != piVar3 && (*piVar1 != param_2));
      piVar1 = piVar1 + 1) {
  }
  piVar2 = piVar1;
  temp_v1 = param_2;
  if (piVar1 != piVar3) {
    piVar2 = piVar1 + 1;
    FUN_00198bc8(piVar2,piVar3,piVar1,&temp_v1,param_1);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = piVar2;
  temp_v0 = piVar1 != piVar2;
  if (temp_v0) {
    *(unsigned int *)(temp_v1 + 0xc) = 0;
  }
  return temp_v0;
}
