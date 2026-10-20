/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4518` (_code @ 0x3a4518, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_0022fc5c(...); /* 0x22fc5c */
extern int FUN_003a099c(...); /* 0x3a099c */
extern int FUN_003a0b78(...); /* 0x3a0b78 */
extern int FUN_003a0c5c(...); /* 0x3a0c5c */
extern int FUN_003a0d64(...); /* 0x3a0d64 */
extern int FUN_003a186c(...); /* 0x3a186c */
extern int FUN_003a18a0(...); /* 0x3a18a0 */
extern int FUN_003a284c(...); /* 0x3a284c */
extern int FUN_003a2c48(...); /* 0x3a2c48 */
extern int FUN_003a3354(...); /* 0x3a3354 */
extern int FUN_003a3a9c(...); /* 0x3a3a9c */
extern int FUN_003a3c7c(...); /* 0x3a3c7c */
extern int FUN_003a3f28(...); /* 0x3a3f28 */
extern int FUN_003a4a60(...); /* 0x3a4a60 */


void FUN_003a4518(int param_1)

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
  *(romwright_code **)(param_1 + 0x20) = FUN_003a0d64;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(romwright_code **)(param_1 + 0x28) = FUN_003a186c;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(romwright_code **)(param_1 + 0x30) = FUN_003a2c48;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(romwright_code **)(param_1 + 0x38) = FUN_003a3354;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(romwright_code **)(param_1 + 0x40) = FUN_003a099c;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0x3a5768;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(romwright_code **)(param_1 + 0x50) = FUN_003a3a9c;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(romwright_code **)(param_1 + 0x58) = FUN_003a3c7c;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(romwright_code **)(param_1 + 0x60) = FUN_003a3f28;
  *(unsigned int *)(param_1 + 100) = 0;
  *(romwright_code **)(param_1 + 0x68) = FUN_003a4a60;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(romwright_code **)(param_1 + 0x70) = FUN_003a4a60;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(romwright_code **)(param_1 + 0x78) = FUN_003a4a60;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0x3a3130;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0xb0) = 0x3a1850;
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(romwright_code **)(param_1 + 0x88) = FUN_0022fc5c;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(romwright_code **)(param_1 + 0x90) = FUN_003a0b78;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(romwright_code **)(param_1 + 0x98) = FUN_003a18a0;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(romwright_code **)(param_1 + 0xa0) = FUN_003a284c;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(romwright_code **)(param_1 + 0xa8) = FUN_003a0c5c;
  *(unsigned int *)(param_1 + 0xac) = 0;
  return;
}

} /* extern "C" */
