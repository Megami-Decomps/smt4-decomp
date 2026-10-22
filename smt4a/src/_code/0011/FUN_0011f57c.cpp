/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f57c` (_code @ 0x11f57c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN10WordVectorC1Ej(unsigned int *, int);

extern unsigned char DAT_0055ac80; /* 0x55ac80 */
extern unsigned char DAT_0055ad9c; /* 0x55ad9c */

/* Supplied declaration required: _ZN10WordVectorC1Ej. */


void FUN_0011f57c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055ad9c;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1 = param_1 + 2;
  _ZN10WordVectorC1Ej(param_1,0);
  param_1[-2] = (unsigned int)&DAT_0055ac80;
  return;
}

} /* extern "C" */
