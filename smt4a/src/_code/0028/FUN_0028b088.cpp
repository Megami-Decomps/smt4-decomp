/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028b088` (_code @ 0x28b088, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4860(...);
int screenShowMessage(int);
int FUN_00359b6c(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
/* Supplied declaration required: screenShowMessage. */
/* Supplied declaration required: FUN_00359b6c. */


void FUN_0028b088(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f108;
  if (param_1 == 0x17) {
    temp_v1 = DAT_0057f108 + 0x444;
    temp_v2 = FUN_002a4860();
    temp_v1 = FUN_002a4894(temp_v1);
    screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x2e9c));
    return;
  }
  if (param_1 < 0x18) {
    if (param_1 == 0xe) {
      temp_v1 = FUN_002a4860(DAT_0057f108 + 0x188);
      temp_v2 = FUN_002a4894(temp_v0 + 0x188);
      screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2a78));
      return;
    }
    if (param_1 < 0xf) {
      if (param_1 != 10) {
        if (param_1 < 0xb) {
          if ((param_1 != 0) && (param_1 == 9)) {
            temp_v1 = FUN_002a4860(DAT_0057f108 + 0x1ec);
            temp_v2 = FUN_002a4894(temp_v0 + 0x1ec);
            FUN_00359b6c(*(unsigned int *)(temp_v0 + (temp_v2 + temp_v1) * 8 + 0x1b70));
            return;
          }
        }
        else {
          if (param_1 == 0xb) {
            temp_v1 = FUN_002a4860(DAT_0057f108 + 0xc0);
            temp_v2 = FUN_002a4894(temp_v0 + 0xc0);
            screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x21b0));
            return;
          }
          if (param_1 == 0xd) {
            temp_v1 = FUN_002a4860(DAT_0057f108 + 0x124);
            temp_v2 = FUN_002a4894(temp_v0 + 0x124);
            screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x22a8));
            return;
          }
        }
      }
    }
    else {
      if (param_1 == 0x13) {
        temp_v1 = FUN_002a4860(DAT_0057f108 + 0x2b4);
        temp_v2 = FUN_002a4894(temp_v0 + 0x2b4);
        screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2b68));
        return;
      }
      if (param_1 == 0x14) {
        temp_v1 = FUN_002a4860(DAT_0057f108 + 0x318);
        temp_v2 = FUN_002a4894(temp_v0 + 0x318);
        screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2c58));
        return;
      }
      if (param_1 == 0x15) {
        temp_v1 = FUN_002a4860(DAT_0057f108 + 0x37c);
        temp_v2 = FUN_002a4894(temp_v0 + 0x37c);
        screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2d48));
        return;
      }
      if (param_1 == 0x16) {
        temp_v1 = FUN_002a4860(DAT_0057f108 + 0x3e0);
        temp_v2 = FUN_002a4894(temp_v0 + 0x3e0);
        screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2dac));
        return;
      }
    }
    return;
  }
  if (param_1 == 0x4a) {
    temp_v1 = FUN_002a4860(DAT_0057f108 + 0x37c);
    temp_v2 = FUN_002a4894(temp_v0 + 0x37c);
    screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2d48));
    return;
  }
  if (param_1 < 0x4b) {
    if (param_1 != 0x18) {
      if (param_1 != 0x19) {
        if (param_1 != 0x48) {
          if (param_1 != 0x49) {
            return;
          }
          temp_v1 = FUN_002a4860(DAT_0057f108 + 0x318);
          temp_v2 = FUN_002a4894(temp_v0 + 0x318);
          screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2c58));
          return;
        }
        temp_v1 = FUN_002a4860(DAT_0057f108 + 0x2b4);
        temp_v2 = FUN_002a4894(temp_v0 + 0x2b4);
        screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2b68));
        return;
      }
      temp_v1 = DAT_0057f108 + 0x50c;
      temp_v2 = FUN_002a4860();
      temp_v1 = FUN_002a4894(temp_v1);
      screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x307c));
      return;
    }
  }
  else {
    if (param_1 == 0x4b) {
      temp_v1 = FUN_002a4860(DAT_0057f108 + 0x3e0);
      temp_v2 = FUN_002a4894(temp_v0 + 0x3e0);
      screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x2dac));
      return;
    }
    if (param_1 == 0x4c) {
      temp_v1 = DAT_0057f108 + 0x444;
      temp_v2 = FUN_002a4860();
      temp_v1 = FUN_002a4894(temp_v1);
      screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x2e9c));
      return;
    }
    if (param_1 != 0x4d) {
      if (param_1 != 0x4e) {
        return;
      }
      temp_v1 = DAT_0057f108 + 0x50c;
      temp_v2 = FUN_002a4860();
      temp_v1 = FUN_002a4894(temp_v1);
      screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x307c));
      return;
    }
  }
  temp_v1 = DAT_0057f108 + 0x4a8;
  temp_v2 = FUN_002a4860();
  temp_v1 = FUN_002a4894(temp_v1);
  screenShowMessage(*(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0x2f8c));
  return;
}

} /* extern "C" */
