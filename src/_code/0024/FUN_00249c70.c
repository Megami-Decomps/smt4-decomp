/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249c70` (_code @ 0x249c70, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002a8a1c(void);
extern int FUN_002b66ec(void);


void FUN_00249c70(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
     (((param_2 != 0 || (temp_v0 = FUN_002b66ec(), (*(unsigned short *)(temp_v0 + 0x72) & 2) == 0)) &&
      (temp_v0 = FUN_002b66ec(), (*(unsigned short *)(temp_v0 + 0x72) & 0x400) == 0)))) {
    temp_v0 = FUN_002b66ec();
    *(unsigned short *)(temp_v0 + 0x72) = 0;
    temp_v1 = FUN_002b66ec();
    *(unsigned short *)(temp_v1 + 0x2a) = *(unsigned short *)(temp_v1 + 0x1c);
    *(unsigned short *)(temp_v1 + 0x2c) = *(unsigned short *)(temp_v1 + 0x1e);
    *(unsigned short *)(temp_v0 + 0x2a) = *(unsigned short *)(temp_v0 + 0x1c);
    *(unsigned short *)(temp_v0 + 0x2c) = *(unsigned short *)(temp_v0 + 0x1e);
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v1 = 3;
    temp_v0 = FUN_002a8a08();
    temp_v0 = temp_v0 + 0x9108;
  }
  else {
    temp_v1 = FUN_002a8a1c();
    temp_v0 = FUN_002a8a08();
    temp_v0 = temp_v0 + 0x90f0;
  }
  temp_v3 = 0;
  if (temp_v3 < temp_v1) {
    do {
      if ((((-1 < *(char *)(temp_v0 + temp_v3)) &&
           ((temp_v2 = FUN_002a89e4(), param_2 != 0 || ((*(unsigned short *)(temp_v2 + 0x44) & 2) == 0)))) &&
          ((*(unsigned short *)(temp_v2 + 0x44) & 0x400) == 0 && (*(unsigned short *)(temp_v2 + 0x44) & 4) == 0)) &&
         (temp_v2 != 0)) {
        *(unsigned short *)(temp_v2 + 0x44) = 0;
        *(unsigned short *)(temp_v2 + 0x2a) = *(unsigned short *)(temp_v2 + 0xe);
        *(unsigned short *)(temp_v2 + 0x2c) = *(unsigned short *)(temp_v2 + 0x10);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v1);
  }
  return;
}
