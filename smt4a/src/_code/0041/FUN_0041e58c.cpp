/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041e58c` (_code @ 0x41e58c, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int);
int FUN_0041c44c(void);

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0041c44c. */


void FUN_0041e58c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  
  FUN_0041c44c();
  temp_v5 = 0;
  if (*(char *)(param_1 + 5) == '\0') {
    *(unsigned int *)(param_1 + 0x630) = 1;
    temp_v1 = 9;
  }
  else {
    temp_v1 = 8;
    *(unsigned int *)(param_1 + 0x630) = 0;
  }
  *(unsigned int *)(param_1 + 0x704) = temp_v1;
  *(unsigned int *)(param_1 + 0x6ec) = 0;
  *(unsigned int *)(param_1 + 0x6f0) = 0;
  *(unsigned int *)(param_1 + 0x6f4) = 0;
  *(unsigned int *)(param_1 + 0x624) = 0;
  *(unsigned int *)(param_1 + 0x628) = 0;
  *(unsigned int *)(param_1 + 0x62c) = 0;
  temp_v0 = *(char *)(param_1 + 5);
  dataTableGet(0x3d);
  temp_v2 = dataTableGetEntries();
  puVar5 = (unsigned int *)(temp_v2 + temp_v0 * 0x54);
  temp_v2 = 0;
  do {
    temp_v3 = temp_v2 + 1;
    temp_v2 = param_1 + temp_v2 * 0x44;
    *(unsigned int *)(temp_v2 + 0x66c) = temp_v5;
    *(unsigned int *)(temp_v2 + 0x664) = 0;
    *(unsigned int *)(temp_v2 + 0x668) = 0;
    *(unsigned int *)(temp_v2 + 0x670) = *puVar5;
    *(unsigned int *)(temp_v2 + 0x674) = puVar5[1];
    *(unsigned int *)(temp_v2 + 0x678) = puVar5[2];
    *(unsigned int *)(temp_v2 + 0x67c) = puVar5[3];
    *(unsigned int *)(temp_v2 + 0x680) = puVar5[4];
    *(unsigned int *)(temp_v2 + 0x684) = puVar5[5];
    *(unsigned int *)(temp_v2 + 0x688) = 0x53206f4e;
    *(unsigned int *)(temp_v2 + 0x68c) = 0x61632044;
    *(unsigned int *)(temp_v2 + 0x690) = 0x64206472;
    *(unsigned int *)(temp_v2 + 0x694) = 0x63657465;
    *(unsigned int *)(temp_v2 + 0x698) = 0x2e646574;
    *(unsigned int *)(temp_v2 + 0x69c) = 0;
    temp_v2 = temp_v3;
  } while (temp_v3 < 2);
  *(unsigned int *)(param_1 + 0x634) = *puVar5;
  *(unsigned int *)(param_1 + 0x638) = puVar5[1];
  *(unsigned int *)(param_1 + 0x63c) = puVar5[2];
  *(unsigned int *)(param_1 + 0x640) = puVar5[3];
  *(unsigned int *)(param_1 + 0x644) = puVar5[4];
  *(unsigned int *)(param_1 + 0x648) = puVar5[5];
  *(unsigned int *)(param_1 + 0x64c) = 0x53206f4e;
  *(unsigned int *)(param_1 + 0x650) = 0x61632044;
  *(unsigned int *)(param_1 + 0x654) = 0x64206472;
  *(unsigned int *)(param_1 + 0x658) = 0x63657465;
  *(unsigned int *)(param_1 + 0x65c) = 0x2e646574;
  *(unsigned int *)(param_1 + 0x660) = 0;
  *(unsigned int *)(param_1 + 0x6f8) = 0;
  *(unsigned int *)(param_1 + 0x6fc) = 0;
  *(unsigned int *)(param_1 + 0x700) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x710) = 0;
  *(unsigned int *)(param_1 + 0x714) = 0;
  *(unsigned int *)(param_1 + 0x718) = temp_v5;
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x18)) {
    do {
      temp_v4 = *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x304) + temp_v2;
      temp_v3 = param_1 + temp_v2 * 0x44;
      temp_v2 = temp_v2 + 1;
      if (temp_v4 >= 1) {
        *(unsigned int *)(temp_v3 + 0x6a0) = 0x86;
        *(unsigned int *)(temp_v3 + 0x6a4) = 0x98;
      }
      else {
        *(unsigned int *)(temp_v3 + 0x6a0) = 0x85;
        *(unsigned int *)(temp_v3 + 0x6a4) = 0x97;
      }
    } while (temp_v2 < *(int *)(param_1 + 0x18));
  }
  return;
}

} /* extern "C" */
