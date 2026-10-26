/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e05d4` (_code @ 0x4e05d4, 0xd80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "code/Code003e.h"
#include "code/Code004c_Smt4a.h"

extern "C" {

int FUN_004e76cc(...);
int FUN_004fcde0(...);

int infoWinSetText(unsigned int, unsigned int);
int uiNavigatorStart(int, int, int, int, int);
int stateFinishIfPresent(int);
int FUN_003f0e20(...);
int FUN_003f1b3c(int, unsigned int, unsigned int, unsigned int *, int *);
int FUN_0047f4cc(int);
int FUN_004aa878(void);
int btlSlotSetStoreValue(...);
int btlAdjustPropertyClamped(...);
int FUN_004c9160(...);
int FUN_004cab9c(void);
int FUN_004e5830(int *, unsigned int *, unsigned int);
int FUN_004e83ac(...);
int FUN_004fcffc(...);
int FUN_004fdb18(...);
int FUN_004fe7e4(int, unsigned int *, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571158; /* 0x571158 */
extern unsigned int DAT_0057115c; /* 0x57115c */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_005711c0; /* 0x5711c0 */
extern unsigned int DAT_005711c4; /* 0x5711c4 */
extern unsigned int DAT_00571260; /* 0x571260 */
extern unsigned int DAT_00571264; /* 0x571264 */
extern unsigned int DAT_005712a0; /* 0x5712a0 */
extern unsigned int DAT_005712a4; /* 0x5712a4 */
extern unsigned int DAT_005712a8; /* 0x5712a8 */
extern unsigned int DAT_005712ac; /* 0x5712ac */
extern unsigned int DAT_005712b0; /* 0x5712b0 */
extern unsigned int DAT_005712b4; /* 0x5712b4 */
extern unsigned int DAT_005712b8; /* 0x5712b8 */
extern unsigned int DAT_005712bc; /* 0x5712bc */
extern unsigned int DAT_005712c0; /* 0x5712c0 */
extern unsigned int DAT_005712c4; /* 0x5712c4 */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern int g_btlUiBlock; /* 0x57a9c8 */

extern int lcgRandomRange(unsigned int);
extern int dialogIsActive(void);
/* Supplied declaration required: infoWinSetText. */
/* Supplied declaration required: uiNavigatorStart. */
/* Supplied declaration required: stateFinishIfPresent. */
extern int FUN_003eb1cc(int);
extern unsigned int contentGetFirstFlaggedValue(void);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f1b3c. */
extern int chainCountIdUnflagged(unsigned int);
/* Supplied declaration required: FUN_0047f4cc. */
/* Supplied declaration required: FUN_004aa878. */
extern int btlFindEntryValue(int, unsigned int);
/* Supplied declaration required: btlSlotSetStoreValue. */
/* Supplied declaration required: btlAdjustPropertyClamped. */
extern int FUN_004c8a9c(void);
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004cab9c. */
/* Supplied declaration required: FUN_004e5830. */
/* Supplied declaration required: FUN_004e76cc. */
/* Supplied declaration required: FUN_004e83ac. */
/* Supplied declaration required: FUN_004fcde0. */
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fdb18. */
/* Supplied declaration required: FUN_004fe7e4. */


unsigned int FUN_004e05d4(int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 19 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int *piVar8;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int *temp_v12;
  
  temp_v2 = chainCountIdUnflagged(g_btlActionReflect);
  if (0 < temp_v2) {
    return 0;
  }
  temp_v2 = g_btlUiBlock;
  FUN_004aa878();
  if (temp_v2 == 0) {
    return 0;
  }
  if ((*param_2 & 0x1080) == 0) {
    temp_v2 = 0;
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0 + 0x50) & 1) != 0) &&
         (temp_v3 = FUN_004e83ac(param_1,param_2,temp_v2), temp_v3 == 0)) {
        temp_v3 = *param_1;
        FUN_003f0e20(temp_v3,temp_v2);
        if ((*(short *)(temp_v3 + 0x276) != 0) &&
           (*(short *)(temp_v3 + 0x274) == 0 || *(short *)(temp_v3 + 0x274) == 4)) {
          if ((*(int *)(*param_1 + 0x4bc0) != 0) && (temp_v2 = FUN_004c8a9c(), temp_v2 != 0)) {
            return 0;
          }
          break;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v7 = *(unsigned int *)(*param_1 + 0x45a0);
    temp_v4 = *(unsigned int *)(*param_1 + 0x45a4);
    if (((DAT_005712a0 & temp_v7) != 0 || (DAT_005712a4 & temp_v4) != 0) ||
       ((temp_v4 & DAT_005712ac) != 0 || (temp_v7 & DAT_005712a8) != 0)) {
      temp_v2 = FUN_004c8a9c();
      if (temp_v2 != 0) {
        return 0;
      }
      if (*(int *)(param_2[8] + 0x400) != 0) {
        temp_v0 = *(unsigned short *)(*(int *)(param_2[8] + 0x400) + 300);
        temp_v5 = FUN_0019acdc(temp_v0, 1);
        temp_v2 = *param_1;
        if ((*(unsigned int *)(temp_v2 + 0x45a4) & DAT_005712a4) == 0 &&
            (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_005712a0) == 0) {
          temp_v8 = 0xd;
        }
        else {
          temp_v8 = 0xc;
        }
        FUN_003f1b3c(temp_v2,temp_v5,temp_v8,&temp_v10,&temp_v11);
        FUN_0047f4cc(temp_v11);
        infoWinSetText(*(unsigned int *)(*param_1 + 0x4d64),temp_v10 & 0xffff);
        uiNavigatorStart(temp_v0,1,1,0,0);
        temp_v2 = *param_1;
        temp_v7 = DAT_005712b0 | *(unsigned int *)(temp_v2 + 0x45a0);
        temp_v9 = DAT_005712b4 | *(unsigned int *)(temp_v2 + 0x45a4);
        *(unsigned int *)(temp_v2 + 0x45a0) = temp_v7;
        *(unsigned int *)(temp_v2 + 0x45a4) = temp_v9;
        temp_v7 = temp_v7 & ~DAT_005712a0;
        temp_v9 = temp_v9 & ~DAT_005712a4;
        temp_v2 = *param_1;
        *(unsigned int *)(temp_v2 + 0x45a0) = temp_v7;
        *(unsigned int *)(temp_v2 + 0x45a4) = temp_v9;
        temp_v2 = *param_1;
        temp_v4 = ~DAT_005712ac;
        *(unsigned int *)(temp_v2 + 0x45a0) = temp_v7 & ~DAT_005712a8;
        *(unsigned int *)(temp_v2 + 0x45a4) = temp_v9 & temp_v4;
        return 0;
      }
    }
    if ((*(unsigned int *)(*param_1 + 0x45a0) & DAT_005712b0) != 0 ||
        (DAT_005712b4 & *(unsigned int *)(*param_1 + 0x45a4)) != 0) {
      temp_v2 = dialogIsActive();
      if (temp_v2 != 0) {
        return 0;
      }
      temp_v2 = *param_1;
      temp_v4 = ~DAT_005712b4;
      *(unsigned int *)(temp_v2 + 0x45a0) = *(unsigned int *)(temp_v2 + 0x45a0) & ~DAT_005712b0;
      *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & temp_v4;
    }
  }
  temp_v2 = *param_1;
  temp_v5 = 0;
  temp_v9 = *(unsigned int *)(temp_v2 + 0x45a0) & ~DAT_005712a0;
  temp_v7 = *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_005712a4;
  *(unsigned int *)(temp_v2 + 0x45a0) = temp_v9;
  *(unsigned int *)(temp_v2 + 0x45a4) = temp_v7;
  temp_v7 = temp_v7 & ~DAT_005712ac;
  temp_v2 = *param_1;
  temp_v9 = temp_v9 & ~DAT_005712a8;
  *(unsigned int *)(temp_v2 + 0x45a4) = temp_v7;
  *(unsigned int *)(temp_v2 + 0x45a0) = temp_v9;
  temp_v2 = *param_1;
  temp_v4 = ~DAT_005712b0;
  *(unsigned int *)(temp_v2 + 0x45a4) = temp_v7 & ~DAT_005712b4;
  *(unsigned int *)(temp_v2 + 0x45a0) = temp_v9 & temp_v4;
  stateFinishIfPresent(*param_1);
  FUN_004fe7e4(0,param_2,5);
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0;
    if ((temp_v3 != 0) && (temp_v4 = *(unsigned int *)(temp_v3 + 0x50), (temp_v4 & 1) != 0 && (temp_v4 & 2) != 0)) {
      FUN_004cab9c();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  *(unsigned int *)(*param_1 + 0x4cf0) = 0;
  FUN_003ee0c0((void *)(*param_1));
  if ((param_2[0xc] == 5) && ((*(unsigned short *)(param_2[10] + 0x110) & 0x10) == 0)) {
    puVar7 = (unsigned int *)param_2[8];
    temp_v4 = ~DAT_0057115c;
    *puVar7 = *puVar7 & ~DAT_00571158;
    puVar7[1] = puVar7[1] & temp_v4;
  }
  temp_v2 = reinterpret_cast<int>(btlFindMarkedReserveRecord(reinterpret_cast<BtlMainStateA *>(*param_1)));
  if (temp_v2 != 0) {
    *(unsigned int *)(temp_v2 + 0x50) = *(unsigned int *)(temp_v2 + 0x50) & 0xff7fffff;
  }
  if ((*param_2 & 0x2000) != 0) {
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x14;
    return 1;
  }
  temp_v1 = 1;
  if (*(short *)(param_2[9] + 0x6a) < 4) {
    temp_v4 = 4;
    temp_v2 = 0x32;
  }
  else {
    temp_v4 = 0;
    temp_v2 = 4;
  }
  temp_v7 = temp_v4 + temp_v2;
  if (temp_v4 < temp_v7) {
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4 * 0x1d0 + 0x50) & 1) != 0) &&
         (temp_v2 = FUN_004e83ac(param_1,param_2,temp_v4), temp_v2 == 0)) goto LAB_004e0ac0;
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < (int)temp_v7);
  }
  temp_v1 = 0;
LAB_004e0ac0:
  if (*(int *)(*param_1 + 0xa8) != 0) {
    temp_v1 = 0;
  }
  if ((*param_2 & 4) == 0) {
    if (temp_v1) {
      FUN_004e5830(param_1,param_2,temp_v5);
    }
    temp_v2 = 0;
    temp_v11 = 0;
    temp_v10 = 0;
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0 + 0x50) & 1) != 0) &&
         (temp_v3 = FUN_004e83ac(param_1,param_2,temp_v2), temp_v3 == 0)) {
        puVar7 = (unsigned int *)*param_1;
        FUN_003f0e20(puVar7,temp_v2);
        temp_v12 = puVar7;
        if ((short)puVar7[0x9e] != 0) {
          FUN_004fcffc(0,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0,0x10);
          *(unsigned short *)(puVar7 + 0x9e) = 0;
          *(unsigned short *)((int)puVar7 + 0x276) = *(unsigned short *)((int)puVar7 + 0x276) & 0xffef;
        }
        else if ((*(short *)((int)puVar7 + 0x276) == 0) ||
                ((short)puVar7[0x9d] != 0 && (short)puVar7[0x9d] != 4)) {
          if (((puVar7[0x9d] & 0x10) != 0) && ((unsigned int)(int)*(short *)((int)puVar7 + 0x6e) < 4)) {
            *(unsigned char *)((int)&temp_v10 + (int)*(short *)((int)puVar7 + 0x6e)) = 1;
          }
        }
        else if ((temp_v1) ||
                ((*(char *)(*param_1 + 0x45bc) != '\0' &&
                 ((*puVar7 & DAT_00571168) == 0 && (puVar7[1] & DAT_0057116c) == 0)))) {
          FUN_004fdb18(0,param_2,*(int *)(*param_1 + 0x1ed4) + temp_v2 * 0x1d0,0x10,0);
          FUN_004c9160(0x19,temp_v12,0,1);
          *(unsigned short *)((int)puVar7 + 0x276) = 0;
          if (((DAT_00571150 & *temp_v12) != 0 || (DAT_00571154 & temp_v12[1]) != 0) ||
             ((*temp_v12 & DAT_00571160) != 0 || (temp_v12[1] & DAT_00571164) != 0)) {
            temp_v11 = 1;
            if ((unsigned int)(int)*(short *)((int)temp_v12 + 0x6e) < 4) {
              *(unsigned char *)((int)&temp_v10 + (int)*(short *)((int)temp_v12 + 0x6e)) = 1;
            }
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
  }
  temp_v2 = FUN_004e83ac(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a));
  if (((temp_v2 == 0) && ((*param_2 & 4) == 0)) && (temp_v2 = FUN_003eb1cc(*param_1), temp_v2 == 0)) {
    temp_v4 = *(unsigned int *)(*param_1 + 0x45a0);
    temp_v7 = *(unsigned int *)(*param_1 + 0x45a4);
    if (((DAT_005712c0 & temp_v4) == 0 && (DAT_005712c4 & temp_v7) == 0) &&
       ((DAT_005712bc & temp_v7) == 0 && (DAT_005712b8 & temp_v4) == 0)) {
      temp_v2 = (int)*(short *)(param_2[9] + 0x6a);
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x80) != 0) {
        if (((DAT_00571260 & temp_v4) == 0 && (temp_v7 & DAT_00571264) == 0) &&
           (temp_v3 = btlFindEntryValue(temp_v2,0x1b), temp_v3 == 0)) {
          btlAdjustPropertyClamped(temp_v2,0x1b,1,0);
        }
      }
      else {
        temp_v5 = FUN_004c53fc(0x1b);
        btlSlotSetStoreValue(temp_v2,0x1b,temp_v5);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x40) != 0) {
        if (((*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0 &&
             (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) == 0) &&
           (temp_v3 = btlFindEntryValue(temp_v2,0x1c), temp_v3 == 0)) {
          btlAdjustPropertyClamped(temp_v2,0x1c,1,0);
        }
      }
      else {
        temp_v5 = FUN_004c53fc(0x1c);
        btlSlotSetStoreValue(temp_v2,0x1c,temp_v5);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x100) != 0) {
        if (((DAT_00571260 & *(unsigned int *)(*param_1 + 0x45a0)) == 0 &&
             (*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0) &&
           (temp_v3 = btlFindEntryValue(temp_v2,0x1d), temp_v3 == 0)) {
          btlAdjustPropertyClamped(temp_v2,0x1d,1,0);
        }
      }
      else {
        temp_v5 = FUN_004c53fc(0x1d);
        btlSlotSetStoreValue(temp_v2,0x1d,temp_v5);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 8) != 0) {
        if (((*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0 &&
             (DAT_00571260 & *(unsigned int *)(*param_1 + 0x45a0)) == 0) &&
           (temp_v3 = btlFindEntryValue(temp_v2,0x1e), temp_v3 == 0)) {
          btlAdjustPropertyClamped(temp_v2,0x1e,1,0);
        }
      }
      else {
        temp_v5 = FUN_004c53fc(0x1e);
        btlSlotSetStoreValue(temp_v2,0x1e,temp_v5);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x800) != 0) {
        if (((*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0 &&
             (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) == 0) &&
           (temp_v3 = btlFindEntryValue(temp_v2,0x1f), temp_v3 == 0)) {
          btlAdjustPropertyClamped(temp_v2,0x1f,1,0);
        }
      }
      else {
        temp_v5 = FUN_004c53fc(0x1f);
        btlSlotSetStoreValue(temp_v2,0x1f,temp_v5);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x1000) == 0) {
        temp_v5 = FUN_004c53fc(0x20);
        btlSlotSetStoreValue(temp_v2,0x20,temp_v5);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x2000) != 0) {
        if (((*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0 &&
             (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) == 0) &&
           (temp_v3 = btlFindEntryValue(temp_v2,0x21), temp_v3 == 0)) {
          btlAdjustPropertyClamped(temp_v2,0x21,1,0);
        }
      }
      else {
        temp_v5 = FUN_004c53fc(0x21);
        btlSlotSetStoreValue(temp_v2,0x21,temp_v5);
      }
    }
  }
  temp_v2 = FUN_004e83ac(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a));
  if ((temp_v2 == 0) && ((*(unsigned short *)(param_2[10] + 0x110) & 0x20) != 0)) {
    if (*(short *)(param_2[9] + 0x6a) < 4) {
      temp_v4 = 4;
      temp_v2 = 0x32;
    }
    else {
      temp_v4 = 0;
      temp_v2 = 4;
    }
    temp_v7 = temp_v4 + temp_v2;
    if (temp_v4 < temp_v7) {
      do {
        if (((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4 * 0x1d0 + 0x50) & 1) != 0) &&
           (temp_v2 = FUN_004e83ac(param_1,param_2,temp_v4), temp_v2 == 0)) {
          if (*(int *)(*param_1 + 0xa8) == 0) {
            temp_v7 = *(unsigned int *)param_2[8];
            temp_v4 = ((unsigned int *)param_2[8])[1];
            if ((((DAT_00571178 & temp_v7) == 0 && (DAT_0057117c & temp_v4) == 0) &&
                ((temp_v4 & DAT_005711c4) == 0 && (temp_v7 & DAT_005711c0) == 0)) &&
               ((*param_2 & 4) == 0)) {
              temp_v2 = (int)(*(int *)(param_2[10] + 0xf8) +
                           ((unsigned int)(*(int *)(param_2[10] + 0xf8) >> 0x1f) >> 0x1d)) >> 3;
              if (temp_v2 >= 101) {
                temp_v2 = lcgRandomRange(0xf);
                temp_v2 = temp_v2 + 100;
              }
              piVar8 = param_1;
              FUN_004e76cc(param_1,param_2,temp_v2);
              if (piVar8 != (int *)0x0) {
                *param_2 = *param_2 | 0x10000;
              }
            }
          }
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < (int)temp_v7);
    }
  }
  temp_v2 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
    if ((((DAT_00571148 & *puVar7) != 0 || (DAT_0057114c & puVar7[1]) != 0) &&
        ((*puVar7 & DAT_00571178) == 0 && (puVar7[1] & DAT_0057117c) == 0)) &&
       ((puVar7[0x9d] & 0x400) != 0)) {
      FUN_004c9160(0x16,puVar7,0,1);
      FUN_004fcde0(0,param_2,puVar7);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  if (((*(int *)(*param_1 + 0xa8) == 0) && (temp_v2 = battlePartyIsDefeated(reinterpret_cast<const BtlMainStateA *>(*param_1)), temp_v2 != 0)) &&
     (temp_v2 = contentGetFirstFlaggedValue(), temp_v2 != 0)) {
    temp_v6 = 0x18;
    temp_v2 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
  }
  else {
    temp_v6 = 0x21;
    temp_v2 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
  }
  *(unsigned char *)(temp_v2 + 9) = temp_v6;
  return 1;
}

} /* extern "C" */
