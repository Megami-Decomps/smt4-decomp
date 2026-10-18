/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d304` (_code @ 0x39d304, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0039d304(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  FUN_003eaf20();
  if ((temp_v1 != 0) && (((unsigned int)*(unsigned short *)(temp_v1 + 0x274) & (1 << (temp_v0 & 0xff))) != 0)) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}
