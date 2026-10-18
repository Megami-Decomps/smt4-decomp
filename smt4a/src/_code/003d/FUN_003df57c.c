/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df57c` (_code @ 0x3df57c, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00186f58. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_002efc44. */
extern int FUN_003e46f4(unsigned int);


void FUN_003df57c(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = param_1;
  FUN_001aba54();
  if (temp_v0 != 0) {
    if (param_2 != 0) {
      temp_v1 = FUN_001801a4();
      temp_v2 = 0;
      do {
        temp_v3 = temp_v1 + temp_v2 * 2;
        if (*(unsigned short *)(temp_v3 + 0x34) == param_1) {
          temp_v1 = (int)*(char *)(temp_v2 + temp_v1 + 0x44);
          FUN_002efc44(temp_v0,temp_v1,4);
          return;
        }
        if (*(unsigned short *)(temp_v3 + 0x36) == param_1) {
          temp_v1 = (int)*(char *)(temp_v2 + temp_v1 + 0x45);
          FUN_002efc44(temp_v0,temp_v1,4);
          return;
        }
        temp_v2 = temp_v2 + 2;
      } while (temp_v2 < 8);
      temp_v1 = 0;
      FUN_002efc44(temp_v0,temp_v1,4);
    }
    else {
      temp_v1 = FUN_003e46f4(0xc);
      if (temp_v1 != 0) {
        FUN_00186f58();
      }
      temp_v1 = FUN_003e46f4(0xd);
      if (temp_v1 != 0) {
        FUN_00186f58();
      }
      temp_v1 = FUN_003e46f4(0xe);
      if (temp_v1 != 0) {
        FUN_00186f58();
      }
      temp_v1 = FUN_003e46f4(0xf);
      if (temp_v1 != 0) {
        FUN_00186f58();
      }
    }
  }
  return;
}
