/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb0ac` (_code @ 0x3bb0ac, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ContentTransition.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern void updateContentTransitionDispatch(ContentTransition *);
extern int sceneFinishScriptRun(...); /* 0x3b8a68 */
extern int FUN_003b8c40(...); /* 0x3b8c40 */
extern int FUN_003b8e58(...); /* 0x3b8e58 */
extern int FUN_003b9238(...); /* 0x3b9238 */
extern int FUN_003b92b4(...); /* 0x3b92b4 */
extern int FUN_003b95a4(...); /* 0x3b95a4 */
extern int FUN_003b992c(...); /* 0x3b992c */
extern int FUN_003b9a84(...); /* 0x3b9a84 */
extern int aocBootStep(...); /* 0x3b9b48 */
extern int aocTransitionUpdate(...); /* 0x3b9fd8 */
extern int FUN_003ba1d8(...); /* 0x3ba1d8 */
extern int FUN_003ba2bc(...); /* 0x3ba2bc */
extern int FUN_003ba38c(...); /* 0x3ba38c */
extern int loaderStartScriptEntry(...); /* 0x3ba460 */
extern void contentTransitionProcessDeparture(ContentTransition *);
extern int FUN_003ba998(...); /* 0x3ba998 */


void FUN_003bb0ac(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 1;
  temp_v0 = 1;
  *(unsigned int *)(param_1 + 0xdc0) = 0;
  *(unsigned int *)(param_1 + 0xdc4) = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v2 + 0xdc0) = 0;
    *(unsigned int *)(temp_v2 + 0xdc4) = 0;
    temp_v2 = param_1 + (temp_v1 + 1) * 8;
    *(unsigned int *)(temp_v2 + 0xdc0) = 0;
    *(unsigned int *)(temp_v2 + 0xdc4) = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x13);
  *(romwright_code **)(param_1 + 0xdc8) = FUN_003ba2bc;
  *(unsigned int *)(param_1 + 0xdcc) = 0;
  *(romwright_code **)(param_1 + 0xdd0) = FUN_003b95a4;
  *(unsigned int *)(param_1 + 0xdd4) = 0;
  *(romwright_code **)(param_1 + 0xdd8) = loaderStartScriptEntry;
  *(unsigned int *)(param_1 + 0xddc) = 0;
  *(romwright_code **)(param_1 + 0xde0) = FUN_003b8c40;
  *(unsigned int *)(param_1 + 0xde4) = 0;
  *(romwright_code **)(param_1 + 0xde8) = (romwright_code *)updateContentTransitionDispatch;
  *(unsigned int *)(param_1 + 0xdec) = 0;
  *(romwright_code **)(param_1 + 0xdf0) = FUN_003b8e58;
  *(unsigned int *)(param_1 + 0xdf4) = 0;
  *(romwright_code **)(param_1 + 0xdf8) = FUN_003ba998;
  *(unsigned int *)(param_1 + 0xdfc) = 0;
  *(romwright_code **)(param_1 + 0xe00) = FUN_003b992c;
  *(unsigned int *)(param_1 + 0xe04) = 0;
  *(romwright_code **)(param_1 + 0xe08) = FUN_003b9238;
  *(unsigned int *)(param_1 + 0xe0c) = 0;
  *(romwright_code **)(param_1 + 0xe10) = FUN_003b9a84;
  *(unsigned int *)(param_1 + 0xe14) = 0;
  *(romwright_code **)(param_1 + 0xe18) = sceneFinishScriptRun;
  *(unsigned int *)(param_1 + 0xe1c) = 0;
  *(romwright_code **)(param_1 + 0xe20) = aocTransitionUpdate;
  *(unsigned int *)(param_1 + 0xe24) = 0;
  *(romwright_code **)(param_1 + 0xe28) = FUN_003ba1d8;
  *(unsigned int *)(param_1 + 0xe2c) = 0;
  *(romwright_code **)(param_1 + 0xe30) = aocBootStep;
  *(unsigned int *)(param_1 + 0xe34) = 0;
  *(romwright_code **)(param_1 + 0xe38) = FUN_003ba38c;
  *(unsigned int *)(param_1 + 0xe3c) = 0;
  *(romwright_code **)(param_1 + 0xe40) = (romwright_code *)contentTransitionProcessDeparture;
  *(unsigned int *)(param_1 + 0xe44) = 0;
  *(romwright_code **)(param_1 + 0xe48) = FUN_003b92b4;
  *(unsigned int *)(param_1 + 0xe4c) = 0;
  return;
}

} /* extern "C" */
