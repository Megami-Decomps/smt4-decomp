/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232264` (_code @ 0x232264, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00271be0. */


unsigned int FUN_00232264(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x18);
  FUN_00271be0(temp_v0,*(unsigned int *)(param_1 + 0x24));
  temp_v1 = *(int *)(param_1 + 0x28);
  if ((temp_v1 != 0) && (*(char *)(*(int *)(temp_v0 + 0x18) * 0x18 + 0x5c1088) != '\0')) {
    *(int *)(temp_v1 + 4) = *(int *)(temp_v1 + 4) + 1;
    *(int *)(temp_v0 + 0x28) = temp_v1;
  }
  return temp_v0;
}
