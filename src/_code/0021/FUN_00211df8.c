/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211df8` (_code @ 0x211df8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00296f60(void);
extern int FUN_002bf41c(void);
extern int FUN_002c0ac8(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_00211df8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_002bf41c();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002c0ac8(temp_v0);
    if (*(int *)(temp_v1 + 4) == 1) {
      FUN_002c45b8(temp_v0,0);
      return 1;
    }
    *(unsigned int *)(temp_v1 + 0x10) = 0xbe800000;
    *(unsigned char *)(temp_v1 + 0x14) = 1;
  }
  return 1;
}
