/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010024e` (_code @ 0x10024e, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_002e2a98(void);


unsigned int FUN_0010024e(unsigned int param_1)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  
  if (param_1 >= 0x100) {
    temp_v1 = 0;
  }
  else {
    piVar3 = (int *)FUN_002e2a98();
    temp_v0 = *(unsigned char *)(*piVar3 + param_1);
    temp_v1 = (unsigned int)temp_v0;
    if (((temp_v0 & 0x98) != 0) && ((temp_v0 & 1) == 0)) {
      temp_v1 = temp_v1 | 0x400;
    }
    if ((temp_v1 & 0x420) != 0) {
      temp_v1 = temp_v1 | 0x800;
    }
    if ((temp_v1 & 0xba) != 0) {
      temp_v1 = temp_v1 | 0x100;
    }
    if ((temp_v1 & 0xbe) != 0) {
      temp_v1 = temp_v1 | 0x200;
    }
    if (((int)(temp_v1 << 0x1a) < 0) && (-1 < (int)(temp_v1 << 0x18))) {
      temp_v1 = temp_v1 | 0x80;
    }
    else {
      temp_v1 = temp_v1 & 0xffffffdf;
    }
    if ((((temp_v1 & 1) != 0) && (-1 < (int)(temp_v1 << 0x19))) || (param_1 == 9)) {
      return temp_v1 | 0x1000;
    }
  }
  return temp_v1;
}
