/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140664` (_code @ 0x140664, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00140e78. */
/* Supplied declaration required: FUN_0014c0f4. */
/* Supplied declaration required: FUN_0014c1bc. */
/* Supplied declaration required: FUN_002bae7c. */
/* Supplied declaration required: FUN_002bb020. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_00140664(int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x14);
  while( 1 ) {
    if (temp_v0 != '\0') {
      return;
    }
    FUN_002bb020();
    FUN_0014c1bc();
    if (*(char *)(param_1 + 0x14) != '\0') break;
    FUN_002c38a4(param_1 + 8);
    FUN_002bb020();
    FUN_0014c0f4();
    FUN_002c3820(param_1 + 8);
    FUN_002bae7c();
    FUN_00140e78();
    temp_v0 = *(char *)(param_1 + 0x14);
  }
  return;
}
