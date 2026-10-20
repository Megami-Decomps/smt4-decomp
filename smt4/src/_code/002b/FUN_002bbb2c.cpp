/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bbb2c` (_code @ 0x2bbb2c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad4f8(void);

extern unsigned char DAT_004d4200; /* 0x4d4200 */
extern unsigned char DAT_004d4201; /* 0x4d4201 */
extern unsigned short DAT_004d4202; /* 0x4d4202 */
extern unsigned int DAT_004d4204; /* 0x4d4204 */
extern unsigned int DAT_004d4208; /* 0x4d4208 */

/* Supplied declaration required: FUN_002ad4f8. */


void FUN_002bbb2c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  DAT_004d4201 = 0;
  DAT_004d4202 = 0xbca3;
  DAT_004d4200 = 0;
  DAT_004d4204 = param_1;
  DAT_004d4208 = param_2;
  FUN_002ad4f8();
  return;
}

} /* extern "C" */
