/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e00` (_code @ 0x106e00, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int constructObj0055a284(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_00558960; /* 0x558960 */

/* Supplied declaration required: constructObj0055a284. */


void FUN_00106e00(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558960;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[6] + 4))();
  }
  constructObj0055a284(param_1);
  return;
}

} /* extern "C" */
