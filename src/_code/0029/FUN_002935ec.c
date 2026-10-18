/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002935ec` (_code @ 0x2935ec, 0x1d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00292e70. */
/* Supplied declaration required: FUN_00292e88. */
/* Supplied declaration required: FUN_00298fc4. */
/* Supplied declaration required: FUN_002a0f68. */


void FUN_002935ec(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043dcf0;
  if (param_2 != 0) {
    *(unsigned int *)(DAT_0043dcf0 + 0x24) = *(unsigned int *)(DAT_0043dcf0 + 0x1c);
  }
  *(int *)(temp_v0 + 0x1c) = param_1;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  if (param_1 == 0x17) {
    FUN_002a0f68(0);
    param_1 = *(int *)(temp_v0 + 0x1c);
  }
  if (param_1 == 0x13) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_00292e88(*(unsigned int *)(temp_v2 + 0x6c8),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0x6c8) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0x6c8) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_00292e88(*(unsigned int *)(temp_v2 + 0x6d8),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0x6d8) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0x6d8) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    FUN_00298fc4(0);
  }
  if (*(int *)(temp_v0 + 0x1c) == 0x14) {
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_00292e88(*(unsigned int *)(temp_v2 + 0x6c8),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0x6c8) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0x6c8) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    temp_v1 = 0;
    do {
      temp_v2 = temp_v0 + temp_v1 * 4;
      FUN_00292e88(*(unsigned int *)(temp_v2 + 0x6d8),0);
      *(unsigned char *)(*(int *)(temp_v2 + 0x6d8) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v2 + 0x6d8) + 0x27) = 0;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    FUN_00298fc4(0);
    if (*(char *)(temp_v0 + 0x678) != '\0') {
      FUN_00292e70(*(unsigned int *)(temp_v0 + 0x6c8),0xff);
    }
    temp_v1 = 0;
    do {
      if (*(char *)(temp_v0 + temp_v1 + 0x679) != '\0') {
        FUN_00292e70(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6cc),0xff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
    temp_v1 = 0;
    do {
      if (*(short *)(temp_v0 + temp_v1 * 8 + 0x73c) != 0) {
        FUN_00292e70(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6d8),0xff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
  }
  return;
}
