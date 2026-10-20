/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdb00` (_code @ 0x2cdb00, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275e4c(void);

extern unsigned char DAT_0049fba0; /* 0x49fba0 */
extern unsigned int DAT_0049fc38; /* 0x49fc38 */
extern unsigned int DAT_0049fc3c; /* 0x49fc3c */
extern unsigned int DAT_0049fc40; /* 0x49fc40 */
extern unsigned int DAT_0049fc44; /* 0x49fc44 */
extern unsigned int DAT_0049fc48; /* 0x49fc48 */
extern unsigned int DAT_0049fc4c; /* 0x49fc4c */
extern unsigned int DAT_0049fc50; /* 0x49fc50 */

/* Supplied declaration required: FUN_00275e4c. */
extern int FUN_00296cc8(void);


unsigned int FUN_002cdb00(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 == 0x164f) {
    FUN_00275e4c();
    DAT_0049fc38 = 0x65;
    DAT_0049fc3c = 5;
    DAT_0049fc4c = 0x43340000;
    DAT_0049fc50 = 0x43340000;
    DAT_0049fc40 = 0xc63b8000;
    DAT_0049fc44 = 0x42d60000;
    DAT_0049fc48 = 0x4538e000;
    DAT_0049fba0 = 1;
  }
  return 1;
}

} /* extern "C" */
