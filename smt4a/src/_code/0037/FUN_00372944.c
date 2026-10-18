/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372944` (_code @ 0x372944, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283c8. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_00372944(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  *(unsigned short *)(*(int *)(temp_v1 + 0x28) + 0x1be) = 0xc;
  temp_v1 = FUN_0014aa78();
  *(unsigned int *)(temp_v1 + 0x2008) = temp_v0 | 0x10000;
  *(int *)(temp_v1 + 0x200c) = (int)(temp_v0 | 0x10000) >> 0x1f;
  FUN_003283c8(1);
  return 1;
}
