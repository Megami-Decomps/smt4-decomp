/* NON_MATCHING: romwright 0.5.0 decompilation of `uiQuestDrawRowPlate` (_code @ 0x23dedc, 0x43c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int texDrawCompositeSprite(int, int, int, unsigned int, unsigned int, unsigned int);
int texDrawTableEntryAtStoredOrigin(...);
int questDataGetRecord(void);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: texDrawCompositeSprite. */
/* Supplied declaration required: texDrawTableEntryAtStoredOrigin. */
/* Supplied declaration required: questDataGetRecord. */
extern int questRecordIsUsable(void);
extern int recordIsAvailable(int);
extern int recordCategoryNineIsActiveInMode24(int);
extern int questGetRequirementProgress(int, int, int *);
extern int questIsCompleted(int);
extern int questHasNewMark(void);
extern int rosterGetLeaderId(void);


/* WARNING: Type propagation algorithm not settling */

unsigned int
uiQuestDrawRowPlate(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
            int param_6)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4 [3];
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v2 = 0xf5ff9fff;
  if ((param_6 == 0) && (temp_v2 = 0x9fe7ffff, param_5 == 0)) {
    temp_v2 = 0xffffffff;
  }
  temp_v5 = param_1;
  temp_v6 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    temp_v0 = questHasNewMark();
    if (temp_v0 != 0) {
      temp_v0 = rosterGetLeaderId();
      if (temp_v0 == 0) {
        texDrawCompositeSprite(2,0x1e,0xc,temp_v6,param_3,param_4);
        if (param_6 != 0) {
          return 0xf5ff9fff;
        }
        if (param_5 != 0) {
          return 0x9fe7ffff;
        }
        return 0x57d8ffff;
      }
      texDrawTableEntryAtStoredOrigin(2,0x1e,0x92);
    }
    else {
      temp_v0 = questIsCompleted(temp_v5);
      if (temp_v0 == 0) {
        return temp_v2;
      }
      texDrawTableEntryAtStoredOrigin(2,0x1e,0x93,temp_v6,param_3,param_4);
    }
  }
  else {
    questDataGetRecord();
    if (param_1 == 0) {
      return temp_v2;
    }
    if (*(char *)(param_1 + 6) != '\0') {
      if (*(char *)(param_1 + 6) != '\n') {
        temp_v0 = questRecordIsUsable();
        if (temp_v0 != 0) {
          temp_v0 = rosterGetLeaderId();
          if (temp_v0 == temp_v5) {
            texDrawCompositeSprite(2,0x1e,0xd,temp_v6,param_3,param_4);
            if (param_6 != 0) {
              return 0xf5ff9fff;
            }
            if (param_5 != 0) {
              return 0x9fe7ffff;
            }
            return 0x57d8ffff;
          }
          temp_v0 = questIsCompleted(temp_v5);
          if (temp_v0 == 0) {
            return temp_v2;
          }
          texDrawTableEntryAtStoredOrigin(2,0x1e,0x93,temp_v6,param_3,param_4);
          return temp_v2;
        }
        temp_v0 = recordCategoryNineIsActiveInMode24(temp_v5);
        if (temp_v0 != 0) {
          texDrawTableEntryAtStoredOrigin(2,0x1e,0x91,temp_v6,param_3,param_4);
        }
        else {
          temp_v0 = questIsCompleted(temp_v5);
          if (temp_v0 != 0) {
            texDrawTableEntryAtStoredOrigin(2,0x1e,0x93,temp_v6,param_3,param_4);
          }
          else {
            texDrawTableEntryAtStoredOrigin(2,0x1e,0x91,temp_v6,param_3,param_4);
          }
        }
      }
      else {
        temp_v0 = questIsCompleted(temp_v5);
        if (temp_v0 == 0) {
          return temp_v2;
        }
        texDrawTableEntryAtStoredOrigin(2,0x1e,0x93,temp_v6,param_3,param_4);
      }
    }
    else {
      temp_v0 = 0;
      temp_v3 = 1;
      do {
        temp_v1 = questGetRequirementProgress(temp_v5,temp_v0,temp_v4);
        if ((temp_v1 != 0) && ((temp_v1 = questIsCompleted(temp_v5), temp_v1 != 0 || (0 < temp_v4[0])))) {
          temp_v3 = 0;
          break;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
      temp_v0 = recordIsAvailable(temp_v5);
      if (temp_v0 == 0) {
        temp_v0 = questIsCompleted(temp_v5);
        if (temp_v0 == 0) {
          texDrawTableEntryAtStoredOrigin(2,0x1e,0xc2,temp_v6,param_3,param_4);
          return temp_v2;
        }
        texDrawTableEntryAtStoredOrigin(2,0x1e,0x93,temp_v6,param_3,param_4);
        return temp_v2;
      }
      if (temp_v3 != 0) {
        texDrawCompositeSprite(2,0x1e,0xe,temp_v6,param_3,param_4);
        return temp_v2;
      }
      temp_v0 = questIsCompleted(temp_v5);
      if (temp_v0 == 0) {
        return temp_v2;
      }
      texDrawTableEntryAtStoredOrigin(2,0x1e,0x93,temp_v6,param_3,param_4);
    }
  }
  if (param_6 != 0) {
    return 0xf5ff9fff;
  }
  if (param_5 != 0) {
    return 0x9fe7ffff;
  }
  return 0x9b9b9bff;
}

} /* extern "C" */
