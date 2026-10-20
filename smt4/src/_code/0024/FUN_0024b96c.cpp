/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b96c` (_code @ 0x24b96c, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, int);

/* Supplied declaration required: FUN_0027da30. */
extern int FUN_002939f4(void);
extern int aeabi_idivmod(int, int);


unsigned int FUN_0024b96c(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v1 = FUN_002939f4();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002939f4();
    temp_v0 = *(short *)(temp_v1 + 0x225a);
    temp_v1 = FUN_002939f4();
    FUN_0027da30(temp_v1,(int)temp_v0);
    if (temp_v1 != 0) {
      temp_v5 = 0;
      temp_v1 = FUN_002939f4();
      temp_v6 = 0;
      temp_v4 = 0;
      temp_v0 = *(short *)(temp_v1 + 0x1e84);
      do {
        temp_v1 = FUN_002939f4();
        temp_v1 = *(int *)(temp_v1 + 0x1e98) + temp_v4 * 0x114;
        temp_v3 = *(unsigned int *)(temp_v1 + 0x50);
        if ((((temp_v3 & 1) != 0 && (temp_v3 & 2) != 0) && (temp_v3 & 0x10) != 0) &&
           ((*(unsigned int *)(temp_v1 + 0xf8) & 2) == 0)) {
          temp_v6 = temp_v6 + 1;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
      if ((temp_v0 == 0) || (temp_v5 = aeabi_idivmod(temp_v6 * 100,(int)temp_v0), temp_v5 < 0x46)) {
        if (temp_v5 < 0x28) {
          temp_v2 = 3;
        }
        else {
          temp_v2 = 4;
        }
        return temp_v2;
      }
    }
  }
  return 5;
}

} /* extern "C" */
