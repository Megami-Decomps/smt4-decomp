/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0754` (_code @ 0x1d0754, 0xc54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int configOpen(void);
int FUN_00194ec8(void);
int bibleOpenMode0(...);
int bibleOpenMode1(...);
int FUN_00269cb8(...);
int FUN_00269cd0(void);
int FUN_00269da0(...);
int FUN_0028a368(...);
int FUN_0028a924(...);
int FUN_0029e774(void);
int FUN_002a035c(void);
int FUN_002cd37c(void);
int bibleOpenMode3(int);
int FUN_002e333c(void);

int bgmRestart(int);
int bibleOpenMode2(int);
int FUN_00223cf0(void);
int FUN_00269dc8(void);
int FUN_0026a348(void);
int FUN_0026a38c(...);
int FUN_0026a3c4(...);
int guestWinRequestClose(void);
int FUN_0026a598(void);
int FUN_0026d5a4(void);
int FUN_00298940(void);
int FUN_00298d0c(int);
int FUN_00299da0(int);
int FUN_0029c3c0(int, int, int);
int FUN_0029cc44(...);
int FUN_0029e788(void);
int FUN_0029e874(int);
int FUN_0029ee6c(int, int);
int timerStart(...);
int FUN_002cf780(void);
int FUN_002e24c8(void);
int FUN_003aacd0(void);
int FUN_003aca0c(void);
int spriteTable22Acquire(void);
int FUN_003acf1c(int);
int FUN_003ad0e0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: configOpen. */
/* Supplied declaration required: FUN_00194ec8. */
/* Supplied declaration required: bgmRestart. */
/* Supplied declaration required: bibleOpenMode0. */
/* Supplied declaration required: bibleOpenMode1. */
/* Supplied declaration required: bibleOpenMode2. */
/* Supplied declaration required: FUN_00223cf0. */
/* Supplied declaration required: FUN_00269cb8. */
/* Supplied declaration required: FUN_00269cd0. */
extern int FUN_00269d4c(void);
/* Supplied declaration required: FUN_00269da0. */
/* Supplied declaration required: FUN_00269dc8. */
/* Supplied declaration required: FUN_0026a348. */
/* Supplied declaration required: FUN_0026a38c. */
/* Supplied declaration required: FUN_0026a3c4. */
/* Supplied declaration required: guestWinRequestClose. */
/* Supplied declaration required: FUN_0026a598. */
/* Supplied declaration required: FUN_0026d5a4. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: FUN_00298940. */
/* Supplied declaration required: FUN_00298d0c. */
extern int FUN_00299218(int, unsigned int);
/* Supplied declaration required: FUN_00299da0. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029e774. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
extern unsigned int FUN_0029e908(int);
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002a035c. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002cd37c. */
/* Supplied declaration required: FUN_002cf780. */
/* Supplied declaration required: bibleOpenMode3. */
/* Supplied declaration required: FUN_002e24c8. */
/* Supplied declaration required: FUN_002e333c. */
/* Supplied declaration required: FUN_003aacd0. */
/* Supplied declaration required: FUN_003aca0c. */
/* Supplied declaration required: spriteTable22Acquire. */
/* Supplied declaration required: FUN_003acf1c. */
/* Supplied declaration required: FUN_003ad0e0. */


void FUN_001d0754(int *param_1)

{
/* irregular: 40 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v2 = *param_1;
  temp_v0 = FUN_0029e908(temp_v2 + 0x34);
  temp_v1 = FUN_00299218((int)*(char *)(temp_v2 + 0x98),temp_v0);
  switch(temp_v1) {
  case 7:
    *(unsigned char *)(temp_v2 + 0x25bd) = 1;
    FUN_0029c3c0(0,10,0xff);
    bgmRestart(0x1e);
    return;
  case 9:
    FUN_0026a598();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    FUN_00298940();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = FUN_0029ee54(temp_v2 + 0x1dc);
    if (0 < temp_v1) {
      FUN_0029e874(1);
      FUN_0029e788();
      FUN_00298d0c(1);
    }
    *(unsigned int *)(temp_v2 + 0x20) = 0xe;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 10:
    temp_v1 = FUN_0029ee54(temp_v2 + 0x240);
    if (temp_v1 < 1) {
      return;
    }
    FUN_0026a598();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    spriteTable22Acquire();
    FUN_003ad0e0();
    temp_v1 = FUN_0029efc0(temp_v2 + 0x240);
    temp_v4 = FUN_0029efa8(temp_v2 + 0x240);
    FUN_003acf1c((int)*(short *)(temp_v2 + (temp_v4 + temp_v1) * 2 + 0x1db4));
    FUN_003aca0c();
    FUN_003aacd0();
    *(unsigned int *)(temp_v2 + 0x20) = 0x10;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 4;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0xb:
  case 0xc:
  case 0xd:
    if (temp_v1 == 0xb) {
      temp_v4 = temp_v2 + 0xb0;
    }
    else if (temp_v1 == 0xc) {
      temp_v4 = temp_v2 + 0x114;
    }
    else if (temp_v1 == 0xd) {
      temp_v4 = temp_v2 + 0x178;
    }
    temp_v4 = FUN_0029ee54(temp_v4);
    if (temp_v4 < 1) {
      return;
    }
    FUN_0026a598();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    if (temp_v1 != 0xb) {
      if (temp_v1 != 0xc) {
        if (temp_v1 == 0xd) {
          *(unsigned int *)(temp_v2 + 0x20) = 0xd;
          FUN_0026a3c4();
        }
      }
      else {
        temp_v0 = 0xc;
        *(unsigned int *)(temp_v2 + 0x20) = 0xc;
        FUN_0026a3c4(temp_v0);
      }
    }
    else {
      *(unsigned int *)(temp_v2 + 0x20) = 10;
      temp_v0 = 0xb;
      FUN_0026a3c4(temp_v0);
    }
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 4;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0xe:
    FUN_0026a598();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0x16;
    return;
  case 0x10:
    FUN_0026a598();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x17;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if (temp_v1 == 0x11) {
      temp_v4 = temp_v2 + 0x2a4;
    }
    else if (temp_v1 == 0x12) {
      temp_v4 = temp_v2 + 0x308;
    }
    else if (temp_v1 == 0x13) {
      temp_v4 = temp_v2 + 0x36c;
    }
    else if (temp_v1 == 0x14) {
      temp_v4 = temp_v2 + 0x3d0;
    }
    else if (temp_v1 == 0x15) {
      temp_v4 = temp_v2 + 0x434;
    }
    else if (temp_v1 == 0x16) {
      temp_v4 = temp_v2 + 0x498;
    }
    else if (temp_v1 == 0x17) {
      temp_v4 = temp_v2 + 0x4fc;
    }
    temp_v1 = FUN_0029ee54(temp_v4);
    if (0 < temp_v1) {
      FUN_0026a598();
      timerStart(temp_v2 + 0x6d4,1,0);
      FUN_0026d5a4();
      guestWinRequestClose();
      FUN_0029cc44(1);
      FUN_0029e874(1);
      FUN_0029e788();
      *(unsigned int *)(temp_v2 + 0x20) = 0x1a;
      FUN_00299da0(0x11);
      FUN_00299da0(0x12);
      FUN_00299da0(0x13);
      FUN_00299da0(0x14);
      FUN_00299da0(0x15);
      FUN_00299da0(0x16);
      FUN_00299da0(0x17);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 4;
      return;
    }
    break;
  case 0x18:
    FUN_0026a598();
    guestWinRequestClose();
    FUN_0029cc44(1);
    FUN_0026a38c(0);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x12;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x19:
    FUN_0026a598();
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    bibleOpenMode2(0);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x21;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x1a:
    FUN_002e24c8();
    *(int *)(temp_v2 + 0xc) = temp_v1;
    FUN_0026d5a4();
    FUN_0029ee6c(0,0x323232ff);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x22;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    guestWinRequestClose();
    FUN_0029cc44(1);
    FUN_0026a348();
    return;
  case 0x1b:
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0x23;
    FUN_00269dc8();
    FUN_002cf780();
    *(unsigned char *)(temp_v2 + 0x248c) = 1;
    return;
  case 0x1c:
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x24;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_00269dc8();
    FUN_00223cf0();
    *(unsigned char *)(temp_v2 + 0x248d) = 1;
    return;
  case 0x24:
    FUN_0026a598();
    bibleOpenMode3(0);
    FUN_002a035c();
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x21;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_00269cd0();
    return;
  case 0x25:
    FUN_0026a598();
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x2e;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x26:
    FUN_0026a598();
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x2f;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x27:
    configOpen();
    FUN_0026a598();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    *(unsigned int *)(temp_v2 + 0x20) = 0x2b;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 0x29:
    FUN_00194ec8();
    FUN_0026a598();
    timerStart(temp_v2 + 0x6d4,0);
    FUN_0026d5a4();
    *(unsigned int *)(temp_v2 + 0x20) = 0x2c;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 0x2a:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      FUN_0026a598();
      FUN_00269da0(0);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
      *puVar5 = 0x1d;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      FUN_00269cd0();
      return;
    }
    break;
  case 0x2b:
    FUN_0026a598();
    FUN_00269da0(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x1d;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_00269cd0();
    return;
  case 0x2c:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      FUN_0026a598();
      bibleOpenMode0(0);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0x21;
      FUN_002a035c();
      FUN_00269cd0();
      return;
    }
    break;
  case 0x2d:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      temp_v1 = gameGetSlotTable();
      temp_v3 = 0;
      if (*(char *)(temp_v1 + 0x910b) != '\0') {
        do {
          temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x90f0);
          if (-1 < temp_v2) {
            temp_v2 = temp_v1 + temp_v2 * 0x604 + 0x90;
            FUN_002cd37c();
            if (temp_v2 == 0) {
              FUN_0026a598();
              bibleOpenMode1(0);
              temp_v1 = g_camp;
              puVar5 = (unsigned int *)(g_camp + 0x18);
              *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
              *puVar5 = 0x21;
              *(unsigned int *)(temp_v1 + 0x1c) = 0;
              *(unsigned int *)(temp_v1 + 0x14) = 0;
              FUN_002a035c();
              FUN_00269cd0();
              return;
            }
          }
          temp_v3 = temp_v3 + 1;
          if (*(unsigned char *)(temp_v1 + 0x910b) <= temp_v3) {
            return;
          }
        } while( 1 );
      }
    }
    break;
  case 0x2f:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      FUN_0026a598();
      FUN_00269da0(3);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
      *puVar5 = 0x1d;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      FUN_00269cd0();
      *(unsigned char *)(temp_v2 + 0x248e) = 1;
      return;
    }
    break;
  case 0x30:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      FUN_0026a598();
      FUN_00269da0(4);
      FUN_00269cd0();
      FUN_002e333c();
      guestWinRequestClose();
      FUN_0029cc44(1);
      FUN_0026a38c(1);
      FUN_0028a924(0xd,0,0xffffffff);
      FUN_0028a368(1);
      FUN_0029e774();
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0x13;
      return;
    }
    break;
  case 0x31:
    *(unsigned int *)(temp_v2 + 0x20) = 0x34;
    return;
  case 0x32:
    *(unsigned int *)(temp_v2 + 0x18) = 0x31;
    FUN_00269cb8(2);
    FUN_0026d5a4();
    FUN_0029cc44(1);
    FUN_0026a348();
    return;
  case 0x33:
    *(unsigned int *)(temp_v2 + 0x18) = 0x32;
    FUN_00269cb8(1);
    FUN_0026d5a4();
    FUN_0029cc44(1);
    FUN_0026a348();
    return;
  case 0x34:
    *(unsigned int *)(temp_v2 + 0x18) = 0x33;
    FUN_00269cb8(3);
    FUN_0026d5a4();
    FUN_0029cc44(1);
    FUN_0026a348();
    return;
  }
  return;
}

} /* extern "C" */
