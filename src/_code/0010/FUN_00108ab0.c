/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108ab0` (_code @ 0x108ab0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00113318. */
extern int FUN_002c00e8(unsigned int);
extern int FUN_002c0ac8(void);


unsigned char FUN_00108ab0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c0ac8();
  if ((((*(char *)(temp_v0 + 0xf28) != '\0') && (*(char *)(temp_v0 + 0xf2b) != '\0')) &&
      (temp_v1 = FUN_002c00e8(0), temp_v1 == 0)) && (*(char *)(temp_v0 + 0x1c) != '\0')) {
    FUN_00113318(0);
  }
  return 0;
}
