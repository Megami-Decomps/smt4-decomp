/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002701c4` (_code @ 0x2701c4, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_0044de38; /* 0x44de38 */
extern unsigned int DAT_0044de3c; /* 0x44de3c */
extern unsigned int DAT_0044de40; /* 0x44de40 */

extern unsigned int FUN_0026b830(void);
extern unsigned int FUN_0026b844(void);
/* Supplied declaration required: FUN_0026e594. */
/* Supplied declaration required: FUN_002adb40. */
/* Supplied declaration required: FUN_002bcf58. */
extern unsigned int FUN_002c0b94(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5a6c. */
/* Supplied declaration required: FUN_002e0b50. */


void FUN_002701c4(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0044de38 != 0) {
    temp_v0 = FUN_0026b844();
    FUN_002bcf58(temp_v0,DAT_0044de38,0x80);
    temp_v0 = FUN_0026b830();
    FUN_002adb40(temp_v0,DAT_0044de3c);
    temp_v0 = FUN_002c0b94();
    FUN_002bcf58(temp_v0,DAT_0044de40,0x24d28);
    FUN_002e0b50();
    FUN_002c5a6c();
    FUN_0026e594(DAT_00433158);
    FUN_002c4360(DAT_0044de38);
    FUN_002c4360(DAT_0044de3c);
    FUN_002c4360(DAT_0044de40);
    DAT_0044de38 = 0;
    DAT_0044de3c = 0;
    DAT_0044de40 = 0;
  }
  return;
}
