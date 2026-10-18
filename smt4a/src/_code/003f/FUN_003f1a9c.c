/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1a9c` (_code @ 0x3f1a9c, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00573ae0; /* 0x573ae0 */
extern unsigned int DAT_00573ae4; /* 0x573ae4 */

/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_004c6cb0. */


void FUN_003f1a9c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + 0x45a0);
  if (((param_2 == 0) ||
      ((*puVar3 & DAT_00573ae0) == 0 && (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573ae4) == 0)) &&
     (temp_v0 = param_1, FUN_003eaf20(), temp_v0 != 0)) {
    temp_v0 = (int)*(short *)(temp_v0 + 8);
    FUN_004c6cb0(temp_v0,param_2);
    if (((temp_v0 != 0) && (FUN_001aba54(), temp_v0 != 0)) && (param_2 != 0)) {
      temp_v1 = DAT_00573ae4 | *(unsigned int *)(param_1 + 0x45a4);
      *puVar3 = DAT_00573ae0 | *puVar3;
      *(unsigned int *)(param_1 + 0x45a4) = temp_v1;
    }
  }
  return;
}
