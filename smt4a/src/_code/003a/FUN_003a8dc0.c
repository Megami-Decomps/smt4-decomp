/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8dc0` (_code @ 0x3a8dc0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_001aba54. */
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003a8dc0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x28) + temp_v0 * 2 + 0x118);
  FUN_001aba54();
  if (temp_v2 != 0) {
    FUN_003283ac((*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}
