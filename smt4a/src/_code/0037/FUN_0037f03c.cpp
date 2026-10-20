/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f03c` (_code @ 0x37f03c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_005702d8; /* 0x5702d8 */
extern unsigned int DAT_005702dc; /* 0x5702dc */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0037f03c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  FUN_003283ac((*(unsigned int *)(temp_v0 + 0x45a0) & DAT_005702d8) == 0 &&
               (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_005702dc) == 0);
  return 1;
}

} /* extern "C" */
