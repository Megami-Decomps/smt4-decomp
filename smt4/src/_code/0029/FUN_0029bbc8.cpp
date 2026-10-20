/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bbc8` (_code @ 0x29bbc8, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a8740(unsigned int);
extern int FUN_002a8764(void);


unsigned int FUN_0029bbc8(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  if (param_1 >= 0x18) {
    temp_v1 = 0;
  }
  else {
    temp_v2 = FUN_002a8740(param_1);
    *(unsigned short *)(temp_v2 + 0x46) = 0;
    temp_v2 = FUN_002a8764();
    if ((int)*(char *)(temp_v2 + 0x9108) == param_1) {
      *(unsigned char *)(temp_v2 + 0x9108) = 0xff;
    }
    else if ((int)*(char *)(temp_v2 + 0x9109) == param_1) {
      *(unsigned char *)(temp_v2 + 0x9109) = 0xff;
    }
    else if ((int)*(char *)(temp_v2 + 0x910a) == param_1) {
      *(unsigned char *)(temp_v2 + 0x910a) = 0xff;
    }
    temp_v3 = 0;
    while (temp_v4 = (unsigned int)*(char *)(temp_v2 + temp_v3 + 0x90f0), temp_v4 != param_1) {
      if (((int)temp_v4 < 0) || (temp_v3 = temp_v3 + 1, temp_v3 >= 0x18)) goto LAB_0029bc70;
    }
    *(unsigned char *)(temp_v3 + temp_v2 + 0x90f0) = 0xff;
LAB_0029bc70:
    temp_v2 = FUN_002a8764();
    temp_v3 = 0;
    do {
      temp_v0 = temp_v3;
      if (*(char *)(temp_v2 + temp_v3 + 0x90f0) < '\0') {
        do {
          temp_v0 = temp_v0 + 1;
          if (temp_v0 >= 0x18) {
            temp_v1 = 1;
            return temp_v1;
          }
        } while (*(char *)(temp_v2 + temp_v0 + 0x90f0) < '\0');
        *(unsigned char *)(temp_v2 + temp_v3 + 0x90f0) = *(unsigned char *)(temp_v0 + temp_v2 + 0x90f0);
        *(unsigned char *)(temp_v0 + temp_v2 + 0x90f0) = 0xff;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
