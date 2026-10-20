/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe454` (_code @ 0x2fe454, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030f138(unsigned int, unsigned char *, int);

extern unsigned char DAT_0053891a; /* 0x53891a */

/* Supplied declaration required: FUN_0030f138. */


unsigned int FUN_002fe454(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f138(param_1,&DAT_0053891a,0);
  return param_1 & 0xffff;
}

} /* extern "C" */
