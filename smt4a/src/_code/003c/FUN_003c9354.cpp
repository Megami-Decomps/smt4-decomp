/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9354` (_code @ 0x3c9354, 0x768 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int FUN_0023b45c(...);
int FUN_00284ee4(...);
int FUN_002c8550(...);
int FUN_0037e1b0(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int FUN_0019de98(...);
int FUN_0020b908(...);
int FUN_00228b04(int, int);
int uniteStartOrQueueRequest(int);
int resourceRunOperationIfUnblocked(...);
int scrollOwnerSetValue(int, int);
int FUN_002a4964(int, int);
int FUN_002a7b74(void);
int flaggedEntrySetValueA(int, int);
int arrayContainsU16(...);
int unitRecordBuild(...);
int FUN_003450d4(int, unsigned int, int, int);
int skillHelpUpdateAttributeAndTarget(...);
int screenStartOrClear(unsigned int, int);
int FUN_003b0558(void);

/* stack frame of param_3: 10 slot(s), 35 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned short sp15A; /* 0x15a: local_15a */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
} param_3_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned int asdTMTexTableEntryAt(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0020b908. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: uniteStartOrQueueRequest. */
extern int recordGetModeForId(int);
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4894(int);
/* Supplied declaration required: scrollOwnerSetValue. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002a7b74. */
extern unsigned int *objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_002c8550. */
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: arrayContainsU16. */
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_003450d4. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: skillHelpUpdateAttributeAndTarget. */
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: FUN_0037e1b0. */
/* Supplied declaration required: FUN_003b0558. */
extern int getUnlockedSlotCount(unsigned int *);


unsigned int FUN_003c9354(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 22 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  short *psVar10;
  int *piVar11;
  unsigned char *puVar12;
  unsigned char temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int *temp_v12;
  unsigned int uStack_15c;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int temp_v17;
  int iStack_30;
  int temp_v18;
  unsigned int *puStack_28;
  
  temp_v15 = 0;
  iStack_30 = param_1;
  temp_v18 = param_2;
  puStack_28 = param_3;
  temp_v3 = asdTMTexTableEntryAt(0x1a,0x1f6);
  temp_v11 = (int)*(short *)(param_1 + 0x474);
  temp_v13 = 1;
  temp_v12 = (unsigned int *)&temp_v18;
  uStack_15c = 0;
  temp_v10 = (int)*(short *)(param_1 + 0x472);
  temp_v4 = param_1 + 0x8e14;
  temp_v14 = temp_v4;
  FUN_003450d4(temp_v4,temp_v3,param_1 + 0x438,(int)*(short *)(param_1 + 0x476));
  piVar11 = (int *)(param_1 + 0x8e84);
  puVar12 = (unsigned char *)(param_1 + 0x8eac);
  if ((temp_v4 != 0) || (temp_v4 = temp_v14, FUN_00228b04(temp_v14,1), temp_v4 != 0)) {
    temp_v10 = FUN_002a4894(temp_v14);
    temp_v4 = resourceRunOperationIfUnblocked(temp_v14);
    temp_v5 = FUN_002a4894(temp_v14);
    temp_v4 = temp_v4 + temp_v5;
    temp_v5 = resourceRunOperationIfUnblocked(temp_v14);
    if ((*piVar11 >= 9) && ((char)temp_v18 == '\0')) {
      temp_v11 = recordGetModeForId((int)*(short *)(param_1 + *(short *)(param_1 + 0x8e88) * 2 + 0x438));
      temp_v6 = recordGetModeForId((int)*(short *)(param_1 + 0x446));
      temp_v12 = (unsigned int *)objectApplyIfUnblocked(temp_v14);
      temp_v1 = *(char *)(param_1 + 0x8eac);
      *puVar12 = 0;
      if (temp_v11 != 0) {
        temp_v5 = uiSearchPrimary(temp_v14);
        flaggedEntrySetValueA(temp_v14,temp_v5 - 1);
        *puVar12 = 1;
      }
      else if (temp_v6 == 0) {
        if (temp_v1 != '\0') {
          temp_v6 = 6;
          FUN_001517b4(6,1);
          if (temp_v6 != 0) {
            if (temp_v5 < 2) {
              FUN_002a4964(temp_v14,0);
            }
            else {
              scrollOwnerSetValue(temp_v14,temp_v5 - 2);
              flaggedEntrySetValueA(temp_v14,1);
            }
            if ((temp_v4 >= *piVar11) || (*(char *)(param_1 + 0x8eac) != '\0')) {
              screenStartOrClear(*(unsigned int *)(param_1 + 0x424),0x1a);
            }
            else {
              skillHelpUpdateAttributeAndTarget(*(unsigned short *)(param_1 + temp_v4 * 2 + 0x8b70));
            }
            return temp_v15;
          }
        }
        if ((temp_v10 >= 7) && (temp_v4 < (int)temp_v12 - 2)) {
          temp_v5 = resourceRunOperationIfUnblocked(temp_v14);
          flaggedEntrySetValueA(temp_v14,temp_v10 - 1);
          scrollOwnerSetValue(temp_v14,temp_v5 + 1);
        }
      }
    }
    if ((temp_v4 >= *piVar11) || (*(char *)(param_1 + 0x8eac) != '\0')) {
      screenStartOrClear(*(unsigned int *)(param_1 + 0x424),0x1a);
    }
    else {
      skillHelpUpdateAttributeAndTarget(*(unsigned short *)(param_1 + temp_v4 * 2 + 0x8b70));
    }
    return temp_v15;
  }
  temp_v4 = 0;
  FUN_001517b4(0,1);
  temp_v16 = param_1 + 0x8b60;
  if (temp_v4 != 0 || (char)temp_v18 != '\0') {
    temp_v4 = resourceRunOperationIfUnblocked(temp_v14);
    temp_v5 = FUN_002a4894(temp_v14);
    temp_v4 = temp_v4 + temp_v5;
    if ((*piVar11 <= temp_v4) || (*(char *)(param_1 + 0x8eac) != '\0')) {
      temp_v4 = 0;
      do {
        if (*(short *)(param_1 + temp_v4 * 2 + 0x8b60) != 0) {
          temp_v3 = *(unsigned int *)(param_1 + 0x8b60);
          uStack_15c = *(unsigned int *)(param_1 + 0x8b6c);
          temp_v11 = *(unsigned int *)(param_1 + 0x8b64);
          temp_v12 = (unsigned int *)*(unsigned int *)(param_1 + 0x8b68);
          *(unsigned int *)(param_1 + 0x8b60) = 0;
          *(unsigned int *)(param_1 + 0x8b64) = 0;
          *(unsigned int *)(param_1 + 0x8b68) = 0;
          *(unsigned int *)(param_1 + 0x8b6c) = 0;
          (*(unsigned short *)((unsigned char *)&temp_v10 + 0)) = (short)temp_v3;
          if ((short)temp_v10 != 0) {
            *(short *)(param_1 + 0x8b60) = (short)temp_v10;
          }
          temp_v7 = (unsigned int)((short)temp_v10 != 0);
          temp_v4 = 3;
          (*(unsigned short *)((unsigned char *)&temp_v10 + 2)) = (short)((unsigned int)temp_v3 >> 0x10);
          psVar10 = (short *)&temp_v10;
          do {
            temp_v0 = psVar10[2];
            if ((*(unsigned short *)((unsigned char *)&temp_v10 + 2)) != 0) {
              temp_v5 = temp_v7 * 2;
              temp_v7 = temp_v7 + 1;
              *(short *)(param_1 + temp_v5 + 0x8b60) = (*(unsigned short *)((unsigned char *)&temp_v10 + 2));
            }
            (*(unsigned short *)((unsigned char *)&temp_v10 + 2)) = psVar10[3];
            if (temp_v0 != 0) {
              temp_v5 = temp_v7 * 2;
              temp_v7 = temp_v7 + 1;
              *(short *)(param_1 + temp_v5 + 0x8b60) = temp_v0;
            }
            temp_v4 = temp_v4 - 1;
            psVar10 = psVar10 + 2;
          } while (temp_v4 != 0);
          (*(unsigned short *)((unsigned char *)&uStack_15c + 2)) = (short)((unsigned int)uStack_15c >> 0x10);
          if ((*(unsigned short *)((unsigned char *)&uStack_15c + 2)) != 0) {
            *(short *)(param_1 + temp_v7 * 2 + 0x8b60) = (*(unsigned short *)((unsigned char *)&uStack_15c + 2));
          }
          *puVar12 = 0;
          return 1;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      FUN_002a7b74();
      uniteStartOrQueueRequest(0xe);
      eventQueueAddUniqueIfValid(0x100020f);
      return temp_v15;
    }
    temp_v5 = temp_v16;
    arrayContainsU16(temp_v16,8,*(unsigned short *)(param_1 + temp_v4 * 2 + 0x8b70));
    if (temp_v5 != 0) {
      FUN_0020b908(0x11,0);
      eventQueueAddUniqueIfValid(0x100020f);
      return temp_v15;
    }
    if (temp_v4 < *(int *)(param_1 + 0x8e80)) {
      eventQueueAddUniqueIfValid(0x100020e);
      *(unsigned char *)(param_1 + 0x8e8a) = 0;
      temp_v4 = resourceRunOperationIfUnblocked();
      temp_v5 = FUN_002a4894(param_1 + 0x8db0);
      if (*(short *)(param_1 + (temp_v5 + temp_v4) * 2 + 0x8b60) != 0) {
        skillHelpUpdateAttributeAndTarget();
        return temp_v15;
      }
      FUN_0019de98(0,0xf4f4f4ff);
      return temp_v15;
    }
  }
  else {
    temp_v4 = 9;
    FUN_001517b4(9,1);
    piVar11 = (int *)(param_1 + 0x8e7c);
    if (temp_v4 != 0) {
      eventQueueAddUniqueIfValid(0x100020e);
      temp_v17 = param_1 + 0x67cc;
      temp_v4 = 0;
      do {
        temp_v5 = param_1 + temp_v4 * 2;
        if ((*(short *)(temp_v5 + 0x8b70) != 0) &&
           (temp_v6 = temp_v16, arrayContainsU16(temp_v16,8), temp_v6 == 0)) {
          if (*(int *)(param_1 + 0x8e80) <= temp_v4) {
            return temp_v15;
          }
          if (*(int *)(param_1 + 0x404) == 0x1e) {
            temp_v7 = 0;
            *param_3 = 0;
          }
          else {
            temp_v6 = resourceRunOperationIfUnblocked(temp_v17);
            temp_v8 = FUN_002a4894(temp_v17);
            temp_v7 = (unsigned int)*(unsigned short *)(param_1 + (temp_v8 + temp_v6) * 2 + 0x6832);
            *param_3 = temp_v7;
          }
          unitRecordBuild((*(unsigned int *)(param_1 + temp_v7 * 8 + 0x13bc) & 0x1ffff) >> 2,&temp_v10);
          temp_v6 = getUnlockedSlotCount((unsigned int *)&temp_v10);
          temp_v8 = 0;
          if (temp_v8 < temp_v6) {
            do {
              if (*(short *)(param_1 + temp_v8 * 2 + 0x8b60) == 0) {
                *(unsigned short *)(param_1 + temp_v8 * 2 + 0x8b60) = *(unsigned short *)(temp_v5 + 0x8b70);
                *(int *)(param_1 + *piVar11 * 4 + 0x8e8c) = temp_v8;
                *piVar11 = *piVar11 + 1;
                break;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < temp_v6);
          }
        }
        temp_v4 = temp_v4 + 1;
        if (temp_v4 >= 0x18) {
          return temp_v15;
        }
      } while( 1 );
    }
    temp_v4 = 10;
    FUN_001517b4(10,1);
    if (temp_v4 != 0) {
      return temp_v15;
    }
    temp_v4 = 1;
    FUN_001517b4();
    if (temp_v4 == 0) {
      return temp_v15;
    }
    if (0 >= *piVar11) {
      temp_v4 = *(int *)(param_1 + 0x404);
      temp_v2 = 0;
      if (temp_v4 != 0x1c) {
        if (temp_v4 != 2) {
          if (temp_v4 != 0x1e) {
            temp_v4 = 0xd;
            *(int *)(param_1 + 0x40c) = temp_v4;
          }
          else {
            *(unsigned int *)(param_1 + 0x40c) = 0x1e;
            FUN_003b0558();
            FUN_0023b45c(0);
            FUN_00284ee4(1);
            temp_v2 = 1;
            *(unsigned char *)(param_1 + 0x6830) = 2;
          }
        }
        else {
          *(unsigned int *)(param_1 + 0x40c) = 2;
          *(unsigned char *)(param_1 + 0x9071) = 0;
        }
      }
      else {
        *(int *)(param_1 + 0x40c) = temp_v4;
      }
      FUN_0020b908(0x24,1);
      temp_v4 = 0;
      do {
        temp_v5 = param_1 + temp_v4 * 2;
        if (-1 < *(short *)(temp_v5 + 0x438)) {
          *(unsigned short *)(temp_v5 + 0x438) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      temp_v4 = 0;
      do {
        temp_v5 = param_1 + temp_v4 * 2;
        if (-1 < *(short *)(temp_v5 + 0x478)) {
          *(unsigned short *)(temp_v5 + 0x478) = 0xffff;
          ifTouchRegionRemove();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      *(unsigned short *)(param_1 + 0x476) = 0xffff;
      *(unsigned short *)(param_1 + 0x472) = 0xffff;
      *(unsigned short *)(param_1 + 0x474) = 0xffff;
      ifTouchRegionRemove();
      ifTouchRegionRemove();
      ifTouchRegionRemove();
      temp_v4 = *(int *)(param_1 + 0x40c);
      temp_v9 = temp_v4 == 0x1e;
      if (temp_v9) {
        temp_v4 = 0;
      }
      if (!temp_v9) {
        temp_v4 = 1;
      }
      FUN_0037e1b0((int)*(char *)(param_1 + 0x6830),temp_v4);
      FUN_002c8550(1);
      if (!temp_v2) {
        FUN_0019de98(0,0xf4f4f4ff);
      }
    }
    else {
      FUN_0020b908(0x12,0);
    }
  }
  eventQueueAddUniqueIfValid(0x100020f);
  return temp_v15;
}

} /* extern "C" */
