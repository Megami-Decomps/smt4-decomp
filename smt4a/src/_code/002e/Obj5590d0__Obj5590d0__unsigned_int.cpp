/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj5590d0C1Ej` (_code @ 0x2e7168, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005590d8; /* 0x5590d8 */

extern int constructObj00558620(int, unsigned int);
extern int FUN_002f7414(unsigned int *);
extern unsigned char _ZN9Obj5590d07vfunc08Ev(void);


int _ZN9Obj5590d0C1Ej(unsigned int *param_1,unsigned int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_005590d8;
  temp_v1 = FUN_002f7414(param_1 + 1);
  temp_v1 = constructObj00558620(temp_v1 + 0x10,param_2);
  *(unsigned int *)(temp_v1 + 0x14) = param_2;
  temp_v0 = _ZN9Obj5590d07vfunc08Ev();
  *(unsigned char *)(temp_v1 + 0x18) = temp_v0;
  return temp_v1 - 0x14;
}

} /* extern "C" */
