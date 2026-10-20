/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0400` (_code @ 0x2f0400, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012350c(int, unsigned int, unsigned int);

extern unsigned char DAT_00594ad8; /* 0x594ad8 */

/* Supplied declaration required: FUN_0012350c. */


int FUN_002f0400(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_00594ad8 + 0x50)) != 0) {
    temp_v0 = (*(int *)((unsigned char *)&DAT_00594ad8 + 0x50));
    FUN_0012350c((*(int *)((unsigned char *)&DAT_00594ad8 + 0x50)),param_1,param_2);
    return temp_v0;
  }
  return 1;
}

} /* extern "C" */
