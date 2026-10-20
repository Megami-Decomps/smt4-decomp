/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1334` (_code @ 0x2f1334, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002efb80(void);
extern int FUN_002efd36(unsigned int, unsigned int);


unsigned int FUN_002f1334(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002efb80();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002efd36(param_1,param_2), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
