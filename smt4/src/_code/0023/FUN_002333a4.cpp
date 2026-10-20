/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002333a4` (_code @ 0x2333a4, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0029e93c(char *);
extern int FUN_0029efc0(void);


unsigned char FUN_002333a4(char *param_1,int param_2)

{
  int temp_v0;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029efc0();
  }
  else {
    temp_v0 = FUN_0029e93c(param_1 + 0x10);
  }
  return temp_v0 + param_2 < *(int *)(param_1 + 8);
}

} /* extern "C" */
