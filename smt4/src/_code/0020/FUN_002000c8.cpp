/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002000c8` (_code @ 0x2000cc, 0x48c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254600(int);
int FUN_0025461c(void);
int FUN_0025463c(void);
int FUN_002595e0(void);
int cecProcessForward(void);
int FUN_002597c0(void);
int FUN_00262f68(unsigned int, int);
int FUN_0026e5ec(int, int);
int gameFlagSetValue(int, int);
int scrScriptProcessStartEntry(...);
int FUN_00297060(void);
int gameGetUnitRecord(...);
int buttonHelpSetPreset(int);
int FUN_002bd2b4(unsigned int, int, int);
int rt_aeabi_memclr(int, int);
int FUN_002d67fc(int);
int campCecEditDestroy(void);

extern int FUN_0019e0c0(unsigned int);
extern int campCecEditGetFlag125(void);
/* Supplied declaration required: FUN_00254600. */
/* Supplied declaration required: FUN_0025461c. */
/* Supplied declaration required: FUN_0025463c. */
extern int gameDataBlockTestFlag(unsigned int);
extern int FUN_002595bc(void);
/* Supplied declaration required: FUN_002595e0. */
/* Supplied declaration required: cecProcessForward. */
/* Supplied declaration required: FUN_002597c0. */
/* Supplied declaration required: FUN_00262f68. */
/* Supplied declaration required: FUN_0026e5ec. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int FUN_002973d8(void);
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: gameGetUnitRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002bd2b4. */
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: FUN_002d67fc. */
extern int FUN_002e1afc(void);
/* Supplied declaration required: campCecEditDestroy. */


unsigned int FUN_002000c8(int *param_1,int param_2)

{
/* irregular: 14 unstructured edge(s); 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v4 = *param_1;
  if (*(char *)(temp_v4 + 0x3d) == '\0') {
    temp_v3 = *(int *)(temp_v4 + 8);
    if (temp_v3 != 0) {
      param_2 = *(int *)(temp_v4 + 0xc);
    }
    if (temp_v3 != 0 && param_2 != 0) {
      FUN_00297060();
      *(int *)(temp_v4 + 4) = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      *(unsigned char *)(temp_v4 + 0x3d) = 1;
    }
    if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
       (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
      *(unsigned char *)(temp_v4 + 0x40) = 1;
    }
    return 0;
  }
  if (*(char *)(temp_v4 + 0x40) != '\0') {
    if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
       (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
      *(unsigned char *)(temp_v4 + 0x40) = 1;
    }
    return 0;
  }
  if (*(char *)(temp_v4 + 0x3e) != '\0') {
    temp_v3 = campCecEditGetFlag125();
    if (temp_v3 != 0) {
      campCecEditDestroy();
      *(unsigned char *)(temp_v4 + 0x40) = 1;
      return 0;
    }
    return 0;
  }
  if ((*(unsigned char *)(temp_v4 + 0x3c) & 1) != 0) {
    temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4));
    if (temp_v3 == 2) {
      temp_v3 = *(int *)(temp_v4 + 0x38);
      if (temp_v3 != 0) {
        if (temp_v3 == 6 || temp_v3 == 8) {
          FUN_002597c0();
          temp_v1 = FUN_0025463c();
          FUN_002bd2b4(temp_v1,0,0);
          FUN_0025463c();
          cecProcessForward();
          temp_v3 = FUN_0025463c();
          rt_aeabi_memclr(temp_v3 + 0x38,0x14);
          FUN_0025463c();
          FUN_002595e0();
          gameFlagSetValue(0x550,1);
          *(unsigned int *)(temp_v4 + 0x38) = 7;
          *(unsigned char *)(temp_v4 + 0x3c) = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfe) | 2;
          if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
             (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
            *(unsigned char *)(temp_v4 + 0x40) = 1;
          }
          return 0;
        }
        if (temp_v3 != 9) {
          if (temp_v3 == 7) {
            FUN_002d67fc(1);
            *(unsigned char *)(temp_v4 + 0x3e) = 1;
            *(unsigned char *)(temp_v4 + 0x3c) = 0;
            if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
               (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
              *(unsigned char *)(temp_v4 + 0x40) = 1;
            }
            return 0;
          }
          *(unsigned char *)(temp_v4 + 0x40) = 1;
        }
        else {
          temp_v3 = FUN_002973d8();
          if (temp_v3 != 0) {
            if (temp_v3 == 1) {
              *(unsigned char *)(temp_v4 + 0x40) = 1;
            }
            if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
               (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
              *(unsigned char *)(temp_v4 + 0x40) = 1;
            }
            return 0;
          }
          FUN_0025461c();
          FUN_00254600(0);
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v4 + 4),9);
          temp_v3 = gameGetSlotTable();
          temp_v5 = 0;
          do {
            if (-1 < *(char *)(temp_v3 + temp_v5 + 0x90f0)) {
              temp_v1 = gameGetUnitRecord();
              temp_v2 = flagWordTestBit(temp_v1,2);
              if (temp_v2 != 0) {
                temp_v1 = gameGetUnitRecord((int)*(char *)(temp_v3 + temp_v5 + 0x90f0));
                FUN_00262f68(temp_v1,4);
              }
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0x18);
          *(unsigned char *)(temp_v4 + 0x3f) = 1;
        }
        *(unsigned char *)(temp_v4 + 0x3c) = 0;
        if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
           (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
          *(unsigned char *)(temp_v4 + 0x40) = 1;
        }
        return 0;
      }
      temp_v3 = FUN_002973d8();
      if (temp_v3 == 0) {
        buttonHelpSetPreset(0x3c);
        temp_v3 = FUN_002e1afc();
        temp_v6 = temp_v3 == 3;
        if (temp_v6) {
          temp_v3 = 3;
        }
        *(unsigned char *)(temp_v4 + 0x3c) = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfe) | 2;
        if (!temp_v6) {
          if (temp_v3 != 0x81) {
            if (temp_v3 == 0x11) {
              *(unsigned int *)(temp_v4 + 0x38) = 4;
              FUN_0025461c();
              if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
                 (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
                *(unsigned char *)(temp_v4 + 0x40) = 1;
              }
              return 0;
            }
            FUN_002597c0();
            temp_v1 = FUN_0025463c();
            FUN_002bd2b4(temp_v1,0,0);
            FUN_0025463c();
            temp_v3 = cecProcessForward();
            if (temp_v3 == 5) {
              *(unsigned int *)(temp_v4 + 0x38) = 1;
            }
            else if (temp_v3 == 9) {
              *(unsigned int *)(temp_v4 + 0x38) = 2;
            }
            else if (*(int *)(temp_v4 + 0x38) != 2 && *(int *)(temp_v4 + 0x38) != 1) {
              FUN_0026e5ec(0x20,1);
              temp_v3 = 6;
              *(int *)(temp_v4 + 0x38) = temp_v3;
              if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
                 (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
                *(unsigned char *)(temp_v4 + 0x40) = 1;
              }
              return 0;
            }
            FUN_0025461c();
            FUN_00254600(0);
            temp_v3 = gameGetSlotTable();
            temp_v5 = 0;
            do {
              if (-1 < *(char *)(temp_v3 + temp_v5 + 0x90f0)) {
                temp_v1 = gameGetUnitRecord();
                temp_v2 = flagWordTestBit(temp_v1,2);
                if (temp_v2 != 0) {
                  temp_v1 = gameGetUnitRecord((int)*(char *)(temp_v3 + temp_v5 + 0x90f0));
                  FUN_00262f68(temp_v1,4);
                }
              }
              temp_v5 = temp_v5 + 1;
              if (temp_v5 >= 0x18) {
                if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
                   (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
                  *(unsigned char *)(temp_v4 + 0x40) = 1;
                }
                return 0;
              }
            } while( 1 );
          }
          temp_v3 = gameDataBlockTestFlag(0x20);
          if (temp_v3 != 0) {
            temp_v3 = 5;
          }
          else {
            FUN_0026e5ec(0x20,1);
            temp_v3 = 8;
          }
        }
        *(int *)(temp_v4 + 0x38) = temp_v3;
        if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
           (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
          *(unsigned char *)(temp_v4 + 0x40) = 1;
        }
        return 0;
      }
      if (temp_v3 == 1) {
        buttonHelpSetPreset(0x3c);
        temp_v3 = FUN_002595bc();
        if ((temp_v3 != 0) && (temp_v3 = gameDataBlockTestFlag(0x20), temp_v3 != 0)) {
          *(unsigned int *)(temp_v4 + 0x38) = 9;
          temp_v0 = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfe) | 2;
          *(unsigned char *)(temp_v4 + 0x3c) = temp_v0;
        }
        else {
          temp_v3 = FUN_002595bc();
          if (temp_v3 == 0) {
            temp_v1 = 8;
          }
          else {
            temp_v1 = 0xc;
          }
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v4 + 4),temp_v1);
          *(unsigned char *)(temp_v4 + 0x3f) = 1;
          *(unsigned char *)(temp_v4 + 0x3c) = 0;
        }
      }
    }
  }
  else if ((*(unsigned char *)(temp_v4 + 0x3c) & 2) != 0) {
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v4 + 4),
                 *(unsigned int *)(temp_v4 + *(int *)(temp_v4 + 0x38) * 4 + 0x10));
    temp_v0 = (*(unsigned char *)(temp_v4 + 0x3c) & 0xfd) | 1;
    *(unsigned char *)(temp_v4 + 0x3c) = temp_v0;
  }
  if ((*(char *)(temp_v4 + 0x3f) != '\0') &&
     (temp_v3 = FUN_0019e0c0(*(unsigned int *)(temp_v4 + 4)), temp_v3 == 2)) {
    *(unsigned char *)(temp_v4 + 0x40) = 1;
  }
  return 0;
}

} /* extern "C" */
