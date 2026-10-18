/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039dd58` (_code @ 0x39dd58, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001568f8. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0039dd58(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  FUN_001568f8(temp_v2,temp_v0);
  FUN_003283ac(((unsigned int)*(unsigned short *)(temp_v2 + 0x110) & (1 << (temp_v1 & 0xff))) != 0);
  return 1;
}
