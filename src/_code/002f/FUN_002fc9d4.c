/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc9d4` (_code @ 0x2fc9d4, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00250fc4. */
extern int FUN_0028ec78(unsigned int);
extern unsigned int FUN_0028fde4(unsigned int);
extern int FUN_002a0fac(void);


unsigned int FUN_002fc9d4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0x79f;
  do {
    temp_v0 = FUN_0028ec78(temp_v2);
    if (temp_v0 != 0) {
      temp_v1 = FUN_0028fde4(temp_v2);
      FUN_00250fc4(temp_v2,temp_v1);
      temp_v0 = FUN_002a0fac();
      temp_v0 = temp_v0 + (temp_v2 >> 3);
      *(unsigned char *)(temp_v0 + 0x44) = *(unsigned char *)(temp_v0 + 0x44) | (unsigned char)(1 << (temp_v2 & 7));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x803);
  return 1;
}
