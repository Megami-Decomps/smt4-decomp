/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5a5c` (_code @ 0x2b5a5c, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Instruction at (ram,0x002b5b0c) overlaps instruction at (ram,0x002b5b0a)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int FUN_002b5a5c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  do {
    temp_v1 = *(short *)(param_1 + temp_v4 * 2);
    if (temp_v1 == 0x3a) {
      if (temp_v2 != 0 || temp_v3 != 0) {
        return 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v0 = temp_v2 >> 0x18;
    temp_v5 = (unsigned int)(char)temp_v1;
    temp_v4 = temp_v4 + 1;
    temp_v2 = temp_v5 | (temp_v2 << 8);
    temp_v3 = temp_v0 | (temp_v3 << 8) | ((int)temp_v5 >> 0x1f);
  } while (temp_v4 < 8);
  temp_v2 = 0;
  temp_v3 = 0;
  if (temp_v2 != 0 || temp_v3 != 0) {
    return 0;
  }
  halt_baddata();
}
