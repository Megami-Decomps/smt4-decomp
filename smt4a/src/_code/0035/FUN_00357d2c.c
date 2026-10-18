/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357d2c` (_code @ 0x357d2c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015688c(void);
extern int FUN_00187168(int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003e48dc. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003e4e4c. */


unsigned int FUN_00357d2c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_0015688c();
  if ((temp_v2 != 0) && (*(unsigned short *)(temp_v2 + 300) == temp_v1)) {
    temp_v4 = 0;
    do {
      temp_v2 = FUN_003e4d68(temp_v4 & 0xffff);
      if ((*(unsigned short *)(temp_v2 + 300) != temp_v1) && (temp_v3 = FUN_00187168(temp_v2), temp_v3 != 0)) {
        temp_v0 = *(unsigned short *)(temp_v2 + 300);
        FUN_003e4e4c(temp_v0);
        FUN_003e48dc(temp_v1 & 0xffff);
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0xc);
    temp_v0 = 0;
    FUN_003e4e4c(temp_v0);
  }
  FUN_003e48dc(temp_v1 & 0xffff);
  return 1;
}
