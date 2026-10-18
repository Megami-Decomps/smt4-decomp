/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d200` (_code @ 0x38d200, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_0038d200(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  aeabi_idivmod(*(unsigned char *)(temp_v1 + 0x45b8) + 1,temp_v0);
  FUN_003283ac(temp_v2);
  return 1;
}
