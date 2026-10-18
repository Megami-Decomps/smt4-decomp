/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a0c4` (_code @ 0x33a0c4, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00435d18; /* 0x435d18 */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_003d9fc8. */
/* Supplied declaration required: FUN_003db198. */
extern int FUN_003db420(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003dcb50. */


unsigned char FUN_0033a0c4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0027eb98(DAT_0043427c);
  temp_v1 = FUN_003db420(DAT_00435d18,*(unsigned int *)(temp_v0 + 0x594));
  if (temp_v1 != 0) {
    FUN_003db198(DAT_00435d18);
    FUN_003d9fc8(DAT_00435d18);
    FUN_003dcb50(DAT_00435d18,*(unsigned int *)(temp_v0 + 0x594),1);
  }
  return temp_v1 != 0;
}
