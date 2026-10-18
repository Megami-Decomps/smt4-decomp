/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6e68` (_code @ 0x3a6e68, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int FUN_0022cd3c(); /* 0x22cd3c */
extern int FUN_003a7084(); /* 0x3a7084 */
extern int FUN_003a774c(); /* 0x3a774c */
extern int FUN_003a78d4(); /* 0x3a78d4 */
extern int FUN_003a7a50(); /* 0x3a7a50 */
extern int FUN_003a7d74(); /* 0x3a7d74 */
extern int FUN_003a7e04(); /* 0x3a7e04 */
extern int FUN_003a8004(); /* 0x3a8004 */
extern int FUN_003a81b8(); /* 0x3a81b8 */
extern int FUN_003a8314(); /* 0x3a8314 */
extern int FUN_003a8460(); /* 0x3a8460 */
extern int FUN_003a858c(); /* 0x3a858c */


void FUN_003a6e68(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0xe;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(temp_v2 + 0xa5b8) = 0;
    *(unsigned int *)(temp_v2 + 0xa5bc) = 0;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0xa628) = 0;
    *(unsigned int *)(temp_v2 + 0xa62c) = 0;
    *(unsigned int *)(temp_v2 + 0xa698) = 0;
    *(unsigned int *)(temp_v2 + 0xa69c) = 0;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0xa5b8) = FUN_003a78d4;
  *(unsigned int *)(param_1 + 0xa5bc) = 0;
  *(romwright_code **)(param_1 + 0xa5c0) = FUN_003a7a50;
  *(unsigned int *)(param_1 + 0xa5c4) = 0;
  *(romwright_code **)(param_1 + 0xa5c8) = FUN_003a774c;
  *(unsigned int *)(param_1 + 0xa5cc) = 0;
  *(romwright_code **)(param_1 + 0xa5d0) = FUN_003a8460;
  *(unsigned int *)(param_1 + 0xa5d4) = 0;
  *(romwright_code **)(param_1 + 0xa5d8) = FUN_003a8004;
  *(unsigned int *)(param_1 + 0xa5dc) = 0;
  *(romwright_code **)(param_1 + 0xa5e0) = FUN_003a81b8;
  *(unsigned int *)(param_1 + 0xa5e4) = 0;
  *(romwright_code **)(param_1 + 0xa5e8) = FUN_003a858c;
  *(unsigned int *)(param_1 + 0xa5ec) = 0;
  *(romwright_code **)(param_1 + 0xa5f0) = FUN_003a8314;
  *(unsigned int *)(param_1 + 0xa5f4) = 0;
  *(romwright_code **)(param_1 + 0xa5f8) = FUN_003a7e04;
  *(unsigned int *)(param_1 + 0xa5fc) = 0;
  *(romwright_code **)(param_1 + 0xa600) = FUN_003a774c;
  *(unsigned int *)(param_1 + 0xa604) = 0;
  *(romwright_code **)(param_1 + 0xa608) = FUN_003a7084;
  *(unsigned int *)(param_1 + 0xa60c) = 0;
  *(romwright_code **)(param_1 + 0xa610) = FUN_003a7d74;
  *(unsigned int *)(param_1 + 0xa614) = 0;
  *(unsigned int *)(param_1 + 0xa618) = 0x3a80cc;
  *(unsigned int *)(param_1 + 0xa61c) = 0;
  *(romwright_code **)(param_1 + 0xa6a0) = FUN_0022cd3c;
  *(unsigned int *)(param_1 + 0xa6a4) = 0;
  *(romwright_code **)(param_1 + 0xa6a8) = FUN_0022cd3c;
  *(unsigned int *)(param_1 + 0xa6ac) = 0;
  *(unsigned int *)(param_1 + 0xa6b0) = 0x3a8530;
  *(unsigned int *)(param_1 + 0xa6b4) = 0;
  *(unsigned int *)(param_1 + 0xa6b8) = 0x3a8530;
  *(unsigned int *)(param_1 + 0xa6bc) = 0;
  *(unsigned int *)(param_1 + 0xa6c0) = 0x3a8528;
  *(unsigned int *)(param_1 + 0xa6c4) = 0;
  *(romwright_code **)(param_1 + 0xa6c8) = FUN_0022cd3c;
  *(unsigned int *)(param_1 + 0xa6cc) = 0;
  *(unsigned int *)(param_1 + 0xa6d0) = 0x3a852c;
  *(unsigned int *)(param_1 + 0xa6d4) = 0;
  *(romwright_code **)(param_1 + 0xa6e0) = FUN_0022cd3c;
  *(unsigned int *)(param_1 + 0xa6e4) = 0;
  *(romwright_code **)(param_1 + 0xa6e8) = FUN_0022cd3c;
  *(unsigned int *)(param_1 + 0xa6ec) = 0;
  *(romwright_code **)(param_1 + 0xa6f0) = FUN_0022cd3c;
  *(unsigned int *)(param_1 + 0xa6f4) = 0;
  *(unsigned int *)(param_1 + 0xa6d8) = 0x22cd38;
  *(unsigned int *)(param_1 + 0xa6dc) = 0;
  return;
}
