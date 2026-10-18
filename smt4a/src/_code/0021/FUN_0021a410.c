/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a410` (_code @ 0x21a410, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(void);


unsigned int FUN_0021a410(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((((((*(short *)(param_1 + 0x5a) != 0) && (temp_v0 = FUN_0018719c(), temp_v0 != 0)) ||
        ((*(short *)(param_1 + 0x5c) != 0 && (temp_v0 = FUN_0018719c(), temp_v0 != 0)))) ||
       ((*(short *)(param_1 + 0x5e) != 0 && (temp_v0 = FUN_0018719c(), temp_v0 != 0)))) ||
      ((*(short *)(param_1 + 0x60) != 0 && (temp_v0 = FUN_0018719c(), temp_v0 != 0)))) ||
     ((*(short *)(param_1 + 0x62) != 0 && (temp_v0 = FUN_0018719c(), temp_v0 != 0)))) {
    temp_v1 = 1;
  }
  return temp_v1;
}
