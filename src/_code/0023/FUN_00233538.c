/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233538` (_code @ 0x233538, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0029ebdc(char *);
extern int FUN_0029f260(void);


unsigned char FUN_00233538(char *param_1,int param_2)

{
  int temp_v0;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029f260();
  }
  else {
    temp_v0 = FUN_0029ebdc(param_1 + 0x10);
  }
  return temp_v0 + param_2 < *(int *)(param_1 + 8);
}
