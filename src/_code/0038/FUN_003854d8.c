/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003854d8` (_code @ 0x3854d8, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern int FUN_00381f88(); /* 0x381f88 */
extern int FUN_00381fbc(); /* 0x381fbc */
extern int FUN_003821e4(); /* 0x3821e4 */
extern int FUN_003823e8(); /* 0x3823e8 */
extern int FUN_00382ee8(); /* 0x382ee8 */
extern int FUN_0038315c(); /* 0x38315c */
extern int FUN_003834e0(); /* 0x3834e0 */
extern int FUN_0038350c(); /* 0x38350c */
extern int FUN_0038379c(); /* 0x38379c */
extern int FUN_003848f8(); /* 0x3848f8 */
extern int FUN_00384a10(); /* 0x384a10 */
extern int FUN_00384be0(); /* 0x384be0 */
extern int FUN_00384df8(); /* 0x384df8 */
extern int FUN_00385658(); /* 0x385658 */


void FUN_003854d8(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    *(unsigned int *)(temp_v2 + 0x5c8) = 0;
    *(unsigned int *)(temp_v2 + 0x5cc) = 0;
    temp_v2 = param_1 + (temp_v1 + 1) * 8;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v2 + 0x5c8) = 0;
    *(unsigned int *)(temp_v2 + 0x5cc) = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x12);
  *(romwright_code **)(param_1 + 0x5d0) = FUN_0038350c;
  *(unsigned int *)(param_1 + 0x5d4) = 0;
  *(romwright_code **)(param_1 + 0x5d8) = FUN_003821e4;
  *(unsigned int *)(param_1 + 0x5dc) = 0;
  *(romwright_code **)(param_1 + 0x5e0) = FUN_00381f88;
  *(unsigned int *)(param_1 + 0x5e4) = 0;
  *(romwright_code **)(param_1 + 0x5e8) = FUN_00384a10;
  *(unsigned int *)(param_1 + 0x5ec) = 0;
  *(romwright_code **)(param_1 + 0x5f0) = FUN_00381fbc;
  *(unsigned int *)(param_1 + 0x5f4) = 0;
  *(romwright_code **)(param_1 + 0x5f8) = FUN_0038315c;
  *(unsigned int *)(param_1 + 0x5fc) = 0;
  *(unsigned int *)(param_1 + 0x600) = 0x382014;
  *(unsigned int *)(param_1 + 0x604) = 0;
  *(romwright_code **)(param_1 + 0x608) = FUN_00385658;
  *(unsigned int *)(param_1 + 0x60c) = 0;
  *(romwright_code **)(param_1 + 0x610) = FUN_00384df8;
  *(unsigned int *)(param_1 + 0x614) = 0;
  *(romwright_code **)(param_1 + 0x618) = FUN_003823e8;
  *(unsigned int *)(param_1 + 0x61c) = 0;
  *(romwright_code **)(param_1 + 0x620) = FUN_00382ee8;
  *(unsigned int *)(param_1 + 0x624) = 0;
  *(romwright_code **)(param_1 + 0x628) = FUN_0038379c;
  *(unsigned int *)(param_1 + 0x62c) = 0;
  *(romwright_code **)(param_1 + 0x630) = FUN_003834e0;
  *(unsigned int *)(param_1 + 0x634) = 0;
  *(romwright_code **)(param_1 + 0x640) = FUN_00384be0;
  *(unsigned int *)(param_1 + 0x644) = 0;
  *(unsigned int *)(param_1 + 0x648) = 0x383780;
  *(unsigned int *)(param_1 + 0x64c) = 0;
  *(romwright_code **)(param_1 + 0x638) = FUN_003848f8;
  *(unsigned int *)(param_1 + 0x63c) = 0;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}
