/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002844e4` (_code @ 0x2844e4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00165088(int, int);

extern int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: FUN_00165088. */


void FUN_002844e4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f58c;
  if (*(char *)(DAT_0057f58c + 8) != '\0' && DAT_0057f58c != 0) {
    FUN_00165088(DAT_0057f58c,*(unsigned char *)(DAT_0057f58c + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  return;
}

} /* extern "C" */
