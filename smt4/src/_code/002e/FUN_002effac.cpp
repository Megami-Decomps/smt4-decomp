/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002effac` (_code @ 0x2effac, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029378c(unsigned int, unsigned int);
int FUN_002937e0(void);
int FUN_0029e8b8(int, int);
int FUN_0029eb5c(int, int);
int timerStart(int, int, int);

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0029378c. */
/* Supplied declaration required: FUN_002937e0. */
/* Supplied declaration required: FUN_0029e8b8. */
/* Supplied declaration required: FUN_0029eb5c. */
extern int FUN_002a8764(void);
/* Supplied declaration required: timerStart. */


unsigned int FUN_002effac(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = DAT_0043dcf0;
  temp_v1 = FUN_002a8764();
  temp_v4 = 0;
  if ((0 < *(int *)(temp_v2 + 0x670)) &&
     (temp_v1 = (int)*(char *)(*(int *)(temp_v2 + 0x670) + temp_v1 + 0x9107), -1 < temp_v1)) {
    temp_v3 = 0;
    while (temp_v1 != *(int *)(temp_v2 + temp_v3 * 8 + 0x738)) {
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 0x18) {
        return 0;
      }
    }
    if (*(char *)(temp_v2 + 0x42) != '\0') {
      temp_v1 = temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e);
      temp_v2 = temp_v2 + 0x9a4;
      FUN_0029e8b8(temp_v2,temp_v3 % 4);
    }
    else {
      if (temp_v3 < 0xc) {
        if (param_1 == 0) {
          temp_v1 = *(int *)(temp_v2 + 0x2c);
        }
        else {
          temp_v1 = 0;
          *(unsigned int *)(temp_v2 + 0x2c) = 0;
        }
        temp_v0 = DAT_0043dcf0;
        if (param_1 == 0 && temp_v1 == 1) {
          temp_v4 = 1;
          *(unsigned int *)(DAT_0043dcf0 + 0x2c) = *(unsigned int *)(DAT_0043dcf0 + 0x2c) ^ 1;
          timerStart(temp_v0 + 0x180,5,0);
          temp_v1 = 0;
          do {
            FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6c8),*(unsigned int *)(temp_v0 + 0x2c));
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
          temp_v1 = 0;
          do {
            FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6d8),*(unsigned int *)(temp_v0 + 0x2c));
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
          FUN_002937e0();
        }
        FUN_0029e8b8(temp_v2 + 0x940,temp_v3 % 4);
        FUN_0029eb5c(temp_v2 + 0x940,(int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2);
        return temp_v4;
      }
      if (param_1 == 0) {
        temp_v1 = *(int *)(temp_v2 + 0x2c);
      }
      else {
        temp_v1 = 1;
        *(unsigned int *)(temp_v2 + 0x2c) = 1;
      }
      temp_v0 = DAT_0043dcf0;
      if (param_1 == 0 && temp_v1 == 0) {
        temp_v4 = 1;
        *(unsigned int *)(DAT_0043dcf0 + 0x2c) = *(unsigned int *)(DAT_0043dcf0 + 0x2c) ^ 1;
        timerStart(temp_v0 + 0x180,4,0);
        temp_v1 = 0;
        do {
          FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6c8),*(unsigned int *)(temp_v0 + 0x2c));
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        temp_v1 = 0;
        do {
          FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6d8),*(unsigned int *)(temp_v0 + 0x2c));
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x18);
        FUN_002937e0();
      }
      temp_v3 = temp_v3 - 0xc;
      temp_v1 = temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e);
      FUN_0029e8b8(temp_v2 + 0x940,temp_v3 % 4);
      temp_v2 = temp_v2 + 0x940;
    }
    FUN_0029eb5c(temp_v2,temp_v1 >> 2);
    return temp_v4;
  }
  return 0;
}

} /* extern "C" */
