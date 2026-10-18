/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023de18` (_code @ 0x23de18, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0022a0c4(unsigned short);
extern int FUN_002b6e60(void);
extern unsigned int FUN_002b6e78(void);


unsigned int FUN_0023de18(void)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_002b6e78();
  if ((temp_v0 >= 2) && (temp_v0 == 2)) {
    temp_v1 = FUN_002b6e60();
    temp_v1 = FUN_0022a0c4(*(unsigned short *)(temp_v1 + 0x46));
    if ((*(unsigned short *)(temp_v1 + 4) & 1) != 0) {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
