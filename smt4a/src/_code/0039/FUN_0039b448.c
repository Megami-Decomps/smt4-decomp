/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b448` (_code @ 0x39b448, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(unsigned int);
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0039b448(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00163e40(temp_v0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_00164a9c(temp_v0);
    *(unsigned int *)(temp_v2 + 0x6c) = *(unsigned int *)(temp_v2 + 0x10);
    *(unsigned int *)(temp_v2 + 100) = 0;
    *(unsigned int *)(temp_v2 + 0x68) = temp_v1;
  }
  return 1;
}
