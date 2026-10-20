/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db914` (_code @ 0x4db914, 0x350 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_0023e32c(...);
int dataTable5GetEntries(void);
int FUN_004dc214(unsigned short *, int, unsigned int, int);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int randRange(unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern int slotRecordFindById(unsigned int);
extern int gameGetSlotRecord(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_0023e32c. */
extern int FUN_002a4b28(unsigned int);
/* Supplied declaration required: dataTable5GetEntries. */
extern int FUN_003a8298(void);
/* Supplied declaration required: FUN_004dc214. */
extern int FUN_004dc3b4(unsigned short *, unsigned short *, unsigned short *, unsigned int *);


unsigned int FUN_004db914(unsigned short *param_1,unsigned short *param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned short *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar9;
  unsigned short *puVar10;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned short temp_v9;
  unsigned short *puVar16;
  unsigned char temp_v10;
  
  temp_v0 = 0;
  dataTable5GetEntries();
  temp_v1 = FUN_004dc3b4(param_1,param_2,param_3,param_4);
  if (temp_v1 == 0) {
    return 0;
  }
  puVar16 = (unsigned short *)0x0;
  puVar5 = (unsigned short *)((param_4[1] & 0x1ffff) >> 2);
  FUN_00184310();
  temp_v1 = FUN_003a8298();
  temp_v9 = temp_v1 + (unsigned int)puVar5[3];
  temp_v2 = randRange(99);
  if (temp_v2 < 5) {
    temp_v1 = slotRecordFindById(0x218);
    if (temp_v1 == 0) {
      puVar16 = (unsigned short *)0x218;
      *param_4 = *param_4;
      param_4[1] = (((unsigned int)puVar16 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
      return 1;
    }
    temp_v2 = 1;
    if (temp_v2 < temp_v9) {
      do {
        puVar16 = param_2;
        FUN_0023e32c(param_2,param_3,*puVar5,temp_v2);
        if (puVar16 != (unsigned short *)0x0) {
          *param_4 = *param_4;
          param_4[1] = (((unsigned int)puVar16 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
          return 1;
        }
        temp_v2 = (temp_v2 + 1) & 0xffff;
      } while (temp_v2 < temp_v9);
    }
  }
  temp_v8 = 0x19;
  temp_v2 = 0;
  do {
    temp_v3 = temp_v2 & 0xffff;
    FUN_00184310();
    if ((*(char *)(temp_v3 + 2) == '3') && (temp_v1 = FUN_002a4b28(temp_v2 & 0xffff), temp_v1 != 0)) {
      temp_v8 = 10;
      break;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x4b1);
  temp_v2 = temp_v8 + 0x19;
  temp_v3 = 0;
  do {
    temp_v4 = temp_v3 & 0xffff;
    FUN_00184310();
    if ((*(char *)(temp_v4 + 2) == '*') && (temp_v1 = FUN_002a4b28(temp_v3 & 0xffff), temp_v1 != 0)) {
      temp_v2 = temp_v8 + 10;
      break;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x4b1);
  temp_v4 = randRange(99);
  temp_v3 = temp_v9;
  if (temp_v4 < temp_v8) {
    temp_v1 = 0x33;
LAB_004dba94:
    do {
      puVar16 = param_1;
      FUN_004dc214(param_1,temp_v1,temp_v3,1);
      puVar9 = puVar16;
      FUN_00184310();
      puVar10 = (unsigned short *)(unsigned int)*puVar9;
      temp_v10 = puVar10 != (unsigned short *)(unsigned int)*puVar5;
      puVar1 = (unsigned short *)(unsigned int)*puVar5;
      if (temp_v10) {
        puVar1 = param_2;
      }
      puVar2 = puVar1;
      if (temp_v10 && puVar10 != puVar1) {
        puVar2 = param_3;
      }
      if (((temp_v10 && puVar10 != puVar1) && puVar10 != puVar2) && (puVar9[3] <= temp_v3)) {
        temp_v5 = gameGetSlotTable();
        temp_v7 = 0;
        do {
          if (*(unsigned char *)(temp_v5 + temp_v7 + 0x1c88) < 0x18) {
            temp_v6 = gameGetSlotTable();
            temp_v6 = gameGetSlotRecord((int)*(char *)(temp_v6 + temp_v7 + 0x1c88));
            if (*(unsigned short *)(temp_v6 + 0x62) == *puVar9) break;
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 0x18);
        if (temp_v7 == 0x18) {
          if (puVar16 != (unsigned short *)0x0) {
            *param_4 = *param_4;
            param_4[1] = (((unsigned int)puVar16 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
            return 1;
          }
          break;
        }
      }
      temp_v3 = (puVar9[3] - 1) & 0xffff;
    } while (*(unsigned short *)
              (*(int *)(param_1 + temp_v1 * 2 + 0x22) +
              ((unsigned int)*(unsigned char *)((int)param_1 + temp_v1) * 4 - 2)) < temp_v3);
  }
  else {
    if (temp_v4 < temp_v2) {
      temp_v1 = 0x2a;
      goto LAB_004dba94;
    }
    if (puVar16 != (unsigned short *)0x0) {
      *param_4 = *param_4;
      param_4[1] = (((unsigned int)puVar16 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
      return 1;
    }
  }
  puVar16 = param_2;
  FUN_0023e32c(param_2,param_3,*puVar5,temp_v9);
  if (puVar16 == (unsigned short *)0x0) {
    temp_v2 = 1;
    do {
      if (temp_v9 + temp_v2 <= (unsigned int)*(unsigned char *)(temp_v0 + 7)) {
        puVar16 = param_2;
        FUN_0023e32c(param_2,param_3,(param_4[1] & 0x1ffff) >> 2,(temp_v2 + temp_v9) & 0xffff);
        if (puVar16 != (unsigned short *)0x0) {
          *param_4 = *param_4;
          param_4[1] = (((unsigned int)puVar16 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
          return 1;
        }
        break;
      }
      temp_v2 = (temp_v2 + 1) & 0xffff;
    } while (temp_v2 < 6);
    if ((int)(temp_v9 - puVar5[3]) < 1) {
      return 0;
    }
    FUN_0023e32c(param_2,param_3,(param_4[1] & 0x1ffff) >> 2,(temp_v9 - 1) & 0xffff);
    puVar16 = param_2;
    if (param_2 == (unsigned short *)0x0) {
      return 0;
    }
  }
  *param_4 = *param_4;
  param_4[1] = (((unsigned int)puVar16 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
  return 1;
}

} /* extern "C" */
