/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048738c` (_code @ 0x48738c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int uiAdvanceConditionalScreenSprite(...); /* 0x4863f8 */
extern int FUN_00487124(...); /* 0x487124 */
extern int FUN_0048a4c0(...); /* 0x48a4c0 */
extern int FUN_0048b8a4(...); /* 0x48b8a4 */
extern int FUN_0048bad0(...); /* 0x48bad0 */
extern int FUN_0048bd2c(...); /* 0x48bd2c */
extern int FUN_0048c1c0(...); /* 0x48c1c0 */
extern int selectionNotificationAdvanceEntryAnimations(...); /* 0x48cd48 */
extern int FUN_0048ce38(...); /* 0x48ce38 */
extern int FUN_0048d11c(...); /* 0x48d11c */
extern int FUN_0048d1c8(...); /* 0x48d1c8 */
extern int FUN_0048d358(...); /* 0x48d358 */
extern int FUN_00490898(...); /* 0x490898 */


void FUN_0048738c(int param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 1;
  temp_v0 = 1;
  *(unsigned int *)(param_1 + 0x13f8) = 0;
  *(unsigned int *)(param_1 + 0x13fc) = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    *(unsigned int *)(temp_v2 + 0x13f8) = 0;
    *(unsigned int *)(temp_v2 + 0x13fc) = 0;
    temp_v2 = param_1 + (temp_v1 + 1) * 8;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v2 + 0x13f8) = 0;
    *(unsigned int *)(temp_v2 + 0x13fc) = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x11);
  *(unsigned int *)(param_1 + 0x13f8) = 0x48e408;
  *(unsigned int *)(param_1 + 0x13fc) = 0;
  *(romwright_code **)(param_1 + 0x1400) = uiAdvanceConditionalScreenSprite;
  *(unsigned int *)(param_1 + 0x1404) = 0;
  *(romwright_code **)(param_1 + 0x1408) = FUN_00487124;
  *(unsigned int *)(param_1 + 0x140c) = 0;
  *(romwright_code **)(param_1 + 0x1418) = FUN_0048bd2c;
  *(unsigned int *)(param_1 + 0x141c) = 0;
  *(romwright_code **)(param_1 + 0x1420) = FUN_0048b8a4;
  *(unsigned int *)(param_1 + 0x1424) = 0;
  *(romwright_code **)(param_1 + 0x1428) = FUN_0048ce38;
  *(unsigned int *)(param_1 + 0x142c) = 0;
  *(romwright_code **)(param_1 + 0x1438) = FUN_0048d1c8;
  *(unsigned int *)(param_1 + 0x143c) = 0;
  *(romwright_code **)(param_1 + 0x1440) = FUN_0048d358;
  *(unsigned int *)(param_1 + 0x1444) = 0;
  *(romwright_code **)(param_1 + 0x1448) = FUN_0048d11c;
  *(unsigned int *)(param_1 + 0x144c) = 0;
  *(romwright_code **)(param_1 + 0x1450) = FUN_0048a4c0;
  *(unsigned int *)(param_1 + 0x1454) = 0;
  *(romwright_code **)(param_1 + 0x1460) = selectionNotificationAdvanceEntryAnimations;
  *(unsigned int *)(param_1 + 0x1464) = 0;
  *(romwright_code **)(param_1 + 0x1468) = FUN_00490898;
  *(unsigned int *)(param_1 + 0x146c) = 0;
  *(romwright_code **)(param_1 + 0x1470) = FUN_0048bad0;
  *(unsigned int *)(param_1 + 0x1474) = 0;
  *(romwright_code **)(param_1 + 0x1478) = FUN_0048c1c0;
  *(unsigned int *)(param_1 + 0x147c) = 0;
  return;
}

} /* extern "C" */
