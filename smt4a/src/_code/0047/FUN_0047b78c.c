/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047b78c` (_code @ 0x47b78c, 0x4d4 bytes) from smt4a.cxi.
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

extern int FUN_0047a1e0(); /* 0x47a1e0 */
extern unsigned char LAB_0047a298; /* 0x47a298 */
extern unsigned char LAB_0047bc80; /* 0x47bc80 */
extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_00184528. */
extern int FUN_001d10ac(unsigned int *);
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_00284140(int);
extern int FUN_002a4b74(void);
extern int FUN_002e1a18(unsigned int);
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00429f38. */
/* Supplied declaration required: FUN_00474734. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: FUN_0047b1e4. */
/* Supplied declaration required: FUN_0047bc90. */
/* Supplied declaration required: FUN_0047bcdc. */
extern int FUN_0047dae0(unsigned int *);
/* Supplied declaration required: FUN_0047daf4. */


void FUN_0047b78c(unsigned int *param_1)

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
  
  FUN_0047daf4(&temp_v3);
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
              FUN_00184528(param_1 + 0x5ec,0);
              FUN_00184528(param_1 + 0x5ec,1);
              pcVar5 = "Aoc guide CALC";
              FUN_0014e38c("Aoc guide CALC",4,0,0,FUN_0047a1e0,0,param_1);
              *puVar8 = (unsigned int)pcVar5;
              FUN_0015155c("Aoc guide DOWN",0xec,1,0,&LAB_0047a298,0,param_1,pcVar5);
            }
            param_1[2] = 3;
            *param_1 = *param_1 | 0x10;
            *(unsigned char *)(DAT_00570260 + 0xd50) = 3;
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
          temp_v1 = FUN_0047dae0(&temp_v3);
          if (temp_v1 != 0) {
            *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) | 0x100;
            FUN_00477d10(param_1,1);
            param_1[2] = 2;
            FUN_0047b1e4(param_1);
            return;
          }
          temp_v1 = FUN_001d10ac(&temp_v3);
          if (temp_v1 != 0) {
            FUN_0047b1e4(param_1);
            if ((temp_v3 & 0xff) == 0x66) {
              temp_v5 = temp_v3;
              uStack_34 = uStack_5c;
              uStack_30 = uStack_58;
              uStack_2c = uStack_54;
              uStack_28 = uStack_50;
              FUN_0047bc90(param_1,&temp_v5);
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
        FUN_00429f38();
        if (temp_v0 != 0) {
          puVar2 = param_1 + 0x83;
          FUN_00474734(puVar2,0);
          param_1[2] = 1;
          param_1[0x82] = (unsigned int)puVar2;
          FUN_0047bcdc(param_1,0);
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
          FUN_00476e58(param_1,3);
        }
      }
      else {
        temp_v1 = FUN_00224880(param_1[0xd6]);
        if (temp_v1 == 2) {
          temp_v1 = FUN_002a4b74();
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
      temp_v1 = FUN_00163e40(*puVar8);
      if (temp_v1 != 0) {
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          FUN_001641c4();
        }
        *param_1 = *param_1 & 0xffffcfff;
        FUN_001631d0(*puVar8,0);
      }
      if ((*param_1 & 2) != 0) {
        param_1[2] = 5;
        temp_v2 = FUN_00357bc8(param_1[0xd4],&LAB_0047bc80);
        FUN_00275f44(param_1[0xd6],temp_v2);
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
    temp_v1 = FUN_002e1a18(0x10);
    if ((temp_v1 != 0) ||
       ((((*param_1 & 0x2000) != 0 && (*puVar2 != 0xffffffff)) &&
        (temp_v1 = FUN_00284140((int)(short)*puVar2), temp_v1 == 6)))) {
      FUN_001641b4(0x100020e);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          FUN_001641c4();
        }
      }
      param_1[2] = 4;
      return;
    }
    temp_v1 = FUN_002e1a18(0xb);
    if (temp_v1 != 0) {
      FUN_001641b4(0x100020e);
      if ((*param_1 & 0x1000) != 0) {
        *puVar7 = 2;
        *param_1 = *param_1 & 0xffffdfff;
        if (*puVar2 != 0xffffffff) {
          *puVar2 = 0xffffffff;
          FUN_001641c4();
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
