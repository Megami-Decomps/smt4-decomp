/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003565e0` (_code @ 0x3565e0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00420eb8; /* 0x420eb8 */

extern int _ZN9Obj420f70D1Ev(void);


int FUN_003565e0(unsigned int *param_1)

{
  int temp_v0;
  
  param_1[2] = 0;
  temp_v0 = 0;
  *param_1 = (unsigned int)"囈5厴5厨5";
  do {
    if ((int *)param_1[temp_v0 + 3] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[temp_v0 + 3] + 0x2c))();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  param_1[0x3d] = (unsigned int)&DAT_00420eb8;
  if (param_1[0x46] != 0) {
    param_1[0x46] = 0;
  }
  temp_v0 = _ZN9Obj420f70D1Ev();
  *(unsigned char **)(temp_v0 - 0x3c) = &DAT_00420eb8;
  if (*(int *)(temp_v0 - 0x18) != 0) {
    *(unsigned int *)(temp_v0 - 0x18) = 0;
  }
  temp_v0 = _ZN9Obj420f70D1Ev();
  return temp_v0 - 0xb8;
}

} /* extern "C" */
