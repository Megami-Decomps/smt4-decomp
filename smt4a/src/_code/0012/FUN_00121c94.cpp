/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121c94` (_code @ 0x121c94, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(unsigned char *, int, unsigned int);

extern unsigned int DAT_00594a08; /* 0x594a08 */
extern unsigned char DAT_006302d0; /* 0x6302d0 */

/* Supplied declaration required: rt_memcpy. */


void FUN_00121c94(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    if (((param_1 != 0) && (param_2 >= 8)) && (param_2 < 0x21)) {
      DAT_00594a08 = param_2;
      rt_memcpy(&DAT_006302d0,param_1,param_2);
    }
    return;
  }
  DAT_00594a08 = 0;
  return;
}

} /* extern "C" */
