/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c70b4` (_code @ 0x1c70b4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_001bd5f8(void);
extern int FUN_001cd428(unsigned int, unsigned int, unsigned int);


unsigned char FUN_001c70b4(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(unsigned char *)(param_1 + 0xd) == 0xff)) && (param_2 < 2)) {
    temp_v0 = FUN_001bd5f8();
    temp_v1 = FUN_001cd428(temp_v0,1,param_2);
    if (temp_v1 != 0) {
      *(char *)(param_1 + 0xd) = (char)param_2;
    }
    return temp_v1 != 0;
  }
  return 0;
}

} /* extern "C" */
