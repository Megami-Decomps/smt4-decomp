/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018854c` (_code @ 0x18854c, 0xf98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002990a0(void);
int guestWinRequestOpen(void);
int FUN_00299bc4(...);
int FUN_00299d84(...);
int FUN_00299da0(...);
int FUN_0029ca58(void);
int FUN_0029e648(...);
int asdMdlManagerDestroy(...);
int timerStart(...);

int FUN_00299174(...);
int flaggedEntrySetValueB(...);
int FUN_002992e0(...);
int FUN_00299370(...);
int FUN_0029e328(...);
int sortMenuCreate(...);
int objectPartRunUnlessLocked(...);
int FUN_0029ee6c(...);
int buttonHelpSetPreset(...);
int FUN_002bf810(...);

int FUN_002996d8(...);
int FUN_0029974c(...);
int FUN_00299900(...);
int nodeSetTranslation3f(...);
int FUN_0029a084(...);
int FUN_0029a0cc(...);
int FUN_0029a0e8(...);
int gameGlobalsSetSelected(...);
int FUN_0029a164(...);
int FUN_0029c4c8(...);
int FUN_0029d684(int);
int FUN_0029efd8(...);
int FUN_0029f5d8(...);
int FUN_002a0428(...);
int eventQueueAddUniqueIfValid(...);
int FUN_002c1658(...);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00188a40; /* 0x188a40 */
extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: FUN_002990a0. */
/* Supplied declaration required: guestWinRequestOpen. */
/* Supplied declaration required: FUN_00299174. */
extern unsigned int FUN_00299218(int, unsigned int);
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: FUN_002992e0. */
/* Supplied declaration required: FUN_00299370. */
extern int FUN_002995d8(short);
extern unsigned int FUN_0029963c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002996d8. */
/* Supplied declaration required: FUN_0029974c. */
/* Supplied declaration required: FUN_00299900. */
/* Supplied declaration required: FUN_00299bc4. */
/* Supplied declaration required: FUN_00299d84. */
/* Supplied declaration required: FUN_00299da0. */
extern int FUN_00299fc0(void);
/* Supplied declaration required: nodeSetTranslation3f. */
extern unsigned int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0029a084. */
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_0029a0e8. */
/* Supplied declaration required: gameGlobalsSetSelected. */
/* Supplied declaration required: FUN_0029a164. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029ca58. */
extern int FUN_0029d65c(int);
/* Supplied declaration required: FUN_0029d684. */
extern int FUN_0029dfa8(void);
extern int FUN_0029e0f8(void);
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: objectPartRunUnlessLocked. */
extern int FUN_0029e958(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: FUN_0029f5d8. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int FUN_002adee0(int);
extern short *gameGetPlayerData(void);
/* Supplied declaration required: buttonHelpSetPreset. */
extern unsigned char FUN_002b898c(void);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: timerStart. */
extern unsigned int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf810. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c1658. */


/* WARNING: Removing unreachable block (ram,0x00189088) */
/* WARNING: Removing unreachable block (ram,0x00189090) */
/* WARNING: Removing unreachable block (ram,0x00189098) */
/* WARNING: Removing unreachable block (ram,0x00188dec) */
/* WARNING: Removing unreachable block (ram,0x00188df4) */
/* WARNING: Removing unreachable block (ram,0x00188dfc) */

void FUN_0018854c(unsigned int param_1)

{
/* irregular: 1 goto(s); 41 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  short temp_v8;
  unsigned int *puVar11;
  int *piVar12;
  int temp_v9;
  short *psVar14;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  char temp_v13 [8];
  
  temp_v5 = g_camp;
  psVar3 = (short *)gameGetPlayerData();
  temp_v12 = 0;
  temp_v11 = 0;
  temp_v9 = 0;
  if (param_1 != 0x11) {
    if (param_1 != 0x12) {
      if (param_1 != 0x13) {
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if (param_1 != 0x16) {
              if (param_1 == 0x17) {
                temp_v11 = temp_v5 + 0x4fc;
                temp_v9 = temp_v5 + 0x2390;
                temp_v2 = 6;
                FUN_0029a164(temp_v2);
              }
            }
            else {
              temp_v11 = temp_v5 + 0x498;
              temp_v9 = temp_v5 + 0x22a0;
              FUN_0029a164(5);
              temp_v12 = 1;
            }
          }
          else {
            temp_v11 = temp_v5 + 0x434;
            temp_v9 = temp_v5 + 0x21b0;
            FUN_0029a164(4);
            temp_v12 = 1;
          }
        }
        else {
          temp_v11 = temp_v5 + 0x3d0;
          temp_v9 = temp_v5 + 0x20c0;
          FUN_0029a164(3);
          temp_v12 = 1;
        }
      }
      else {
        temp_v11 = temp_v5 + 0x36c;
        temp_v9 = temp_v5 + 0x205c;
        temp_v2 = 2;
        FUN_0029a164(temp_v2);
      }
    }
    else {
      temp_v11 = temp_v5 + 0x308;
      temp_v9 = temp_v5 + 0x1f6c;
      temp_v2 = 1;
      FUN_0029a164(temp_v2);
    }
  }
  else {
    temp_v11 = temp_v5 + 0x2a4;
    temp_v9 = temp_v5 + 0x1e7c;
    temp_v2 = 0;
    FUN_0029a164(temp_v2);
  }
  switch(*(unsigned int *)(temp_v5 + 0x1c)) {
  case 0:
    temp_v4 = FUN_0029dfa8();
    if (temp_v4 != 0) {
      return;
    }
    temp_v4 = FUN_0029e0f8();
    if (temp_v4 == 0) {
      return;
    }
    gameGlobalsSetSelected(3);
    FUN_0029c4c8(1);
    FUN_0029a0e8(psVar3);
    FUN_0029a0cc(psVar3);
    FUN_0029d684(1);
    temp_v4 = FUN_0029efc0(temp_v11);
    temp_v11 = FUN_0029efa8(temp_v11);
    temp_v8 = *(short *)(temp_v9 + (temp_v11 + temp_v4) * 2);
    if (param_1 != 0x14) {
      if (param_1 != 0x15) {
        if (param_1 != 0x16) {
          FUN_0029a084(0,psVar3[3]);
          FUN_0029a084(1,psVar3[4]);
          temp_v8 = psVar3[5];
        }
        else {
          FUN_0029a084(0,psVar3[3]);
          FUN_0029a084(1,psVar3[4]);
        }
        temp_v2 = 2;
      }
      else {
        FUN_0029a084(0,psVar3[3]);
        FUN_0029a084(2,psVar3[5]);
        temp_v2 = 1;
      }
    }
    else {
      FUN_0029a084(1,psVar3[4]);
      FUN_0029a084(2,psVar3[5]);
      temp_v2 = 0;
    }
    FUN_0029a084(temp_v2,temp_v8);
    temp_v2 = asdMdlManagerCreateSecondList(&LAB_00188a40,7);
    *(unsigned int *)(temp_v5 + 0x25c0) = temp_v2;
    *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
    return;
  case 1:
    piVar12 = (int *)(temp_v5 + 0x25c0);
    temp_v9 = FUN_002adee0(*piVar12);
    if ((temp_v9 != 0) && (*(int *)(*(int *)(*piVar12 + 8) + 0xc) < 0)) {
      FUN_002a0428(*piVar12,1);
      nodeSetTranslation3f(*(unsigned int *)(*piVar12 + 8),0);
    }
    temp_v9 = FUN_00299fc0();
    if (temp_v9 == 0) {
      return;
    }
    temp_v9 = FUN_002adee0(*piVar12);
    if (temp_v9 == 0) {
      return;
    }
    if (temp_v12) {
      *(unsigned char *)(temp_v5 + 0x32) = 1;
    }
    *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
    return;
  case 2:
    break;
  case 3:
    if (*(int *)(temp_v5 + 0x24) == 0x29) {
      *(unsigned int *)(temp_v5 + 0x24) = 0x1a;
      if (temp_v12) {
        FUN_002996d8(0);
        *(unsigned char *)(temp_v5 + 0x32) = 1;
      }
      else {
        FUN_0029974c(param_1);
      }
    }
    if ((*(char *)(temp_v11 + 0x61) != '\0') || (*(char *)(temp_v11 + 0x60) != '\0')) {
      if (temp_v12) {
        FUN_002996d8(0);
        *(unsigned char *)(temp_v5 + 0x32) = 1;
      }
    }
    else if (*(char *)(temp_v5 + 0x32) != '\0') {
      temp_v4 = FUN_0029efc0(temp_v11);
      temp_v6 = FUN_0029efa8(temp_v11);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v9 + (temp_v6 + temp_v4) * 2);
      if (param_1 != 0x14) {
        if (param_1 == 0x15) {
          temp_v2 = 1;
          temp_v3 = FUN_0029963c(temp_v2,temp_v3);
        }
        else if (param_1 == 0x16) {
          temp_v2 = 2;
          temp_v3 = FUN_0029963c(temp_v2,temp_v3);
        }
      }
      else {
        temp_v3 = FUN_0029963c(0,temp_v3);
      }
      if (temp_v12) {
        temp_v3 = param_1;
      }
      *(unsigned char *)(temp_v5 + 0x32) = 0;
      if (temp_v12) {
        FUN_0029974c(temp_v3);
      }
    }
    else {
      temp_v4 = FUN_00299fc0();
      if (temp_v4 != 0) {
        FUN_002996d8(1);
      }
    }
    temp_v4 = FUN_00299fc0();
    if (temp_v4 == 0) {
      return;
    }
    temp_v13[0] = '\0';
    temp_v2 = FUN_002bf4f8(0x1d,0x572);
    temp_v4 = temp_v11;
    FUN_0029f5d8(temp_v11,temp_v2,temp_v5 + 0xe0c,(int)*(short *)(temp_v5 + 0xe02),
                 (int)*(short *)(temp_v5 + 0xe04),(int)*(short *)(temp_v5 + 0xe06),temp_v13,0,1);
    if ((temp_v4 != 0) || (temp_v4 = temp_v11, FUN_0029efd8(temp_v11,1), temp_v4 != 0)) {
      FUN_00299900(param_1);
      FUN_0029974c(param_1);
      return;
    }
    temp_v4 = 0;
    FUN_002c1658(0,1);
    if (temp_v4 != 0 || temp_v13[0] != '\0') {
      temp_v5 = FUN_0029efc0(temp_v11);
      temp_v11 = FUN_0029efa8(temp_v11);
      psVar14 = (short *)(temp_v9 + (temp_v11 + temp_v5) * 2);
      temp_v5 = FUN_002995d8(*psVar14);
      if (temp_v5 == 0) {
        eventQueueAddUniqueIfValid(0x100016e);
        return;
      }
      temp_v12 = 1;
      if (param_1 != 0x11) {
        if (param_1 != 0x12) {
          if (param_1 != 0x13) {
            if (param_1 != 0x14) {
              if (param_1 != 0x15) {
                if (param_1 != 0x16) {
                  if ((param_1 == 0x17) &&
                     (temp_v8 = *psVar14, temp_v0 = psVar3[6], psVar3[6] = temp_v8, temp_v0 == temp_v8)) {
                    temp_v12 = 0;
                  }
                }
                else {
                  temp_v8 = *psVar14;
                  temp_v0 = psVar3[5];
                  psVar3[5] = temp_v8;
                  temp_v12 = temp_v0 != temp_v8;
                }
              }
              else {
                temp_v8 = *psVar14;
                temp_v0 = psVar3[4];
                psVar3[4] = temp_v8;
                temp_v12 = temp_v0 != temp_v8;
              }
            }
            else {
              temp_v8 = *psVar14;
              temp_v0 = psVar3[3];
              psVar3[3] = temp_v8;
              temp_v12 = temp_v0 != temp_v8;
            }
          }
          else {
            temp_v8 = *psVar14;
            temp_v0 = psVar3[2];
            psVar3[2] = temp_v8;
            temp_v12 = temp_v0 != temp_v8;
          }
        }
        else {
          temp_v8 = *psVar14;
          temp_v0 = psVar3[1];
          psVar3[1] = temp_v8;
          temp_v12 = temp_v0 != temp_v8;
        }
      }
      else {
        temp_v8 = *psVar14;
        temp_v0 = *psVar3;
        *psVar3 = temp_v8;
        temp_v12 = temp_v0 != temp_v8;
      }
      FUN_00299370(0);
      if (!temp_v12) {
        return;
      }
      FUN_0029a0e8(psVar3);
      FUN_0029a0cc(psVar3);
      eventQueueAddUniqueIfValid(0x100016d);
      FUN_002bf810(0x100025f);
      return;
    }
    temp_v4 = 1;
    FUN_002c1658();
    if (temp_v4 != 0) {
      FUN_002996d8(0);
      FUN_002992e0(0);
      FUN_002992e0(1);
      FUN_002992e0(2);
      *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
      temp_v2 = 0x100016e;
    }
    else {
      temp_v4 = 8;
      FUN_002c1658(8,0);
      if ((temp_v4 == 0) && (temp_v4 = FUN_0029d65c((int)*(short *)(temp_v5 + 0xe08)), temp_v4 != 6)) {
        temp_v4 = 7;
        FUN_002c1658(7,0);
        if ((temp_v4 == 0) && (temp_v4 = FUN_0029d65c((int)*(short *)(temp_v5 + 0xe0a)), temp_v4 != 6)) {
          temp_v9 = 9;
          FUN_002c1658(9,1);
          if (temp_v9 == 0) {
            return;
          }
          if (param_1 != 0x11) {
            if (param_1 != 0x12) {
              if (param_1 != 0x13) {
                if ((param_1 == 0x14) || (param_1 == 0x16)) {
                  sortMenuCreate();
                  FUN_0029e328(4);
                  FUN_0029e328(0x24);
                  FUN_0029e328(0x25);
                  FUN_0029e328(0x26);
                  FUN_0029e328(0x27);
                  FUN_0029e328(0x28);
                  FUN_0029e328(3);
                }
                if (param_1 != 0x15) {
                  if (param_1 == 0x17) {
                    sortMenuCreate(0xb,0);
                    FUN_0029e328(0x33);
                    FUN_0029e328(3);
                  }
                }
                else {
                  sortMenuCreate(9,0);
                  FUN_0029e328(4);
                  FUN_0029e328(0x32);
                  FUN_0029e328(3);
                }
              }
              else {
                sortMenuCreate(7,0);
                FUN_0029e328(6);
                FUN_0029e328(0x1f);
                FUN_0029e328(0x13);
                FUN_0029e328(3);
              }
            }
            else {
              sortMenuCreate(6,0);
              FUN_0029e328(6);
              FUN_0029e328(0x11);
              FUN_0029e328(0x12);
              FUN_0029e328(3);
            }
          }
          else {
            sortMenuCreate(5,0);
            FUN_0029e328(6);
            FUN_0029e328(0x11);
            FUN_0029e328(0x12);
            FUN_0029e328(3);
          }
          *(unsigned char *)(temp_v5 + 0x33) = 1;
          FUN_0029ee6c(0,0x323232ff);
          temp_v1 = FUN_002b898c();
          *(unsigned char *)(temp_v5 + 0x31) = temp_v1;
          temp_v5 = g_camp;
          puVar11 = (unsigned int *)(g_camp + 0x18);
          *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
          *puVar11 = 0x28;
          *(unsigned int *)(temp_v5 + 0x1c) = 0;
          *(unsigned int *)(temp_v5 + 0x14) = 0;
          temp_v2 = 0x100016d;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
        temp_v4 = FUN_0029efc0(temp_v11);
        temp_v6 = FUN_0029efa8(temp_v11);
        temp_v6 = temp_v6 + temp_v4;
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if ((param_1 == 0x16) && (psVar3[5] != *(short *)(temp_v9 + temp_v6 * 2))) {
              temp_v2 = 2;
              FUN_002992e0(temp_v2);
              FUN_002996d8(0);
              *(unsigned char *)(temp_v5 + 0x32) = 1;
            }
          }
          else if (psVar3[4] != *(short *)(temp_v9 + temp_v6 * 2)) {
            temp_v2 = 1;
            FUN_002992e0(temp_v2);
            FUN_002996d8(0);
            *(unsigned char *)(temp_v5 + 0x32) = 1;
          }
        }
        else if (psVar3[3] != *(short *)(temp_v9 + temp_v6 * 2)) {
          FUN_002996d8(0);
          *(unsigned char *)(temp_v5 + 0x32) = 1;
        }
        temp_v9 = objectPartRunUnlessLocked(temp_v5 + 0x34);
        temp_v6 = 0;
        temp_v4 = FUN_0029e958(temp_v5 + 0x34);
        if (0 < temp_v4) {
          do {
            temp_v9 = temp_v9 + 1;
            temp_v4 = FUN_0029e958(temp_v5 + 0x34);
            if (temp_v4 <= temp_v9) {
              temp_v9 = 0;
            }
            temp_v10 = temp_v5 + temp_v9 * 100;
            temp_v4 = FUN_0029e958(temp_v10 + 0x2a4);
            temp_v7 = gameFlagIsSet(0x410);
            if ((temp_v7 == 0) && (0 < temp_v9)) {
              temp_v4 = FUN_0029e958(temp_v10 + 0x36c);
            }
            if (0 < temp_v4) {
              flaggedEntrySetValueB(temp_v5 + 0x34,temp_v9);
              temp_v2 = objectPartRunUnlessLocked(temp_v5 + 0x34);
              param_1 = FUN_00299218((int)*(char *)(temp_v5 + 0x98),temp_v2);
              FUN_00299900();
              break;
            }
            temp_v6 = temp_v6 + 1;
            temp_v4 = FUN_0029e958(temp_v5 + 0x34);
          } while (temp_v6 < temp_v4);
        }
        FUN_00299174(temp_v11,0);
        *(unsigned int *)(temp_v5 + 0x1c) = 2;
        if (param_1 == 0x11) {
          temp_v5 = gameFlagIsSet(0x410);
          if (temp_v5 == 0) {
            temp_v2 = 0x15;
            buttonHelpSetPreset(temp_v2);
            temp_v2 = 0x100016f;
            eventQueueAddUniqueIfValid(temp_v2);
            return;
          }
          temp_v2 = 0xe;
          buttonHelpSetPreset(temp_v2);
          temp_v2 = 0x100016f;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
        if (param_1 == 0x12) {
          temp_v2 = 0xf;
          buttonHelpSetPreset(temp_v2);
          temp_v2 = 0x100016f;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
        if (param_1 == 0x13) {
          temp_v2 = 0x10;
          buttonHelpSetPreset(temp_v2);
          temp_v2 = 0x100016f;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
        if (param_1 == 0x14) {
          temp_v5 = gameFlagIsSet(0x410);
          if (temp_v5 == 0) {
            temp_v2 = 0x16;
            buttonHelpSetPreset(temp_v2);
            temp_v2 = 0x100016f;
            eventQueueAddUniqueIfValid(temp_v2);
            return;
          }
          temp_v2 = 0x11;
          buttonHelpSetPreset(temp_v2);
          temp_v2 = 0x100016f;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
        if (param_1 == 0x15) {
          temp_v2 = 0x12;
          buttonHelpSetPreset(temp_v2);
          temp_v2 = 0x100016f;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
        if (param_1 == 0x16) {
          temp_v2 = 0x13;
          buttonHelpSetPreset(temp_v2);
          temp_v2 = 0x100016f;
          eventQueueAddUniqueIfValid(temp_v2);
          return;
        }
joined_r0x00188f3c:
        if (param_1 == 0x17) {
          buttonHelpSetPreset(0x14);
        }
      }
      else {
        temp_v4 = FUN_0029efc0(temp_v11);
        temp_v6 = FUN_0029efa8(temp_v11);
        temp_v6 = temp_v6 + temp_v4;
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if ((param_1 == 0x16) && (psVar3[5] != *(short *)(temp_v9 + temp_v6 * 2))) {
              FUN_002996d8(0);
              *(unsigned char *)(temp_v5 + 0x32) = 1;
            }
          }
          else if (psVar3[4] != *(short *)(temp_v9 + temp_v6 * 2)) {
            temp_v2 = 1;
            FUN_002992e0(temp_v2);
            FUN_002996d8(0);
            *(unsigned char *)(temp_v5 + 0x32) = 1;
          }
        }
        else if (psVar3[3] != *(short *)(temp_v9 + temp_v6 * 2)) {
          temp_v2 = 0;
          FUN_002992e0(temp_v2);
          FUN_002996d8(0);
          *(unsigned char *)(temp_v5 + 0x32) = 1;
        }
        temp_v9 = objectPartRunUnlessLocked(temp_v5 + 0x34);
        temp_v6 = 0;
        temp_v4 = FUN_0029e958(temp_v5 + 0x34);
        if (0 < temp_v4) {
          do {
            temp_v9 = temp_v9 - 1;
            if (temp_v9 < 0) {
              temp_v9 = FUN_0029e958(temp_v5 + 0x34);
              temp_v9 = temp_v9 - 1;
            }
            temp_v10 = temp_v5 + temp_v9 * 100;
            temp_v4 = FUN_0029e958(temp_v10 + 0x2a4);
            temp_v7 = gameFlagIsSet(0x410);
            if ((temp_v7 == 0) && (0 < temp_v9)) {
              temp_v4 = FUN_0029e958(temp_v10 + 0x36c);
            }
            if (0 < temp_v4) {
              flaggedEntrySetValueB(temp_v5 + 0x34,temp_v9);
              temp_v2 = objectPartRunUnlessLocked(temp_v5 + 0x34);
              param_1 = FUN_00299218((int)*(char *)(temp_v5 + 0x98),temp_v2);
              FUN_00299900();
              break;
            }
            temp_v6 = temp_v6 + 1;
            temp_v4 = FUN_0029e958(temp_v5 + 0x34);
          } while (temp_v6 < temp_v4);
        }
        FUN_00299174(temp_v11,0);
        *(unsigned int *)(temp_v5 + 0x1c) = 2;
        if (param_1 != 0x11) {
          if (param_1 != 0x12) {
            if (param_1 != 0x13) {
              if (param_1 != 0x14) {
                if (param_1 != 0x15) {
                  if (param_1 != 0x16) goto joined_r0x00188f3c;
                  temp_v2 = 0x13;
                }
                else {
                  temp_v2 = 0x12;
                }
              }
              else {
                temp_v5 = gameFlagIsSet(0x410);
                if (temp_v5 != 0) {
                  temp_v2 = 0x11;
                  buttonHelpSetPreset(temp_v2);
                  temp_v2 = 0x100016f;
                  eventQueueAddUniqueIfValid(temp_v2);
                  return;
                }
                temp_v2 = 0x16;
              }
            }
            else {
              temp_v2 = 0x10;
            }
          }
          else {
            temp_v2 = 0xf;
          }
        }
        else {
          temp_v5 = gameFlagIsSet(0x410);
          if (temp_v5 != 0) {
            temp_v2 = 0xe;
            buttonHelpSetPreset(temp_v2);
            temp_v2 = 0x100016f;
            eventQueueAddUniqueIfValid(temp_v2);
            return;
          }
          temp_v2 = 0x15;
        }
        buttonHelpSetPreset(temp_v2);
      }
      temp_v2 = 0x100016f;
    }
    eventQueueAddUniqueIfValid(temp_v2);
    return;
  case 4:
    temp_v9 = FUN_00299fc0();
    if (temp_v9 != 0) {
      FUN_0029a164(0xffffffff);
      FUN_0029c4c8(0);
      FUN_0029ca58();
      gameGlobalsSetSelected(0);
      FUN_00299900(0);
      timerStart(temp_v5 + 0x6d4,3,0);
      *(unsigned int *)(temp_v5 + 0x20) = 6;
      temp_v9 = g_camp;
      puVar11 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
      *puVar11 = 5;
      *(unsigned int *)(temp_v9 + 0x1c) = 0;
      *(unsigned int *)(temp_v9 + 0x14) = 0;
      asdMdlManagerDestroy(*(unsigned int *)(temp_v5 + 0x25c0));
      *(unsigned int *)(temp_v5 + 0x25c0) = 0;
      FUN_00299174(temp_v11,0);
      guestWinRequestOpen();
      FUN_0029e648(1,0);
      FUN_002990a0();
      return;
    }
  default:
    return;
  }
  switch(param_1) {
  case 0x11:
    FUN_00299da0(0x11);
    temp_v2 = 0;
    FUN_00299d84(temp_v2);
    break;
  case 0x12:
    FUN_00299da0(0x12);
    temp_v2 = 0;
    FUN_00299d84(temp_v2);
    break;
  case 0x13:
    FUN_00299da0(0x13);
    FUN_00299d84(0);
    break;
  case 0x14:
    FUN_00299da0(0x14);
    temp_v2 = 1;
    FUN_00299d84(temp_v2);
    break;
  case 0x15:
    FUN_00299da0(0x15);
    FUN_00299d84(0);
    break;
  case 0x16:
    FUN_00299da0(0x16);
    temp_v2 = 2;
    FUN_00299d84(temp_v2);
    break;
  case 0x17:
    FUN_00299da0(0x17);
    FUN_00299d84(0);
  }
  *(unsigned char *)(temp_v5 + 0x33) = 0;
  FUN_00299bc4(temp_v11,0);
  FUN_00299900(param_1);
  if (!temp_v12) {
    FUN_0029974c();
  }
  *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
  return;
}

} /* extern "C" */
