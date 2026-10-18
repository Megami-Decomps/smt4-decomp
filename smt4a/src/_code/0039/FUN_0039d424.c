/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d424` (_code @ 0x39d424, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */

extern unsigned int FUN_00236038(void);
extern int FUN_003020fc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0039d424(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v1 = FUN_003020fc(*(unsigned int *)(temp_v1 + 0x20),temp_v0);
  if (temp_v1 != 0) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}
