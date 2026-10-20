/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418768` (_code @ 0x418768, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagBlockGet(void);
extern unsigned int FUN_001bd100(unsigned int);


unsigned int FUN_00418768(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  
  temp_v2 = 0;
  while ((((temp_v0 = gameFlagBlockGet(), (*(unsigned char *)(temp_v0 + temp_v2 * 4 + 0x2a2) & 8) == 0 ||
           (temp_v1 = FUN_001bd100(temp_v2), (temp_v1 & ~param_1) != 0)) ||
          (temp_v1 = FUN_001bd100(temp_v2), (param_1 & ~temp_v1) != 0)) ||
         (temp_v0 = gameFlagBlockGet(), (*(unsigned char *)(temp_v0 + temp_v2 * 4 + 0x2a2) & 0x10) != 0))) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 400) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
