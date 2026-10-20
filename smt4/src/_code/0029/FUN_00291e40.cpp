/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291e40` (_code @ 0x291e40, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00266be4(void);
int FUN_002cc08c(int, int);
int FUN_002cc1c0(int, unsigned char [16]);
int FUN_002ebc68(int, int);
int FUN_002fc250(void);

/* Supplied declaration required: FUN_00266be4. */
extern int FUN_002c1d5c(void);
extern int FUN_002c564c(unsigned int);
/* Supplied declaration required: FUN_002cc08c. */
/* Supplied declaration required: FUN_002cc1c0. */
extern int FUN_002ebc34(int);
/* Supplied declaration required: FUN_002ebc68. */
/* Supplied declaration required: FUN_002fc250. */


int FUN_00291e40(int param_1)

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
  temp_v1 = FUN_002c564c(1);
  if ((temp_v1 == 0) && (temp_v1 = FUN_002c1d5c(), temp_v1 == 0)) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v1;
      FUN_00266be4();
      if (temp_v2 == 0) {
        FUN_002cc1c0(temp_v1,temp_v6);
        if (param_1 + 0xfeffff94U < 0x100) {
          FUN_002ebc68(param_1,temp_v1);
          temp_v4 = temp_v1 + 100000;
        }
        else {
          temp_v4 = temp_v1;
          if (param_1 + 0xfefffe94U < 0xfc) {
            FUN_002cc08c(param_1,temp_v1);
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
        temp_v2 = FUN_002ebc34(temp_v1);
        FUN_002fc250();
        if (temp_v3 < temp_v2) {
          temp_v3 = temp_v2;
          temp_v5 = temp_v1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x10);
      if (temp_v5 != -1) {
        FUN_002cc08c(param_1,temp_v5);
      }
    }
  }
  return temp_v4;
}

} /* extern "C" */
