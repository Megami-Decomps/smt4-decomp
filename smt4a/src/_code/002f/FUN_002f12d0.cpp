/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f12d0` (_code @ 0x2f12d0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002f12d0(unsigned int *param_1,char *param_2)

{
  unsigned int temp_v0;
  
  if (*param_2 == '\0') {
    temp_v0 = 0x80010001;
  }
  else {
    temp_v0 = 0x10001;
  }
  *param_1 = temp_v0;
  param_1[2] = 0x7d;
  param_1[1] = 
  (unsigned int)"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/Result.cpp";
  return;
}

} /* extern "C" */
