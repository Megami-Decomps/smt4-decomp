/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d0ec` (_code @ 0x27d0ec, 0x2f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "game/GameState.h"

extern "C" {


int mapAmbientSoundActorsSpawn(unsigned int, unsigned int);
int bgmReleaseStopped(void);
int slotFindByPair(int, unsigned int);
int soundActorQueueStartPending(void);
int bgmResumeOrRequestTrack(int);
int bgmGetStateById(...);
int gameFlagIsSet(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_mapMain; /* 0x447e28 */






/* Supplied declaration required: mapAmbientSoundActorsSpawn. */
extern int FUN_001fb4d8(void);
extern int gameMapBlockGetValue(void);
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: slotFindByPair. */
/* Supplied declaration required: soundActorQueueStartPending. */
extern int mapGetDepartureIndex(void);
/* Supplied declaration required: bgmResumeOrRequestTrack. */
/* Supplied declaration required: bgmGetStateById. */
extern int table1bOr1cGetRecordValue(void);
extern int rosterGetLeaderId(void);
/* Supplied declaration required: gameFlagIsSet. */
extern int dataTable2eSub3FindByKeyPair(unsigned int, unsigned int);


void FUN_0027d0ec(void)

{
/* irregular: 3 goto(s); 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = g_mapMain;
  temp_v0 = dataTable2eSub3FindByKeyPair(*(unsigned int *)(g_mapMain + 0x2c),*(unsigned int *)(g_mapMain + 0x30));
  if (temp_v0 != 0) {
    g_gameState.selectedKind = *(char *)(temp_v0 + 2);
    g_gameState.defaultKind = (short)g_gameState.selectedKind;
  }
  if (((g_gameState.event.scriptPending != '\0') || (g_gameState.event.bgmReleased == '\0')) || (*(char *)(temp_v2 + 0x45) != '\0')) {
    bgmReleaseStopped();
    g_gameState.event.bgmReleased = 1;
    return;
  }
  temp_v0 = FUN_001fb4d8();
  if (temp_v0 != 0) {
    if (*(int *)(temp_v2 + 0x24) != 0x17 && *(int *)(temp_v2 + 0x24) != 0x18) {
      soundActorQueueStartPending();
    }
  }
  else {
    mapAmbientSoundActorsSpawn(*(unsigned int *)(temp_v2 + 0x2c),*(unsigned int *)(temp_v2 + 0x30));
  }
  if (*(int *)(temp_v2 + 0x2c) != 0x18) {
    temp_v0 = gameMapBlockGetValue();
    if (temp_v0 == 1) {
      temp_v0 = *(int *)(temp_v2 + 0x2c);
      slotFindByPair(temp_v0,*(unsigned int *)(temp_v2 + 0x30));
      temp_v0 = *(int *)(temp_v0 * 0x5c + 0x448e2c);
      if (temp_v0 != 0) {
        g_gameState.bgmId = temp_v0;
        temp_v2 = bgmGetStateById();
        if (temp_v2 != 0 && temp_v2 != 3) {
          return;
        }
        bgmResumeOrRequestTrack(g_gameState.bgmId);
        return;
      }
    }
  }
  else {
    temp_v0 = mapGetDepartureIndex();
    if ((temp_v0 == 1) && (temp_v0 = gameFlagIsSet(0x2c), temp_v0 == 0)) {
      g_gameState.bgmId = 0x1000086;
      temp_v2 = bgmGetStateById();
      if ((temp_v2 != 0) && (temp_v2 != 3)) {
        return;
      }
      bgmResumeOrRequestTrack(g_gameState.bgmId);
      return;
    }
  }
  temp_v0 = *(int *)(temp_v2 + 0x2c);
  if (temp_v0 != 0x18) {
    temp_v3 = *(unsigned int *)(temp_v2 + 0x30);
  }
  else {
    temp_v3 = 1;
  }
  slotFindByPair(temp_v0,temp_v3);
  temp_v0 = temp_v0 * 0x5c;
  g_gameState.bgmId = *(int *)(temp_v0 + 0x448e20);
  if (((*(int *)(temp_v0 + 0x448e28) != 0) &&
      ((*(short *)(temp_v0 + 0x448e24) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
     ((*(short *)(temp_v0 + 0x448e26) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)))) {
    g_gameState.bgmId = *(int *)(temp_v0 + 0x448e28);
  }
  if (*(int *)(temp_v2 + 0x2c) != 0x13) {
    if (*(int *)(temp_v2 + 0x2c) == 0x18) {
      temp_v0 = mapGetDepartureIndex();
      if (temp_v0 == 5) goto LAB_0027d2cc;
      goto LAB_0027d2f8;
    }
LAB_0027d324:
    if (((*(int *)(temp_v2 + 0x40) != 1 && *(int *)(temp_v2 + 0x40) != 2) &&
        (temp_v2 = *(int *)(temp_v2 + 0x2c), (temp_v2 != 0x29 && temp_v2 != 0x2a) && temp_v2 != 0x2b)) &&
       ((temp_v2 = rosterGetLeaderId(), temp_v2 != 0 && temp_v2 != 0x15f &&
        ((temp_v2 != 0x160 && temp_v2 != 0x161 && (temp_v2 != 0x164 && temp_v2 != 0x165)))))) {
      temp_v4 = temp_v2 == 0x166 || temp_v2 == 0x167;
      if (temp_v2 != 0x166 && temp_v2 != 0x167) {
        temp_v4 = temp_v2 == 0x168;
      }
      if (!temp_v4) {
        temp_v2 = table1bOr1cGetRecordValue();
        if (temp_v2 == 1) {
          g_gameState.bgmId = 0x1000037;
        }
        else {
          g_gameState.bgmId = 0x1000038;
        }
      }
    }
  }
  else {
LAB_0027d2cc:
    temp_v0 = gameFlagIsSet(0x62c);
    if ((temp_v0 != 0) && (temp_v0 = gameFlagIsSet(0x648), temp_v0 == 0)) {
      g_gameState.bgmId = 0x100007a;
    }
    else {
LAB_0027d2f8:
      if (((*(int *)(temp_v2 + 0x2c) != 0x13) || (*(int *)(temp_v2 + 0x30) >= 5)) ||
         (temp_v0 = gameFlagIsSet(0xb8), temp_v0 != 0)) goto LAB_0027d324;
    }
  }
  temp_v2 = bgmGetStateById(g_gameState.bgmId);
  if (temp_v2 != 0) {
    if (temp_v2 != 3) {
      return;
    }
  }
  else {
    bgmReleaseStopped();
  }
  bgmResumeOrRequestTrack(g_gameState.bgmId);
  return;
}

} /* extern "C" */
