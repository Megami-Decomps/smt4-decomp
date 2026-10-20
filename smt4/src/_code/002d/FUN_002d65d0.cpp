/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d65d0` (_code @ 0x2d65d0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bf244(void);
extern int FUN_002c08f0(int);
extern int FUN_002e15cc(int);


void FUN_002d65d0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 1;
  do {
    temp_v0 = FUN_002e15cc(temp_v2);
    if ((temp_v0 != -1) && (temp_v1 = FUN_002bf244(), temp_v1 != 0)) {
      temp_v0 = FUN_002c08f0(temp_v0);
      *(unsigned char *)(temp_v0 + 0x8c) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}

} /* extern "C" */
