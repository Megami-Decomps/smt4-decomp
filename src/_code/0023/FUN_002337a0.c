/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002337a0` (_code @ 0x2337a0, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00240ea4(char *);
extern int FUN_0029e3bc(void);
extern int FUN_0029ebdc(char *);
extern int FUN_0029f260(void);


int FUN_002337a0(char *param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029f260();
  }
  else {
    temp_v0 = FUN_0029ebdc(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = FUN_0029e3bc();
  }
  else {
    temp_v1 = FUN_00240ea4(param_1 + 0x10);
  }
  return temp_v1 + temp_v0;
}
