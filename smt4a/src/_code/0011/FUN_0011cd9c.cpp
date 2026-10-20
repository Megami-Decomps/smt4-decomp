/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cd9c` (_code @ 0x11cd9c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj558be0D1Ev(int);
int FUN_00311024(...);
int FUN_0031105e(unsigned int *, unsigned int *);
int FUN_00311082(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055a934; /* 0x55a934 */

/* Supplied declaration required: _ZN9Obj558be0D1Ev. */
/* Supplied declaration required: FUN_00311024. */
/* Supplied declaration required: FUN_0031105e. */
/* Supplied declaration required: FUN_00311082. */


void FUN_0011cd9c(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a934;
  FUN_00311082(param_1[0x13],param_1[99]);
  FUN_00311082(param_1[0x13],param_1[0x87]);
  FUN_0031105e(param_1 + 0x52,param_1 + 0x53);
  FUN_0031105e(param_1 + 0x76,param_1 + 0x77);
  if ((int *)param_1[0x75] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x75] + 4))();
  }
  temp_v0 = FUN_00311024(param_1 + 0x76);
  temp_v0 = FUN_00311024(temp_v0 - 0x90);
  _ZN9Obj558be0D1Ev(temp_v0 - 0x148);
  return;
}

} /* extern "C" */
