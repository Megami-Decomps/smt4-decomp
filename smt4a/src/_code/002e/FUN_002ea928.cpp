/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea928` (_code @ 0x2ea928, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030f138(unsigned int, unsigned char *, int);

extern unsigned char DAT_00538b08; /* 0x538b08 */

/* Supplied declaration required: FUN_0030f138. */


unsigned int FUN_002ea928(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f138(param_1,&DAT_00538b08,0);
  return param_1 & 0xff;
}

} /* extern "C" */
