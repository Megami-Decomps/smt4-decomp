/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ff54` (_code @ 0x26ff54, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_0044de38; /* 0x44de38 */
extern unsigned int DAT_0044de3c; /* 0x44de3c */
extern unsigned int DAT_0044de40; /* 0x44de40 */

extern unsigned int FUN_0026b5c8(void);
extern unsigned int FUN_0026b5dc(void);
/* Supplied declaration required: FUN_0026e324. */
/* Supplied declaration required: FUN_002ad8b4. */
extern unsigned int FUN_002c09bc(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c587c. */
/* Supplied declaration required: FUN_002e0bc4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026ff54(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0044de38 != 0) {
    temp_v0 = FUN_0026b5dc();
    rt_memcpy_w(temp_v0,DAT_0044de38,0x80);
    temp_v0 = FUN_0026b5c8();
    FUN_002ad8b4(temp_v0,DAT_0044de3c);
    temp_v0 = FUN_002c09bc();
    rt_memcpy_w(temp_v0,DAT_0044de40,0x24d28);
    FUN_002e0bc4();
    FUN_002c587c();
    FUN_0026e324(DAT_00433158);
    FUN_002c415c(DAT_0044de38);
    FUN_002c415c(DAT_0044de3c);
    FUN_002c415c(DAT_0044de40);
    DAT_0044de38 = 0;
    DAT_0044de3c = 0;
    DAT_0044de40 = 0;
  }
  return;
}
