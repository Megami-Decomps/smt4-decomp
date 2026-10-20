/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202410` (_code @ 0x202410, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184c00(int, int, int);

/* Supplied declaration required: FUN_00184c00. */


void FUN_00202410(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x1b20);
  if (temp_v0 != '\x02' && temp_v0 != '\x01') {
    FUN_00184c00(param_1 + 0x1a08,0x17,0);
    *(char *)(param_1 + 0x1b20) = '\x01';
  }
  return;
}

} /* extern "C" */
