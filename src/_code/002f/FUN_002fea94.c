/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fea94` (_code @ 0x2fea94, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044d04c; /* 0x44d04c */

/* Supplied declaration required: FUN_002a4d14. */
extern int FUN_002c08f0(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c6a10. */


void FUN_002fea94(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002a4d14();
  temp_v0 = FUN_002c08f0(param_1);
  if (*(int *)(temp_v0 + 100) != 0) {
    FUN_002c6a10();
    *(unsigned int *)(temp_v0 + 100) = 0;
  }
  FUN_002c415c(temp_v0);
  DAT_0044d04c = 0;
  return;
}
