/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b0824` (_code @ 0x2b0824, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
extern int FUN_002a8a1c(void);


int FUN_002b0824(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002a8a1c();
  if (0 < temp_v0) {
    do {
      temp_v0 = FUN_002a8a08();
      temp_v0 = FUN_002a89e4((int)*(char *)(temp_v0 + temp_v1 + 0x90f0));
      if (*(unsigned short *)(temp_v0 + 0x46) == param_1) {
        return temp_v0;
      }
      temp_v1 = temp_v1 + 1;
      temp_v0 = FUN_002a8a1c();
    } while (temp_v1 < temp_v0);
  }
  return 0;
}
