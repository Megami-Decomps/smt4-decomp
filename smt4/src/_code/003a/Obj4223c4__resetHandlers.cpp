/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj4223c413resetHandlersEv` (_code @ 0x3a6c4c, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int FUN_0022cba8(...); /* 0x22cba8 */
extern int FUN_003a6e68(...); /* 0x3a6e68 */
extern int devilListUpdatePreviewAndVisibility(...); /* 0x3a7530 */
extern int FUN_003a76b8(...); /* 0x3a76b8 */
extern int FUN_003a7834(...); /* 0x3a7834 */
extern int FUN_003a7b54(...); /* 0x3a7b54 */
extern int partyRefreshCompleteAndUpdateSummaries(...); /* 0x3a7be4 */
extern int FUN_003a7de4(...); /* 0x3a7de4 */
extern int FUN_003a7f98(...); /* 0x3a7f98 */
extern int FUN_003a80f4(...); /* 0x3a80f4 */
extern int FUN_003a8240(...); /* 0x3a8240 */
extern int FUN_003a836c(...); /* 0x3a836c */


void _ZN9Obj4223c413resetHandlersEv(int param_1)

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
  *(romwright_code **)(param_1 + 0xa5b8) = FUN_003a76b8;
  *(unsigned int *)(param_1 + 0xa5bc) = 0;
  *(romwright_code **)(param_1 + 0xa5c0) = FUN_003a7834;
  *(unsigned int *)(param_1 + 0xa5c4) = 0;
  *(romwright_code **)(param_1 + 0xa5c8) = devilListUpdatePreviewAndVisibility;
  *(unsigned int *)(param_1 + 0xa5cc) = 0;
  *(romwright_code **)(param_1 + 0xa5d0) = FUN_003a8240;
  *(unsigned int *)(param_1 + 0xa5d4) = 0;
  *(romwright_code **)(param_1 + 0xa5d8) = FUN_003a7de4;
  *(unsigned int *)(param_1 + 0xa5dc) = 0;
  *(romwright_code **)(param_1 + 0xa5e0) = FUN_003a7f98;
  *(unsigned int *)(param_1 + 0xa5e4) = 0;
  *(romwright_code **)(param_1 + 0xa5e8) = FUN_003a836c;
  *(unsigned int *)(param_1 + 0xa5ec) = 0;
  *(romwright_code **)(param_1 + 0xa5f0) = FUN_003a80f4;
  *(unsigned int *)(param_1 + 0xa5f4) = 0;
  *(romwright_code **)(param_1 + 0xa5f8) = partyRefreshCompleteAndUpdateSummaries;
  *(unsigned int *)(param_1 + 0xa5fc) = 0;
  *(romwright_code **)(param_1 + 0xa600) = devilListUpdatePreviewAndVisibility;
  *(unsigned int *)(param_1 + 0xa604) = 0;
  *(romwright_code **)(param_1 + 0xa608) = FUN_003a6e68;
  *(unsigned int *)(param_1 + 0xa60c) = 0;
  *(romwright_code **)(param_1 + 0xa610) = FUN_003a7b54;
  *(unsigned int *)(param_1 + 0xa614) = 0;
  *(unsigned int *)(param_1 + 0xa618) = 0x3a7eac;
  *(unsigned int *)(param_1 + 0xa61c) = 0;
  *(romwright_code **)(param_1 + 0xa6a0) = FUN_0022cba8;
  *(unsigned int *)(param_1 + 0xa6a4) = 0;
  *(romwright_code **)(param_1 + 0xa6a8) = FUN_0022cba8;
  *(unsigned int *)(param_1 + 0xa6ac) = 0;
  *(unsigned int *)(param_1 + 0xa6b0) = 0x3a8310;
  *(unsigned int *)(param_1 + 0xa6b4) = 0;
  *(unsigned int *)(param_1 + 0xa6b8) = 0x3a8310;
  *(unsigned int *)(param_1 + 0xa6bc) = 0;
  *(unsigned int *)(param_1 + 0xa6c0) = 0x3a8308;
  *(unsigned int *)(param_1 + 0xa6c4) = 0;
  *(romwright_code **)(param_1 + 0xa6c8) = FUN_0022cba8;
  *(unsigned int *)(param_1 + 0xa6cc) = 0;
  *(unsigned int *)(param_1 + 0xa6d0) = 0x3a830c;
  *(unsigned int *)(param_1 + 0xa6d4) = 0;
  *(romwright_code **)(param_1 + 0xa6e0) = FUN_0022cba8;
  *(unsigned int *)(param_1 + 0xa6e4) = 0;
  *(romwright_code **)(param_1 + 0xa6e8) = FUN_0022cba8;
  *(unsigned int *)(param_1 + 0xa6ec) = 0;
  *(romwright_code **)(param_1 + 0xa6f0) = FUN_0022cba8;
  *(unsigned int *)(param_1 + 0xa6f4) = 0;
  *(unsigned int *)(param_1 + 0xa6d8) = 0x22cba4;
  *(unsigned int *)(param_1 + 0xa6dc) = 0;
  return;
}

} /* extern "C" */
