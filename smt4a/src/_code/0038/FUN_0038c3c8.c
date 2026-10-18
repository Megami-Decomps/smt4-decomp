/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c3c8` (_code @ 0x38c3c8, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0038c3c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  FUN_003283ac(*(unsigned short *)(*(int *)(temp_v1 + 0x28) + temp_v0 * 2 + 0x152) >> 10 == 3);
  return 1;
}
