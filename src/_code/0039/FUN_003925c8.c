/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003925c8` (_code @ 0x3925c8, 0x4d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int FUN_00391218(); /* 0x391218 */
extern unsigned char LAB_003912d0; /* 0x3912d0 */
extern unsigned char LAB_00392abc; /* 0x392abc */
extern int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_00233ac0. */
/* Supplied declaration required: FUN_00233f0c. */
/* Supplied declaration required: FUN_00233f4c. */
/* Supplied declaration required: FUN_00234004. */
/* Supplied declaration required: FUN_00234160. */
/* Supplied declaration required: FUN_00234278. */
/* Supplied declaration required: FUN_002342b8. */
extern int FUN_0026f0d8(unsigned int);
extern int FUN_0027ec84(unsigned int *);
/* Supplied declaration required: FUN_0027ed6c. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
extern int FUN_0029d8fc(int);
extern int FUN_002a17c0(unsigned int *);
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002bc200. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_003925c8(unsigned int *param_1)

{
/* irregular: 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int temp_v3;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v4;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int temp_v5;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  FUN_00234278(&temp_v3);
  temp_v0 = param_1[2];
  puVar7 = param_1 + 0x5e9;
  puVar8 = param_1 + 0x5e8;
  puVar2 = param_1 + 0x5eb;
  if (temp_v0 != 3) {
    if ((int)temp_v0 < 3) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            param_1[0x5ea] = 0;
            if ((*param_1 & 0x1000) == 0) {
              *puVar2 = 0xffffffff;
              *puVar7 = 0;
              *param_1 = *param_1 | 0x1000;
              FUN_002333d4(param_1 + 0x5ec,0);
              FUN_002333d4(param_1 + 0x5ec,1);
              pcVar5 = "Aoc guide CALC";
              FUN_002c5978("Aoc guide CALC",2,0,0,FUN_00391218,0,param_1);
              *puVar8 = (unsigned int)pcVar5;
              FUN_002c4c00("Aoc guide DOWN",0xe8,1,0,&LAB_003912d0,0,param_1,pcVar5);
            }
            param_1[2] = 3;
            *param_1 = *param_1 | 0x10;
            *(unsigned char *)(DAT_00432fc8 + 0xd50) = 3;
            return;
          }
        }
        else if ((*param_1 & 0x200) != 0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v4);
          temp_v3 = temp_v4;
          uStack_5c = uStack_48;
          uStack_58 = uStack_44;
          uStack_54 = uStack_40;
          uStack_50 = uStack_3c;
          temp_v1 = FUN_0027ec84(&temp_v3);
          if (temp_v1 != 0) {
            *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) | 0x100;
            FUN_00233ac0(param_1,1);
            param_1[2] = 2;
            FUN_00233f0c(param_1);
            return;
          }
          temp_v1 = FUN_002a17c0(&temp_v3);
          if (temp_v1 != 0) {
            FUN_00233f0c(param_1);
            if ((temp_v3 & 0xff) == 0x66) {
              temp_v5 = temp_v3;
              uStack_34 = uStack_5c;
              uStack_30 = uStack_58;
              uStack_2c = uStack_54;
              uStack_28 = uStack_50;
              FUN_002342b8(param_1,&temp_v5);
              return;
            }
            if ((temp_v3 & 0xff) != 0x67) {
              param_1[2] = 9999;
              param_1[0x84] = temp_v3;
              param_1[0x85] = uStack_5c;
              param_1[0x86] = uStack_58;
              param_1[0x87] = uStack_54;
              param_1[0x88] = uStack_50;
              return;
            }
            piVar4 = (int *)param_1[0x82];
            param_1[1] = 3;
            param_1[2] = 0;
            if (piVar4 == (int *)0x0) {
              return;
            }
            (**(romwright_code **)(*piVar4 + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
      else {
        FUN_0027ed6c();
        if (temp_v0 != 0) {
          puVar2 = param_1 + 0x83;
          FUN_00234160(puVar2,0);
          param_1[2] = 1;
          param_1[0x82] = (unsigned int)puVar2;
          FUN_00233f4c(param_1,0);
          return;
        }
        *(unsigned char *)(param_1 + 0x84) = 0x6a;
        param_1[0x88] = 100;
        piVar4 = (int *)param_1[0x82];
        param_1[1] = 0x11;
        param_1[2] = 0;
        if (piVar4 != (int *)0x0) {
          (**(romwright_code **)(*piVar4 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if (temp_v0 != 4) {
      if (temp_v0 != 5) {
        if (temp_v0 == 9999) {
          FUN_00234004(param_1,3);
        }
      }
      else {
        temp_v1 = FUN_0019dfbc(param_1[0xd6]);
        if (temp_v1 == 2) {
          temp_v1 = FUN_00297674();
          if (temp_v1 != 0) {
            if (temp_v1 == 1) {
              param_1[2] = 2;
            }
            return;
          }
          piVar4 = (int *)param_1[0x82];
          param_1[1] = 0xf;
          param_1[2] = 0;
          if (piVar4 == (int *)0x0) {
            return;
          }
          (**(romwright_code **)(*piVar4 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if ((*param_1 & 0x1000) == 0) {
      temp_v1 = FUN_002bf41c(*puVar8);
      if (temp_v1 != 0) {
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          FUN_002b9008();
        }
        *param_1 = *param_1 & 0xffffcfff;
        FUN_002c45b8(*puVar8,0);
      }
      if ((*param_1 & 2) != 0) {
        param_1[2] = 5;
        temp_v2 = FUN_00291018(param_1[0xd4],&LAB_00392abc);
        FUN_002971e4(param_1[0xd6],temp_v2);
      }
      else {
        param_1[1] = 5;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
      }
      temp_v0 = *param_1 & 0xfffffffd;
      *param_1 = temp_v0;
      return;
    }
  }
  else if ((*param_1 & 0x2000) != 0) {
    temp_v1 = FUN_0026f0d8(0x10);
    if ((temp_v1 != 0) ||
       ((((*param_1 & 0x2000) != 0 && (*puVar2 != 0xffffffff)) &&
        (temp_v1 = FUN_0029d8fc((int)(short)*puVar2), temp_v1 == 6)))) {
      FUN_002bc200(0x100016d);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          FUN_002b9008();
        }
      }
      param_1[2] = 4;
      return;
    }
    temp_v1 = FUN_0026f0d8(0xb);
    if (temp_v1 != 0) {
      FUN_002bc200(0x100016d);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          FUN_002b9008();
        }
      }
      param_1[2] = 4;
      temp_v0 = *param_1 | 2;
      *param_1 = temp_v0;
      return;
    }
  }
  return;
}
