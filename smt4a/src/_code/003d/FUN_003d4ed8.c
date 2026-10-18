/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d4ed8` (_code @ 0x3d4ed8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162ea4(void);
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_0032cb58. */
/* Supplied declaration required: FUN_0032cc8c. */
extern int FUN_0036bc6c(int);
/* Supplied declaration required: FUN_0036bca0. */
/* Supplied declaration required: FUN_0037b0c0. */
/* Supplied declaration required: FUN_003875b8. */


int FUN_003d4ed8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [16];
  int iStack_28;
  
  temp_v4 = -1;
  temp_v0 = 0;
  temp_v3 = -1;
  temp_v5 = -1;
  iStack_28 = param_1;
  temp_v1 = FUN_00180008(1);
  if ((temp_v1 == 0) && (temp_v1 = FUN_00162ea4(), temp_v1 == 0)) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v1;
      FUN_0037b0c0();
      if (temp_v2 == 0) {
        FUN_0032cc8c(temp_v1,temp_v6);
        if (param_1 + 0xfeffff84U < 0x191) {
          FUN_0036bca0(param_1,temp_v1);
          temp_v4 = temp_v1 + 100000;
        }
        else {
          temp_v4 = temp_v1;
          if (param_1 + 0xfefffdf3U < 0x106) {
            FUN_0032cb58(param_1,temp_v1);
            break;
          }
        }
        temp_v0 = 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
    if (!temp_v0) {
      temp_v1 = 0;
      do {
        temp_v2 = FUN_0036bc6c(temp_v1);
        FUN_003875b8();
        if (temp_v3 < temp_v2) {
          temp_v3 = temp_v2;
          temp_v5 = temp_v1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x10);
      if (temp_v5 != -1) {
        FUN_0032cb58(param_1,temp_v5);
      }
    }
  }
  return temp_v4;
}
