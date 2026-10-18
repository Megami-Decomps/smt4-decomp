/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100ecc` (_code @ 0x100ecc, 0x48 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

extern int DAT_00100f84; /* 0x100f84 */
extern int DAT_00100f88; /* 0x100f88 */
extern int DAT_00100f8c; /* 0x100f8c */
extern unsigned int DAT_00100f90; /* 0x100f90 */


int FUN_00100ecc(unsigned int param_1)

{
  int temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = 0;
  temp_v3 = DAT_00100f84;
  do {
    temp_v0 = (temp_v2 + temp_v3) / 2;
    temp_v1 = *(short *)(DAT_00100f88 + 0x100ed8 + temp_v0 * 2);
    temp_v4 = (unsigned int)*(unsigned short *)(DAT_00100f8c + 0x100edc + temp_v1 * 2);
    if (param_1 == temp_v4) {
      if (temp_v1 >= 0x2f0) {
        temp_v1 = temp_v1 + (short)DAT_00100f90;
      }
      return (int)temp_v1;
    }
    if ((int)param_1 < (int)temp_v4) {
      temp_v3 = temp_v0 - 1;
    }
    else {
      temp_v2 = temp_v0 + 1;
    }
  } while (temp_v2 <= temp_v3);
  return -1;
}
