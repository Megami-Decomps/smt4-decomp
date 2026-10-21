/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcafc` (_code @ 0x2bcafc, 0x380 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);
int bgmGetStateById(...);
int FUN_00249ac4(unsigned int, unsigned int);
int bgmReleaseStopped(void);
int FUN_002b9520(void);
int lmapGetSpawnIndex(void);
int slotFindByPair(int, unsigned int);
int FUN_003d4c68(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_mapMain; /* 0x581274 */
extern int DAT_005f1628; /* 0x5f1628 */
extern short DAT_005f162c; /* 0x5f162c */
extern signed char DAT_005f162e; /* 0x5f162e */
extern signed char DAT_005f1749; /* 0x5f1749 */
extern signed char DAT_005f1776; /* 0x5f1776 */
extern signed char DAT_005f1a00; /* 0x5f1a00 */

/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: bgmGetStateById. */
/* Supplied declaration required: FUN_00249ac4. */
/* Supplied declaration required: bgmReleaseStopped. */
extern int FUN_002b950c(void);
/* Supplied declaration required: FUN_002b9520. */
extern int gameFlagsValueGet(void);
/* Supplied declaration required: lmapGetSpawnIndex. */
/* Supplied declaration required: slotFindByPair. */
extern int FUN_003cb88c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003d4c68. */


void FUN_002bcafc(void)

{
/* irregular: 1 unstructured edge(s); 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = g_mapMain;
  if (DAT_005f1a00 != '\0') {
    DAT_005f1a00 = '\0';
  }
  temp_v0 = FUN_003cb88c(*(unsigned int *)(g_mapMain + 0x30),*(unsigned int *)(g_mapMain + 0x34));
  if (temp_v0 != 0) {
    DAT_005f162e = *(char *)(temp_v0 + 2);
    DAT_005f162c = (short)DAT_005f162e;
  }
  if (((DAT_005f1776 != '\0') || (DAT_005f1749 == '\0')) || (*(char *)(temp_v2 + 0x49) != '\0')) {
    bgmReleaseStopped();
    DAT_005f1749 = 1;
    return;
  }
  temp_v0 = FUN_002b950c();
  if (temp_v0 != 0) {
    if (*(int *)(temp_v2 + 0x28) != 0x17 && *(int *)(temp_v2 + 0x28) != 0x18) {
      FUN_002b9520();
    }
  }
  else {
    FUN_00249ac4(*(unsigned int *)(temp_v2 + 0x30),*(unsigned int *)(temp_v2 + 0x34));
  }
  if (*(int *)(temp_v2 + 0x30) != 0x18) {
    temp_v0 = gameFlagsValueGet();
    if (temp_v0 == 1) {
      temp_v0 = *(int *)(temp_v2 + 0x30);
      slotFindByPair(temp_v0,*(unsigned int *)(temp_v2 + 0x34));
      temp_v0 = *(int *)(temp_v0 * 0x5c + 0x582378);
      if (temp_v0 != 0) {
        DAT_005f1628 = temp_v0;
        temp_v2 = bgmGetStateById();
        if (temp_v2 != 0 && temp_v2 != 3) {
          return;
        }
        FUN_003d4c68(DAT_005f1628);
        return;
      }
    }
  }
  else {
    lmapGetSpawnIndex();
  }
  temp_v0 = *(int *)(temp_v2 + 0x30);
  if (temp_v0 != 0x18) {
    temp_v3 = *(unsigned int *)(temp_v2 + 0x34);
  }
  else {
    temp_v3 = 1;
  }
  slotFindByPair(temp_v0,temp_v3);
  temp_v0 = temp_v0 * 0x5c;
  DAT_005f1628 = *(int *)(temp_v0 + 0x58236c);
  if (((*(int *)(temp_v0 + 0x582374) != 0) &&
      ((*(short *)(temp_v0 + 0x582370) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
     ((*(short *)(temp_v0 + 0x582372) == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)))) {
    DAT_005f1628 = *(int *)(temp_v0 + 0x582374);
  }
  if (*(int *)(temp_v2 + 0x30) == 1) {
    temp_v0 = *(int *)(temp_v2 + 0x34);
    if ((temp_v0 == 0xb || temp_v0 == 0xc) || temp_v0 == 0xd) {
      temp_v0 = gameFlagIsSet(0xd1);
      if ((temp_v0 != 0) && (temp_v0 = gameFlagIsSet(0xd4), temp_v0 == 0)) {
        DAT_005f1628 = 0x1000013;
      }
      else {
        temp_v0 = gameFlagIsSet(0xd4);
        if (temp_v0 != 0) {
          if (*(int *)(temp_v2 + 0x34) == 0xd) {
            DAT_005f1628 = 0x100008c;
          }
          else {
            DAT_005f1628 = 0x100001d;
          }
        }
      }
    }
    if (((*(int *)(temp_v2 + 0x34) == 1) && (temp_v0 = gameFlagIsSet(0x72), temp_v0 != 0)) &&
       (temp_v0 = gameFlagIsSet(0xb1), temp_v0 == 0)) {
      DAT_005f1628 = 0x1000093;
    }
  }
  if (*(int *)(temp_v2 + 0x30) == 0x25) {
    temp_v0 = *(int *)(temp_v2 + 0x34);
    if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5 || temp_v0 == 6)) {
      temp_v0 = gameFlagIsSet(0xd4);
      if ((temp_v0 != 0) && (temp_v0 = gameFlagIsSet(0xd8), temp_v0 == 0)) {
        DAT_005f1628 = 0x1000028;
      }
      else {
        temp_v0 = gameFlagIsSet(0xd8);
        if ((temp_v0 != 0) && (DAT_005f1628 = 0x100005d, *(int *)(temp_v2 + 0x34) == 6)) {
          DAT_005f1628 = 0x100008b;
        }
      }
    }
    if (((*(int *)(temp_v2 + 0x34) == 1 || *(int *)(temp_v2 + 0x34) == 2) &&
        (temp_v0 = gameFlagIsSet(0x1e), temp_v0 != 0)) && (temp_v0 = gameFlagIsSet(0x47), temp_v0 == 0)) {
      DAT_005f1628 = 0x1000093;
    }
  }
  if (*(int *)(temp_v2 + 0x30) == 0x26) {
    if (*(int *)(temp_v2 + 0x34) == 5) {
      temp_v0 = gameFlagIsSet(0x26);
      if (temp_v0 == 0) {
        DAT_005f1628 = 0x1000084;
      }
      if ((*(int *)(temp_v2 + 0x30) == 0x18) && (temp_v2 = lmapGetSpawnIndex(), temp_v2 >= 100)) {
        DAT_005f1628 = 0x1000067;
      }
    }
  }
  else if ((*(int *)(temp_v2 + 0x30) == 0x18) && (temp_v2 = lmapGetSpawnIndex(), temp_v2 >= 100)) {
    DAT_005f1628 = 0x1000067;
  }
  temp_v2 = bgmGetStateById(DAT_005f1628);
  if (temp_v2 != 0) {
    if (temp_v2 != 3) {
      return;
    }
  }
  else {
    bgmReleaseStopped();
  }
  FUN_003d4c68(DAT_005f1628);
  return;
}

} /* extern "C" */
