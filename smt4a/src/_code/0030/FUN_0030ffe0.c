/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ffe0` (_code @ 0x30ffe0, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e92e4(void);
extern unsigned int FUN_0030ffe0(int, int);


unsigned int FUN_0030ffe0(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (param_1 != 0) {
    if (param_2 != 0) {
      temp_v0 = FUN_002e92e4();
      if (temp_v0 == 0) {
        return 1;
      }
      return 0;
    }
    param_2 = 0x31000c;
  }
  else {
    param_1 = 0x31000c;
  }
  temp_v1 = FUN_0030ffe0(param_1,param_2);
  return temp_v1;
}
