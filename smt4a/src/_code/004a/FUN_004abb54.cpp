/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004abb54` (_code @ 0x4abb54, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039ebcc(void);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_0038e704(int);
/* Supplied declaration required: FUN_0039ebcc. */


void FUN_004abb54(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0038e704((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  if (temp_v0 != 0) {
    FUN_0039ebcc();
  }
  return;
}

} /* extern "C" */
