/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f292c` (_code @ 0x2f292c, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineUrlDestroy(unsigned int *);
int FUN_002eac60(unsigned int *, int);
int FUN_002eac8e(unsigned int *, int);

typedef int romwright_code(...);
extern unsigned char DAT_0055b134; /* 0x55b134 */
extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002eac60. */
/* Supplied declaration required: FUN_002eac8e. */


unsigned int * FUN_002f292c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b134;
  FUN_002eac60(param_1,0);
  FUN_002eac8e(param_1,0);
  param_1 = param_1 + 2;
  (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)) + 0x10))();
  onlineUrlDestroy(param_1);
  return param_1 + -2;
}

} /* extern "C" */
