/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041862c` (_code @ 0x41862c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);
extern unsigned int FUN_001bd100(unsigned int);


int FUN_0041862c(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = FUN_001bd100(temp_v2);
    if ((temp_v0 & ~param_1) == 0) {
      temp_v0 = FUN_001bd100(temp_v2);
      if ((((param_1 & ~temp_v0) == 0) && (temp_v2 < 0x15e)) &&
         (temp_v1 = FUN_001ab940(), (*(unsigned char *)(temp_v1 + temp_v2 * 4 + 0x2a0) & 8) != 0)) {
        temp_v3 = temp_v3 + 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 400);
  return temp_v3;
}
