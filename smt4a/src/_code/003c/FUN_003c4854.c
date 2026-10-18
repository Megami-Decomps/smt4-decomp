/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4854` (_code @ 0x3c4854, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_002b24dc. */
/* Supplied declaration required: FUN_00336da0. */
/* Supplied declaration required: FUN_0034efe0. */
extern int FUN_003aa068(int);
extern int FUN_004aaa4c(int);
extern int FUN_004aaf94(int);
extern int FUN_004abac8(int);
extern int FUN_004abb30(int);


unsigned int FUN_003c4854(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004aaa4c(DAT_0057a9c8);
  if (((temp_v0 != 0) && (temp_v0 = FUN_004abac8(DAT_0057a9c8), temp_v0 != 0)) &&
     (temp_v0 = FUN_004abb30(DAT_0057a9c8), temp_v0 != 0)) {
    temp_v0 = FUN_004aaf94(DAT_0057a9c8);
    if ((temp_v0 != 0) && (temp_v0 = FUN_003aa068(DAT_0057a9c8 + 8), temp_v0 != 0)) {
      FUN_00336da0(DAT_0057a9c8 + 8);
    }
    temp_v0 = DAT_0057a9c8 + 0x24bc;
    FUN_0034efe0();
    if (temp_v0 != 0) {
      FUN_002b24dc(DAT_0057a9c8 + 0x24bc);
    }
    return 1;
  }
  return 0;
}
