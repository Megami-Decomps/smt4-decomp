/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d3fc` (_code @ 0x23d3fc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00476628; /* 0x476628 */
extern unsigned int DAT_004efd2c; /* 0x4efd2c */
extern unsigned int DAT_004efd30; /* 0x4efd30 */
extern unsigned int DAT_004efd34; /* 0x4efd34 */

extern int FUN_002bfefc(unsigned int *);


unsigned int * FUN_0023d3fc(void)

{
  int temp_v0;
  
  if (((DAT_00476628 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476628), temp_v0 != 0)) {
    DAT_004efd2c = 0;
    DAT_004efd30 = 0;
    DAT_004efd34 = 0;
  }
  return &DAT_004efd2c;
}
