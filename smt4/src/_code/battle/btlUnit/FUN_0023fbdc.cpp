/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023fbdc` (_code @ 0x23fbdc, 0x400 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"

extern "C" {

int btlReflectInitKind9(...);
int FUN_0024057c(int, int, int, int, int);
int FUN_00240678(...);
int FUN_0024082c(...);
int FUN_002451c4(int, unsigned int *, int, int, int, int);
int FUN_002505c0(...);
int FUN_00254f58(...);
int FUN_0027da30(int, int);
int FUN_0027e6f4(int, int);
int FUN_002b7bca(int [50], int, int, unsigned char *);
int btlSetSelectedListedValue(int);
int FUN_003ae720(...);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
} param_2_stack;

extern unsigned char LAB_0019d7d4; /* 0x19d7d4 */
extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439a20; /* 0x439a20 */
extern unsigned int DAT_00439a24; /* 0x439a24 */
extern unsigned int DAT_00439a28; /* 0x439a28 */
extern unsigned int DAT_00439a2c; /* 0x439a2c */
extern unsigned int DAT_00439a30; /* 0x439a30 */
extern unsigned int DAT_00439a34; /* 0x439a34 */
extern unsigned int DAT_00439a38; /* 0x439a38 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: btlReflectInitKind9. */
/* Supplied declaration required: FUN_0024057c. */
extern int pairedEntryTableContains(int, unsigned short);
/* Supplied declaration required: FUN_00240678. */
/* Supplied declaration required: FUN_0024082c. */
/* Supplied declaration required: FUN_002451c4. */
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00254f58. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_0027e6f4. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: btlSetSelectedListedValue. */
/* Supplied declaration required: FUN_003ae720. */
extern int FUN_003db7b4(int);


void FUN_0023fbdc(unsigned int *param_1,int param_2)

{
/* irregular: 13 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  short temp_v8;
  int temp_v9;
  int aiStack_f8 [50];
  int temp_v10;
  int temp_v11;
  
  temp_v3 = DAT_00435d18;
  puVar9 = (unsigned int *)(param_2 + 0x44a0);
  if ((*(char *)(param_2 + 0x44b7) == '\0') &&
     (((*(unsigned int *)(param_2 + 0xe0) & 0x2000000) != 0 || ((*puVar9 & 2) != 0)))) {
    if (*(int *)(g_btlMain + 0x24) != 0) {
      FUN_0024082c();
    }
    else {
      FUN_0024082c(g_btlMain,0x78);
    }
    if ((*puVar9 & 2) != 0) {
      FUN_00254f58(param_2);
      *puVar9 = *puVar9 | 0x200000;
      temp_v3 = param_2;
      FUN_0027e6f4(param_2,1);
      if ((temp_v3 < 0) && ((*(unsigned int *)(param_2 + 0xe4) & 0x20) == 0)) {
        btlSetSelectedListedValue(3);
      }
    }
    else {
      FUN_00254f58(param_2);
      *puVar9 = *puVar9 | 0x200000;
      FUN_003ae720(g_btlUiBlock,0);
    }
    param_1[3] = 0;
    *param_1 = 0xf;
    FUN_00240678(param_1,param_2);
    return;
  }
  if ((param_1[3] == 0) && ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x400) != 0)) {
    *(unsigned int *)(g_btlMain + 0x634) = *(unsigned int *)(g_btlMain + 0x634) | 0x4000;
    FUN_00240614(reinterpret_cast<BattleVersionResources*>(temp_v3));
    param_1[3] = param_1[3] | 2;
  }
  if (((param_1[3] & 2) != 0) && (temp_v3 = FUN_003db7b4(DAT_00435d18), temp_v3 != 0)) {
    temp_v7 = 0;
    temp_v3 = 4;
    do {
      temp_v4 = *(int *)(param_2 + 0x1e98) + temp_v3 * 0x114;
      if (((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 2) != 0) &&
         ((*(unsigned int *)(temp_v4 + 0x54) & 8) != 0)) {
        aiStack_f8[temp_v7] = temp_v4;
        temp_v7 = temp_v7 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x36);
    FUN_002b7bca(aiStack_f8,temp_v7,4,&LAB_0019d7d4);
    temp_v8 = 0;
    temp_v3 = 0;
    temp_v11 = 0;
    if (temp_v3 < temp_v7) {
      do {
        temp_v4 = aiStack_f8[temp_v3];
        if ((((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v4 + 0x54) & 8) != 0)) &&
           (*(unsigned int *)(temp_v4 + 0x54) = *(unsigned int *)(temp_v4 + 0x54) & 0xfffffff7,
           (*(unsigned short *)(temp_v4 + 0x58) & 0x800) == 0)) {
          temp_v5 = param_2;
          FUN_0027da30(param_2,(int)*(short *)(temp_v4 + 0x62));
          temp_v5 = pairedEntryTableContains(param_2,*(unsigned short *)(temp_v5 + 2));
          if (temp_v5 == 0) {
            *(unsigned short *)(temp_v4 + 0x58) = *(unsigned short *)(temp_v4 + 0x58) | 0x800;
            if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
              temp_v0 = (short)DAT_00439a2c;
              temp_v1 = (short)DAT_00439a30;
              temp_v2 = (short)DAT_00439a34;
            }
            else {
              temp_v1 = (short)DAT_00439a24;
              temp_v0 = (short)DAT_00439a20;
              temp_v2 = (short)DAT_00439a28;
            }
            temp_v10 = (int)temp_v1;
            temp_v9 = (int)(short)DAT_00439a38;
            temp_v5 = (int)temp_v2;
            FUN_0024057c(param_2,temp_v4,0,0,temp_v5);
            FUN_002451c4((int)temp_v8 * (int)temp_v0 + temp_v10 + temp_v9,param_1,temp_v4,0xff,temp_v5,0);
            temp_v6 = 6;
            if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
              temp_v6 = 7;
            }
            btlReflectInitKind9((int)temp_v8 * (int)temp_v0 + temp_v9,param_1,temp_v4,temp_v6,0xd);
            if (temp_v11 == 0) {
              FUN_002505c0((int)temp_v8 * (int)temp_v0,param_1,0x10001d4,0,0,0,0);
              temp_v11 = 1;
            }
            temp_v8 = temp_v8 + 1;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < temp_v7);
    }
    if (*(int *)(g_btlMain + 0x24) != 0) {
      FUN_0024082c();
    }
    else {
      FUN_0024082c(g_btlMain,0x78);
    }
    if ((*puVar9 & 2) == 0) {
      FUN_00254f58(param_2);
      *puVar9 = *puVar9 | 0x200000;
      FUN_003ae720(g_btlUiBlock,0);
    }
    param_1[3] = 0;
    *param_1 = 0xf;
    FUN_00240678(param_1,param_2);
  }
  return;
}

} /* extern "C" */
