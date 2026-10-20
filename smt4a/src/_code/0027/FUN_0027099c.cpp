/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027099c` (_code @ 0x27099c, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_001568f8. */
extern int __aeabi_idivmod(int, int);


unsigned int FUN_0027099c(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v1 = btlGetMainState();
  if (temp_v1 != 0) {
    temp_v1 = btlGetMainState();
    temp_v0 = *(short *)(temp_v1 + 0x2356);
    temp_v1 = btlGetMainState();
    FUN_001568f8(temp_v1,(int)temp_v0);
    if (temp_v1 != 0) {
      temp_v5 = 0;
      temp_v1 = btlGetMainState();
      temp_v6 = 0;
      temp_v0 = *(short *)(temp_v1 + 0x1ec0);
      temp_v1 = 0;
      do {
        temp_v2 = btlGetMainState();
        temp_v2 = *(int *)(temp_v2 + 0x1ed4) + temp_v1 * 0x1d0;
        temp_v4 = *(unsigned int *)(temp_v2 + 0x50);
        if ((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) && (temp_v4 & 0x10) != 0) &&
           ((*(unsigned int *)(temp_v2 + 0x10c) & 2) == 0)) {
          temp_v6 = temp_v6 + 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x6d);
      if ((temp_v0 == 0) || (temp_v5 = __aeabi_idivmod(temp_v6 * 100,(int)temp_v0), temp_v5 < 0x46)) {
        if (temp_v5 < 0x28) {
          temp_v3 = 3;
        }
        else {
          temp_v3 = 4;
        }
        return temp_v3;
      }
    }
  }
  return 5;
}

} /* extern "C" */
