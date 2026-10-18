/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d174` (_code @ 0x31d174, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0031d1a0(void);


unsigned int FUN_0031d174(char *param_1)

{
  unsigned int temp_v0;
  
  if (*param_1 == '\x01') {
    if (param_1[0x72] == '\0') {
      temp_v0 = *(unsigned int *)(param_1 + 0x58);
    }
    else {
      temp_v0 = 0;
    }
    return temp_v0;
  }
  temp_v0 = FUN_0031d1a0();
  return temp_v0;
}
