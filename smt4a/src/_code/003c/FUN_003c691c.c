/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c691c` (_code @ 0x3c691c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014aa78(void);
extern int FUN_00192798(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003ef960. */


unsigned int FUN_003c691c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003ef960(temp_v1,4);
  temp_v2 = FUN_00192798();
  FUN_003283ac(*(unsigned short *)(temp_v2 + temp_v0 * 4));
  return 1;
}
