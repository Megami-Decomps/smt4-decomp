/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c17dc` (_code @ 0x2c17dc, 0x498 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rangeInit(...);
int FUN_00237da0(...);
int FUN_00238e20(unsigned int, unsigned char [288], unsigned char [496], unsigned int *, unsigned int *, int, int, int);
int FUN_00238f08(unsigned int, unsigned char [288], unsigned char [496], unsigned int *, unsigned int *, int, int, int);
int nodeTreeReleaseItemClearOwner(...);
int nodeGroupRelease(...);
int nodeGroupReleaseAlt(...);
int nodeTreeReleaseItem(...);
int FUN_002a39a4(...);
int FUN_002e5154(...);
int FUN_0035bc4c(...);
int keyedGetEntryValue(...);
int __aeabi_memcpy4(unsigned char [32], int, int);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp238; /* 0x238: local_238 */
    unsigned int sp38C; /* 0x38c: local_38c */
    unsigned int sp390; /* 0x390: local_390 */
} param_1_stack;

/* Supplied declaration required: rangeInit. */
extern unsigned int eventCommandGetPendingCleanup(void);
/* Supplied declaration required: FUN_00237da0. */
/* Supplied declaration required: FUN_00238e20. */
/* Supplied declaration required: FUN_00238f08. */
extern int keyedRecordCountGet(void);
/* Supplied declaration required: nodeTreeReleaseItemClearOwner. */
/* Supplied declaration required: nodeGroupRelease. */
/* Supplied declaration required: nodeGroupReleaseAlt. */
/* Supplied declaration required: nodeTreeReleaseItem. */
/* Supplied declaration required: FUN_002a39a4. */
/* Supplied declaration required: FUN_002e5154. */
extern int FUN_00330ad4(unsigned char, unsigned int);
/* Supplied declaration required: FUN_0035bc4c. */
extern int keyedRecordGetEntryValue(unsigned char, int);
extern int keyedRecordGetKey(void);
extern int keyedRecordGetValue(unsigned char);
/* Supplied declaration required: keyedGetEntryValue. */
extern unsigned long long *FUN_003c0d64(unsigned char, int);
extern int FUN_003c5db4(unsigned char, int);
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_002c17dc(unsigned int *param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [32];
  unsigned char temp_v9 [288];
  unsigned int temp_v10;
  unsigned int uStack_234;
  unsigned int uStack_230;
  unsigned char temp_v11 [496];
  char temp_v12;
  
  temp_v2 = 0;
  if ((int)param_1[1] <= (int)param_1[2]) {
    temp_v0 = keyedRecordCountGet();
    if (-1 < (int)((temp_v0 - (unsigned int)*(unsigned char *)(param_1 + 0xc)) - 1)) {
      temp_v0 = keyedRecordGetKey();
      temp_v1 = keyedRecordGetValue(*(unsigned char *)(param_1 + 0xc));
      if (0 < temp_v1) {
        do {
          temp_v1 = FUN_003c5db4(*(unsigned char *)(param_1 + 0xc),temp_v2);
          if (temp_v1 == param_1[1]) {
            temp_v1 = keyedGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
            __aeabi_memcpy4(temp_v8,temp_v0 + temp_v1 * 0x348,0x348);
            temp_v1 = keyedGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
            temp_v3 = temp_v0 + temp_v1 * 0x348 + 0x204;
            puVar3 = (unsigned long long *)FUN_003c0d64(*(unsigned char *)(param_1 + 0xc),temp_v2);
            temp_v5 = *puVar3;
            temp_v7 = *(unsigned int *)(puVar3 + 1);
            temp_v1 = keyedRecordGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
            if (temp_v1 < 1) {
              temp_v1 = 1;
            }
            temp_v4 = (unsigned int)temp_v5;
            temp_v6 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
            if (temp_v12 != '\0') {
              if (temp_v12 != '\x01') {
                if (temp_v12 != '\x02') {
                  if ((temp_v12 == '\x03') && ((int)param_1[6] < 0x10)) {
                    temp_v10 = temp_v4;
                    uStack_234 = temp_v6;
                    uStack_230 = temp_v7;
                    FUN_0035bc4c(temp_v8);
                    temp_v7 = keyedGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
                    FUN_00238f08(temp_v7,temp_v9,temp_v11,param_1 + 0xd,
                                 param_1 + param_1[6] + 0x44,*(unsigned char *)(param_1 + 0x54),temp_v1,
                                 temp_v3);
                    param_1[param_1[6] + 0x44] = temp_v7;
                    param_1[6] = param_1[6] + 1;
                  }
                }
                else if ((int)param_1[5] < 0x10) {
                  temp_v10 = temp_v4;
                  uStack_234 = temp_v6;
                  uStack_230 = temp_v7;
                  FUN_0035bc4c(temp_v8);
                  temp_v7 = keyedGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
                  FUN_00238e20(temp_v7,temp_v9,temp_v11,param_1 + 0xd,
                               param_1 + param_1[5] + 0x34,*(unsigned char *)(param_1 + 0x54),temp_v1,
                               temp_v3);
                  param_1[param_1[5] + 0x34] = temp_v7;
                  param_1[5] = param_1[5] + 1;
                }
              }
              else if ((int)param_1[4] < 0x10) {
                temp_v10 = temp_v4;
                uStack_234 = temp_v6;
                uStack_230 = temp_v7;
                FUN_0035bc4c(temp_v8);
                temp_v7 = keyedGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
                FUN_002a39a4(temp_v7,temp_v9,temp_v11,param_1 + 0xd,param_1 + param_1[4] + 0x24
                             ,*(unsigned char *)(param_1 + 0x54),temp_v1,temp_v3);
                param_1[param_1[4] + 0x24] = temp_v7;
                param_1[4] = param_1[4] + 1;
              }
            }
            else if ((int)param_1[3] < 0x10) {
              temp_v10 = temp_v4;
              uStack_234 = temp_v6;
              uStack_230 = temp_v7;
              FUN_0035bc4c(temp_v8);
              temp_v7 = keyedGetEntryValue(*(unsigned char *)(param_1 + 0xc),temp_v2);
              FUN_00237da0(temp_v7,temp_v9,temp_v11,0,param_1 + 0xd,param_1 + param_1[3] + 0x14
                           ,param_1[3] & 0xff,*(unsigned char *)(param_1 + 0x54),temp_v1,temp_v3);
              param_1[param_1[3] + 0x14] = temp_v7;
              param_1[3] = param_1[3] + 1;
            }
          }
          temp_v2 = temp_v2 + 1;
          temp_v1 = keyedRecordGetValue(*(unsigned char *)(param_1 + 0xc));
        } while (temp_v2 < temp_v1);
      }
    }
    temp_v2 = FUN_00330ad4(*(unsigned char *)(param_1 + 0xc),param_1[1]);
    if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 8) & 0xfc0) != 0)) {
      temp_v7 = eventCommandGetPendingCleanup();
      rangeInit(temp_v7,*(unsigned char *)(temp_v2 + 0x14),0);
    }
    param_1[1] = param_1[1] + 1;
    return;
  }
  temp_v2 = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (0 < (int)param_1[3]) {
      do {
        nodeTreeReleaseItemClearOwner(param_1[temp_v2 + 0x14]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[3]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[4]) {
      do {
        FUN_002e5154(param_1[temp_v2 + 0x24]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[4]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[6]) {
      do {
        nodeGroupReleaseAlt(param_1[temp_v2 + 0x44]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[6]);
    }
    temp_v2 = 0;
    if (temp_v2 < (int)param_1[5]) {
      do {
        nodeGroupRelease(param_1[temp_v2 + 0x34]);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_1[5]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[1] = 0;
    if ((unsigned int *)*param_1 != (unsigned int *)0x0) {
      *(unsigned int *)*param_1 = 0;
    }
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  nodeTreeReleaseItem(param_1);
  return;
}

} /* extern "C" */
