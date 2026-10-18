/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227e4c` (_code @ 0x227e4c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00435d0c; /* 0x435d0c */

extern int FUN_002b4414(int, unsigned int, unsigned int);
extern unsigned int FUN_002c30c4(unsigned int);


unsigned int FUN_00227e4c(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    temp_v2 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1cfc) + temp_v2 * 0x16 + 0x58;
      if (temp_v3 != 0) {
        temp_v0 = FUN_002c30c4(DAT_00435d0c);
        temp_v1 = FUN_002b4414(temp_v3,DAT_00435d0c,temp_v0);
        if (temp_v1 == 0) {
          return (unsigned int)*(unsigned short *)(temp_v3 + 0x12);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0xffffffff;
}
