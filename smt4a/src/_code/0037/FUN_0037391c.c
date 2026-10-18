/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037391c` (_code @ 0x37391c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0037391c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003283ac(temp_v0 <= (int)(*(unsigned char *)(temp_v1 + 0x45b8) + 1));
  return 1;
}
