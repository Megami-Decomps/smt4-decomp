/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c92b8` (_code @ 0x3c92b8, 0x2d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {

unsigned int uniteChooseAvailableDevilAtLevel(unsigned int, unsigned int, unsigned int, unsigned int);
const unsigned char *dataTable05Sub0GetEntries(void);
int demonFindClosestEligibleLevel(unsigned short *, int, unsigned int, int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: dataTable05Sub0GetEntries. */
extern int FUN_0029ea68(unsigned int);
extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
extern int partyMemberFindById(unsigned int);
extern unsigned int randNextInRange(unsigned int);
extern int FUN_00311be4(void);
/* Supplied declaration required: demonFindClosestEligibleLevel. */
extern int FUN_003c9b94(unsigned short *, unsigned short *, unsigned short *, unsigned int *);


unsigned int FUN_003c92b8(unsigned short *param_1,unsigned short *param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  const unsigned char *levelBounds;
  int temp_v1;
  DevilSortRecord *baseRecord;
  unsigned int temp_v2;
  unsigned int chosenId;
  unsigned int temp_v3;
  DevilSortRecord *candidateRecord;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  levelBounds = dataTable05Sub0GetEntries();
  temp_v1 = FUN_003c9b94(param_1,param_2,param_3,param_4);
  if (temp_v1 == 0) {
    return 0;
  }
  baseRecord = devilGetRecord((unsigned short)((param_4[1] & 0x1ffff) >> 2));
  temp_v1 = FUN_00311be4();
  temp_v7 = temp_v1 + baseRecord->level;
  temp_v2 = randNextInRange(99);
  if (temp_v2 < 5) {
    temp_v1 = partyMemberFindById(0x218);
    if (temp_v1 == 0) {
      chosenId = 0x218;
      *param_4 = *param_4;
      param_4[1] = ((chosenId & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
      return 1;
    }
    temp_v2 = 1;
    if (temp_v2 < temp_v7) {
      do {
        chosenId = uniteChooseAvailableDevilAtLevel((unsigned int)param_2, (unsigned int)param_3, baseRecord->id, temp_v2);
        if (chosenId != 0) {
          *param_4 = *param_4;
          param_4[1] = ((chosenId & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
          return 1;
        }
        temp_v2 = (temp_v2 + 1) & 0xff;
      } while (temp_v2 < temp_v7);
    }
  }
  temp_v6 = 0x19;
  temp_v2 = 0;
  do {
    candidateRecord = devilGetRecord((unsigned short)temp_v2);
    if ((candidateRecord->race == 0x33) && (temp_v1 = FUN_0029ea68(temp_v2 & 0xffff), temp_v1 != 0)) {
      temp_v6 = 10;
      break;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x4b1);
  temp_v3 = randNextInRange(99);
  temp_v2 = temp_v7;
  if (temp_v3 < temp_v6) {
    do {
      chosenId = demonFindClosestEligibleLevel(param_1,0x33,temp_v2,1);
      candidateRecord = devilGetRecord((unsigned short)chosenId);
      if (candidateRecord->id != baseRecord->id &&
          candidateRecord->id != (unsigned int)param_2 &&
          candidateRecord->id != (unsigned int)param_3 &&
          candidateRecord->level <= temp_v2) {
        temp_v1 = gameGetSlotTable();
        temp_v5 = 0;
        do {
          if (*(unsigned char *)(temp_v1 + temp_v5 + 0x90f0) < 0x18) {
            temp_v4 = gameGetSlotTable();
            temp_v4 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v5 + 0x90f0));
            if (*(unsigned short *)(temp_v4 + 0x46) == candidateRecord->id) break;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x18);
        if (temp_v5 == 0x18) {
          if (chosenId != 0) {
            *param_4 = *param_4;
            param_4[1] = ((chosenId & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
            return 1;
          }
          break;
        }
      }
      temp_v2 = (candidateRecord->level - 1) & 0xff;
    } while (*(unsigned short *)(*(int *)(param_1 + 0x82) + ((unsigned int)*(unsigned char *)((int)param_1 + 0x33) * 4 - 2))
             < temp_v2);
  }
  chosenId = uniteChooseAvailableDevilAtLevel((unsigned int)param_2, (unsigned int)param_3, baseRecord->id, temp_v7);
  if (chosenId == 0) {
    temp_v2 = 1;
    do {
      if (temp_v7 + temp_v2 <= levelBounds[7]) {
        chosenId = uniteChooseAvailableDevilAtLevel((unsigned int)param_2, (unsigned int)param_3,
                               (param_4[1] & 0x1ffff) >> 2, (temp_v2 + temp_v7) & 0xff);
        if (chosenId != 0) {
          *param_4 = *param_4;
          param_4[1] = ((chosenId & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
          return 1;
        }
        break;
      }
      temp_v2 = (temp_v2 + 1) & 0xffff;
    } while (temp_v2 < 6);
    if ((int)(temp_v7 - baseRecord->level) < 1) {
      return 0;
    }
    chosenId = uniteChooseAvailableDevilAtLevel((unsigned int)param_2, (unsigned int)param_3,
                           (param_4[1] & 0x1ffff) >> 2, (temp_v7 - 1) & 0xff);
    if (chosenId == 0) {
      return 0;
    }
  }
  *param_4 = *param_4;
  param_4[1] = ((chosenId & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
  return 1;
}

} /* extern "C" */
