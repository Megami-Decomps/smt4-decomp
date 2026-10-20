/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0058` (_code @ 0x4d0058, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a4844(char *);
extern int FUN_002a4860(void);


unsigned char FUN_004d0058(char *param_1,int param_2)

{
  int temp_v0;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_002a4860();
  }
  else {
    temp_v0 = FUN_002a4844(param_1 + 0x10);
  }
  return temp_v0 + param_2 < *(int *)(param_1 + 8);
}

} /* extern "C" */
