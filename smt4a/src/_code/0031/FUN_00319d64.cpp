/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319d64` (_code @ 0x319d64, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0017760c(void);
extern int FUN_001801a4(void);
extern int FUN_00187168(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_003e4d68(unsigned int);


unsigned int FUN_00319d64(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if ((int)param_2 < 0) {
    temp_v0 = FUN_001801a4();
    if (*(short *)(temp_v0 + 0x1c) < param_1) {
      return 1;
    }
  }
  else {
    temp_v0 = FUN_001ab888();
    temp_v2 = 0;
    do {
      if (((-1 < *(char *)(temp_v0 + temp_v2 + 0x1c88)) && (temp_v1 = FUN_001ab854(), temp_v1 != 0)) &&
         (*(unsigned short *)(temp_v1 + 0x62) == param_2)) {
        temp_v0 = FUN_0017760c();
        if (temp_v0 < param_1) {
          return 1;
        }
        return 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
    temp_v3 = 0;
    do {
      temp_v0 = FUN_003e4d68(temp_v3 & 0xffff);
      if (((temp_v0 != 0) && (temp_v2 = FUN_00187168(), temp_v2 == 0)) &&
         (*(unsigned short *)(temp_v0 + 0x62) == param_2)) {
        return 1;
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0xc);
  }
  return 0;
}

} /* extern "C" */
