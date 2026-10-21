/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00264548` (_code @ 0x264548, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(int, int);
int FUN_002897b0(int);
int FUN_002897d0(int);
int messageSlotSet(int);
int FUN_002a03d8(int, int);
int scrScriptProcessDestroy(unsigned int);
int asdMemFree(unsigned int);

extern int g_lmapMainState; /* 0x447060 */

extern int scrRunOpcodesStub(unsigned int);
extern int FUN_002896bc(void);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_002897b0. */
extern int FUN_002897c0(void);
/* Supplied declaration required: FUN_002897d0. */
extern int FUN_002897e0(void);
/* Supplied declaration required: messageSlotSet. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int FUN_002c1d5c(void);
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: asdMemFree. */


unsigned int FUN_00264548(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v1 = g_lmapMainState;
  piVar3 = (int *)(g_lmapMainState + 0x4f00);
  temp_v0 = *piVar3;
  if (temp_v0 != 0) {
    if (((temp_v0 != 1) && (temp_v0 == 2)) && (temp_v1 = FUN_002896bc(), temp_v1 != 0)) {
      *piVar3 = 0;
    }
  }
  else {
    temp_v0 = FUN_002c2a04(0);
    if (((temp_v0 != 3) || (temp_v0 = FUN_002c2a04(1), temp_v0 != 3)) &&
       (temp_v0 = FUN_002897e0(), temp_v0 != 0)) {
      FUN_002897d0(0);
    }
    temp_v0 = FUN_002897c0();
    if (temp_v0 != 0) {
      FUN_002897b0(0);
      FUN_002897d0(0);
    }
    temp_v0 = FUN_002897e0();
    if ((temp_v0 != 0) && (temp_v0 = FUN_002c1d5c(), temp_v0 == 0)) {
      FUN_002a03d8(0,5);
      FUN_002a03d8(1,5);
      FUN_002897d0(0);
      *piVar3 = 2;
      return 0;
    }
    temp_v0 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x9ec));
    if (temp_v0 == 2) {
      if (*(int *)(temp_v1 + 0x9f0) != 0) {
        gameFlagSetValue(*(int *)(temp_v1 + 0x9f0),1);
      }
      messageSlotSet(0);
      scrScriptProcessDestroy(*(unsigned int *)(temp_v1 + 0x9ec));
      *(unsigned int *)(temp_v1 + 0x9ec) = 0;
      asdMemFree(*(unsigned int *)(temp_v1 + 0x9e4));
      *(unsigned int *)(temp_v1 + 0x9e4) = 0;
      asdMemFree(*(unsigned int *)(temp_v1 + 0x9e8));
      *(unsigned int *)(temp_v1 + 0x9e8) = 0;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
