/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164af0` (_code @ 0x164af0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_uidivmod(unsigned int, unsigned int);

extern unsigned int DAT_005b4008; /* 0x5b4008 */
extern unsigned int DAT_005b400c; /* 0x5b400c */
extern unsigned int DAT_005b4010; /* 0x5b4010 */
extern unsigned char DAT_00640000; /* 0x640000 */

/* Supplied declaration required: __aeabi_uidivmod. */


unsigned int FUN_00164af0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 < 0x1f) {
    if (!((DAT_005b4008 & 1) == 0 && (DAT_005b4008 & 2) == 0)) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = *(unsigned int *)(&DAT_00640000 + param_1 * 4);
      if (temp_v0 == 1) {
        return 1;
      }
    }
    if ((DAT_005b400c < temp_v0) &&
       (__aeabi_uidivmod(temp_v0 - DAT_005b400c,DAT_005b4010), temp_v1 == 0)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
