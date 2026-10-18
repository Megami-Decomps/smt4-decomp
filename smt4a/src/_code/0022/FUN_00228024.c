/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228024` (_code @ 0x228024, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


short FUN_00228024(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = FUN_00187180(1,3);
  temp_v2 = FUN_00192798();
  temp_v5 = 0;
  temp_v3 = FUN_00192748(temp_v1);
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
      temp_v4 = FUN_00192748(temp_v1);
    } while (temp_v5 < temp_v4);
  }
  return 0x32;
}
