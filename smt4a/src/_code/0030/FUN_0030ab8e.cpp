/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ab8e` (_code @ 0x30ab8e, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int onlineStringCopyConstruct(int, int);
extern int FUN_0031037a(void);


int FUN_0030ab8e(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0031037a();
  if (temp_v0 + 0x10 != 0) {
    temp_v1 = onlineStringCopyConstruct(temp_v0 + 0x10,param_2);
    *(unsigned int *)(temp_v1 + 8) = *(unsigned int *)(param_2 + 8);
  }
  return temp_v0;
}

} /* extern "C" */
