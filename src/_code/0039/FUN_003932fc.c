/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003932fc` (_code @ 0x3932fc, 0x1bc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00233a24(); /* 0x233a24 */
extern int FUN_0038e510(); /* 0x38e510 */
extern int FUN_0038e58c(); /* 0x38e58c */
extern int FUN_0038e80c(); /* 0x38e80c */
extern int FUN_0038eca0(); /* 0x38eca0 */
extern int FUN_0038edf0(); /* 0x38edf0 */
extern int FUN_0038f1d0(); /* 0x38f1d0 */
extern int FUN_0038f360(); /* 0x38f360 */
extern int FUN_0038f628(); /* 0x38f628 */
extern int FUN_0038f67c(); /* 0x38f67c */
extern int FUN_0038f7ec(); /* 0x38f7ec */
extern int FUN_0038fe40(); /* 0x38fe40 */
extern int FUN_0038ff58(); /* 0x38ff58 */
extern int FUN_00390250(); /* 0x390250 */
extern int FUN_003903d4(); /* 0x3903d4 */
extern int FUN_00392060(); /* 0x392060 */
extern int FUN_003922f0(); /* 0x3922f0 */
extern int FUN_003925c8(); /* 0x3925c8 */
extern int FUN_00392acc(); /* 0x392acc */
extern int FUN_003934bc(); /* 0x3934bc */


void FUN_003932fc(int param_1)

{
/* irregular: 20 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x15;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0x10) = 0;
    *(unsigned int *)(temp_v2 + 0x14) = 0;
    *(unsigned int *)(temp_v2 + 0xb8) = 0;
    *(unsigned int *)(temp_v2 + 0xbc) = 0;
    *(unsigned int *)(temp_v2 + 0x160) = 0;
    *(unsigned int *)(temp_v2 + 0x164) = 0;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0x10) = FUN_00390250;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(romwright_code **)(param_1 + 0x18) = FUN_0038e510;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(romwright_code **)(param_1 + 0x20) = FUN_0038eca0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(romwright_code **)(param_1 + 0x28) = FUN_00392060;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(romwright_code **)(param_1 + 0x30) = FUN_003925c8;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(romwright_code **)(param_1 + 0x38) = FUN_0038edf0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(romwright_code **)(param_1 + 0x40) = FUN_003903d4;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(romwright_code **)(param_1 + 0x48) = FUN_003922f0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(romwright_code **)(param_1 + 0x50) = FUN_00392acc;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(romwright_code **)(param_1 + 0x58) = FUN_0038ff58;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(romwright_code **)(param_1 + 0x60) = FUN_0038f360;
  *(unsigned int *)(param_1 + 100) = 0;
  *(romwright_code **)(param_1 + 0x68) = FUN_0038fe40;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(romwright_code **)(param_1 + 0x70) = FUN_0038e58c;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(romwright_code **)(param_1 + 0x78) = FUN_0038f1d0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(romwright_code **)(param_1 + 0x80) = FUN_0038e80c;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(romwright_code **)(param_1 + 0x88) = FUN_00233a24;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(romwright_code **)(param_1 + 0x90) = FUN_0038f7ec;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(romwright_code **)(param_1 + 0x98) = FUN_0038f67c;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(romwright_code **)(param_1 + 0xa0) = FUN_0038f628;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(romwright_code **)(param_1 + 0xa8) = FUN_003934bc;
  *(unsigned int *)(param_1 + 0xac) = 0;
  *(unsigned int *)(param_1 + 200) = 0x38f1cc;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xe8) = 0x391710;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0x391710;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0x391710;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0x391710;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x118) = 0x391710;
  *(unsigned int *)(param_1 + 0x11c) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0x391710;
  *(unsigned int *)(param_1 + 0x124) = 0;
  *(unsigned int *)(param_1 + 400) = 0x3914b8;
  *(unsigned int *)(param_1 + 0x194) = 0;
  *(unsigned int *)(param_1 + 0x198) = 0x3914b8;
  *(unsigned int *)(param_1 + 0x19c) = 0;
  *(unsigned int *)(param_1 + 0x1a0) = 0x3914b8;
  *(unsigned int *)(param_1 + 0x1a4) = 0;
  *(unsigned int *)(param_1 + 0x1a8) = 0x3914b8;
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  *(unsigned int *)(param_1 + 0x1c0) = 0x3914b8;
  *(unsigned int *)(param_1 + 0x1c4) = 0;
  *(unsigned int *)(param_1 + 0x1c8) = 0x3914b8;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1e8) = 0x392ac8;
  *(unsigned int *)(param_1 + 0x1ec) = 0;
  *(unsigned int *)(param_1 + 0x1f8) = 0x38f1c8;
  *(unsigned int *)(param_1 + 0x1fc) = 0;
  return;
}
