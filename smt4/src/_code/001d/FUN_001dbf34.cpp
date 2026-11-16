/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dbf34` (_code @ 0x1dbf34, 0x6c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "status/StatusCamera.h"
#include "code/Code0026.h"
#include "code/Code0026_Smt4.h"

extern "C" {

int statusBustUpPortraitRelease(...);
int FUN_0029c4ac(...);
int FUN_0029c4c8(...);
int FUN_0029c4e4(void);
int beginStatusPanelClose(void);
int statusPanelSetOpen(...);
int FUN_0029d8f4(...);
int FUN_0029dfc0(...);
int buttonHelpSetPreset(...);
int soundPlaySeUnpanned(...);

int objectFlagsClear(...);
int FUN_00262f78(void);
int FUN_00262f94(void);
int btlTalkBustUpReleaseAllSlots(void);
int btlTalkBustUpReleaseTexture(void);
int statusDownSwitchTab(...);
int FUN_00293f10(...);
int statusBustUpPortraitAcquire(unsigned int, int);
int FUN_002954bc(...);
int btlTalkBustUpSetUnk2F4(...);
int btlTalkBustUpSetDemonTexture(...);
int textEncodeFontSlot(int, unsigned char [32]);
int scrScriptProcessStartEntry(...);
int gameGlobalsSetSelected(...);
int FUN_0029bed8(...);
int unitRecalculateEffectiveStats(...);
int FUN_0029e788(void);
int gameSetIconDisplayEnabled(...);
int FUN_0029ede8(...);
int dataTable01FindByIdWithAoc(unsigned int);
int __aeabi_memcpy4(int, int, int);

extern int scrRunOpcodesStub(unsigned int);
extern int FUN_001ddc00(void);
extern int FUN_00223c78(void);
extern int partyPanelIsActive(void);
extern int battleTalkIsBustReady(void);
/* Supplied declaration required: objectFlagsClear. */
/* Supplied declaration required: FUN_00262f78. */
/* Supplied declaration required: FUN_00262f94. */
/* Supplied declaration required: FUN_0026d654. */
/* Supplied declaration required: FUN_0026d670. */
extern int buttonHelpHasEnabledEntryForId(unsigned int);
/* Supplied declaration required: btlTalkBustUpReleaseAllSlots. */
/* Supplied declaration required: btlTalkBustUpReleaseTexture. */
/* Supplied declaration required: statusDownSwitchTab. */
extern int FUN_00293aac(void);
/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: statusBustUpPortraitAcquire. */
/* Supplied declaration required: FUN_002954bc. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: btlTalkBustUpSetDemonTexture. */
extern int btlTalkBustUpGetValue(void);
extern int FUN_00295618(void);
extern int FUN_0029563c(void);
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: statusBustUpPortraitRelease. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: gameGlobalsSetSelected. */
/* Supplied declaration required: FUN_0029bed8. */
/* Supplied declaration required: FUN_0029c4ac. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029c4e4. */
/* Supplied declaration required: unitRecalculateEffectiveStats. */
/* Supplied declaration required: beginStatusPanelClose. */
/* Supplied declaration required: statusPanelSetOpen. */
/* Supplied declaration required: FUN_0029d8f4. */
/* Supplied declaration required: FUN_0029dfc0. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: gameSetIconDisplayEnabled. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: dataTable01FindByIdWithAoc. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: soundPlaySeUnpanned. */
extern int padIsButtonPressed(unsigned int);
/* Supplied declaration required: __aeabi_memcpy4. */


/* WARNING: Removing unreachable block (ram,0x001dc5b4) */

unsigned int FUN_001dbf34(int param_1)

{
/* irregular: 2 goto(s); 36 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [32];
  
  temp_v6 = 0;
  temp_v3 = param_1;
  FUN_00262f94();
  piVar7 = (int *)(param_1 + 0xd38);
  switch(*(unsigned int *)(param_1 + 0xd38)) {
  case 0:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
    dataTable01FindByIdWithAoc(temp_v4);
    libc_strcpy(reinterpret_cast<unsigned int *>(temp_v8), reinterpret_cast<unsigned int *>(temp_v4));
    textEncodeFontSlot(0,temp_v8);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd04),0x16);
    temp_v2 = btlTalkBustUpGetValue();
    if (temp_v2 == 0) {
      btlTalkBustUpSetDemonTexture(*(unsigned short *)(temp_v3 + 0x46),1);
    }
    __aeabi_memcpy4(param_1 + 0x6e4,temp_v3,0x604);
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 1:
    temp_v3 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v3 != 2) {
      return 0;
    }
    btlTalkBustUpSetUnk2F4(1);
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 2:
    temp_v3 = btlTalkBustUpGetValue();
    if (temp_v3 == 0) {
      return 0;
    }
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd08),2);
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 3:
    temp_v3 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xd08));
    if (temp_v3 != 2) {
      return 0;
    }
    *piVar7 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 4:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
    dataTable01FindByIdWithAoc(temp_v4);
    libc_strcpy(reinterpret_cast<unsigned int *>(temp_v8), reinterpret_cast<unsigned int *>(temp_v4));
    textEncodeFontSlot(0,temp_v8);
    temp_v2 = (int)*(short *)(param_1 + 0xd4);
    if (temp_v2 >= 1) {
      temp_v5 = 2;
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x590) + temp_v2;
      *(short *)(temp_v3 + 0x590) = (short)temp_v4;
      if ((temp_v4 & 0xffff) >= 1000) {
        *(unsigned short *)(temp_v3 + 0x590) = 999;
      }
      *(unsigned short *)(param_1 + 0xd4) = 0;
      temp_v0 = *(short *)(temp_v3 + 0x12);
      unitRecalculateEffectiveStats(temp_v3);
      temp_v1 = *(short *)(temp_v3 + 0x12);
      temp_v7 = temp_v1 == 999;
      if (temp_v1 >= 0x3e7) {
        temp_v7 = temp_v1 == temp_v0;
      }
      if (temp_v7) {
        temp_v5 = 9;
      }
    }
    else {
      temp_v2 = (int)*(short *)(param_1 + 0xd6);
      if (temp_v2 >= 1) {
        temp_v5 = 3;
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x592) + temp_v2;
        *(short *)(temp_v3 + 0x592) = (short)temp_v4;
        if ((temp_v4 & 0xffff) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x592) = 999;
        }
        *(unsigned short *)(param_1 + 0xd6) = 0;
        temp_v0 = *(short *)(temp_v3 + 0x14);
        unitRecalculateEffectiveStats(temp_v3);
        temp_v1 = *(short *)(temp_v3 + 0x14);
        temp_v7 = temp_v1 == 999;
        if (temp_v1 >= 0x3e7) {
          temp_v7 = temp_v1 == temp_v0;
        }
        if (temp_v7) {
          temp_v5 = 10;
        }
      }
      else {
        temp_v2 = (int)*(short *)(param_1 + 0xd8);
        if (temp_v2 >= 1) {
          temp_v5 = 4;
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x594) + temp_v2;
          *(short *)(temp_v3 + 0x594) = (short)temp_v4;
          if ((temp_v4 & 0xffff) >= 1000) {
            *(unsigned short *)(temp_v3 + 0x594) = 999;
          }
          *(unsigned short *)(param_1 + 0xd8) = 0;
          temp_v0 = *(short *)(temp_v3 + 0x16);
          unitRecalculateEffectiveStats(temp_v3);
          temp_v1 = *(short *)(temp_v3 + 0x16);
          temp_v7 = temp_v1 == 999;
          if (temp_v1 >= 0x3e7) {
            temp_v7 = temp_v1 == temp_v0;
          }
          if (temp_v7) {
            temp_v5 = 0xb;
          }
        }
        else {
          temp_v2 = (int)*(short *)(param_1 + 0xda);
          if (temp_v2 >= 1) {
            temp_v5 = 5;
            temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x596) + temp_v2;
            *(short *)(temp_v3 + 0x596) = (short)temp_v4;
            if ((temp_v4 & 0xffff) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x596) = 999;
            }
            *(unsigned short *)(param_1 + 0xda) = 0;
            temp_v0 = *(short *)(temp_v3 + 0x18);
            unitRecalculateEffectiveStats(temp_v3);
            temp_v1 = *(short *)(temp_v3 + 0x18);
            temp_v7 = temp_v1 == 999;
            if (temp_v1 >= 0x3e7) {
              temp_v7 = temp_v1 == temp_v0;
            }
            if (temp_v7) {
              temp_v5 = 0xc;
            }
          }
          else {
            temp_v2 = (int)*(short *)(param_1 + 0xdc);
            if (temp_v2 < 1) {
              gameGlobalsSetSelected(0);
              statusDownSwitchTab(0);
              gameSetIconDisplayEnabled(0);
              temp_v6 = FUN_00262f78();
              statusBustUpPortraitAcquire(temp_v6,1);
              unitRecalculateEffectiveStats(temp_v3);
              objectFlagsClear(temp_v3,0x220);
              FUN_002954bc(temp_v3);
              *(unsigned int *)(param_1 + 0xd38) = 6;
              btlTalkBustUpReleaseAllSlots();
              if (*(char *)(param_1 + 0xd64) == '\0') {
                return 0;
              }
              FUN_0029bed8(*(unsigned short *)(temp_v3 + 0x46));
              *(unsigned char *)(param_1 + 0xd64) = 0;
              return 0;
            }
            temp_v5 = 6;
            temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x598) + temp_v2;
            *(short *)(temp_v3 + 0x598) = (short)temp_v4;
            if ((temp_v4 & 0xffff) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x598) = 999;
            }
            *(unsigned short *)(param_1 + 0xdc) = 0;
            temp_v0 = *(short *)(temp_v3 + 0x1a);
            unitRecalculateEffectiveStats(temp_v3);
            temp_v1 = *(short *)(temp_v3 + 0x1a);
            temp_v7 = temp_v1 == 999;
            if (temp_v1 >= 0x3e7) {
              temp_v7 = temp_v1 == temp_v0;
            }
            if (temp_v7) {
              temp_v5 = 0xd;
            }
          }
        }
      }
    }
    FUN_0029ede8(1,temp_v2,0xffffffff,0);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd04),temp_v5);
    temp_v3 = *(int *)(param_1 + 0xd38) + 1;
    *piVar7 = temp_v3;
    break;
  case 5:
    temp_v3 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v3 != 2) {
      return 0;
    }
    temp_v3 = *(int *)(param_1 + 0xd38) - 1;
    *piVar7 = temp_v3;
    break;
  case 6:
    temp_v2 = battleTalkIsBustReady();
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v2 = FUN_00262f78();
    FUN_00293f10(temp_v2,1);
    if (temp_v2 == 0) {
      return 0;
    }
    btlTalkBustUpReleaseTexture();
    btlTalkBustUpSetDemonTexture(*(unsigned short *)(temp_v3 + 0x46),1);
    *(unsigned char *)(param_1 + 0xd62) = 0;
    gameSetIconDisplayEnabled(1);
    FUN_0029e788();
    temp_v3 = partyPanelIsActive();
    if (temp_v3 == 0) {
      temp_v5 = 0xe3;
    }
    else {
      temp_v5 = 0xcc;
    }
    buttonHelpSetPreset(temp_v5);
    temp_v3 = *(int *)(param_1 + 0xd38) + 1;
    *piVar7 = temp_v3;
    break;
  case 7:
    temp_v3 = FUN_0029e0f8();
    if (temp_v3 == 0) {
      return 0;
    }
    gameGlobalsSetSelected(0);
    FUN_0029c4c8(1);
    FUN_0029d8f4(param_1 + 0x6e4,0);
    FUN_00262f94();
    FUN_0029c4e4();
    FUN_0029c4ac(0);
    statusPanelSetOpen(1);
    FUN_0026d654(0);
    temp_v3 = *(int *)(param_1 + 0xd38) + 1;
    *piVar7 = temp_v3;
    break;
  case 8:
    temp_v3 = FUN_0029563c();
    if ((((temp_v3 != 0) && (temp_v3 = FUN_00223c78(), temp_v3 == 0)) &&
        (temp_v3 = FUN_001ddc00(), temp_v3 == 0)) &&
       ((temp_v3 = FUN_00293aac(), temp_v3 == 0 &&
        ((temp_v3 = padIsButtonPressed(0), temp_v3 != 0 || (temp_v3 = buttonHelpHasEnabledEntryForId(1), temp_v3 != 0)))))) {
      FUN_002a0cc8(1);
      soundPlaySeUnpanned(0x100016d);
      *piVar7 = *(int *)(param_1 + 0xd38) + 1;
      beginStatusPanelClose();
    }
    break;
  case 9:
    temp_v3 = FUN_00295618();
    if (temp_v3 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(param_1 + 0xd58);
    *(unsigned int *)(param_1 + 0xd58) = temp_v4 & 0xfffffffb;
    if ((temp_v4 & 8) != 0) {
      temp_v6 = 2;
LAB_001dc504:
      *(unsigned int *)(param_1 + 0xd2c) = temp_v6;
      *(unsigned int *)(param_1 + 0xd38) = 0;
      *(unsigned char *)(param_1 + 0xd62) = 1;
      btlTalkBustUpSetUnk2F4(1);
      buttonHelpSetPreset(0x3c);
      temp_v6 = 2;
    }
    else {
      if ((temp_v4 & 1) != 0) {
        temp_v6 = 3;
        goto LAB_001dc504;
      }
      if ((temp_v4 & 2) != 0) {
        temp_v6 = 5;
        goto LAB_001dc504;
      }
      *(unsigned int *)(param_1 + 0xd38) = 10;
    }
    temp_v5 = FUN_00262f78();
    statusBustUpPortraitRelease(temp_v5,1);
    gameGlobalsSetSelected(0);
    statusDownSwitchTab(0);
    FUN_0026d654(1);
    FUN_0029dfc0(0);
    gameSetIconDisplayEnabled(0);
    FUN_0029c4c8(0);
    FUN_0026d670();
    *(unsigned char *)(param_1 + 0xd64) = 0;
    break;
  case 10:
    btlTalkBustUpReleaseTexture();
    *(unsigned int *)(param_1 + 0xd2c) = 6;
    temp_v6 = 2;
    *(unsigned int *)(param_1 + 0xd38) = 0;
  }
  return temp_v6;
}

} /* extern "C" */
