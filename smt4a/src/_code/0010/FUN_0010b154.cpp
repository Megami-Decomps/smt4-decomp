/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b154` (_code @ 0x10b154, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e98ea(unsigned char *, unsigned int, int);

extern unsigned char DAT_00630430; /* 0x630430 */

/* Supplied declaration required: FUN_002e98ea. */


void FUN_0010b154(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e98ea(&DAT_00630430,*(unsigned int *)(param_1 + 4),0x7f);
  return;
}

} /* extern "C" */
