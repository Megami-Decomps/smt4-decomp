/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035bf2c` (_code @ 0x35bf2c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00163e40(void);
extern int FUN_00164a9c(int);
extern int FUN_003c0db0(void);


void FUN_0035bf2c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_003c0db0();
  if ((temp_v0 != -1) && (temp_v1 = FUN_00163e40(), temp_v1 != 0)) {
    temp_v0 = FUN_00164a9c(temp_v0);
    *(unsigned char *)(temp_v0 + 0xb8) = 0;
  }
  return;
}

} /* extern "C" */
