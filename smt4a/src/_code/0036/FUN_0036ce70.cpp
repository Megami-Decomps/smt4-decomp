/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ce70` (_code @ 0x36ce70, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e1c94(int, int, unsigned int);

/* Supplied declaration required: FUN_002e1c94. */
extern int overlayIsNotBusy(void);


unsigned int FUN_0036ce70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  
  temp_v4 = 0;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v0 = *(char *)(param_1 + 0x154);
  temp_v8 = 0;
  if (temp_v0 != '\0') {
    do {
      temp_v3 = param_1 + temp_v2 * 0x14;
      FUN_002e1c94(temp_v3 + 0x10,4,*(unsigned int *)(temp_v3 + 0x1c));
      temp_v7 = (float)temp_v8;
      temp_v2 = temp_v2 + 1;
      *(int *)(temp_v3 + 0x1c) = *(int *)(temp_v3 + 0x1c) + 1;
    } while (temp_v2 < 2);
  }
  else {
    do {
      temp_v3 = param_1 + temp_v2 * 0x14;
      FUN_002e1c94(temp_v3 + 0x10,3,*(unsigned int *)(temp_v3 + 0x1c));
      temp_v7 = (float)temp_v8;
      temp_v2 = temp_v2 + 1;
      *(int *)(temp_v3 + 0x1c) = *(int *)(temp_v3 + 0x1c) + 1;
    } while (temp_v2 < 2);
  }
  temp_v6 = *(float *)(param_1 + 0x24);
  if (((int)temp_v6 >= 0x3f800000) && (temp_v0 != '\0')) {
    temp_v1 = 1;
  }
  temp_v5 = temp_v6 == temp_v7;
  if (temp_v6 <= temp_v7) {
    temp_v5 = temp_v0 == '\0';
  }
  if (temp_v5) {
    temp_v1 = 1;
  }
  temp_v2 = overlayIsNotBusy();
  if (temp_v2 != 0 && temp_v1) {
    if (temp_v0 == '\0') {
      *(unsigned char *)(param_1 + 0x112) = 0;
    }
    temp_v4 = 3;
    *(unsigned int *)(param_1 + 0xf8) = *(unsigned int *)(param_1 + 0xfc);
  }
  return temp_v4;
}

} /* extern "C" */
