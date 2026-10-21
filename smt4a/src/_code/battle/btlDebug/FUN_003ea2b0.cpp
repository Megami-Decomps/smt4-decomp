/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea2b0` (_code @ 0x3ea2b0, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable00FindById(void);
int aocHandleButtons(unsigned int, int);
int FUN_003fce8c(unsigned int, int);
int FUN_004cae0c(int, int, int);
int FUN_004cb90c(int);
int FUN_004f9450(void);
int FUN_004fd204(int, unsigned int, int, int, int, int);
int FUN_004fe764(int, unsigned int, int, unsigned int, int);
int SBORROW4(unsigned int, int);
int SCARRY4(int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern int g_btlCamera; /* 0x571508 */
extern int g_btlAux; /* 0x573808 */
extern int g_btlMain; /* 0x573920 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739b8; /* 0x5739b8 */
extern unsigned int DAT_005739bc; /* 0x5739bc */
extern unsigned int DAT_0057a638; /* 0x57a638 */
extern unsigned int DAT_0057a63c; /* 0x57a63c */
extern unsigned int DAT_0057a64c; /* 0x57a64c */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int stateEntryFindById(int, unsigned int);
/* Supplied declaration required: aocHandleButtons. */
extern int FUN_003fce08(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003fce8c. */
extern int nkdwLoaderParse(unsigned int);
extern unsigned int FUN_00409fe8(int, unsigned int);
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004cb90c. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004f9450. */
/* Supplied declaration required: FUN_004fd204. */
/* Supplied declaration required: FUN_004fe764. */


unsigned int FUN_003ea2b0(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  int temp_v8;
  int *piVar11;
  unsigned char *pbVar12;
  unsigned char temp_v9;
  char temp_v10;
  unsigned int temp_v11;
  
  if (*(int *)(param_1 + 0x4554) != -1) {
    temp_v4 = 1;
  }
  else {
    param_2 = param_2 & 0xffff;
    dataTable00FindById();
    pbVar12 = (unsigned char *)(param_1 + 0x4550);
    temp_v5 = (unsigned int)*pbVar12;
    if (temp_v5 != 0) {
      temp_v10 = SBORROW4(temp_v5,1);
      if (temp_v5 == 1) {
        temp_v4 = stateEntryFindById(param_1,*(unsigned int *)(param_1 + 0x2020));
        if ((*(unsigned int *)(param_1 + 0x201c) & 1) == 0) {
          temp_v6 = nkdwLoaderParse(temp_v4);
          temp_v10 = '\0';
          if (temp_v6 == 0) {
            return 0;
          }
          *(unsigned int *)(param_1 + 0x201c) = *(unsigned int *)(param_1 + 0x201c) | 1;
          aocHandleButtons(temp_v4,7);
        }
        if ((*(unsigned int *)(param_1 + 0x201c) & 2) == 0) {
          temp_v6 = FUN_003fce08(temp_v4,1);
          temp_v10 = '\0';
          if (temp_v6 == 0) {
            return 0;
          }
          FUN_003fce8c(temp_v4,1);
          *(unsigned int *)(param_1 + 0x201c) = *(unsigned int *)(param_1 + 0x201c) | 2;
          *(unsigned int *)(param_1 + 0x4558) = temp_v4;
        }
        temp_v3 = DAT_005739bc;
        temp_v5 = DAT_0057397c;
        piVar11 = (int *)(param_1 + 0x1ffc);
        temp_v6 = 0x35;
        do {
          puVar9 = (unsigned int *)(*piVar11 + temp_v6 * 0x408);
          temp_v9 = (*puVar9 & DAT_00573978) != 0 || (puVar9[1] & DAT_0057397c) != 0;
          temp_v7 = 0;
          if (temp_v9) {
            temp_v10 = SCARRY4(temp_v6 - 1,1);
            temp_v7 = temp_v6;
            temp_v6 = temp_v6 - 1;
          }
        } while ((temp_v9 && temp_v6 != -1) && temp_v7 < 0 == (unsigned char)temp_v10);
        temp_v7 = 0x35;
        puVar9 = (unsigned int *)(*piVar11 + temp_v6 * 0x408);
        *puVar9 = DAT_00573978 | DAT_005739b8;
        puVar9[1] = temp_v5 | temp_v3;
        do {
          temp_v9 = (*(unsigned int *)(*(int *)(param_1 + 0x1ed4) + temp_v7 * 0x1d0 + 0x50) & 1) == 0;
          if (!temp_v9) {
            temp_v7 = temp_v7 - 1;
          }
        } while ((!temp_v9 && temp_v7 != 3) && (temp_v9 || temp_v7 >= 3));
        temp_v11 = 0;
        temp_v8 = *(int *)(g_btlMain + 0x1ed4) + temp_v7 * 0x1d0;
        *(unsigned int *)(temp_v8 + 0x50) = 0x20483;
        *(short *)(temp_v8 + 0x68) = (short)temp_v6;
        *(unsigned int *)(temp_v8 + 0xc) = 0;
        *(unsigned int *)(temp_v8 + 0x10) = 0;
        *(unsigned int *)(temp_v8 + 0x14) = 0x41700000;
        *(unsigned short *)(temp_v8 + 0x62) = 0;
        temp_v4 = DAT_0057aa1c;
        *(unsigned int *)(temp_v8 + 0x6c) = DAT_0057aa1c;
        *(unsigned int *)(temp_v8 + 0x70) = temp_v4;
        *(unsigned int *)(temp_v8 + 0x74) = temp_v4;
        FUN_004cb90c(1);
        *(unsigned int *)(temp_v8 + 0x40) = temp_v11;
        *(unsigned short *)(temp_v8 + 0x60) = *(unsigned short *)(temp_v8 + 0x60) | 0x800;
        *(int *)(*piVar11 + temp_v6 * 0x408 + 0x170) = (int)*(short *)(param_2 + 0x8c);
        *(unsigned short *)(*piVar11 + temp_v6 * 0x408 + 8) = *(unsigned short *)(temp_v8 + 0x6a);
        *(int *)(param_1 + 0x4554) = temp_v7;
        *pbVar12 = 0;
        temp_v0 = (short)DAT_0057a638;
        temp_v1 = (short)DAT_0057a64c;
        temp_v2 = (short)DAT_0057a63c;
        FUN_004cae0c(param_1,temp_v8,0);
        temp_v4 = btlUnitGet(g_btlScriptUnit);
        FUN_004fd204((int)temp_v1 + (int)temp_v0,temp_v4,temp_v8,0xff,(int)temp_v2,0);
        temp_v4 = 6;
        if ((*(unsigned int *)(temp_v8 + 0x50) & 0x10) != 0) {
          temp_v4 = 7;
        }
        temp_v11 = btlUnitGet(g_btlScriptUnit);
        FUN_004fe764((int)temp_v1,temp_v11,temp_v8,temp_v4,0xd);
        return 1;
      }
    }
    else {
      temp_v6 = 0;
      temp_v7 = 0x2a;
      do {
        temp_v8 = param_1 + temp_v6 * 8;
        temp_v7 = temp_v7 - 1;
        *(unsigned int *)(temp_v8 + 0x201c) = 0;
        *(unsigned int *)(temp_v8 + 0x2020) = 0xffffffff;
        temp_v6 = temp_v6 + 1;
      } while (temp_v7 != 0);
      *(unsigned int *)(param_1 + 0x4558) = 0;
      temp_v7 = (int)*(short *)(param_2 + 0x8c);
      temp_v6 = 0;
      do {
        temp_v8 = *(int *)(param_1 + temp_v6 * 4 + 0x216c);
        if ((temp_v8 != 0) && (*(int *)(temp_v8 + 4) == temp_v7)) {
          *(unsigned int *)(param_1 + 0x201c) = *(unsigned int *)(param_1 + 0x201c) | 3;
          *(int *)(param_1 + 0x2020) = temp_v7;
          goto LAB_003ea3c8;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x2a);
      temp_v4 = FUN_00409fe8(temp_v7,1);
      temp_v6 = 0;
      do {
        if (*(int *)(param_1 + temp_v6 * 4 + 0x216c) == 0) {
          *(unsigned int *)(param_1 + temp_v6 * 4 + 0x216c) = temp_v4;
          break;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x2a);
      *(int *)(param_1 + 0x2020) = (int)*(short *)(param_2 + 0x8c);
LAB_003ea3c8:
      *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x4000;
      if ((*(unsigned int *)(g_btlAux + 0x339c) & 0x400) != 0) {
        FUN_004f9450();
      }
      *pbVar12 = 1;
    }
    temp_v4 = 0;
  }
  return temp_v4;
}

} /* extern "C" */
