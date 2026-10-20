/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232698` (_code @ 0x232698, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8584(int, int);
int FUN_002b8cc8(void);
int FUN_002c424c(int, int, unsigned int);

/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002c424c. */


void FUN_00232698(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  if (0 < *(short *)(param_1 + 0x93e)) {
    temp_v2 = 0;
    do {
      FUN_002b8cc8();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(param_1 + 0x93e));
    FUN_002c424c(param_1 + 0x820,0x11e,0xffffffff);
    *(unsigned short *)(param_1 + 0x93e) = 0;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    temp_v1 = FUN_002b8584(0x2e,0x14c);
    *(unsigned short *)(param_1 + 0x820) = temp_v1;
    temp_v1 = FUN_002b8584(0x2e,0x14d);
    *(unsigned short *)(param_1 + 0x822) = temp_v1;
    temp_v1 = FUN_002b8584(0x2e,0x14e);
    *(unsigned short *)(param_1 + 0x824) = temp_v1;
    temp_v2 = 0;
    *(short *)(param_1 + 0x93e) = *(short *)(param_1 + 0x93e) + 3;
    do {
      temp_v1 = FUN_002b8584(0x2e,temp_v2 + 0xce);
      temp_v0 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(param_1 + temp_v0 + 0x826) = temp_v1;
      *(short *)(param_1 + 0x93e) = *(short *)(param_1 + 0x93e) + 1;
    } while (temp_v2 < 0x7e);
    return;
  }
  temp_v2 = 0;
  do {
    temp_v1 = FUN_002b8584(0x2e,temp_v2 + 0x56);
    temp_v0 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(param_1 + temp_v0 + 0x826) = temp_v1;
    *(short *)(param_1 + 0x93e) = *(short *)(param_1 + 0x93e) + 1;
  } while (temp_v2 < 0x5a);
  temp_v2 = 0;
  do {
    temp_v1 = FUN_002b8584(0x2e,temp_v2 + 0xc6);
    temp_v0 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(param_1 + temp_v0 + 0x936) = temp_v1;
    *(short *)(param_1 + 0x93e) = *(short *)(param_1 + 0x93e) + 1;
  } while (temp_v2 < 3);
  return;
}

} /* extern "C" */
