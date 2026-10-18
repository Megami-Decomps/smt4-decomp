/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274e4c` (_code @ 0x274e4c, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_00581280; /* 0x581280 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned char DAT_005f1724; /* 0x5f1724 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00234044. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_00327678. */
/* Supplied declaration required: FUN_00384830. */


void FUN_00274e4c(void)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  char *pcVar4;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int in_s0;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  float temp_v10;
  long long temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  
  temp_v4 = -1;
  temp_v10 = 0.0f;
  temp_v8 = 0x4334000000000000;
  temp_v9 = 80.0f;
  if (*(char *)(DAT_00581280 + 0xf40) != '\0') {
    return;
  }
  *(unsigned char *)(DAT_00581280 + 0xf0c) = 0;
  if (DAT_005f1614 != '\0') {
    return;
  }
  temp_v11 = (unsigned long long)in_s0 << 0x20;
  temp_v12 = 0x4391000000000000;
  temp_v13 = 0x42700000;
  temp_v3 = 0;
  do {
    temp_v7 = (float)((unsigned long long)temp_v8 >> 0x20);
    temp_v2 = DAT_00581280 + temp_v3 * 0x3c;
    temp_v5 = *(char *)(temp_v2 + 0xc) != '\0';
    temp_v1 = 0;
    if (temp_v5) {
      temp_v1 = *(short *)(temp_v2 + 0x10);
    }
    if (temp_v5 && temp_v1 != 4) {
      if (temp_v1 == 2) {
        temp_v7 = (float)((unsigned long long)temp_v12 >> 0x20);
        temp_v9 = (float)temp_v13;
      }
      temp_v6 = (float)((unsigned long long)temp_v11 >> 0x20);
      FUN_002b5cb4();
      temp_v8 = CONCAT44(temp_v7,temp_v6);
      if (temp_v6 < temp_v7) {
        temp_v7 = (float)((unsigned long long)temp_v11 >> 0x20);
        FUN_00384830();
        if ((temp_v7 < temp_v9) && ((temp_v4 == -1 || ((float)temp_v8 < temp_v10)))) {
          temp_v4 = temp_v3;
          temp_v10 = (float)temp_v8;
        }
      }
    }
    temp_v2 = DAT_00581280;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x40);
  if ((temp_v4 != -1) || (0 < *(int *)(DAT_00581280 + 0xf4c))) {
    *(unsigned char *)(DAT_00581280 + 0xf0c) = 1;
    if (temp_v4 == -1) {
      temp_v4 = *(int *)(temp_v2 + 0xf50);
    }
    else {
      *(unsigned int *)(temp_v2 + 0xf4c) = 0x14;
      *(int *)(temp_v2 + 0xf50) = temp_v4;
    }
    *(int *)(temp_v2 + 0xf10) = temp_v4;
    temp_v3 = temp_v2 + temp_v4 * 0x3c;
    *(int *)(temp_v2 + 0xf14) = (int)*(short *)(temp_v3 + 0x12);
    temp_v2 = (int)*(short *)(temp_v3 + 0x14);
    FUN_00327678();
    temp_v3 = DAT_00581280;
    pcVar4 = (char *)(temp_v2 + 0xc);
    if (pcVar4 != (char *)0x0) {
      temp_v0 = *pcVar4;
      if (temp_v0 == '0') {
        pcVar4 = (char *)(unsigned int)*(unsigned char *)(temp_v2 + 0xd);
      }
      if (!(temp_v0 == '0' && pcVar4 == (char *)0x0)) {
        temp_v3 = *(int *)(DAT_00581280 + temp_v4 * 0x3c + 0x1c);
        FUN_00384830();
        DAT_005f1724 = temp_v3 < 0x42dc0000;
        FUN_00234044(1,temp_v4);
        FUN_002e342c(DAT_00581280 + 0xf20,temp_v2 + 0xc);
        *(unsigned int *)(DAT_00581280 + 0xf1c) = *(unsigned int *)(temp_v2 + 8);
      }
      else {
        *(unsigned char *)(DAT_00581280 + 0xf20) = 0;
        *(unsigned char *)(temp_v3 + 0xf21) = 0;
      }
    }
    else {
      *(unsigned char *)(DAT_00581280 + 0xf20) = 0;
      *(unsigned char *)(temp_v3 + 0xf21) = 0;
    }
    temp_v4 = *(int *)(DAT_00581280 + 0xf4c);
    if (0 < temp_v4) {
      *(int *)(DAT_00581280 + 0xf4c) = temp_v4 - 1;
      if ((*(char *)(DAT_00581280 + 0xf0c) == '\0') && (*(int *)(DAT_00581280 + 0xf4c) < 1)) {
        FUN_00234044(0);
        return;
      }
      return;
    }
  }
  temp_v4 = DAT_00581280;
  *(unsigned int *)(DAT_00581280 + 0xf4c) = 0;
  *(unsigned int *)(temp_v4 + 0xf50) = 0xffffffff;
  if ((*(char *)(DAT_00581280 + 0xf0c) == '\0') && (*(int *)(DAT_00581280 + 0xf4c) < 1)) {
    FUN_00234044(0);
    return;
  }
  return;
}
