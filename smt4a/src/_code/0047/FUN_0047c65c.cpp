/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047c65c` (_code @ 0x47c65c, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
class Obj526238;

extern "C" {

typedef int romwright_code(...);
extern int restartObjRun(...); /* 0x476fb4 */
extern int FUN_00477030(...); /* 0x477030 */
extern int FUN_004772b0(...); /* 0x4772b0 */
extern int FUN_00477744(...); /* 0x477744 */
extern int FUN_00477894(...); /* 0x477894 */
extern int FUN_00477c74(...); /* 0x477c74 */
extern int FUN_0047815c(...); /* 0x47815c */
extern int FUN_004782ec(...); /* 0x4782ec */
extern int _ZN9Obj52623816leaveWhenAocFreeEv(...); /* 0x4785b4 */
extern void aocQuestReturnToScript(Obj526238 *);
extern void aocQuestSceneReleaseStepResources(Obj526238 *);
extern int FUN_00478dc4(...); /* 0x478dc4 */
extern int FUN_00478edc(...); /* 0x478edc */
extern int FUN_004791d4(...); /* 0x4791d4 */
extern int FUN_00479358(...); /* 0x479358 */
extern int FUN_0047b224(...); /* 0x47b224 */
extern int FUN_0047b4b4(...); /* 0x47b4b4 */
extern int FUN_0047b78c(...); /* 0x47b78c */
extern int FUN_0047bd94(...); /* 0x47bd94 */
extern int FUN_0047c81c(...); /* 0x47c81c */


void FUN_0047c65c(int param_1)

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
  *(romwright_code **)(param_1 + 0x10) = FUN_004791d4;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(romwright_code **)(param_1 + 0x18) = restartObjRun;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(romwright_code **)(param_1 + 0x20) = FUN_00477744;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(romwright_code **)(param_1 + 0x28) = FUN_0047b224;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(romwright_code **)(param_1 + 0x30) = FUN_0047b78c;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(romwright_code **)(param_1 + 0x38) = FUN_00477894;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(romwright_code **)(param_1 + 0x40) = FUN_00479358;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(romwright_code **)(param_1 + 0x48) = FUN_0047b4b4;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(romwright_code **)(param_1 + 0x50) = FUN_0047bd94;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(romwright_code **)(param_1 + 0x58) = FUN_00478edc;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(romwright_code **)(param_1 + 0x60) = FUN_004782ec;
  *(unsigned int *)(param_1 + 100) = 0;
  *(romwright_code **)(param_1 + 0x68) = FUN_00478dc4;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(romwright_code **)(param_1 + 0x70) = FUN_00477030;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(romwright_code **)(param_1 + 0x78) = FUN_0047815c;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(romwright_code **)(param_1 + 0x80) = FUN_004772b0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(romwright_code **)(param_1 + 0x88) = FUN_00477c74;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(void (**)(Obj526238 *))(param_1 + 0x90) = aocQuestSceneReleaseStepResources;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(void (**)(Obj526238 *))(param_1 + 0x98) = aocQuestReturnToScript;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(romwright_code **)(param_1 + 0xa0) = _ZN9Obj52623816leaveWhenAocFreeEv;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(romwright_code **)(param_1 + 0xa8) = FUN_0047c81c;
  *(unsigned int *)(param_1 + 0xac) = 0;
  *(unsigned int *)(param_1 + 200) = 0x477c70;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xe8) = 0x47a6f0;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0x47a6f0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0x47a6f0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0x47a6f0;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x118) = 0x47a6f0;
  *(unsigned int *)(param_1 + 0x11c) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0x47a6f0;
  *(unsigned int *)(param_1 + 0x124) = 0;
  *(unsigned int *)(param_1 + 400) = 0x47a480;
  *(unsigned int *)(param_1 + 0x194) = 0;
  *(unsigned int *)(param_1 + 0x198) = 0x47a480;
  *(unsigned int *)(param_1 + 0x19c) = 0;
  *(unsigned int *)(param_1 + 0x1a0) = 0x47a480;
  *(unsigned int *)(param_1 + 0x1a4) = 0;
  *(unsigned int *)(param_1 + 0x1a8) = 0x47a480;
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  *(unsigned int *)(param_1 + 0x1c0) = 0x47a480;
  *(unsigned int *)(param_1 + 0x1c4) = 0;
  *(unsigned int *)(param_1 + 0x1c8) = 0x47a480;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1e8) = 0x47bc8c;
  *(unsigned int *)(param_1 + 0x1ec) = 0;
  *(unsigned int *)(param_1 + 0x1f8) = 0x477c6c;
  *(unsigned int *)(param_1 + 0x1fc) = 0;
  return;
}

} /* extern "C" */
