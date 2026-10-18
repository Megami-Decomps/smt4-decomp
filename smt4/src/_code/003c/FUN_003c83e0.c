/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c83e0` (_code @ 0x3c83e0, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00229f30(unsigned short);
extern int FUN_002b6b20(void);
extern int FUN_002b6b38(void);


unsigned int FUN_003c83e0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b6b38();
  if (temp_v0 == 0) {
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return 0;
    }
    temp_v0 = FUN_002b6b20();
    temp_v0 = FUN_00229f30(*(unsigned short *)(temp_v0 + 0x46));
    if (*(char *)(temp_v0 + 2) != '\0') {
      return 0;
    }
  }
  return 1;
}
