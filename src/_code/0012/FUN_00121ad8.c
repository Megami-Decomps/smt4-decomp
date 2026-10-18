/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121ad8` (_code @ 0x121ad8, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00130ec0. */
/* Supplied declaration required: FUN_002b4bf8. */
/* Supplied declaration required: FUN_002b4c60. */
/* Supplied declaration required: FUN_002bae30. */


void FUN_00121ad8(char *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*param_1 != '\0') {
    while (*(int *)(param_1 + 4) != 0) {
      temp_v0 = *(int *)(param_1 + 8);
      temp_v1 = temp_v0 - 0x58;
      FUN_002b4c60(temp_v1);
      if (*(romwright_code **)(temp_v0 - 0x4c) != (romwright_code *)0x0) {
        (**(romwright_code **)(temp_v0 - 0x4c))(temp_v1,1,*(unsigned int *)(temp_v0 - 0x48));
      }
      FUN_002b4bf8(temp_v1);
    }
    while (*(int *)(param_1 + 0x10) != 0) {
      temp_v0 = *(int *)(param_1 + 0x14);
      FUN_002bae30(param_1 + 0x10);
      FUN_00130ec0(temp_v0 - 0x58);
    }
    *param_1 = '\0';
  }
  return;
}
