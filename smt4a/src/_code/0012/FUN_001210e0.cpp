/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001210e0` (_code @ 0x1210e0, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00310284(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_0055af44; /* 0x55af44 */

/* Supplied declaration required: FUN_00310284. */


unsigned int * FUN_001210e0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055af44;
  FUN_00310284(param_1);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}

} /* extern "C" */
