/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8ee8` (_code @ 0x3a8ee8, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int FUN_0022cb1c(); /* 0x22cb1c */
extern int FUN_003a8b14(); /* 0x3a8b14 */
extern int FUN_003a8fcc(); /* 0x3a8fcc */
extern int FUN_003a90ec(); /* 0x3a90ec */
extern int FUN_003a95b4(); /* 0x3a95b4 */
extern int FUN_003aa730(); /* 0x3aa730 */


void FUN_003a8ee8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 9;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(temp_v2 + 0xa6c0) = 0;
    *(unsigned int *)(temp_v2 + 0xa6c4) = 0;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0xa708) = 0;
    *(unsigned int *)(temp_v2 + 0xa70c) = 0;
    *(unsigned int *)(temp_v2 + 0xa750) = 0;
    *(unsigned int *)(temp_v2 + 0xa754) = 0;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0xa6c0) = FUN_003a8fcc;
  *(unsigned int *)(param_1 + 0xa6c4) = 0;
  *(romwright_code **)(param_1 + 0xa6c8) = FUN_003a90ec;
  *(unsigned int *)(param_1 + 0xa6cc) = 0;
  *(romwright_code **)(param_1 + 0xa6d0) = FUN_003aa730;
  *(unsigned int *)(param_1 + 0xa6d4) = 0;
  *(romwright_code **)(param_1 + 0xa6d8) = FUN_0022cb1c;
  *(unsigned int *)(param_1 + 0xa6dc) = 0;
  *(romwright_code **)(param_1 + 0xa6e0) = FUN_003aa730;
  *(unsigned int *)(param_1 + 0xa6e4) = 0;
  *(romwright_code **)(param_1 + 0xa6e8) = FUN_003a8b14;
  *(unsigned int *)(param_1 + 0xa6ec) = 0;
  *(romwright_code **)(param_1 + 0xa6f0) = FUN_003a95b4;
  *(unsigned int *)(param_1 + 0xa6f4) = 0;
  *(unsigned int *)(param_1 + 0xa6f8) = 0x3a9644;
  *(unsigned int *)(param_1 + 0xa6fc) = 0;
  return;
}
