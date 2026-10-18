/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151274` (_code @ 0x151274, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_00640370; /* 0x640370 */
extern int DAT_00640378; /* 0x640378 */
extern int DAT_0064037c; /* 0x64037c */
extern int DAT_00640380; /* 0x640380 */
extern unsigned int DAT_00640384; /* 0x640384 */

/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_00151274(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00640378 < 0) || (temp_v0 = (*(romwright_code *)DAT_00640370[DAT_00640378 * 3 + 2])(), temp_v0 == 0))
     && (temp_v0 = (*(romwright_code *)DAT_00640370[2])(), temp_v0 == 0)) {
    if (DAT_0064037c != -1) {
      (*(romwright_code *)DAT_00640370[DAT_0064037c * 3])(DAT_00640380,DAT_00640384);
      DAT_00640378 = DAT_0064037c;
      if (DAT_00640380 != 0) {
        FUN_0019a5a0();
      }
      DAT_00640380 = 0;
      DAT_0064037c = 0xffffffff;
      DAT_00640384 = 0;
      return 0;
    }
    DAT_00640378 = -1;
    if (*DAT_00640370 != 0) {
      DAT_0064037c = 0;
      DAT_00640380 = 0;
      DAT_00640384 = 0;
    }
  }
  return 0;
}
