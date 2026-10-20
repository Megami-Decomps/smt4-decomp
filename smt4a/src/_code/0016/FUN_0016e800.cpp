/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e800` (_code @ 0x16e800, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a80(void);

extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned int DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */

/* Supplied declaration required: FUN_00189a80. */


void FUN_0016e800(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  DAT_0062d201 = 0;
  DAT_0062d202 = 0xedac;
  DAT_0062d200 = 0;
  DAT_0062d204 = param_1;
  DAT_0062d208 = param_2;
  FUN_00189a80();
  return;
}

} /* extern "C" */
