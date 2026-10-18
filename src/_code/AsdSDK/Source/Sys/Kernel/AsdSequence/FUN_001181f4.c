/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001181f4` (_code @ 0x1181f4, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_004e3f4c; /* 0x4e3f4c */
extern int DAT_004e3f54; /* 0x4e3f54 */
extern int DAT_004e3f58; /* 0x4e3f58 */
extern int DAT_004e3f5c; /* 0x4e3f5c */
extern unsigned int DAT_004e3f60; /* 0x4e3f60 */

/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_001181f4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_004e3f54 < 0) || (temp_v0 = (*(romwright_code *)DAT_004e3f4c[DAT_004e3f54 * 3 + 2])(), temp_v0 == 0))
     && (temp_v0 = (*(romwright_code *)DAT_004e3f4c[2])(), temp_v0 == 0)) {
    if (DAT_004e3f58 != -1) {
      (*(romwright_code *)DAT_004e3f4c[DAT_004e3f58 * 3])(DAT_004e3f5c,DAT_004e3f60);
      DAT_004e3f54 = DAT_004e3f58;
      if (DAT_004e3f5c != 0) {
        FUN_002c4360();
      }
      DAT_004e3f5c = 0;
      DAT_004e3f58 = 0xffffffff;
      DAT_004e3f60 = 0;
      return 0;
    }
    DAT_004e3f54 = -1;
    if (*DAT_004e3f4c != 0) {
      DAT_004e3f58 = 0;
      DAT_004e3f5c = 0;
      DAT_004e3f60 = 0;
    }
  }
  return 0;
}
