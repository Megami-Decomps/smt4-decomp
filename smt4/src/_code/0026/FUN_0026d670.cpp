/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d670` (_code @ 0x26d670, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00293ba8(void);

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00293ba8. */


void FUN_0026d670(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e144;
  *(unsigned int *)(DAT_0044e144 + 0x12e4) = 0;
  FUN_00293ba8();
  *(unsigned char *)(temp_v0 + 0x1e63) = 0;
  return;
}

} /* extern "C" */
