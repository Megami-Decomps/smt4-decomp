/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2414` (_code @ 0x2a2414, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00473530; /* 0x473530 */
extern unsigned int DAT_004ead74; /* 0x4ead74 */
extern unsigned int *DAT_004ead78; /* 0x4ead78 */
extern unsigned int *DAT_004ead7c; /* 0x4ead7c */

extern int FUN_002c00d4(unsigned int *);


unsigned int * FUN_002a2414(void)

{
  int temp_v0;
  
  if (((DAT_00473530 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00473530), temp_v0 != 0)) {
    DAT_004ead78 = (unsigned int *)&DAT_004ead78;
    DAT_004ead74 = 0;
    DAT_004ead7c = (unsigned int *)&DAT_004ead78;
  }
  return &DAT_004ead74;
}
