/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004803e4` (_code @ 0x4803e4, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0019c06c(int);
/* Supplied declaration required: FUN_00239200. */
/* Supplied declaration required: FUN_0047fc38. */


void FUN_004803e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5;
  
  temp_v2 = param_1;
  FUN_0047fc38();
  if (temp_v2 != 0) {
    return;
  }
  temp_v2 = FUN_0019c06c(param_1);
  if (temp_v2 == 0) {
    FUN_00239200();
    return;
  }
  temp_v0 = *(char *)(temp_v2 + 8);
  temp_v2 = FUN_00239200();
  temp_v1 = 999;
  if (temp_v0 != '\x04') {
    if (temp_v0 == '\x05') {
      temp_v4 = param_1 - 0x1a5;
      if ((int)temp_v4 < 0) {
        return;
      }
      if (temp_v4 >= 0x78) {
        return;
      }
      puVar4 = (unsigned short *)(temp_v2 + temp_v4 * 0xc + 0x5a8);
      temp_v5 = *puVar4 + 0x1e;
      if (temp_v5 < 999) {
        temp_v1 = temp_v5;
      }
      *puVar4 = temp_v5;
      *puVar4 = temp_v1;
      return;
    }
    if (temp_v0 != '\x06') {
      return;
    }
    temp_v4 = param_1 - 0x21d;
    if ((int)temp_v4 < 0) {
      return;
    }
    if (temp_v4 >= 0x78) {
      return;
    }
    temp_v2 = temp_v2 + temp_v4 * 0xc;
    puVar4 = (unsigned short *)(temp_v2 + 0xb48);
    temp_v3 = *puVar4 + 0x14;
    *puVar4 = temp_v3;
    temp_v5 = *(short *)(temp_v2 + 0xb4a) + 6;
    if (temp_v3 < 999) {
      temp_v1 = temp_v3;
    }
    *(unsigned short *)(temp_v2 + 0xb4a) = temp_v5;
    *puVar4 = temp_v1;
  }
  else {
    temp_v4 = param_1 - 0x12d;
    if ((int)temp_v4 < 0) {
      return;
    }
    if (temp_v4 >= 0x78) {
      return;
    }
    temp_v2 = temp_v2 + temp_v4 * 0xc;
    temp_v3 = *(short *)(temp_v2 + 8) + 0xf;
    *(unsigned short *)(temp_v2 + 8) = temp_v3;
    temp_v5 = *(short *)(temp_v2 + 10) + 3;
    if (temp_v3 < 999) {
      temp_v1 = temp_v3;
    }
    *(unsigned short *)(temp_v2 + 10) = temp_v5;
    puVar4 = (unsigned short *)(temp_v2 + 8);
    *puVar4 = temp_v1;
  }
  if (temp_v5 >= 0x63) {
    temp_v5 = 99;
  }
  puVar4[1] = temp_v5;
  return;
}
