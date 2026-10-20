/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330eb8` (_code @ 0x330eb8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035846c(void);

extern unsigned char DAT_005f18c4; /* 0x5f18c4 */
extern unsigned int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */
extern unsigned int DAT_005f1b9c; /* 0x5f1b9c */
extern unsigned int DAT_005f1ba0; /* 0x5f1ba0 */
extern unsigned int DAT_005f1ba4; /* 0x5f1ba4 */
extern unsigned int DAT_005f1ba8; /* 0x5f1ba8 */
extern unsigned int DAT_005f1bac; /* 0x5f1bac */

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_0035846c. */


unsigned int FUN_00330eb8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 == 0x164f) {
    FUN_0035846c();
    DAT_005f1b94 = 0x65;
    DAT_005f1b98 = 5;
    DAT_005f1ba8 = 0x43340000;
    DAT_005f1bac = 0x43340000;
    DAT_005f1b9c = 0xc63b8000;
    DAT_005f1ba0 = 0x42d60000;
    DAT_005f1ba4 = 0x4538e000;
    DAT_005f18c4 = 1;
  }
  return 1;
}

} /* extern "C" */
