/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3944` (_code @ 0x3d3944, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlEntryValuesCopy(int *, int);
int FUN_0023e52c(int *, int, int, int);
int bgmSwitchCurrent(int, unsigned int);
int FUN_002569ac(int *, unsigned int, unsigned int *, unsigned int, unsigned int);
int FUN_0027dd9c(unsigned int);
int FUN_0027e6f4(int, int);
int FUN_002ae164(void);
int dataTable08Sub1GetRecord(void);
int entryInvalidateStateTable(int);
int FUN_003cc944(int *, int, int);
int FUN_003cee94(int *, int);
int FUN_003d9d74(unsigned int);
int FUN_003da890(unsigned int);
int FUN_003db378(unsigned int);
int entryTableInvalidate(unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int g_btlMain; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: btlEntryValuesCopy. */
extern int FUN_00227ecc(unsigned int, unsigned char);
/* Supplied declaration required: FUN_0023e52c. */
/* Supplied declaration required: bgmSwitchCurrent. */
/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_0027dd9c. */
/* Supplied declaration required: FUN_0027e6f4. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
/* Supplied declaration required: entryInvalidateStateTable. */
/* Supplied declaration required: FUN_003cc944. */
/* Supplied declaration required: FUN_003cee94. */
/* Supplied declaration required: FUN_003d9d74. */
/* Supplied declaration required: FUN_003da890. */
/* Supplied declaration required: FUN_003db378. */
/* Supplied declaration required: entryTableInvalidate. */


void FUN_003d3944(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 15 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  
  *(unsigned int *)(param_2 + 0x570) = 0;
  *(unsigned int *)(param_2 + 0x574) = 0;
  *(unsigned int *)(param_2 + 0xc) = 0;
  *(unsigned int *)(param_2 + 0x584) = 0;
  *(unsigned int *)(param_2 + 0x588) = 0;
  *(unsigned int *)(param_2 + 0x58c) = 0;
  *(unsigned int *)(param_2 + 0x56c) = 0;
  *(unsigned int *)(param_2 + 0x1c) = 0;
  temp_v1 = 0;
  temp_v4 = 0x85;
  do {
    temp_v5 = param_2 + temp_v1 * 8;
    puVar7 = (unsigned int *)(temp_v5 + 0x5a8);
    temp_v4 = temp_v4 - 1;
    *puVar7 = 0xffffffff;
    *(unsigned int *)(temp_v5 + 0x5ac) = 0;
    temp_v1 = temp_v1 + 1;
  } while (temp_v4 != 0);
  *(unsigned char *)(param_2 + 0x59c) = 0;
  FUN_002569ac(param_1,*(unsigned int *)(*param_1 + 0x84),puVar7,0xffffffff,param_4);
  btlEntryValuesCopy(param_1,param_2);
  *(unsigned int *)(param_2 + 0x594) = 0;
  temp_v2 = *(unsigned int *)(*param_1 + 0x44a0);
  if ((((temp_v2 & 4) == 0 && (temp_v2 & 0x40) == 0) && (temp_v2 & 0x100) == 0) &&
     (temp_v2 = *(unsigned int *)(*param_1 + 0xe0), (temp_v2 & 0x8000000) == 0)) {
    if ((temp_v2 & 0x4000000) != 0) {
      *(unsigned int *)(param_2 + 0x594) = 0x16;
    }
    else {
      temp_v1 = *(int *)(param_2 + 0x28);
      temp_v0 = *(short *)(temp_v1 + 0x14c);
      if (temp_v0 == 2 || temp_v0 == 3) {
        temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x14e);
        if (0 < (int)temp_v2) {
          FUN_002ae164();
          temp_v3 = 0;
          if (temp_v2 != 0) {
            temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0x57);
          }
          if ((temp_v2 != 0 && temp_v3 != 1) && (temp_v3 != 0)) {
            *(unsigned int *)(param_2 + 0x594) = temp_v3;
          }
        }
      }
      else if (temp_v0 == 8) {
        temp_v1 = (int)*(short *)(temp_v1 + 0x14e);
        dataTable08Sub1GetRecord();
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
        if (temp_v2 != 0) {
          if (0 < (int)temp_v2) {
            FUN_002ae164();
            temp_v3 = 0;
            if (temp_v2 != 0) {
              temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0x57);
            }
            if ((temp_v2 != 0 && temp_v3 != 1) && (temp_v3 != 0)) {
              *(unsigned int *)(param_2 + 0x594) = temp_v3;
            }
          }
        }
      }
    }
  }
  entryInvalidateStateTable(*param_1);
  entryTableInvalidate(DAT_00435d18);
  FUN_003da890(DAT_00435d18);
  if (*(int *)(param_2 + 0x594) == 9) {
    FUN_003d9d74(DAT_00435d18);
  }
  FUN_003cee94(param_1,param_2);
  FUN_003db378(DAT_00435d18);
  temp_v1 = *param_1;
  FUN_0027e6f4(temp_v1,1);
  temp_v1 = FUN_00227ecc(DAT_00435d18,-1 < temp_v1);
  if (temp_v1 != 0) {
    FUN_0023e52c(param_1,param_2,*(unsigned short *)(temp_v1 + 0x12),*(unsigned short *)(temp_v1 + 0x14));
  }
  else {
    FUN_0023e52c(param_1,param_2,0xffff,0);
  }
  FUN_003cc944(param_1,param_2,0);
  FUN_0027dd9c(DAT_00435d18);
  *(unsigned int *)(g_btlMain + 0x634) = (*(unsigned int *)(g_btlMain + 0x634) & 0xfeffffff) | 0x4000;
  switch(*(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c)) {
  default:
    return;
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xb:
    bgmSwitchCurrent(*param_1,*(unsigned int *)(*param_1 + 0x49dc));
    return;
  }
}

} /* extern "C" */
