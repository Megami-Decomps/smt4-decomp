/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003852c8` (_code @ 0x3852c8, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern int FUN_00381d78(...); /* 0x381d78 */
extern int questConfirmSetup(...); /* 0x381dac */
extern int FUN_00381fd4(...); /* 0x381fd4 */
extern int FUN_003821d8(...); /* 0x3821d8 */
extern int FUN_00382cd8(...); /* 0x382cd8 */
extern int FUN_00382f4c(...); /* 0x382f4c */
extern int FUN_003832d0(...); /* 0x3832d0 */
extern int FUN_003832fc(...); /* 0x3832fc */
extern int FUN_0038358c(...); /* 0x38358c */
extern int FUN_003846e8(...); /* 0x3846e8 */
extern int FUN_00384800(...); /* 0x384800 */
extern int qcEndSceneStep(...); /* 0x3849d0 */
extern int FUN_00384be8(...); /* 0x384be8 */
extern int FUN_00385448(...); /* 0x385448 */


void FUN_003852c8(int param_1)

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
  *(romwright_code **)(param_1 + 0x5d0) = FUN_003832fc;
  *(unsigned int *)(param_1 + 0x5d4) = 0;
  *(romwright_code **)(param_1 + 0x5d8) = FUN_00381fd4;
  *(unsigned int *)(param_1 + 0x5dc) = 0;
  *(romwright_code **)(param_1 + 0x5e0) = FUN_00381d78;
  *(unsigned int *)(param_1 + 0x5e4) = 0;
  *(romwright_code **)(param_1 + 0x5e8) = FUN_00384800;
  *(unsigned int *)(param_1 + 0x5ec) = 0;
  *(romwright_code **)(param_1 + 0x5f0) = questConfirmSetup;
  *(unsigned int *)(param_1 + 0x5f4) = 0;
  *(romwright_code **)(param_1 + 0x5f8) = FUN_00382f4c;
  *(unsigned int *)(param_1 + 0x5fc) = 0;
  *(unsigned int *)(param_1 + 0x600) = 0x381e04;
  *(unsigned int *)(param_1 + 0x604) = 0;
  *(romwright_code **)(param_1 + 0x608) = FUN_00385448;
  *(unsigned int *)(param_1 + 0x60c) = 0;
  *(romwright_code **)(param_1 + 0x610) = FUN_00384be8;
  *(unsigned int *)(param_1 + 0x614) = 0;
  *(romwright_code **)(param_1 + 0x618) = FUN_003821d8;
  *(unsigned int *)(param_1 + 0x61c) = 0;
  *(romwright_code **)(param_1 + 0x620) = FUN_00382cd8;
  *(unsigned int *)(param_1 + 0x624) = 0;
  *(romwright_code **)(param_1 + 0x628) = FUN_0038358c;
  *(unsigned int *)(param_1 + 0x62c) = 0;
  *(romwright_code **)(param_1 + 0x630) = FUN_003832d0;
  *(unsigned int *)(param_1 + 0x634) = 0;
  *(romwright_code **)(param_1 + 0x640) = qcEndSceneStep;
  *(unsigned int *)(param_1 + 0x644) = 0;
  *(unsigned int *)(param_1 + 0x648) = 0x383570;
  *(unsigned int *)(param_1 + 0x64c) = 0;
  *(romwright_code **)(param_1 + 0x638) = FUN_003846e8;
  *(unsigned int *)(param_1 + 0x63c) = 0;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
