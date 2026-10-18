/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0174` (_code @ 0x3e0174, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_0019d390. */
extern int FUN_003e46f4(unsigned int);


void FUN_003e0174(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = FUN_001801a4();
  temp_v3 = 4;
  temp_v2 = FUN_003e46f4(0x77);
  if (temp_v2 != 0) {
    temp_v3 = 5;
  }
  temp_v2 = FUN_003e46f4(0x78);
  if (temp_v2 != 0) {
    temp_v3 = temp_v3 + 1;
  }
  temp_v2 = FUN_003e46f4(0x79);
  if (temp_v2 != 0) {
    temp_v3 = temp_v3 + 1;
  }
  temp_v2 = FUN_003e46f4(0x7a);
  if (temp_v2 != 0) {
    temp_v3 = temp_v3 + 1;
  }
  if (temp_v3 >= 9) {
    temp_v3 = 8;
  }
  temp_v2 = 0;
  if (temp_v3 != 0) {
    do {
      if (*(unsigned short *)(temp_v1 + temp_v2 * 2 + 0x34) == param_1) {
        FUN_0019d390();
        temp_v0 = *(char *)(temp_v1 + temp_v2 + 0x44);
        if ((int)param_1 <= (int)temp_v0) {
          return;
        }
        *(char *)(temp_v1 + temp_v2 + 0x44) = temp_v0 + '\x01';
        return;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)temp_v3);
  }
  temp_v2 = 0;
  if (temp_v3 == 0) {
    return;
  }
  do {
    if (*(short *)(temp_v1 + temp_v2 * 2 + 0x34) == 0) {
      *(short *)(temp_v1 + temp_v2 * 2 + 0x34) = (short)param_1;
      *(unsigned char *)(temp_v2 + temp_v1 + 0x44) = 1;
      return;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < (int)temp_v3);
  return;
}
