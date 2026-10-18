/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001042dc` (_code @ 0x1042dc, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00464c40; /* 0x464c40 */
extern unsigned int DAT_004daed8; /* 0x4daed8 */
extern unsigned int DAT_004daedc; /* 0x4daedc */
extern unsigned int DAT_004daee0; /* 0x4daee0 */
extern unsigned int DAT_004daee4; /* 0x4daee4 */


void FUN_001042dc(void)

{
  DAT_004daed8 = 0x3f800000;
  DAT_004daedc = 0x3f800000;
  DAT_004daee0 = 0x3f800000;
  DAT_004daee4 = 0x3f800000;
  DAT_00464c40 = &DAT_004daed8;
  return;
}
