/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384ac8` (_code @ 0x384ac8, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_00384bd4; /* 0x384bd4 */

/* Supplied declaration required: FUN_00234e70. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_002ae074. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_00341c74. */


void FUN_00384ac8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar4;
  unsigned char temp_v3;
  unsigned char temp_v4 [32];
  unsigned char temp_v5 [16];
  
  temp_v1 = param_1 + *(int *)(param_1 + 4) * 8;
  pcVar4 = *(romwright_code **)(temp_v1 + 0x5c8);
  temp_v2 = *(unsigned int *)(temp_v1 + 0x5cc);
  if ((pcVar4 != (romwright_code *)0x0) || (((temp_v2 & 1) != 0 && (temp_v2 != 0)))) {
    if ((temp_v2 & 1) != 0) {
      pcVar4 = *(romwright_code **)(pcVar4 + *(int *)(param_1 + ((int)temp_v2 >> 1)));
    }
    (*pcVar4)();
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    temp_v1 = *(int *)(param_1 + 0xfb0);
    if (*(int *)(param_1 + 0xfb4) != temp_v1) {
      *(int *)(param_1 + 0xfb4) = temp_v1;
      FUN_00234e70(*(unsigned int *)(param_1 + 0xfac),temp_v1,0);
    }
    FUN_00341c74(*(unsigned int *)(param_1 + 0xfac));
  }
  temp_v0 = *(char *)(param_1 + 0xd40);
  temp_v3 = temp_v0 == '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(param_1 + 0x21);
  }
  if (temp_v3 && temp_v0 == '\0') {
    temp_v2 = 0;
    *(unsigned char *)(param_1 + 0xd40) = 1;
    do {
      FUN_002be7fc(temp_v4,&LAB_00384bd4,temp_v2 + 1);
      FUN_002ae074(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xfac) + 0x1c) + 8),temp_v4,
                   temp_v5);
      temp_v1 = param_1 + temp_v2 * 4;
      FUN_0028c8a8(*(unsigned int *)(*(int *)(temp_v1 + 0xd10) + 8),0,temp_v5);
      FUN_0028c8a8(*(unsigned int *)(*(int *)(temp_v1 + 0xd28) + 8),0,temp_v5);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
  }
  return;
}
