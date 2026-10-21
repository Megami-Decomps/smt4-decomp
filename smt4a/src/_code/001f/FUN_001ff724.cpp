/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ff724` (_code @ 0x1ff724, 0x478 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_001ad9b4(...);
int FUN_00203b40(...);
int FUN_002a48e0(...);
int FUN_002a4964(...);
int gameDataGetIndexedPair(...);
int sysMemClear(...);
int rt_memclr(...);
int flaggedEntrySetValueA(...);
int uiQuestSortListByEntryKind(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int dataTable1bOr1cCompareRecordKeys(...); /* 0x29093c */
extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: qsort. */
extern int idIsAtLeast350(unsigned int);
extern int gameFlagEntryGetBit(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a48e0. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: gameDataGetIndexedPair. */
extern int FUN_002c2c68(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: uiQuestSortListByEntryKind. */
extern int FUN_003df004(unsigned int, int, int *);
extern int partyEntryFlagsBit3(unsigned int);
extern int partyEntryFlagsBit1(unsigned short);


void FUN_001ff724(void)

{
/* irregular: 4 goto(s); 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int *puVar7;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10 [3];
  
  temp_v5 = g_uiQuest;
  temp_v9 = 0;
  temp_v8 = 0;
  sysMemClear(g_uiQuest + 0xa10,0xc6);
  rt_memclr(temp_v5 + 0xad6,500);
  temp_v7 = 0;
  do {
    temp_v1 = gameFlagEntryGetBit(temp_v7,0);
    if (temp_v1 == 0) goto LAB_001ff908;
    do {
      if ((temp_v7 < 0x15e) || (temp_v2 = temp_v7, FUN_001ad9b4(), temp_v2 != 0)) {
        temp_v1 = FUN_001bd100(temp_v7);
        if (temp_v1 != 0) {
          temp_v1 = temp_v9 * 2;
          temp_v9 = temp_v9 + 1;
          *(short *)(temp_v5 + temp_v1 + 0xa10) = (short)temp_v7;
        }
        else if (*(char *)(temp_v5 + 0x93d) != '\0') {
          temp_v2 = temp_v7;
          FUN_001ad9b4();
          if ((temp_v2 != 0) && (*(char *)(temp_v2 + 6) == '\0')) {
            temp_v1 = 0;
            do {
              temp_v3 = FUN_003df004(temp_v7,temp_v1,temp_v10);
              if ((temp_v3 != 0) && ((temp_v3 = partyEntryFlagsBit3(temp_v7), temp_v3 != 0 || (0 < temp_v10[0]))))
              goto LAB_001ff908;
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
            temp_v1 = idIsAtLeast350(temp_v7);
            if ((temp_v1 == 0) && (*(short *)(temp_v2 + 0x124) != 0)) {
              switch(*(unsigned char *)(temp_v5 + 0x945)) {
              case 0:
                break;
              case 1:
                if (*(short *)(temp_v2 + 0x124) == 1) {
                  temp_v1 = temp_v8 * 2;
                  temp_v8 = temp_v8 + 1;
                  *(short *)(temp_v5 + temp_v1 + 0xad6) = (short)temp_v7;
                }
                break;
              default:
                if (*(short *)(temp_v2 + 0x124) != 1) {
                  temp_v1 = temp_v8 * 2;
                  temp_v8 = temp_v8 + 1;
                  *(short *)(temp_v5 + temp_v1 + 0xad6) = (short)temp_v7;
                }
                break;
              case 9:
              case 10:
              case 0xb:
              case 0xc:
              case 0xd:
                temp_v1 = temp_v8 * 2;
                temp_v8 = temp_v8 + 1;
                *(short *)(temp_v5 + temp_v1 + 0xad6) = (short)temp_v7;
              }
            }
            else {
              temp_v1 = temp_v8 * 2;
              temp_v8 = temp_v8 + 1;
              *(short *)(temp_v5 + temp_v1 + 0xad6) = (short)temp_v7;
            }
          }
        }
        else {
          temp_v1 = temp_v8 * 2;
          temp_v8 = temp_v8 + 1;
          *(short *)(temp_v5 + temp_v1 + 0xad6) = (short)temp_v7;
        }
      }
LAB_001ff908:
      temp_v7 = (temp_v7 + 1) & 0xffff;
      if (temp_v7 >= 400) {
        qsort(temp_v5 + 0xa10,temp_v9,2,dataTable1bOr1cCompareRecordKeys);
        temp_v1 = temp_v5 + 0x948;
        temp_v10[0] = 1;
        temp_v10[1] = 1;
        FUN_00203b40(temp_v1,temp_v9,10,1);
        temp_v3 = temp_v5 + 0x9ac;
        temp_v10[0] = 1;
        temp_v10[1] = 1;
        FUN_00203b40(temp_v3,temp_v8,10,1);
        uiQuestSortListByEntryKind(0);
        temp_v6 = 0;
        if (temp_v9 < 1) goto LAB_001ff9d0;
        goto LAB_001ff990;
      }
    } while (temp_v7 >= 0x15e);
  } while( 1 );
  while (temp_v6 = temp_v6 + 1, temp_v6 < temp_v9) {
LAB_001ff990:
    temp_v4 = partyEntryFlagsBit1(*(unsigned short *)(temp_v5 + temp_v6 * 2 + 0xa10));
    if (temp_v4 != 0) {
      FUN_002a4964(temp_v1,temp_v6);
      break;
    }
  }
LAB_001ff9d0:
  temp_v9 = 0;
  if (0 < temp_v8) {
    do {
      temp_v6 = temp_v5 + temp_v9 * 2;
      temp_v4 = partyEntryFlagsBit1(*(unsigned short *)(temp_v6 + 0xad6));
      if (temp_v4 != 0) {
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 0xad6);
        FUN_001ad9b4();
        temp_v0 = '\0';
        if (temp_v7 != 0) {
          temp_v0 = *(char *)(temp_v7 + 6);
        }
        if ((temp_v7 != 0 && temp_v0 != '\0') && temp_v0 != '\n') {
          FUN_002a4964(temp_v3,temp_v9);
          break;
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v8);
  }
  if (*(char *)(temp_v5 + 0x93d) != '\0') {
    return;
  }
  temp_v8 = gameDataGetIndexedPair(0);
  temp_v8 = *(int *)(temp_v8 + 4);
  piVar6 = (int *)gameDataGetIndexedPair(0);
  if (*(short *)(temp_v5 + (*piVar6 + temp_v8) * 2 + 0xa10) != 0) {
    temp_v8 = gameDataGetIndexedPair(0);
    temp_v6 = *(int *)(temp_v8 + 4);
    temp_v8 = uiSearchPrimary(temp_v1);
    temp_v9 = FUN_002c2c68(temp_v1);
    if (temp_v9 < temp_v6 + temp_v8) {
      temp_v8 = gameDataGetIndexedPair(0);
      *(unsigned int *)(temp_v8 + 4) = 0;
      puVar7 = (unsigned int *)gameDataGetIndexedPair(0);
      *puVar7 = 0;
    }
  }
  else {
    temp_v8 = gameDataGetIndexedPair(0);
    *(unsigned int *)(temp_v8 + 4) = 0;
    puVar7 = (unsigned int *)gameDataGetIndexedPair(0);
    *puVar7 = 0;
  }
  temp_v8 = gameDataGetIndexedPair(0);
  FUN_002a48e0(temp_v1,*(unsigned int *)(temp_v8 + 4));
  puVar7 = (unsigned int *)gameDataGetIndexedPair(0);
  flaggedEntrySetValueA(temp_v1,*puVar7);
  temp_v8 = gameDataGetIndexedPair(1);
  temp_v8 = *(int *)(temp_v8 + 4);
  piVar6 = (int *)gameDataGetIndexedPair(1);
  if (*(short *)(temp_v5 + (*piVar6 + temp_v8) * 2 + 0xad6) != 0) {
    temp_v5 = gameDataGetIndexedPair(1);
    temp_v9 = *(int *)(temp_v5 + 4);
    temp_v5 = uiSearchPrimary(temp_v3);
    temp_v8 = FUN_002c2c68(temp_v3);
    if (temp_v9 + temp_v5 <= temp_v8) {
      temp_v5 = gameDataGetIndexedPair(1);
      FUN_002a48e0(temp_v3,*(unsigned int *)(temp_v5 + 4));
      puVar7 = (unsigned int *)gameDataGetIndexedPair(1);
      flaggedEntrySetValueA(temp_v3,*puVar7);
      return;
    }
  }
  temp_v5 = gameDataGetIndexedPair(1);
  *(unsigned int *)(temp_v5 + 4) = 0;
  puVar7 = (unsigned int *)gameDataGetIndexedPair(1);
  *puVar7 = 0;
  temp_v5 = gameDataGetIndexedPair(1);
  FUN_002a48e0(temp_v3,*(unsigned int *)(temp_v5 + 4));
  puVar7 = (unsigned int *)gameDataGetIndexedPair(1);
  flaggedEntrySetValueA(temp_v3,*puVar7);
  return;
}

} /* extern "C" */
