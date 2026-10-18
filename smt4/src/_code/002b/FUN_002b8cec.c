/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8cec` (_code @ 0x2b8cec, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004650a8; /* 0x4650a8 */
extern unsigned int DAT_004650ac; /* 0x4650ac */
extern unsigned int DAT_004650b0; /* 0x4650b0 */
extern unsigned char DAT_004e3c58; /* 0x4e3c58 */

/* Supplied declaration required: aeabi_uidivmod. */


unsigned int FUN_002b8cec(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 < 0x1f) {
    if ((DAT_004650a8 & 1) != 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = *(unsigned int *)(&DAT_004e3c58 + param_1 * 4);
      if (temp_v0 == 1) {
        return 1;
      }
    }
    if ((DAT_004650ac < temp_v0) &&
       (aeabi_uidivmod(temp_v0 - DAT_004650ac,DAT_004650b0), temp_v1 == 0)) {
      return 1;
    }
  }
  return 0;
}
