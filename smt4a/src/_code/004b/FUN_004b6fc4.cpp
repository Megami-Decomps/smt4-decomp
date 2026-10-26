/* NON_MATCHING: retail passes live-in r6 as asdOperatorNew's second argument without initializing r6; unit boundary/signature needs recovery. */
#include "romwright_types.h"
#include "shard/S2UiTexLoader.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int asdOperatorNew(void);
int FUN_0022677c(int, int);
int asdLoadFileAsyncSimple(...);
int campButtonHelpLoad(void);
int campCommonBgAcquire(void);
int FUN_0031e198(void);
int campButtonHelpAcquire(void);
int soundResetSpatialState(void);
int FUN_004930e4(int);
void mikadoInitUpdateHandlers(UiScreen*);
int FUN_004ba1f4(int);
int resetFlagGroup1F(int);
int dataTable33Load(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern int _ZN10FloatStateC1Ev(int);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: campButtonHelpLoad. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_0031e198. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: soundResetSpatialState. */
/* Supplied declaration required: FUN_004930e4. */
/* Supplied declaration required: FUN_004ba1f4. */
/* Supplied declaration required: resetFlagGroup1F. */
/* Supplied declaration required: dataTable33Load. */


void FUN_004b6fc4(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  mikadoInitUpdateHandlers(reinterpret_cast<UiScreen*>(param_1));
  FUN_004ba1f4(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x34) = 0xffffffff;
  asdTMTexTableLoadTmx(0x18,0);
  campCommonBgAcquire();
  FUN_003b61ec();
  campButtonHelpLoad();
  campButtonHelpAcquire();
  FUN_004930e4(0);
  dataTable33Load(param_1 + 0x1114);
  resetFlagGroup1F(param_1 + 0x9c);
  asdLoadFileAsyncSimple("mikado/talk.bf",param_1 + 0x1138,0);
  asdLoadFileAsyncSimple("mikado/talk.mbm",param_1 + 0x113c,0);
  asdLoadFileAsyncSimple("mikado/check.bf",param_1 + 0x1144,0);
  asdLoadFileAsyncSimple("mikado/check.mbm",param_1 + 0x1148,0);
  *(unsigned int *)(param_1 + 0x28) = 1;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x1130) = 0;
  *(unsigned int *)(param_1 + 0x1128) = 0;
  *(unsigned int *)(param_1 + 0x112c) = 0;
  *(unsigned int *)(param_1 + 0x1138) = 0;
  *(unsigned int *)(param_1 + 0x113c) = 0;
  *(unsigned int *)(param_1 + 0x1140) = 0;
  *(unsigned int *)(param_1 + 0x1118) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned short *)(param_1 + 0x4c) = 0xffff;
  *(unsigned short *)(param_1 + 0x4e) = 0;
  *(unsigned int *)(param_1 + 0x116c) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(unsigned char *)(param_1 + 0x49) = 0;
  *(unsigned char *)(param_1 + 0x4a) = 0;
  *(unsigned char *)(param_1 + 0x4b) = 0;
  FUN_0022677c(0,0xff);
  FUN_0022677c(1,0xff);
  temp_v0 = 0x7a0;
  asdOperatorNew();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = _ZN10FloatStateC1Ev(temp_v0 + 0x4f0);
    temp_v1 = temp_v1 - 0x4f0;
  }
  *(int *)(param_1 + 0x1218) = temp_v1;
  soundResetSpatialState();
  FUN_0031e198();
  return;
}

} /* extern "C" */
