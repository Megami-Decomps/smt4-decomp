/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e924` (_code @ 0x29e924, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0029efc0(void);


unsigned int FUN_0029e924(char *param_1)

{
  unsigned int temp_v0;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029efc0();
    return temp_v0;
  }
  if (param_1[0x72] == '\0') {
    return *(unsigned int *)(param_1 + 0x5c);
  }
  return 0;
}

} /* extern "C" */
