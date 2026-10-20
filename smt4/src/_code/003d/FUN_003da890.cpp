/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da890` (_code @ 0x3da890, 0x29c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int memClear(int, int);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */


void FUN_003da890(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x1cfc) = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x1d00) = 0xff;
    memClear(temp_v1 + 0x1d08,0x80);
    if (*(int *)(temp_v1 + 0x1d04) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x1d04) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x1d88) = 0;
    *(unsigned char *)(temp_v1 + 0x1f30) = 0xff;
    memClear(temp_v1 + 0x1f38,0x80);
    if (*(int *)(temp_v1 + 0x1f34) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x1f34) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x1fb8) = 0;
    *(unsigned char *)(temp_v1 + 0x2160) = 0xff;
    memClear(temp_v1 + 0x2168,0x80);
    if (*(int *)(temp_v1 + 0x2164) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x2164) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x21e8) = 0;
    *(unsigned char *)(temp_v1 + 0x2390) = 0xff;
    memClear(temp_v1 + 0x2398,0x80);
    if (*(int *)(temp_v1 + 0x2394) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x2394) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x2418) = 0;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x2bc4) = 0xff;
    memClear(temp_v1 + 0x2bcc,0x80);
    if (*(int *)(temp_v1 + 0x2bc8) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x2bc8) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x2c4c) = 0;
  } while (temp_v2 < 2);
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x2cdc) = 0xff;
    memClear(temp_v1 + 0x2ce4,0x80);
    if (*(int *)(temp_v1 + 0x2ce0) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x2ce0) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x2d64) = 0;
  } while (temp_v2 < 5);
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x3070) = 0xff;
    memClear(temp_v1 + 0x3078,0x80);
    if (*(int *)(temp_v1 + 0x3074) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x3074) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x30f8) = 0;
  } while (temp_v2 < 3);
  *(unsigned char *)(param_1 + 0x2f9c) = 0xff;
  memClear(param_1 + 0x2fa4,0x80);
  if (*(int *)(param_1 + 0x2fa0) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x2fa0) = 0;
  }
  *(unsigned char *)(param_1 + 0x3024) = 0;
  *(unsigned char *)(param_1 + 0x3218) = 0xff;
  memClear(param_1 + 0x3220,0x80);
  if (*(int *)(param_1 + 0x321c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x321c) = 0;
  }
  temp_v2 = 1;
  *(unsigned char *)(param_1 + 0x32a0) = 0;
  temp_v1 = 1;
  *(unsigned char *)(param_1 + 0x25c0) = 0xff;
  do {
    temp_v0 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(param_1 + temp_v2 * 0x8c + 0x25c0) = 0xff;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(param_1 + temp_v0 * 0x8c + 0x25c0) = 0xff;
  } while (temp_v1 < 0xb);
  return;
}

} /* extern "C" */
