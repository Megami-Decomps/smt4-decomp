/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fc14` (_code @ 0x30fc14, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055ae74; /* 0x55ae74 */


unsigned int * FUN_0030fc14(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055ae74;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[1] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 4))();
  }
  return param_1;
}
