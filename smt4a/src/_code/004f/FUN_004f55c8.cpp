/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f55c8` (_code @ 0x4f55c8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int sysMemClear(int, int);
int workOwnerRelease(int);
int btlCameraFinishTransition(int);
int obj4FSlots28Reset(int);
int FUN_004f7f08(void);
int FUN_004f8fa0(int);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: workOwnerRelease. */
/* Supplied declaration required: btlCameraFinishTransition. */
/* Supplied declaration required: obj4FSlots28Reset. */
/* Supplied declaration required: FUN_004f7f08. */
/* Supplied declaration required: FUN_004f8fa0. */


void FUN_004f55c8(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x33bc) = 0;
  FUN_004f7f08();
  btlCameraFinishTransition(param_1);
  FUN_004f8fa0(param_1);
  obj4FSlots28Reset(param_1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x3c;
    *(unsigned int *)(temp_v0 + 0x139c) = 0;
    *(unsigned int *)(temp_v0 + 0x1398) = 0xffffffff;
    workOwnerRelease(temp_v0 + 0x13a0);
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x13d0) = 0;
  } while (temp_v1 < 0x32);
  *(unsigned int *)(param_1 + 0x339c) = 0;
  *(unsigned char *)(param_1 + 0x33ac) = 0xc;
  *(unsigned int *)(param_1 + 0x1f54) = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x1f58) = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x8c;
    *(unsigned char *)(temp_v0 + 0x281c) = 0xff;
    sysMemClear(temp_v0 + 0x2824,0x80);
    if (*(int *)(temp_v0 + 0x2820) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x2820) = 0;
    }
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v0 + 0x28a4) = 0;
  } while (temp_v1 < 0xb);
  *(unsigned int *)(param_1 + 0x339c) = *(unsigned int *)(param_1 + 0x339c) | 0x100;
  *(unsigned int *)(param_1 + 0x3588) = 0;
  *(unsigned int *)(param_1 + 0x9c70) = 0x3f800000;
  return;
}

} /* extern "C" */
