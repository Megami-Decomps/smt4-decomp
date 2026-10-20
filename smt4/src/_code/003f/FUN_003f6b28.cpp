/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6b28` (_code @ 0x3f6b28, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003b3160(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0044e990; /* 0x44e990 */

/* Supplied declaration required: FUN_003b3160. */


unsigned int FUN_003f6b28(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((*(romwright_code * *)((unsigned char *)&DAT_0044e990 + 0x4)) == (romwright_code *)0x0) {
    temp_v0 = 0x12;
  }
  else if (param_1 == (unsigned int *)0x0) {
    temp_v0 = 1;
  }
  else {
    FUN_003b3160(param_1[1]);
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e990 + 0x4)))(param_1[1]);
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e990 + 0x4)))(*param_1);
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e990 + 0x4)))(param_1);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
