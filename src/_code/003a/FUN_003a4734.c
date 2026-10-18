/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4734` (_code @ 0x3a4734, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_0022fdf0(); /* 0x22fdf0 */
extern int FUN_003a0bb8(); /* 0x3a0bb8 */
extern int FUN_003a0d94(); /* 0x3a0d94 */
extern int FUN_003a0e78(); /* 0x3a0e78 */
extern int FUN_003a0f80(); /* 0x3a0f80 */
extern int FUN_003a1a88(); /* 0x3a1a88 */
extern int FUN_003a1abc(); /* 0x3a1abc */
extern int FUN_003a2a68(); /* 0x3a2a68 */
extern int FUN_003a2e64(); /* 0x3a2e64 */
extern int FUN_003a3570(); /* 0x3a3570 */
extern int FUN_003a3cb8(); /* 0x3a3cb8 */
extern int FUN_003a3e98(); /* 0x3a3e98 */
extern int FUN_003a4144(); /* 0x3a4144 */
extern int FUN_003a4c7c(); /* 0x3a4c7c */


void FUN_003a4734(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x14;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    *(unsigned int *)(temp_v2 + 0x20) = 0;
    *(unsigned int *)(temp_v2 + 0x24) = 0;
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(temp_v2 + 0xc0) = 0;
    *(unsigned int *)(temp_v2 + 0xc4) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0x20) = FUN_003a0f80;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(romwright_code **)(param_1 + 0x28) = FUN_003a1a88;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(romwright_code **)(param_1 + 0x30) = FUN_003a2e64;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(romwright_code **)(param_1 + 0x38) = FUN_003a3570;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(romwright_code **)(param_1 + 0x40) = FUN_003a0bb8;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0x3a5984;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(romwright_code **)(param_1 + 0x50) = FUN_003a3cb8;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(romwright_code **)(param_1 + 0x58) = FUN_003a3e98;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(romwright_code **)(param_1 + 0x60) = FUN_003a4144;
  *(unsigned int *)(param_1 + 100) = 0;
  *(romwright_code **)(param_1 + 0x68) = FUN_003a4c7c;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(romwright_code **)(param_1 + 0x70) = FUN_003a4c7c;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(romwright_code **)(param_1 + 0x78) = FUN_003a4c7c;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0x3a334c;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0xb0) = 0x3a1a6c;
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(romwright_code **)(param_1 + 0x88) = FUN_0022fdf0;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(romwright_code **)(param_1 + 0x90) = FUN_003a0d94;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(romwright_code **)(param_1 + 0x98) = FUN_003a1abc;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(romwright_code **)(param_1 + 0xa0) = FUN_003a2a68;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(romwright_code **)(param_1 + 0xa8) = FUN_003a0e78;
  *(unsigned int *)(param_1 + 0xac) = 0;
  return;
}
