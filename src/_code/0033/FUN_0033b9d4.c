/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b9d4` (_code @ 0x33b9d4, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002458d4(unsigned short);
extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_002b9364. */
extern int FUN_002c0bcc(unsigned int);


unsigned int FUN_0033b9d4(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
  FUN_002b9364();
  temp_v1 = FUN_002458d4(*(unsigned short *)(param_1 + 0x46));
  temp_v3 = temp_v1 / 400 + ((*(unsigned int *)(temp_v0 + 0x2c) & 0x3fff) >> 7);
  temp_v1 = FUN_002931cc(6);
  if (temp_v1 != 0) {
    temp_v3 = temp_v3 + 0x28;
  }
  temp_v1 = 0;
  if (temp_v1 < param_2) {
    do {
      temp_v2 = FUN_002c0bcc(99);
      if (param_3 != 0) {
        temp_v2 = -1;
      }
      if (temp_v2 < temp_v3) {
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_2);
  }
  return 0;
}
