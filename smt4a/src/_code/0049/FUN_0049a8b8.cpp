/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049a8b8` (_code @ 0x49a8b8, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_00494740(...); /* 0x494740 */
extern int FUN_00494940(...); /* 0x494940 */
extern int FUN_00494a34(...); /* 0x494a34 */
extern int FUN_00495584(...); /* 0x495584 */
extern int FUN_0049569c(...); /* 0x49569c */
extern int FUN_00496638(...); /* 0x496638 */
extern int FUN_004969a8(...); /* 0x4969a8 */
extern int FUN_00497250(...); /* 0x497250 */
extern int FUN_00497290(...); /* 0x497290 */
extern int FUN_00498594(...); /* 0x498594 */
extern int FUN_00498ac0(...); /* 0x498ac0 */
extern int FUN_00499390(...); /* 0x499390 */
extern int FUN_004995b0(...); /* 0x4995b0 */
extern int FUN_00499e00(...); /* 0x499e00 */
extern int FUN_00499fdc(...); /* 0x499fdc */
extern int FUN_0049a2b4(...); /* 0x49a2b4 */
extern int FUN_0049b00c(...); /* 0x49b00c */
extern int FUN_0049bd20(...); /* 0x49bd20 */


void FUN_0049a8b8(int param_1)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x16;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0x24) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + 0xd4) = 0;
    *(unsigned int *)(temp_v2 + 0xd8) = 0;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0x24) = FUN_0049569c;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(romwright_code **)(param_1 + 0x2c) = FUN_00494a34;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(romwright_code **)(param_1 + 0x34) = FUN_00497250;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(romwright_code **)(param_1 + 0x3c) = FUN_00498ac0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(romwright_code **)(param_1 + 0x44) = FUN_00496638;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(romwright_code **)(param_1 + 0x4c) = FUN_004995b0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(romwright_code **)(param_1 + 0x54) = FUN_00494740;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(romwright_code **)(param_1 + 0x5c) = FUN_0049bd20;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(romwright_code **)(param_1 + 100) = FUN_00499e00;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(romwright_code **)(param_1 + 0x6c) = FUN_00499fdc;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(romwright_code **)(param_1 + 0x74) = FUN_0049a2b4;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(romwright_code **)(param_1 + 0x7c) = FUN_0049b00c;
  *(unsigned int *)(param_1 + 0x80) = 0;
  *(romwright_code **)(param_1 + 0x84) = FUN_0049b00c;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(romwright_code **)(param_1 + 0x8c) = FUN_0049b00c;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(romwright_code **)(param_1 + 0x94) = FUN_00499390;
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0x497044;
  *(unsigned int *)(param_1 + 200) = 0;
  *(romwright_code **)(param_1 + 0x9c) = FUN_004969a8;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  *(romwright_code **)(param_1 + 0xa4) = FUN_00494940;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(romwright_code **)(param_1 + 0xac) = FUN_00497290;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  *(romwright_code **)(param_1 + 0xb4) = FUN_00498594;
  *(unsigned int *)(param_1 + 0xb8) = 0;
  *(romwright_code **)(param_1 + 0xbc) = FUN_00495584;
  *(unsigned int *)(param_1 + 0xc0) = 0;
  return;
}

} /* extern "C" */
