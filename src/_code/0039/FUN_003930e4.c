/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003930e4` (_code @ 0x3930e4, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00233890(); /* 0x233890 */
extern int FUN_0038e2f8(); /* 0x38e2f8 */
extern int FUN_0038e374(); /* 0x38e374 */
extern int FUN_0038e5f4(); /* 0x38e5f4 */
extern int FUN_0038ea88(); /* 0x38ea88 */
extern int FUN_0038ebd8(); /* 0x38ebd8 */
extern int FUN_0038efb8(); /* 0x38efb8 */
extern int FUN_0038f148(); /* 0x38f148 */
extern int FUN_0038f410(); /* 0x38f410 */
extern int FUN_0038f464(); /* 0x38f464 */
extern int FUN_0038f5d4(); /* 0x38f5d4 */
extern int FUN_0038fc28(); /* 0x38fc28 */
extern int FUN_0038fd40(); /* 0x38fd40 */
extern int FUN_00390038(); /* 0x390038 */
extern int FUN_003901bc(); /* 0x3901bc */
extern int FUN_00391e48(); /* 0x391e48 */
extern int FUN_003920d8(); /* 0x3920d8 */
extern int FUN_003923b0(); /* 0x3923b0 */
extern int FUN_003928b4(); /* 0x3928b4 */
extern int FUN_003932a4(); /* 0x3932a4 */


void FUN_003930e4(int param_1)

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
  *(romwright_code **)(param_1 + 0x10) = FUN_00390038;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(romwright_code **)(param_1 + 0x18) = FUN_0038e2f8;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(romwright_code **)(param_1 + 0x20) = FUN_0038ea88;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(romwright_code **)(param_1 + 0x28) = FUN_00391e48;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(romwright_code **)(param_1 + 0x30) = FUN_003923b0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(romwright_code **)(param_1 + 0x38) = FUN_0038ebd8;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(romwright_code **)(param_1 + 0x40) = FUN_003901bc;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(romwright_code **)(param_1 + 0x48) = FUN_003920d8;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(romwright_code **)(param_1 + 0x50) = FUN_003928b4;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(romwright_code **)(param_1 + 0x58) = FUN_0038fd40;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(romwright_code **)(param_1 + 0x60) = FUN_0038f148;
  *(unsigned int *)(param_1 + 100) = 0;
  *(romwright_code **)(param_1 + 0x68) = FUN_0038fc28;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(romwright_code **)(param_1 + 0x70) = FUN_0038e374;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(romwright_code **)(param_1 + 0x78) = FUN_0038efb8;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(romwright_code **)(param_1 + 0x80) = FUN_0038e5f4;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(romwright_code **)(param_1 + 0x88) = FUN_00233890;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(romwright_code **)(param_1 + 0x90) = FUN_0038f5d4;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(romwright_code **)(param_1 + 0x98) = FUN_0038f464;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(romwright_code **)(param_1 + 0xa0) = FUN_0038f410;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(romwright_code **)(param_1 + 0xa8) = FUN_003932a4;
  *(unsigned int *)(param_1 + 0xac) = 0;
  *(unsigned int *)(param_1 + 200) = 0x38efb4;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xe8) = 0x3914f8;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0x3914f8;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0x3914f8;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0x3914f8;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x118) = 0x3914f8;
  *(unsigned int *)(param_1 + 0x11c) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0x3914f8;
  *(unsigned int *)(param_1 + 0x124) = 0;
  *(unsigned int *)(param_1 + 400) = 0x3912a0;
  *(unsigned int *)(param_1 + 0x194) = 0;
  *(unsigned int *)(param_1 + 0x198) = 0x3912a0;
  *(unsigned int *)(param_1 + 0x19c) = 0;
  *(unsigned int *)(param_1 + 0x1a0) = 0x3912a0;
  *(unsigned int *)(param_1 + 0x1a4) = 0;
  *(unsigned int *)(param_1 + 0x1a8) = 0x3912a0;
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  *(unsigned int *)(param_1 + 0x1c0) = 0x3912a0;
  *(unsigned int *)(param_1 + 0x1c4) = 0;
  *(unsigned int *)(param_1 + 0x1c8) = 0x3912a0;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1e8) = 0x3928b0;
  *(unsigned int *)(param_1 + 0x1ec) = 0;
  *(unsigned int *)(param_1 + 0x1f8) = 0x38efb0;
  *(unsigned int *)(param_1 + 0x1fc) = 0;
  return;
}
