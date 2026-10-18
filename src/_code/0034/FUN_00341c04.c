/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341c04` (_code @ 0x341c04, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00341c40; /* 0x341c40 */

/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_00341c04(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [128];
  
  puVar1 = temp_v0;
  FUN_002be7fc(temp_v0,&LAB_00341c40,param_2);
  FUN_0029bddc(temp_v0,7);
  *(unsigned char **)(param_1 + 0x28) = puVar1;
  FUN_002a06c8();
  return;
}
