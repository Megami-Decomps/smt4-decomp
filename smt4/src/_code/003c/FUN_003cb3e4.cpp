/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb3e4` (_code @ 0x3cb3e4, 0x784 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229754(...);
int FUN_00229914(...);
int FUN_00229a3c(...);
int FUN_0022a5d8(...);
int FUN_0023f4e4(int);
int FUN_00246454(...);
int FUN_00246d38(int, unsigned int *, int, int);
int FUN_00246e24(int, unsigned int *, int, int, int);
int FUN_00250720(int);
int battleGetEntryHalfword(...);
int FUN_00255180(...);
int FUN_0027e5e4(void);
int btlMainFindEntryByListedId(...);
int FUN_003c05e8(...);
int FUN_003cefe0(int *, unsigned int *, unsigned int);
int FUN_003cfe14(...);
int FUN_003d03f8(...);
int btlReflectCreateKind10(...);
int FUN_003de758(int, unsigned int *, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char g_btlAction; /* 0x434278 */
extern unsigned int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_00229754. */
extern int btlNodeListAnyReady(void);
/* Supplied declaration required: FUN_00229914. */
/* Supplied declaration required: FUN_00229a3c. */
/* Supplied declaration required: FUN_0022a5d8. */
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_0023f4e4. */
extern unsigned int FUN_00245cc0(unsigned int);
/* Supplied declaration required: FUN_00246454. */
/* Supplied declaration required: FUN_00246d38. */
/* Supplied declaration required: FUN_00246e24. */
extern unsigned int btlMainFindActiveEntry(int);
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: battleGetEntryHalfword. */
/* Supplied declaration required: FUN_00255180. */
/* Supplied declaration required: FUN_0027e5e4. */
extern int nodeListCountActiveById(unsigned int);
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: FUN_003c05e8. */
extern int questGetCurrentRecordValue6(void);
extern int questGetCurrentRecordValue8(void);
extern int questCurrentGetValue(void);
extern int FUN_003c8880(void);
extern unsigned int questRecordValueIfState2(void);
/* Supplied declaration required: FUN_003cefe0. */
/* Supplied declaration required: FUN_003cfe14. */
/* Supplied declaration required: FUN_003d03f8. */
/* Supplied declaration required: btlReflectCreateKind10. */
/* Supplied declaration required: FUN_003de758. */


unsigned int FUN_003cb3e4(int *param_1,unsigned int *param_2)

{
/* irregular: 2 goto(s); 19 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int *temp_v14;
  
  temp_v2 = nodeListCountActiveById(g_btlActionReflect);
  if (0 < temp_v2) {
    return 0;
  }
  if ((*param_2 & 0x1080) == 0) {
    temp_v2 = 0;
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114 + 0x50) & 1) != 0) &&
         (temp_v3 = FUN_00229914(param_1,param_2,temp_v2), temp_v3 == 0)) {
        temp_v3 = *param_1;
        btlMainFindEntryByListedId(temp_v3,temp_v2);
        if ((*(short *)(temp_v3 + 0x1c8) != 0) && (*(short *)(temp_v3 + 0x1c6) == 0)) {
          if ((*(int *)(*param_1 + 0x48b8) != 0) && (temp_v2 = btlNodeListAnyReady(), temp_v2 != 0)) {
            return 0;
          }
          break;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
  }
  temp_v1 = 0;
  temp_v11 = 0;
  FUN_0023f4e4(*param_1);
  FUN_003de758(0,param_2,5);
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
    if ((temp_v3 != 0) && (temp_v7 = *(unsigned int *)(temp_v3 + 0x50), (temp_v7 & 1) != 0 && (temp_v7 & 2) != 0))
    {
      FUN_0027e5e4();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  *(unsigned int *)(*param_1 + 0x49e4) = 0;
  FUN_00250720(*param_1);
  if ((*param_2 & 0x2000) != 0) {
    *param_2 = *param_2 & 0xffffdfff;
    *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x14;
    return 1;
  }
  temp_v9 = 1;
  if (*(short *)(param_2[9] + 0x62) < 4) {
    temp_v7 = 4;
    temp_v2 = 0x32;
  }
  else {
    temp_v7 = 0;
    temp_v2 = 4;
  }
  temp_v8 = temp_v7 + temp_v2;
  if (temp_v7 < temp_v8) {
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7 * 0x114 + 0x50) & 1) != 0) &&
         (temp_v2 = FUN_00229914(param_1,param_2,temp_v7), temp_v2 == 0)) goto LAB_003cb60c;
      temp_v7 = temp_v7 + 1;
    } while ((int)temp_v7 < (int)temp_v8);
  }
  temp_v9 = 0;
LAB_003cb60c:
  if (*(int *)(*param_1 + 0x88) != 0) {
    temp_v9 = 0;
  }
  if ((*param_2 & 4) == 0) {
    if (temp_v9) {
      FUN_003cefe0(param_1,param_2,temp_v11);
    }
    temp_v2 = 0;
    temp_v13 = 0;
    temp_v12 = 0;
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114 + 0x50) & 1) != 0) &&
         (temp_v3 = FUN_00229914(param_1,param_2,temp_v2), temp_v3 == 0)) {
        puVar5 = (unsigned int *)*param_1;
        btlMainFindEntryByListedId(puVar5,temp_v2);
        temp_v14 = puVar5;
        if (*(short *)((int)puVar5 + 0x1ca) != 0) {
          FUN_00246d38(0,param_2,*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114,0x10);
          *(unsigned short *)((int)puVar5 + 0x1ca) = 0;
          *(unsigned short *)(puVar5 + 0x72) = (unsigned short)puVar5[0x72] & 0xffef;
        }
        else if (((short)puVar5[0x72] == 0) || (*(short *)((int)puVar5 + 0x1c6) != 0)) {
          if ((*(unsigned short *)((int)puVar5 + 0x1c6) & 0x10) != 0) {
            temp_v0 = *(short *)((int)puVar5 + 0x6e);
            if ((unsigned int)(int)temp_v0 < 4) {
              *(unsigned char *)((int)&temp_v12 + (int)temp_v0) = 1;
            }
          }
        }
        else if (temp_v9) {
          FUN_00246e24(0,param_2,*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114,0x10,0);
          FUN_0022a5d8(0x19,temp_v14,1);
          *(unsigned short *)(puVar5 + 0x72) = 0;
          temp_v1 = 1;
          if ((*temp_v14 & 10) != 0) {
            temp_v0 = *(short *)((int)temp_v14 + 0x6e);
            temp_v13 = 1;
            if ((unsigned int)(int)temp_v0 < 4) {
              *(unsigned char *)((int)&temp_v12 + (int)temp_v0) = 1;
            }
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v7 = 0;
    if (temp_v13 != 0) {
      temp_v7 = temp_v12 & 0xff;
    }
    if (temp_v13 != 0 && temp_v7 != 0) {
      temp_v9 = ((temp_v12 >> 8) & 0xff) != 0;
      temp_v7 = 0;
      if (temp_v9) {
        temp_v7 = (temp_v12 >> 0x10) & 0xff;
      }
      temp_v10 = temp_v7 != 0;
      if (temp_v9 && temp_v10) {
        temp_v7 = temp_v12 >> 0x18;
      }
      if ((temp_v9 && temp_v10) && temp_v7 != 0) {
        FUN_003c05e8(0x19);
        FUN_00229a3c(0,param_2,0,0x21,0);
      }
    }
    if (!temp_v1) {
      temp_v3 = 0;
      temp_v2 = 0;
      do {
        puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
        temp_v7 = *puVar5;
        if ((((temp_v7 & 1) != 0) && ((temp_v7 & 0x40) == 0)) &&
           ((*(unsigned short *)((int)puVar5 + 0x1c6) & 0x10) != 0)) {
          temp_v3 = temp_v3 + 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (temp_v3 == 4) {
        temp_v1 = 1;
      }
    }
  }
  temp_v2 = FUN_00229914(param_1,param_2,(int)*(short *)(param_2[9] + 0x62));
  if ((temp_v2 == 0) && ((*(unsigned short *)(param_2[10] + 0xfa) & 0x20) != 0)) {
    if (*(short *)(param_2[9] + 0x62) < 4) {
      temp_v7 = 4;
      temp_v2 = 0x32;
    }
    else {
      temp_v7 = 0;
      temp_v2 = 4;
    }
    temp_v8 = temp_v7 + temp_v2;
    if (temp_v7 < temp_v8) {
      do {
        if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7 * 0x114 + 0x50) & 1) != 0) &&
           (temp_v2 = FUN_00229914(param_1,param_2,temp_v7), temp_v2 == 0)) {
          if ((*(int *)(*param_1 + 0x88) == 0) &&
             (((*(unsigned int *)param_2[8] & 0x40) == 0 && (*(unsigned int *)param_2[8] & 0x20000000) == 0 &&
              ((*param_2 & 4) == 0)))) {
            temp_v2 = (int)((int)*(short *)(param_2[10] + 0xea) +
                         ((unsigned int)((int)*(short *)(param_2[10] + 0xea) >> 0x1f) >> 0x1d)) >> 3;
            if (temp_v2 >= 101) {
              temp_v2 = randRange(0xf);
              temp_v2 = temp_v2 + 100;
            }
            piVar6 = param_1;
            FUN_003cfe14(param_1,param_2,temp_v2);
            if (piVar6 != (int *)0x0) {
              *param_2 = *param_2 | 0x10000;
            }
            temp_v1 = 1;
          }
          break;
        }
        temp_v7 = temp_v7 + 1;
      } while ((int)temp_v7 < (int)temp_v8);
    }
  }
  temp_v2 = 0;
  do {
    puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
    if ((((*puVar5 & 1) != 0) && ((*puVar5 & 0x40) == 0)) &&
       ((*(unsigned short *)((int)puVar5 + 0x1c6) & 0x400) != 0)) {
      FUN_0022a5d8(0x16,puVar5,1);
      FUN_00246454(0,param_2,puVar5);
      temp_v1 = 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  temp_v7 = btlMainFindActiveEntry(*param_1);
  if (temp_v7 != 0) {
    temp_v0 = *(short *)(temp_v7 + 8);
    temp_v3 = *(int *)(*param_1 + 0x1e98);
    temp_v4 = battleGetEntryHalfword(0,2);
    temp_v5 = questGetCurrentRecordValue6();
    temp_v2 = 0;
    if (temp_v5 != 0) {
      temp_v2 = temp_v4;
    }
    if (!((temp_v5 == 0 || temp_v4 == 0) || temp_v2 < 0)) {
      temp_v2 = questGetCurrentRecordValue8();
      if (temp_v2 == 0) {
        *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1e;
        return 1;
      }
      temp_v11 = 0xc;
    }
    else {
      temp_v2 = questCurrentGetValue();
      temp_v8 = questRecordValueIfState2();
      temp_v6 = battleGetEntryHalfword((int)*(short *)(param_2[9] + 0x62),0x1d);
      if ((temp_v2 == 0) || (temp_v6 < temp_v8)) goto LAB_003cbb20;
      temp_v11 = FUN_00245cc0(0x1d);
      FUN_00255180((int)*(short *)(param_2[9] + 0x62),0x1d,temp_v11);
      temp_v12 = temp_v7;
      FUN_003d03f8(param_1,param_2,temp_v2,0x19,temp_v3 + temp_v0 * 0x114);
      temp_v2 = FUN_003c8880();
      if (temp_v2 == 0) {
        *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1e;
        return 1;
      }
      temp_v11 = 0xffffffff;
    }
    btlReflectCreateKind10(5,param_2,temp_v2,temp_v11);
  }
  else {
LAB_003cbb20:
    if (!temp_v1) {
      FUN_00229754(param_1,param_2);
      return 1;
    }
  }
  *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1e;
  return 1;
}

} /* extern "C" */
