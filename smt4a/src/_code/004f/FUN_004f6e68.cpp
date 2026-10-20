/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f6e68` (_code @ 0x4f6e68, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int sysMemClear(int, int);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: sysMemClear. */


void FUN_004f6e68(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned int *)(param_1 + 0x1f54) = 0;
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x1f58) = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x1f5c) = 0xff;
    sysMemClear(temp_v1 + 0x1f64,0x80);
    if (*(int *)(temp_v1 + 0x1f60) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x1f60) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x1fe4) = 0;
    *(unsigned char *)(temp_v1 + 0x218c) = 0xff;
    sysMemClear(temp_v1 + 0x2194,0x80);
    if (*(int *)(temp_v1 + 0x2190) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x2190) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x2214) = 0;
    *(unsigned char *)(temp_v1 + 0x23bc) = 0xff;
    sysMemClear(temp_v1 + 0x23c4,0x80);
    if (*(int *)(temp_v1 + 0x23c0) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x23c0) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x2444) = 0;
    *(unsigned char *)(temp_v1 + 0x25ec) = 0xff;
    sysMemClear(temp_v1 + 0x25f4,0x80);
    if (*(int *)(temp_v1 + 0x25f0) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x25f0) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x2674) = 0;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x2e20) = 0xff;
    sysMemClear(temp_v1 + 0x2e28,0x80);
    if (*(int *)(temp_v1 + 0x2e24) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x2e24) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x2ea8) = 0;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x33e4) = 0xff;
    sysMemClear(temp_v1 + 0x33ec,0x80);
    if (*(int *)(temp_v1 + 0x33e8) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x33e8) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x346c) = 0;
  } while (temp_v2 < 3);
  *(unsigned char *)(param_1 + 0x3054) = 0xff;
  sysMemClear(param_1 + 0x305c,0x80);
  if (*(int *)(param_1 + 0x3058) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x3058) = 0;
  }
  *(unsigned char *)(param_1 + 0x30dc) = 0;
  *(unsigned char *)(param_1 + 0x358c) = 0xff;
  sysMemClear(param_1 + 0x3594,0x80);
  if (*(int *)(param_1 + 0x3590) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x3590) = 0;
  }
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x3614) = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x30e0) = 0xff;
    sysMemClear(temp_v1 + 0x30e8,0x80);
    if (*(int *)(temp_v1 + 0x30e4) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x30e4) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x3168) = 0;
  } while (temp_v2 < 3);
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x3284) = 0xff;
    sysMemClear(temp_v1 + 0x328c,0x80);
    if (*(int *)(temp_v1 + 0x3288) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x3288) = 0;
    }
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v1 + 0x330c) = 0;
  } while (temp_v2 < 2);
  temp_v2 = 1;
  temp_v1 = 1;
  *(unsigned char *)(param_1 + 0x281c) = 0xff;
  do {
    temp_v0 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(param_1 + temp_v2 * 0x8c + 0x281c) = 0xff;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(param_1 + temp_v0 * 0x8c + 0x281c) = 0xff;
  } while (temp_v1 < 0xb);
  return;
}

} /* extern "C" */
