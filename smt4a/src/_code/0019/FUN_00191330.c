/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191330` (_code @ 0x191330, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c0f68; /* 0x5c0f68 */
extern unsigned char DAT_006469a8; /* 0x6469a8 */

/* Supplied declaration required: FUN_0019138c. */
extern int FUN_002eba64(unsigned int *);


unsigned char * FUN_00191330(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_005c0f68 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c0f68), temp_v0 != 0)) {
    FUN_0019138c(&DAT_006469a8);
  }
  return &DAT_006469a8;
}
