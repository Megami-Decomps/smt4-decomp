/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fca4c` (_code @ 0x2fca4c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00250d84. */
extern int FUN_0028e9d4(unsigned int);
extern unsigned int FUN_0028fb40(unsigned int);
extern int FUN_002a0d0c(void);


unsigned int FUN_002fca4c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0x79f;
  do {
    temp_v0 = FUN_0028e9d4(temp_v2);
    if (temp_v0 != 0) {
      temp_v1 = FUN_0028fb40(temp_v2);
      FUN_00250d84(temp_v2,temp_v1);
      temp_v0 = FUN_002a0d0c();
      temp_v0 = temp_v0 + (temp_v2 >> 3);
      *(unsigned char *)(temp_v0 + 0x44) = *(unsigned char *)(temp_v0 + 0x44) | (unsigned char)(1 << (temp_v2 & 7));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x803);
  return 1;
}
