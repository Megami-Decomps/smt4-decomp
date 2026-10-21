/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c049c` (_code @ 0x2c04a0, 0x398 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int gameGetSlotTable(void);
int FUN_00275bc8(void);
int scrScriptProcessStartEntry(...);
int FUN_002bf520(void);
int cecProcessForward(void);
int FUN_002f4014(void);
int cecProcessCall2(void);
int gameDataBlocksSetFlagBits(int, int);
int playerSummaryFill(void);
int FUN_0034280c(int);
int cecProcessCall4(void);
int stateAtF4Destroy(void);
int gameFlagSetValue(int, int);

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: gameGetSlotTable. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int cecQueryOptionalProcess(void);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002bf520. */
/* Supplied declaration required: cecProcessForward. */
extern int FUN_002e2014(void);
/* Supplied declaration required: FUN_002f4014. */
/* Supplied declaration required: cecProcessCall2. */
/* Supplied declaration required: gameDataBlocksSetFlagBits. */
/* Supplied declaration required: playerSummaryFill. */
/* Supplied declaration required: FUN_0034280c. */
extern int gameDataTestFlags(unsigned int);
extern int cecProcessGetValue(void);
/* Supplied declaration required: cecProcessCall4. */
/* Supplied declaration required: stateAtF4Destroy. */
/* Supplied declaration required: gameFlagSetValue. */


unsigned int FUN_002c049c(int *param_1,int param_2)

{
/* irregular: 2 goto(s); 14 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = *param_1;
  if (*(char *)(temp_v3 + 0x3d) != '\0') {
    if (*(char *)(temp_v3 + 0x40) == '\0') {
      if (*(char *)(temp_v3 + 0x3e) != '\0') {
        temp_v1 = FUN_002e2014();
        if (temp_v1 == 0) {
          return 0;
        }
        stateAtF4Destroy();
        *(unsigned char *)(temp_v3 + 0x40) = 1;
        return 0;
      }
      if ((*(unsigned char *)(temp_v3 + 0x3c) & 1) != 0) {
        temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4));
        if (temp_v1 == 2) {
          temp_v1 = *(int *)(temp_v3 + 0x38);
          if (temp_v1 != 0) {
            if (temp_v1 == 6 || temp_v1 == 8) {
              cecProcessCall2();
              FUN_002bf520();
              playerSummaryFill();
              FUN_002bf520();
              cecProcessForward();
              FUN_002bf520();
              FUN_002f4014();
              gameFlagSetValue(0x550,1);
              *(unsigned char *)(temp_v3 + 0x3c) = 0;
              *(unsigned char *)(temp_v3 + 0x40) = 1;
              if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                 (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              return 0;
            }
            if (temp_v1 != 9) {
              if (temp_v1 != 7) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              else {
                FUN_0034280c(1);
                *(unsigned char *)(temp_v3 + 0x3e) = 1;
              }
            }
            else {
              temp_v1 = FUN_002a4b74();
              if (temp_v1 != 0) {
                if (temp_v1 == 1) {
                  *(unsigned char *)(temp_v3 + 0x40) = 1;
                }
                if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                   (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                  *(unsigned char *)(temp_v3 + 0x40) = 1;
                }
                return 0;
              }
              cecProcessCall4();
              scrScriptProcessStartEntry(*(unsigned int *)(temp_v3 + 4),9);
              gameGetSlotTable();
              *(unsigned char *)(temp_v3 + 0x3f) = 1;
            }
          }
          else {
            temp_v1 = FUN_002a4b74();
            if (temp_v1 == 0) {
              sysPlaySe(0x3e);
              temp_v1 = cecProcessGetValue();
              temp_v4 = temp_v1 == 3;
              if (temp_v4) {
                temp_v1 = 3;
              }
              *(unsigned char *)(temp_v3 + 0x3c) = (*(unsigned char *)(temp_v3 + 0x3c) & 0xfe) | 2;
              if (!temp_v4) {
                if (temp_v1 != 0x81) {
                  if (temp_v1 != 0x11) {
                    cecProcessCall2();
                    FUN_002bf520();
                    playerSummaryFill();
                    FUN_002bf520();
                    temp_v1 = cecProcessForward();
                    if (temp_v1 == 5) {
                      *(unsigned int *)(temp_v3 + 0x38) = 1;
                    }
                    else if (temp_v1 == 9) {
                      *(unsigned int *)(temp_v3 + 0x38) = 2;
                    }
                    else if (*(int *)(temp_v3 + 0x38) != 2 && *(int *)(temp_v3 + 0x38) != 1) {
                      gameDataBlocksSetFlagBits(0x20,1);
                      temp_v1 = 6;
                      goto LAB_002c0648;
                    }
                    cecProcessCall4();
                  }
                  else {
                    *(unsigned int *)(temp_v3 + 0x38) = 4;
                    cecProcessCall4();
                  }
                  if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                     (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                    *(unsigned char *)(temp_v3 + 0x40) = 1;
                  }
                  return 0;
                }
                temp_v1 = gameDataTestFlags(0x20);
                if (temp_v1 != 0) {
                  temp_v1 = 5;
                }
                else {
                  gameDataBlocksSetFlagBits(0x20,1);
                  temp_v1 = 8;
                }
              }
LAB_002c0648:
              *(int *)(temp_v3 + 0x38) = temp_v1;
              if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                 (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              return 0;
            }
            if (temp_v1 != 1) {
              if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                 (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              return 0;
            }
            sysPlaySe(0x3e);
            temp_v1 = cecQueryOptionalProcess();
            if ((temp_v1 != 0) && (temp_v1 = gameDataTestFlags(0x20), temp_v1 != 0)) {
              *(unsigned int *)(temp_v3 + 0x38) = 9;
              temp_v0 = (*(unsigned char *)(temp_v3 + 0x3c) & 0xfe) | 2;
              goto LAB_002c0810;
            }
            temp_v1 = cecQueryOptionalProcess();
            if (temp_v1 == 0) {
              temp_v2 = 8;
            }
            else {
              temp_v2 = 0xc;
            }
            scrScriptProcessStartEntry(*(unsigned int *)(temp_v3 + 4),temp_v2);
            *(unsigned char *)(temp_v3 + 0x3f) = 1;
          }
          *(unsigned char *)(temp_v3 + 0x3c) = 0;
        }
      }
      else if ((*(unsigned char *)(temp_v3 + 0x3c) & 2) != 0) {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v3 + 4),
                     *(unsigned int *)(temp_v3 + *(int *)(temp_v3 + 0x38) * 4 + 0x10));
        temp_v0 = (*(unsigned char *)(temp_v3 + 0x3c) & 0xfd) | 1;
LAB_002c0810:
        *(unsigned char *)(temp_v3 + 0x3c) = temp_v0;
      }
    }
  }
  else {
    temp_v1 = *(int *)(temp_v3 + 8);
    if (temp_v1 != 0) {
      param_2 = *(int *)(temp_v3 + 0xc);
    }
    if (temp_v1 != 0 && param_2 != 0) {
      FUN_00275bc8();
      *(int *)(temp_v3 + 4) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      *(unsigned char *)(temp_v3 + 0x3d) = 1;
    }
  }
  if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
     (temp_v1 = scrRunOpcodesStub(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
    *(unsigned char *)(temp_v3 + 0x40) = 1;
  }
  return 0;
}

} /* extern "C" */
