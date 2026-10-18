/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002920e4` (_code @ 0x2920e4, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00266e10. */
extern int FUN_002c1f28(void);
extern int FUN_002c583c(unsigned int);
/* Supplied declaration required: FUN_002cbfdc. */
/* Supplied declaration required: FUN_002cc110. */
extern int FUN_002ebbdc(int);
/* Supplied declaration required: FUN_002ebc10. */
/* Supplied declaration required: FUN_002fc214. */


int FUN_002920e4(int param_1)

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
  temp_v1 = FUN_002c583c(1);
  if ((temp_v1 == 0) && (temp_v1 = FUN_002c1f28(), temp_v1 == 0)) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v1;
      FUN_00266e10();
      if (temp_v2 == 0) {
        FUN_002cc110(temp_v1,temp_v6);
        if (param_1 + 0xfeffff94U < 0x100) {
          FUN_002ebc10(param_1,temp_v1);
          temp_v4 = temp_v1 + 100000;
        }
        else {
          temp_v4 = temp_v1;
          if (param_1 + 0xfefffe94U < 0xfc) {
            FUN_002cbfdc(param_1,temp_v1);
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
        temp_v2 = FUN_002ebbdc(temp_v1);
        FUN_002fc214();
        if (temp_v3 < temp_v2) {
          temp_v3 = temp_v2;
          temp_v5 = temp_v1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x10);
      if (temp_v5 != -1) {
        FUN_002cbfdc(param_1,temp_v5);
      }
    }
  }
  return temp_v4;
}
