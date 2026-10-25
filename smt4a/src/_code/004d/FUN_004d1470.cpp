/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d1470` (_code @ 0x4d1470, 0x680 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listBoxItemHasOwner(unsigned int);
int FUN_003e83b4(...);
int bitsAt60Set(int, unsigned int);
int bitsAt60Clear(...);
int FUN_004fcffc(...);
int FUN_004fdb18(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571618; /* 0x571618 */
extern unsigned int DAT_0057161c; /* 0x57161c */

extern int slotIsActive(unsigned int, unsigned int);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern unsigned int *asdListBoxGetIntValuePtr(unsigned int);
/* Supplied declaration required: listBoxItemHasOwner. */
extern unsigned int asdListBoxGetSelectedItemId(unsigned int);
/* Supplied declaration required: FUN_003e83b4. */
extern int FUN_004bd0d8(void);
/* Supplied declaration required: bitsAt60Set. */
/* Supplied declaration required: bitsAt60Clear. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fdb18. */


void FUN_004d1470(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  temp_v3 = asdListBoxGetSelectedItemId(*(unsigned int *)(param_1 + 0x10));
  temp_v8 = 0;
  switch(temp_v3) {
  case 0:
    puVar5 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x1c) = *puVar5;
    return;
  case 1:
    temp_v2 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned char *)(param_1 + 0x14) = temp_v2;
    return;
  case 2:
    temp_v2 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned char *)(param_1 + 0x15) = temp_v2;
    return;
  case 3:
    temp_v2 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned char *)(param_1 + 0x16) = temp_v2;
    return;
  case 4:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x10;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xffffffef;
    }
    break;
  case 5:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 2;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xfffffffd;
    }
    break;
  case 6:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x20;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xffffffdf;
    }
    break;
  case 7:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x40;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xffffffbf;
    }
    break;
  case 8:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x80;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xffffff7f;
    }
    break;
  case 9:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x100;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xfffffeff;
    }
    break;
  case 10:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x200;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xfffffdff;
    }
    break;
  case 0xb:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x400;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xfffffbff;
    }
    break;
  case 0xc:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 8;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xfffffff7;
    }
    break;
  case 0xd:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x800;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xfffff7ff;
    }
    break;
  case 0xe:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x1000;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xffffefff;
    }
    break;
  case 0xf:
    temp_v8 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v8 != 0) {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) | 0x2000;
    }
    else {
      temp_v7 = *(unsigned int *)(param_1 + 0x18) & 0xffffdfff;
    }
    break;
  case 0x10:
    temp_v4 = slotIsActive(0,temp_v3);
    if (temp_v4 == 0) {
      return;
    }
    temp_v0 = *(char *)(param_1 + 0x14);
    temp_v9 = temp_v0 == '\0';
    if (temp_v9) {
      temp_v0 = *(char *)(param_1 + 0x15);
    }
    if (!temp_v9 || temp_v0 != '\0') {
      do {
        puVar7 = (unsigned int *)FUN_003e83b4(param_2,temp_v8,1);
        if (((puVar7 != (unsigned int *)0x0) &&
            ((*(char *)(param_1 + 0x14) == '\0' ||
             ((DAT_0057161c & puVar7[1]) == 0 && (DAT_00571618 & *puVar7) == 0)))) &&
           ((*(char *)(param_1 + 0x15) == '\0' ||
            ((DAT_0057161c & puVar7[1]) != 0 || (*puVar7 & DAT_00571618) != 0)))) {
          temp_v4 = 0;
          do {
            temp_v5 = (int)*(short *)((int)puVar7 + temp_v4 * 2 + 8);
            if (-1 < temp_v5) {
              temp_v6 = *(int *)(param_2 + 0x1ed4);
              temp_v3 = btlUnitGet(g_btlScriptUnit);
              FUN_004fdb18(0,temp_v3,temp_v6 + temp_v5 * 0x1d0,*(unsigned int *)(param_1 + 0x18),1);
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x32);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x6d);
    }
    if (*(char *)(param_1 + 0x16) != '\0') {
      temp_v8 = gameGetSlotTable();
      temp_v4 = 0;
      temp_v1 = *(unsigned char *)(temp_v8 + 0x1ca3);
      if (temp_v1 != 0) {
        do {
          temp_v8 = gameGetSlotTable();
          if (((-1 < *(char *)(temp_v8 + temp_v4 + 0x1c88)) && (temp_v8 = gameGetSlotRecord(), temp_v8 != 0))
             && (temp_v5 = FUN_004bd0d8(), temp_v5 == 0)) {
            temp_v7 = 0;
            do {
              if ((*(unsigned int *)(param_1 + 0x18) & (1 << (temp_v7 & 0xff))) != 0) {
                bitsAt60Set(temp_v8,temp_v7);
              }
              temp_v7 = temp_v7 + 1;
            } while ((int)temp_v7 < 0xe);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)(unsigned int)temp_v1);
      }
    }
    temp_v0 = *(char *)(param_1 + 0x14);
    temp_v9 = temp_v0 == '\0';
    if (temp_v9) {
      temp_v0 = *(char *)(param_1 + 0x15);
    }
    if (!temp_v9 || temp_v0 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x1c) < 0) {
      return;
    }
    temp_v8 = FUN_003e83b4(param_2,*(int *)(param_1 + 0x1c),1);
    if (temp_v8 == 0) {
      return;
    }
    temp_v4 = 0;
    do {
      temp_v5 = (int)*(short *)(temp_v8 + temp_v4 * 2 + 8);
      if (-1 < temp_v5) {
        temp_v6 = *(int *)(param_2 + 0x1ed4);
        temp_v3 = btlUnitGet(g_btlScriptUnit);
        FUN_004fdb18(0,temp_v3,temp_v6 + temp_v5 * 0x1d0,*(unsigned int *)(param_1 + 0x18),1);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x32);
    return;
  case 0x11:
    temp_v4 = slotIsActive(0,temp_v3);
    if (temp_v4 != 0) {
      temp_v0 = *(char *)(param_1 + 0x14);
      temp_v9 = temp_v0 == '\0';
      if (temp_v9) {
        temp_v0 = *(char *)(param_1 + 0x15);
      }
      if (!temp_v9 || temp_v0 != '\0') {
        do {
          puVar7 = (unsigned int *)FUN_003e83b4(param_2,temp_v8,1);
          if (((puVar7 != (unsigned int *)0x0) &&
              ((*(char *)(param_1 + 0x14) == '\0' ||
               ((*puVar7 & DAT_00571618) == 0 && (puVar7[1] & DAT_0057161c) == 0)))) &&
             ((*(char *)(param_1 + 0x15) == '\0' ||
              ((puVar7[1] & DAT_0057161c) != 0 || (DAT_00571618 & *puVar7) != 0)))) {
            temp_v4 = 0;
            do {
              temp_v5 = (int)*(short *)((int)puVar7 + temp_v4 * 2 + 8);
              if (-1 < temp_v5) {
                temp_v6 = *(int *)(param_2 + 0x1ed4);
                temp_v3 = btlUnitGet(g_btlScriptUnit);
                FUN_004fcffc(0,temp_v3,temp_v6 + temp_v5 * 0x1d0,*(unsigned int *)(param_1 + 0x18));
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 0x32);
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 0x6d);
      }
      if (*(char *)(param_1 + 0x16) != '\0') {
        temp_v8 = gameGetSlotTable();
        temp_v4 = 0;
        temp_v1 = *(unsigned char *)(temp_v8 + 0x1ca3);
        if (temp_v1 != 0) {
          do {
            temp_v8 = gameGetSlotTable();
            if (((-1 < *(char *)(temp_v8 + temp_v4 + 0x1c88)) && (temp_v8 = gameGetSlotRecord(), temp_v8 != 0)
                ) && (temp_v5 = FUN_004bd0d8(), temp_v5 == 0)) {
              bitsAt60Clear(temp_v8,*(unsigned int *)(param_1 + 0x18) & 0xffff);
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < (int)(unsigned int)temp_v1);
        }
      }
      temp_v0 = *(char *)(param_1 + 0x14);
      temp_v9 = temp_v0 == '\0';
      if (temp_v9) {
        temp_v0 = *(char *)(param_1 + 0x15);
      }
      if (((temp_v9 && temp_v0 == '\0') && (-1 < *(int *)(param_1 + 0x1c))) &&
         (temp_v8 = FUN_003e83b4(param_2,*(int *)(param_1 + 0x1c),1), temp_v8 != 0)) {
        temp_v4 = 0;
        do {
          temp_v5 = (int)*(short *)(temp_v8 + temp_v4 * 2 + 8);
          if (-1 < temp_v5) {
            temp_v6 = *(int *)(param_2 + 0x1ed4);
            temp_v3 = btlUnitGet(g_btlScriptUnit);
            FUN_004fcffc(0,temp_v3,temp_v6 + temp_v5 * 0x1d0,*(unsigned int *)(param_1 + 0x18));
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x32);
        return;
      }
    }
  default:
    return;
  }
  *(unsigned int *)(param_1 + 0x18) = temp_v7;
  return;
}

} /* extern "C" */
