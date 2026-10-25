/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003193a8` (_code @ 0x3193a8, 0x71c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e774(void);
int FUN_0023b45c(...);
int FUN_00285800(void);
int statusPanelSetOpen(...);
int campCecSetObjectValue(...);
int FUN_00319aec(...);
int statusDisplayBindUnitRecord(...);
int FUN_003343c0(...);
int FUN_003343f0(...);
int objBInitBlock19D0(void);
int FUN_0033449c(...);
int FUN_0038b3f8(...);
int FUN_0038b548(...);
int sysPlayVoice(...);

int sysPlaySe(...);
int FUN_00180118(unsigned int);
int FUN_00215bd0(void);
int scrScriptProcessStartEntry(...);
int gameDataGetRecordValue(void);
int FUN_002a5e7c(...);
int FUN_002c7ce8(...);
int FUN_002c8538(...);
int FUN_002c85b0(...);
int libc_strcpy(unsigned char [36], unsigned int);
int FUN_003180c4(int, unsigned char [36]);
int FUN_0031cf00(void);
int btlTalkBustUpReleaseAllSlots(void);
int btlTalkBustUpSetDemonTexture(...);
int FUN_00359974(...);
int btlTalkBustUpReleaseContent(void);
int btlTalkBustUpSetUnk2F4(...);
int FUN_00371c3c(unsigned int, int);
int devilIsTextureLoaded(...);
int FUN_004bcd90(...);
int __aeabi_memcpy4(int, int, int);

extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00215bd0. */
extern int scrRunOpcodesStub(unsigned int);
extern int FUN_0022e750(void);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3b8(void);
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002857b8(void);
/* Supplied declaration required: FUN_00285800. */
/* Supplied declaration required: gameDataGetRecordValue. */
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: statusPanelSetOpen. */
extern int statusDownGetFlag(void);
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: campCecSetObjectValue. */
/* Supplied declaration required: libc_strcpy. */
extern int gameGetMode(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00319aec. */
/* Supplied declaration required: FUN_0031cf00. */
extern int FUN_0031f63c(void);
extern int btlTalkBustUpGetValue(void);
/* Supplied declaration required: btlTalkBustUpReleaseAllSlots. */
extern int FUN_00334044(void);
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: btlTalkBustUpSetDemonTexture. */
extern int partyPanelIsActive(void);
extern int battleTalkIsBustReady(void);
/* Supplied declaration required: FUN_00359974. */
extern int FUN_0035db94(void);
/* Supplied declaration required: btlTalkBustUpReleaseContent. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_00371c3c. */
extern int maskToCode(void);
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_0038b548. */
/* Supplied declaration required: devilIsTextureLoaded. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int FUN_003193a8(int param_1)

{
/* irregular: 35 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10 [36];
  
  temp_v8 = 0;
  temp_v6 = param_1;
  FUN_0031cf00();
  switch(*(unsigned int *)(param_1 + 0x3bc)) {
  case 0:
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
    FUN_00180118(temp_v2);
    libc_strcpy(temp_v10,temp_v2);
    FUN_003180c4(0,temp_v10);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),0x14);
    temp_v3 = btlTalkBustUpGetValue();
    if (temp_v3 == 0) {
      btlTalkBustUpSetDemonTexture(*(unsigned short *)(temp_v6 + 0x62),1);
    }
    __aeabi_memcpy4(param_1 + 0x218,temp_v6,300);
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    break;
  case 1:
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    if (temp_v6 != 2) {
      return 0;
    }
    btlTalkBustUpSetUnk2F4(1);
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    break;
  case 2:
    temp_v6 = btlTalkBustUpGetValue();
    if (temp_v6 == 0) {
      return 0;
    }
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x364),2);
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    break;
  case 3:
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x364));
    if (temp_v6 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    break;
  case 4:
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
    FUN_00180118(temp_v2);
    libc_strcpy(temp_v10,temp_v2);
    FUN_003180c4(0,temp_v10);
    temp_v3 = (int)*(short *)(param_1 + 0xe0);
    if (temp_v3 >= 1) {
      temp_v7 = 2;
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0xac) + temp_v3;
      *(short *)(temp_v6 + 0xac) = (short)temp_v2;
      if ((temp_v2 & 0xffff) >= 1000) {
        *(unsigned short *)(temp_v6 + 0xac) = 999;
      }
      *(unsigned short *)(param_1 + 0xe0) = 0;
      temp_v0 = *(short *)(temp_v6 + 0x12);
      FUN_004bcd90(temp_v6);
      temp_v1 = *(short *)(temp_v6 + 0x12);
      temp_v9 = temp_v1 == 999;
      if (temp_v1 >= 0x3e7) {
        temp_v9 = temp_v1 == temp_v0;
      }
      if (temp_v9) {
        temp_v7 = 9;
      }
    }
    else {
      temp_v3 = (int)*(short *)(param_1 + 0xe2);
      if (temp_v3 >= 1) {
        temp_v7 = 3;
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0xae) + temp_v3;
        *(short *)(temp_v6 + 0xae) = (short)temp_v2;
        if ((temp_v2 & 0xffff) >= 1000) {
          *(unsigned short *)(temp_v6 + 0xae) = 999;
        }
        *(unsigned short *)(param_1 + 0xe2) = 0;
        temp_v0 = *(short *)(temp_v6 + 0x14);
        FUN_004bcd90(temp_v6);
        temp_v1 = *(short *)(temp_v6 + 0x14);
        temp_v9 = temp_v1 == 999;
        if (temp_v1 >= 0x3e7) {
          temp_v9 = temp_v1 == temp_v0;
        }
        if (temp_v9) {
          temp_v7 = 10;
        }
      }
      else {
        temp_v3 = (int)*(short *)(param_1 + 0xe4);
        if (temp_v3 >= 1) {
          temp_v7 = 4;
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0xb0) + temp_v3;
          *(short *)(temp_v6 + 0xb0) = (short)temp_v2;
          if ((temp_v2 & 0xffff) >= 1000) {
            *(unsigned short *)(temp_v6 + 0xb0) = 999;
          }
          *(unsigned short *)(param_1 + 0xe4) = 0;
          temp_v0 = *(short *)(temp_v6 + 0x16);
          FUN_004bcd90(temp_v6);
          temp_v1 = *(short *)(temp_v6 + 0x16);
          temp_v9 = temp_v1 == 999;
          if (temp_v1 >= 0x3e7) {
            temp_v9 = temp_v1 == temp_v0;
          }
          if (temp_v9) {
            temp_v7 = 0xb;
          }
        }
        else {
          temp_v3 = (int)*(short *)(param_1 + 0xe6);
          if (temp_v3 >= 1) {
            temp_v7 = 5;
            temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0xb2) + temp_v3;
            *(short *)(temp_v6 + 0xb2) = (short)temp_v2;
            if ((temp_v2 & 0xffff) >= 1000) {
              *(unsigned short *)(temp_v6 + 0xb2) = 999;
            }
            *(unsigned short *)(param_1 + 0xe6) = 0;
            temp_v0 = *(short *)(temp_v6 + 0x18);
            FUN_004bcd90(temp_v6);
            temp_v1 = *(short *)(temp_v6 + 0x18);
            temp_v9 = temp_v1 == 999;
            if (temp_v1 >= 0x3e7) {
              temp_v9 = temp_v1 == temp_v0;
            }
            if (temp_v9) {
              temp_v7 = 0xc;
            }
          }
          else {
            temp_v3 = (int)*(short *)(param_1 + 0xe8);
            if (temp_v3 < 1) {
              FUN_002c85b0(0);
              FUN_002c7ce8(0);
              FUN_002c8538(0);
              temp_v8 = gameDataGetRecordValue();
              FUN_00371c3c(temp_v8,1);
              FUN_004bcd90(temp_v6);
              *(unsigned int *)(param_1 + 0x3bc) = 6;
              btlTalkBustUpReleaseAllSlots();
              if (*(char *)(param_1 + 0x7d4) == '\0') {
                return 0;
              }
              FUN_002a5e7c(*(unsigned short *)(temp_v6 + 0x62));
              *(unsigned char *)(param_1 + 0x7d4) = 0;
              return 0;
            }
            temp_v7 = 6;
            temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0xb4) + temp_v3;
            *(short *)(temp_v6 + 0xb4) = (short)temp_v2;
            if ((temp_v2 & 0xffff) >= 1000) {
              *(unsigned short *)(temp_v6 + 0xb4) = 999;
            }
            *(unsigned short *)(param_1 + 0xe8) = 0;
            temp_v0 = *(short *)(temp_v6 + 0x1a);
            FUN_004bcd90(temp_v6);
            temp_v1 = *(short *)(temp_v6 + 0x1a);
            temp_v9 = temp_v1 == 999;
            if (temp_v1 >= 0x3e7) {
              temp_v9 = temp_v1 == temp_v0;
            }
            if (temp_v9) {
              temp_v7 = 0xd;
            }
          }
        }
      }
    }
    FUN_00359974(1,temp_v3,0xffffffff,0);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x360),temp_v7);
    temp_v6 = *(int *)(param_1 + 0x3bc) + 1;
    *(int *)(param_1 + 0x3bc) = temp_v6;
    break;
  case 5:
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x360));
    if (temp_v6 != 2) {
      return 0;
    }
    temp_v6 = *(int *)(param_1 + 0x3bc) - 1;
    *(int *)(param_1 + 0x3bc) = temp_v6;
    break;
  case 6:
    temp_v3 = battleTalkIsBustReady();
    if (temp_v3 == 0) {
      return 0;
    }
    temp_v3 = gameDataGetRecordValue();
    devilIsTextureLoaded(temp_v3,1);
    if (temp_v3 == 0) {
      return 0;
    }
    btlTalkBustUpReleaseContent();
    btlTalkBustUpSetDemonTexture(*(unsigned short *)(temp_v6 + 0x62),1);
    *(unsigned char *)(param_1 + 0x3e6) = 0;
    FUN_002c8538(1);
    FUN_00215bd0();
    temp_v6 = partyPanelIsActive();
    if (temp_v6 == 0) {
      temp_v7 = 0xe5;
    }
    else {
      temp_v7 = 0xce;
    }
    sysPlaySe(temp_v7);
    temp_v6 = *(int *)(param_1 + 0x3bc) + 1;
    *(int *)(param_1 + 0x3bc) = temp_v6;
    break;
  case 7:
    temp_v6 = FUN_0023b3d0();
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_002c85b0(0);
    FUN_0033449c(1);
    statusDisplayBindUnitRecord(param_1 + 0x218,0,0);
    FUN_0031cf00();
    objBInitBlock19D0();
    FUN_003343c0(0);
    statusPanelSetOpen(1);
    FUN_0038b548(0);
    temp_v6 = *(int *)(param_1 + 0x3bc) + 1;
    *(int *)(param_1 + 0x3bc) = temp_v6;
    break;
  case 8:
    temp_v6 = FUN_0022e750();
    if (temp_v6 != 0) {
      temp_v6 = gameGetMode();
      if (temp_v6 != 0) {
        temp_v6 = FUN_0035db94();
        temp_v3 = FUN_0023b3b8();
        temp_v4 = FUN_00334044();
        temp_v5 = temp_v3 - temp_v6;
        if (temp_v4 - 1 < temp_v5) {
          temp_v5 = 0;
        }
        else if (temp_v5 < 0) {
          temp_v5 = temp_v4 - 1;
        }
        if (temp_v5 != 0) {
          if (temp_v3 == 0) {
            campCecSetObjectValue(temp_v6 < 0);
            sysPlaySe(0xce);
          }
        }
        else {
          FUN_00319aec(temp_v6 < 0);
        }
      }
      else {
        temp_v6 = FUN_0031f63c();
        if ((((temp_v6 == 0) && (temp_v6 = FUN_002857b8(), temp_v6 == 0)) &&
            (temp_v6 = statusDownGetFlag(), temp_v6 == 0)) &&
           ((temp_v6 = padButtonIsPressed(0), temp_v6 != 0 || (temp_v6 = FUN_002e1a18(1), temp_v6 != 0)))) {
          FUN_003343f0(1);
          sysPlayVoice(0x100020e);
          *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
          FUN_0022e774();
        }
      }
    }
    break;
  case 9:
    temp_v6 = FUN_0026c3a0();
    if (temp_v6 != 0) {
      *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) & 0xfffffffb;
      temp_v6 = maskToCode();
      if (temp_v6 == 9) {
        *(unsigned int *)(param_1 + 0x3bc) = 10;
      }
      else {
        *(int *)(param_1 + 0x3b0) = temp_v6;
        *(unsigned int *)(param_1 + 0x3bc) = 0;
        *(unsigned char *)(param_1 + 0x3e6) = 1;
        btlTalkBustUpSetUnk2F4(1);
        sysPlaySe(0x3e);
        FUN_003343f0(0);
        temp_v8 = 3;
      }
      temp_v7 = gameDataGetRecordValue();
      FUN_0038b3f8(temp_v7,1);
      FUN_002c85b0(0);
      FUN_002c7ce8(0);
      FUN_0038b548(1);
      FUN_0023b45c(0);
      FUN_002c8538(0);
      FUN_0033449c(0);
      FUN_00285800();
      *(unsigned char *)(param_1 + 0x7d4) = 0;
    }
    break;
  case 10:
    btlTalkBustUpReleaseContent();
    *(unsigned int *)(param_1 + 0x3bc) = 0;
    FUN_003343f0();
    temp_v8 = 3;
    *(unsigned int *)(param_1 + 0x3b0) = 9;
  }
  return temp_v8;
}

} /* extern "C" */
