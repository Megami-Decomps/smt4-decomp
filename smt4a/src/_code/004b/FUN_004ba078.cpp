/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba078` (_code @ 0x4ba078, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_004b73e8(...); /* 0x4b73e8 */
extern int FUN_004b797c(...); /* 0x4b797c */
extern int FUN_004b7b74(...); /* 0x4b7b74 */
extern int FUN_004b7e20(...); /* 0x4b7e20 */
extern int FUN_004b8228(...); /* 0x4b8228 */
extern int FUN_004b82a0(...); /* 0x4b82a0 */
extern int FUN_004b8598(...); /* 0x4b8598 */
extern int FUN_004b88e0(...); /* 0x4b88e0 */
extern int FUN_004b8a28(...); /* 0x4b8a28 */
extern int aocBootStep(...); /* 0x4b8ae8 */
extern int FUN_004b8f18(...); /* 0x4b8f18 */
extern int FUN_004b9118(...); /* 0x4b9118 */
extern int FUN_004b91fc(...); /* 0x4b91fc */
extern int FUN_004b92d4(...); /* 0x4b92d4 */
extern int FUN_004b93a8(...); /* 0x4b93a8 */
extern int FUN_004b9410(...); /* 0x4b9410 */
extern int FUN_004b990c(...); /* 0x4b990c */


void FUN_004ba078(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 1;
  temp_v0 = 1;
  *(unsigned int *)(param_1 + 0x117c) = 0;
  *(unsigned int *)(param_1 + 0x1180) = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 8;
    *(unsigned int *)(temp_v1 + 0x117c) = 0;
    *(unsigned int *)(temp_v1 + 0x1180) = 0;
    temp_v1 = param_1 + (temp_v2 + 1) * 8;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v1 + 0x117c) = 0;
    *(unsigned int *)(temp_v1 + 0x1180) = 0;
    temp_v2 = temp_v2 + 2;
  } while (temp_v0 < 0x13);
  *(romwright_code **)(param_1 + 0x1184) = FUN_004b91fc;
  *(unsigned int *)(param_1 + 0x1188) = 0;
  *(romwright_code **)(param_1 + 0x118c) = FUN_004b8598;
  *(unsigned int *)(param_1 + 0x1190) = 0;
  *(romwright_code **)(param_1 + 0x1194) = FUN_004b93a8;
  *(unsigned int *)(param_1 + 0x1198) = 0;
  *(romwright_code **)(param_1 + 0x119c) = FUN_004b7b74;
  *(unsigned int *)(param_1 + 0x11a0) = 0;
  *(romwright_code **)(param_1 + 0x11a4) = FUN_004b73e8;
  *(unsigned int *)(param_1 + 0x11a8) = 0;
  *(romwright_code **)(param_1 + 0x11ac) = FUN_004b7e20;
  *(unsigned int *)(param_1 + 0x11b0) = 0;
  *(romwright_code **)(param_1 + 0x11b4) = FUN_004b990c;
  *(unsigned int *)(param_1 + 0x11b8) = 0;
  *(romwright_code **)(param_1 + 0x11bc) = FUN_004b88e0;
  *(unsigned int *)(param_1 + 0x11c0) = 0;
  *(romwright_code **)(param_1 + 0x11c4) = FUN_004b8228;
  *(unsigned int *)(param_1 + 0x11c8) = 0;
  *(romwright_code **)(param_1 + 0x11cc) = FUN_004b8a28;
  *(unsigned int *)(param_1 + 0x11d0) = 0;
  *(romwright_code **)(param_1 + 0x11d4) = FUN_004b797c;
  *(unsigned int *)(param_1 + 0x11d8) = 0;
  *(romwright_code **)(param_1 + 0x11dc) = FUN_004b8f18;
  *(unsigned int *)(param_1 + 0x11e0) = 0;
  *(romwright_code **)(param_1 + 0x11e4) = FUN_004b9118;
  *(unsigned int *)(param_1 + 0x11e8) = 0;
  *(romwright_code **)(param_1 + 0x11ec) = aocBootStep;
  *(unsigned int *)(param_1 + 0x11f0) = 0;
  *(romwright_code **)(param_1 + 0x11f4) = FUN_004b92d4;
  *(unsigned int *)(param_1 + 0x11f8) = 0;
  *(romwright_code **)(param_1 + 0x11fc) = FUN_004b9410;
  *(unsigned int *)(param_1 + 0x1200) = 0;
  *(romwright_code **)(param_1 + 0x1204) = FUN_004b82a0;
  *(unsigned int *)(param_1 + 0x1208) = 0;
  return;
}

} /* extern "C" */
