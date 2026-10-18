/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cbf0` (_code @ 0x11cbf0, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_0031111c. */
/* Supplied declaration required: FUN_0031113e. */
extern int *FUN_0031115e(void);


void FUN_0011cbf0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    *(unsigned char *)(param_1 + 0x51) = 1;
    piVar1 = (int *)FUN_0031115e();
    if ((piVar1 == (int *)0x0) || (temp_v0 = *piVar1, temp_v0 == 0)) {
      FUN_0031111c(param_1,0,*(unsigned int *)(param_1 + 0x44));
      return;
    }
    *(int *)(*(int *)(param_1 + 0x44) + 0x38) = temp_v0;
    piVar3 = *(int **)(param_1 + 0x44);
    temp_v1 = *(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 0x18);
    temp_v2 = *(int *)(temp_v0 + 0x14) - *(int *)(temp_v0 + 0x18);
    *piVar3 = temp_v1;
    piVar3[1] = temp_v2;
    *piVar1 = 0;
    *(unsigned int *)(*(int *)(param_1 + 0x44) + 8) = *(unsigned int *)(temp_v0 + 0x10);
    FUN_002e9538(param_1 + 0x54,piVar1 + 1,temp_v1,temp_v2,param_4);
    *(int *)(*(int *)(param_1 + 0x44) + 0x30) = param_1 + 0x54;
    FUN_0031111c(param_1,1,*(unsigned int *)(param_1 + 0x44));
    FUN_0031113e(param_1 + 0x148,piVar1);
  }
  return;
}
