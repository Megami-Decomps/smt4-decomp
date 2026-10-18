/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b066c` (_code @ 0x2b066c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
extern int FUN_002a8778(void);


int FUN_002b066c(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002a8778();
  if (0 < temp_v0) {
    do {
      temp_v0 = FUN_002a8764();
      temp_v0 = FUN_002a8740((int)*(char *)(temp_v0 + temp_v1 + 0x90f0));
      if (*(unsigned short *)(temp_v0 + 0x46) == param_1) {
        return temp_v0;
      }
      temp_v1 = temp_v1 + 1;
      temp_v0 = FUN_002a8778();
    } while (temp_v1 < temp_v0);
  }
  return 0;
}
