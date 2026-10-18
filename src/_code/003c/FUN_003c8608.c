/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8608` (_code @ 0x3c8608, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0022a0c4(unsigned short);
extern int FUN_002b6e60(void);
extern int FUN_002b6e78(void);


unsigned int FUN_003c8608(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b6e78();
  if (temp_v0 == 0) {
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return 0;
    }
    temp_v0 = FUN_002b6e60();
    temp_v0 = FUN_0022a0c4(*(unsigned short *)(temp_v0 + 0x46));
    if (*(char *)(temp_v0 + 2) != '\0') {
      return 0;
    }
  }
  return 1;
}
