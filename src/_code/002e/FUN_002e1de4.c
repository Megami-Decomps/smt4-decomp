/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1de4` (_code @ 0x2e1de4, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea9c; /* 0x44ea9c */
extern int DAT_0044eab0; /* 0x44eab0 */

extern int FUN_0024c5ec(int);
extern int FUN_0028ca7c(void);
/* Supplied declaration required: FUN_0028cabc. */
/* Supplied declaration required: FUN_002c0a6c. */


void FUN_002e1de4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (DAT_0044eab0 != 0) {
    FUN_002c0a6c();
    DAT_0044eab0 = 0;
  }
  temp_v0 = DAT_0044ea9c;
  if ((DAT_0044ea9c != 0) && (temp_v1 = FUN_0024c5ec(DAT_0044ea9c), temp_v1 != 0)) {
    if (*(short *)(temp_v0 + 0x1c) != 1) {
      if (*(short *)(temp_v0 + 0x1c) != 9) {
        return;
      }
      FUN_0028cabc();
    }
    else {
      temp_v1 = FUN_0028ca7c();
    }
    if (temp_v1 != 0) {
      DAT_0044eab0 = temp_v1;
    }
  }
  return;
}
