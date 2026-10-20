/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df168` (_code @ 0x3df168, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int gameFlagBlockGetEntry(...);
int FUN_001ad9b4(...);
int FUN_00203b1c(...);
int FUN_004ccbf0(...);

typedef struct fn_003df168_arg1 fn_003df168_arg1;
struct fn_003df168_arg1 {
    unsigned char pad_0x0[0xf0];
    ushort field_0xf0; /* +0xf0 */
    ushort field_0xf2; /* +0xf2 */
    undefined4 field_0xf4; /* +0xf4 */
    unsigned char pad_0xf8[0x2];
    ushort field_0xfa; /* +0xfa */
    void *field_0xfc; /* +0xfc */
};

extern int g_aocSystem; /* 0x570280 */

extern int randRange(short);
extern int gameGetPlayerData(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: gameFlagBlockGetEntry. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_00203b1c. */
/* Supplied declaration required: FUN_004ccbf0. */


void FUN_003df168(unsigned int *param_1,fn_003df168_arg1 *param_2)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  fn_003df168_arg1 *pfVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  short *psVar7;
  int temp_v4;
  int temp_v5;
  void *pvVar10;
  int temp_v6;
  unsigned int temp_v7;
  short temp_v8;
  int temp_v9;
  short temp_v10;
  
  pfVar4 = param_2;
  FUN_001ad9b4();
  if (pfVar4 != (fn_003df168_arg1 *)0x0) {
    gameFlagBlockGetEntry(param_2);
    temp_v0 = pfVar4->field_0xf0;
    if (temp_v0 != 1) {
      if (temp_v0 == 3) {
        param_1[0xc] = pfVar4->field_0xf4;
      }
      else if (temp_v0 == 4) {
        temp_v0 = pfVar4->field_0xf2;
        puVar5 = *(unsigned int **)(g_aocSystem + 0x390);
        if (puVar5 != (unsigned int *)0x0) {
          temp_v7 = 0;
          if (temp_v7 < *(unsigned int *)(g_aocSystem + 0x38c)) {
            do {
              if (*puVar5 == (unsigned int)temp_v0) {
                puVar5 = puVar5 + 1;
                goto LAB_003df23c;
              }
              temp_v7 = temp_v7 + 1;
              puVar5 = puVar5 + 0x11;
            } while (temp_v7 < *(unsigned int *)(g_aocSystem + 0x38c));
          }
        }
        temp_v3 = dataTableGet(0x1c,1);
        temp_v6 = dataTableGetEntries();
        dataTableGetCount(temp_v3);
        puVar5 = (unsigned int *)(temp_v6 + (unsigned int)temp_v0 * 0x40);
LAB_003df23c:
        temp_v8 = 0;
        temp_v10 = 0;
        if (*(short *)((int)puVar5 + 0x22) != 0) {
          temp_v10 = *(short *)((int)puVar5 + 0x22);
        }
        temp_v1 = *(short *)((int)puVar5 + 0x26);
        temp_v6 = 3;
        psVar7 = (short *)((int)puVar5 + 0x22);
        do {
          temp_v2 = psVar7[4];
          if (temp_v1 != 0) {
            temp_v10 = temp_v10 + temp_v1;
          }
          temp_v1 = psVar7[6];
          if (temp_v2 != 0) {
            temp_v8 = temp_v8 + temp_v2;
          }
          temp_v6 = temp_v6 - 1;
          psVar7 = psVar7 + 4;
        } while (temp_v6 != 0);
        temp_v10 = temp_v10 + temp_v8;
        temp_v6 = pfVar4->field_0xf4;
        if (*(short *)((int)puVar5 + 0x3e) != 0) {
          temp_v10 = temp_v10 + *(short *)((int)puVar5 + 0x3e);
        }
        temp_v9 = 0;
        if (temp_v6 != 0) {
          do {
            temp_v4 = randRange(temp_v10 - 1);
            temp_v5 = 0;
            do {
              temp_v7 = (unsigned int)*(unsigned short *)((int)puVar5 + temp_v5 * 4 + 0x22);
              if ((temp_v7 != 0) && (temp_v4 = temp_v4 - temp_v7, temp_v4 < 0)) {
                if ((temp_v9 < 6) && ((unsigned short)puVar5[temp_v5 + 8] != 0)) {
                  param_1[temp_v9] = (unsigned int)(unsigned short)puVar5[temp_v5 + 8];
                  param_1[temp_v9 + 6] = 1;
                  temp_v9 = temp_v9 + 1;
                }
                break;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 8);
            temp_v6 = temp_v6 - 1;
          } while (temp_v6 != 0);
        }
      }
    }
    else {
      *param_1 = (unsigned int)pfVar4->field_0xf2;
      param_1[6] = pfVar4->field_0xf4;
    }
    if (pfVar4->field_0xfa == 0) {
      pvVar10 = pfVar4->field_0xfc;
    }
    else {
      temp_v6 = gameGetPlayerData();
      temp_v7 = FUN_00203b1c();
      if (*(unsigned short *)(temp_v6 + 0x62) >= temp_v7) {
        temp_v6 = FUN_00203b1c();
        temp_v7 = FUN_004ccbf0(temp_v6 - 1);
        param_1[0xd] = temp_v7;
      }
      else {
        temp_v7 = FUN_004ccbf0();
        param_1[0xd] = temp_v7;
      }
      pvVar10 = (void *)((temp_v7 * pfVar4->field_0xfa) / 100);
    }
    param_1[0xd] = (unsigned int)pvVar10;
    *(short *)(param_1 + 0xe) = (short)(int)param_2;
  }
  return;
}

} /* extern "C" */
