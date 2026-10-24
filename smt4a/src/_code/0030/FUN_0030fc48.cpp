/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fc48` (_code @ 0x30fc48, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00105ce0(void);

extern unsigned char DAT_0055ae74; /* 0x55ae74 */

/* Supplied declaration required: FUN_00105ce0. */
extern unsigned int FUN_00110298(int, unsigned int);
extern int _Znwj(unsigned int);


unsigned int * FUN_0030fc48(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055ae74;
  temp_v0 = _Znwj(8);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00110298(temp_v0,0);
  }
  param_1[1] = temp_v1;
  temp_v0 = _Znwj(0x20);
  if (temp_v0 != 0) {
    FUN_00105ce0();
  }
  param_1[3] = 0;
  param_1[2] = temp_v0;
  return param_1;
}

} /* extern "C" */
