/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ba3c` (_code @ 0x13ba3c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001481e4(void);
int FUN_0016007c(void);

extern int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_001481e4. */
/* Supplied declaration required: FUN_0016007c. */


void FUN_0013ba3c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057027c;
  if (DAT_0057027c == 0) {
    temp_v0 = 0x4528;
    FUN_0016007c();
    if (temp_v0 != 0) {
      FUN_001481e4();
    }
  }
  DAT_0057027c = temp_v0;
  return;
}

} /* extern "C" */
