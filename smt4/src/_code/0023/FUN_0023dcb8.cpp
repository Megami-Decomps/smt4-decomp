/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023dcb8` (_code @ 0x23dcb8, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00229f30(unsigned short);
extern int gameGetOptions(void);
extern unsigned int FUN_002b6b38(unsigned int);


unsigned int FUN_0023dcb8(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_002b6b38(param_1);
  if ((temp_v0 >= 2) && (temp_v0 == 2)) {
    temp_v1 = gameGetOptions();
    temp_v1 = FUN_00229f30(*(unsigned short *)(temp_v1 + 0x46));
    if ((*(unsigned short *)(temp_v1 + 4) & 1) != 0) {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
