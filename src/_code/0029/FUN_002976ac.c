/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002976ac` (_code @ 0x2976ac, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c32f0(unsigned int, int, unsigned int);


unsigned int FUN_002976ac(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 < 0x43) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x493830) != 0) {
      return 1;
    }
    if (*(char *)(temp_v0 + 0x493838) == '\0') {
      temp_v1 = FUN_002c32f0(*(unsigned int *)(temp_v0 + 0x49382c),temp_v0 + 0x493834,0);
      *(unsigned int *)(temp_v0 + 0x493830) = temp_v1;
      return 1;
    }
  }
  return 0;
}
