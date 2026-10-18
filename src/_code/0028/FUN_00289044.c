/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289044` (_code @ 0x289044, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002b66ec(void);


unsigned int FUN_00289044(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if ((int)param_2 < 0) {
    temp_v0 = FUN_002b66ec();
    if (*(short *)(temp_v0 + 0x1c) < param_1) {
      return 1;
    }
  }
  else {
    temp_v0 = FUN_002a8a08();
    temp_v2 = 0;
    do {
      if ((((-1 < *(char *)(temp_v0 + temp_v2 + 0x90f0)) && (temp_v1 = FUN_002a89e4(), temp_v1 != 0)) &&
          (*(unsigned short *)(temp_v1 + 0x46) == param_2)) && (*(short *)(temp_v1 + 0xe) < param_1)) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
  }
  return 0;
}
