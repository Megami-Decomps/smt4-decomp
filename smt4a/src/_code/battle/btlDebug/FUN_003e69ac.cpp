/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e69ac` (_code @ 0x3e69ac, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int dialogClose(...);
int FUN_00275bc8(...);
int scrScriptProcessStartEntry(...);
int asdLoadFileAsyncSimple(...);
int FUN_003756c8(...);
int FUN_003ebc08(...);
int gameFlagSetValue(...);
int FUN_004ab734(...);
int btlUiPanelStart(...);
int btlUiClearSelectionSlots(...);
int FUN_004f8f08(...);

extern unsigned int DAT_005715d0; /* 0x5715d0 */
extern unsigned int DAT_005715d4; /* 0x5715d4 */
extern unsigned int DAT_005715d8; /* 0x5715d8 */
extern unsigned int DAT_005715dc; /* 0x5715dc */
extern unsigned int DAT_005715e0; /* 0x5715e0 */
extern unsigned int DAT_005715e4; /* 0x5715e4 */
extern unsigned int DAT_005715e8; /* 0x5715e8 */
extern unsigned int DAT_005715ec; /* 0x5715ec */
extern unsigned int DAT_005715f0; /* 0x5715f0 */
extern unsigned int DAT_005715f4; /* 0x5715f4 */
extern unsigned int g_btlAux; /* 0x573808 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

extern int btlGetMainState(void);
/* Supplied declaration required: sysPlaySe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dialogClose. */
extern int scrRunOpcodesStub(unsigned int);
extern int dialogIsActive(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: FUN_003ebc08. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_004ab734. */
/* Supplied declaration required: btlUiPanelStart. */
/* Supplied declaration required: btlUiClearSelectionSlots. */
/* Supplied declaration required: FUN_004f8f08. */


unsigned int FUN_003e69ac(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  
  switch(*param_1) {
  case 0:
    asdLoadFileAsyncSimple("battle/Common/continue.bf",param_1 + 1,0);
    temp_v3 = 1;
    break;
  case 1:
    if (param_1[1] == 0) {
      return 0;
    }
    temp_v3 = 2;
    break;
  case 2:
    temp_v2 = btlGetMainState();
    temp_v1 = param_1[1];
    FUN_00275bc8(temp_v1,*(unsigned int *)(temp_v2 + 0x2268));
    param_1[2] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    temp_v4 = ~DAT_005715d8;
    temp_v0 = ~DAT_005715e0;
    *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_005715dc & ~DAT_005715e4;
    *(unsigned int *)(temp_v2 + 0x45a0) = *(unsigned int *)(temp_v2 + 0x45a0) & temp_v4 & temp_v0;
    temp_v2 = dialogIsActive();
    if (temp_v2 != 0) {
      dialogClose(1);
    }
    btlUiPanelStart(g_btlUiBlock);
    temp_v3 = 3;
    break;
  case 3:
    scrScriptProcessStartEntry(param_1[2],0);
    sysPlaySe(0xdf);
    *param_1 = 4;
    return 0;
  case 4:
    temp_v2 = scrRunOpcodesStub(param_1[2]);
    if (temp_v2 != 2) {
      return 0;
    }
    temp_v2 = gameFlagIsSet(0x590);
    if (temp_v2 != 0) {
      temp_v2 = btlGetMainState();
      puVar5 = (unsigned int *)(temp_v2 + 0x45a0);
      if ((DAT_005715d0 & *puVar5) == 0 && (DAT_005715d4 & *(unsigned int *)(temp_v2 + 0x45a4)) == 0) {
        *(unsigned short *)(temp_v2 + 0x4c70) = 8;
        *(unsigned short *)(temp_v2 + 0x4c72) = 8;
        btlUiClearSelectionSlots(g_btlUiBlock);
        FUN_003ebc08(temp_v2,1);
        temp_v0 = ~DAT_005715e8;
        temp_v4 = ~DAT_005715f0;
        *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_005715ec & ~DAT_005715f4;
        *puVar5 = *puVar5 & temp_v0 & temp_v4;
        gameFlagSetValue(0x590,0,1);
        return 0;
      }
    }
    FUN_003756c8(0);
    FUN_004f8f08(g_btlAux);
    FUN_004ab734(g_btlUiBlock);
    temp_v3 = 5;
    break;
  case 5:
    return 1;
  default:
    return 0;
  }
  *param_1 = temp_v3;
  return 0;
}

} /* extern "C" */
