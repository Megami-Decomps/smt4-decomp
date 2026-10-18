/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372908` (_code @ 0x372908, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */

extern unsigned short FUN_00236038(void);
extern int FUN_004ee568(unsigned int);


unsigned int FUN_00372908(void)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v1 = *(int *)(temp_v1 + 0x28);
  *(unsigned short *)(temp_v1 + 0x1be) = 8;
  *(unsigned short *)(temp_v1 + 0x1c0) = temp_v0;
  return 1;
}
