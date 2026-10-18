/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0ea4` (_code @ 0x1a0ea4, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


short FUN_001a0ea4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = FUN_002c0ec4(1,3);
  temp_v2 = FUN_002c0e9c();
  temp_v5 = 0;
  temp_v3 = FUN_002c0e4c(temp_v1);
  if (temp_v3 != 0) {
    do {
      if (*(unsigned short *)(temp_v2 + temp_v5 * 4) == param_1) {
        temp_v0 = *(short *)(temp_v2 + temp_v5 * 4 + 2);
        if (temp_v0 == 0) {
          return 0x32;
        }
        return temp_v0;
      }
      temp_v5 = temp_v5 + 1;
      temp_v4 = FUN_002c0e4c(temp_v1);
    } while (temp_v5 < temp_v4);
  }
  return 0x32;
}
