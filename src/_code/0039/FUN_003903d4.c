/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003903d4` (_code @ 0x3903d4, 0x814 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_00390b34; /* 0x390b34 */
extern unsigned char LAB_00390b44; /* 0x390b44 */
extern unsigned char LAB_00390b58; /* 0x390b58 */
extern unsigned char LAB_00390b68; /* 0x390b68 */
extern unsigned char LAB_00390b74; /* 0x390b74 */
extern unsigned char LAB_00390b84; /* 0x390b84 */
extern unsigned int *DAT_00432fc8; /* 0x432fc8 */

extern int FUN_0019dfbc(unsigned int);
extern int FUN_00233538(unsigned int *, unsigned int);
extern unsigned int FUN_00233584(unsigned int *);
/* Supplied declaration required: FUN_00233598. */
/* Supplied declaration required: FUN_002335a4. */
/* Supplied declaration required: FUN_0023378c. */
/* Supplied declaration required: FUN_002337a0. */
/* Supplied declaration required: FUN_00233ac0. */
/* Supplied declaration required: FUN_00234920. */
/* Supplied declaration required: FUN_00234b08. */
/* Supplied declaration required: FUN_00234b30. */
extern int FUN_00240e8c(unsigned int *);
extern int FUN_0026f0d8(unsigned int);
/* Supplied declaration required: FUN_00286c5c. */
/* Supplied declaration required: FUN_00287590. */
extern int FUN_002876d0(unsigned int);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
extern int FUN_0029d8fc(int);
extern int FUN_002a1578(unsigned int *);
extern int FUN_002af894(int);
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_00394338(int);
/* Supplied declaration required: FUN_003c2fac. */
/* Supplied declaration required: FUN_003c306c. */
/* Supplied declaration required: FUN_003c3118. */


void FUN_003903d4(unsigned int *param_1)

{
/* irregular: 4 goto(s); 20 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar6;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  unsigned int temp_v9;
  unsigned int *puStack_9c;
  unsigned int *temp_v10;
  int temp_v11;
  
  puVar1 = DAT_00432fc8;
  temp_v10 = param_1 + 0x70c;
  switch(param_1[2]) {
  case 0:
    FUN_002b8584(0);
    *param_1 = *param_1 & 0xfffeffff;
    FUN_00234b30(&temp_v9,puVar1 + 10,puVar1 + 6);
    temp_v7 = temp_v9;
    temp_v8 = puStack_9c;
    temp_v2 = FUN_002a1578(&temp_v7);
    if (temp_v2 < 0) {
      param_1[2] = 9999;
      *(unsigned char *)(param_1 + 0x84) = 100;
      param_1[0x85] = temp_v7;
      param_1[0x86] = (unsigned int)temp_v8;
    }
    else {
      FUN_00234b08(puVar1 + 10);
      param_1[2] = 1;
      param_1[0x44a] = 0;
      param_1[1099] = 0;
      temp_v2 = FUN_002337a0(param_1 + 0x90);
      puVar1 = DAT_00432fc8;
      temp_v4 = FUN_0023378c(DAT_00432fc8,temp_v2);
      if ((temp_v4 != 0) && (temp_v2 = puVar1[0x19e] + temp_v2 * 0x9c8, temp_v2 != 0)) {
        if (*(char *)(temp_v2 + 0x9b3) != '\0') {
          puVar1 = DAT_00432fc8;
          FUN_00234920(DAT_00432fc8,0xffffffff);
          temp_v7 = 3;
          temp_v9 = 0xc;
          temp_v8 = puVar1;
          FUN_00296d8c(*temp_v10,3,0xffffffff,0);
        }
        else {
          temp_v8 = (unsigned int *)(temp_v2 + 0x180);
          temp_v7 = 3;
          FUN_00286c5c(*temp_v10,3,0xffffffff,0);
        }
      }
      *(unsigned char *)(param_1 + 0xd3) = 1;
      temp_v2 = FUN_002876d0(0x1000059);
      if (temp_v2 != 1) {
        FUN_00287590(0x1000059);
        return;
      }
    }
    break;
  case 1:
    temp_v11 = FUN_002337a0(param_1 + 0x90);
    FUN_002335a4(param_1 + 0x90);
    temp_v8 = param_1 + 0x90;
    temp_v3 = param_1[0xae];
    puVar3 = param_1 + 0xad;
    temp_v5 = temp_v3 != 0xffffffff;
    if (temp_v5) {
      temp_v3 = param_1[0xaf];
    }
    temp_v6 = temp_v3 != 0xffffffff;
    if (temp_v5 && temp_v6) {
      temp_v3 = param_1[0xb0];
    }
    if ((temp_v5 && temp_v6) && temp_v3 != 0xffffffff) {
      FUN_003c306c(puVar3);
      temp_v2 = FUN_00240e8c(temp_v8);
      temp_v4 = 0;
      if (temp_v4 < (int)param_1[0xb0]) {
        do {
          temp_v5 = 0;
          temp_v0 = FUN_002af894((int)*(short *)((int)puVar3 + temp_v4 * 2 + 0x18));
          if (temp_v0 != 0) {
            if (temp_v4 != temp_v2) {
              *(unsigned char *)((int)param_1 + 0x2e6) = 1;
              FUN_003c2fac(temp_v8,temp_v4);
              if ((char)param_1[0xb1] != '\0' && temp_v4 != temp_v2) {
                FUN_00233598();
              }
              break;
            }
            *(unsigned char *)((int)param_1 + 0x2e6) = 0;
          }
          else {
            temp_v0 = FUN_0029d8fc((int)*(short *)((int)puVar3 + temp_v4 * 2 + 0x18));
            if (((temp_v0 == 1) || (temp_v0 == 2)) && (temp_v4 != temp_v2)) {
              temp_v5 = 1;
            }
            temp_v6 = temp_v4 == temp_v2 && temp_v0 == 6;
            if (temp_v4 == temp_v2 && temp_v0 == 6) {
              temp_v6 = *(char *)((int)param_1 + 0x2e6) == '\0';
            }
            if (temp_v6) {
              *(unsigned char *)((int)param_1 + 0x2c6) = 1;
              *(short *)(param_1 + 0xb2) = (short)temp_v4;
              break;
            }
            if (temp_v5) {
              FUN_003c2fac(temp_v8,temp_v4);
              if ((char)param_1[0xb1] != '\0' && temp_v4 != temp_v2) {
                FUN_00233598();
              }
              break;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)param_1[0xb0]);
      }
    }
    FUN_003c3118(param_1 + 0xba,param_1 + 0x90);
    temp_v2 = FUN_002337a0(param_1 + 0x90);
    if (temp_v2 != temp_v11) {
      temp_v2 = FUN_002337a0(param_1 + 0x90);
      puVar3 = DAT_00432fc8;
      temp_v4 = FUN_0023378c(DAT_00432fc8,temp_v2);
      if ((temp_v4 != 0) && (temp_v2 = puVar3[0x19e] + temp_v2 * 0x9c8, temp_v2 != 0)) {
        if (*(char *)(temp_v2 + 0x9b3) != '\0') {
          puVar3 = DAT_00432fc8;
          FUN_00234920(DAT_00432fc8,0xffffffff);
          temp_v7 = 3;
          temp_v9 = 0xc;
          temp_v8 = puVar3;
          FUN_00296d8c(*temp_v10,3,0xffffffff,0);
        }
        else {
          temp_v8 = (unsigned int *)(temp_v2 + 0x180);
          temp_v7 = 3;
          FUN_00286c5c(*temp_v10,3,0xffffffff,0);
        }
      }
      FUN_00233ac0(param_1,2,0);
    }
    if (*(char *)((int)param_1 + 0x2c6) != '\0') {
      temp_v1 = FUN_00233584(param_1 + 0xad);
      temp_v2 = FUN_00233538(param_1 + 0x90,temp_v1);
      if (temp_v2 != 0) {
        temp_v1 = FUN_002337a0(param_1 + 0x90);
        temp_v2 = FUN_0023378c(puVar1,temp_v1);
        if (temp_v2 != 0) {
          temp_v2 = FUN_002337a0(param_1 + 0x90);
          if (*(char *)(puVar1[0x19e] + temp_v2 * 0x9c8 + 0x9b3) != '\0') {
LAB_003909e8:
            param_1[2] = 6;
            temp_v1 = FUN_00291018(param_1[0xd4],&LAB_00390b74);
            FUN_002971e4(param_1[0xd6],temp_v1);
            FUN_002bc200(0x100016d);
            *(unsigned char *)(param_1 + 0xd3) = 0;
            return;
          }
          temp_v2 = FUN_002337a0(param_1 + 0x90);
          temp_v2 = FUN_00394338(puVar1[0x19e] + temp_v2 * 0x9c8);
          if (temp_v2 == 0) goto LAB_0039084c;
          if (temp_v2 == 1) goto LAB_0039089c;
          if (temp_v2 == 2) goto LAB_003908ec;
        }
      }
    }
    else {
      temp_v2 = FUN_0026f0d8(0xc);
      if (temp_v2 != 0) {
LAB_0039084c:
        param_1[2] = 2;
        temp_v1 = FUN_00291018(param_1[0xd4],&LAB_00390b34);
        FUN_002971e4(param_1[0xd6],temp_v1);
        FUN_002bc200(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026f0d8(0xd);
      if (temp_v2 != 0) {
LAB_0039089c:
        param_1[2] = 3;
        temp_v1 = FUN_00291018(param_1[0xd4],&LAB_00390b44);
        FUN_002971e4(param_1[0xd6],temp_v1);
        FUN_002bc200(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026f0d8(0xe);
      if (temp_v2 != 0) {
LAB_003908ec:
        param_1[2] = 4;
        temp_v1 = FUN_00291018(param_1[0xd4],&LAB_00390b58);
        FUN_002971e4(param_1[0xd6],temp_v1);
        FUN_002bc200(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026f0d8(0xb);
      if (temp_v2 != 0) {
        param_1[2] = 5;
        temp_v1 = FUN_00291018(param_1[0xd4],&LAB_00390b68);
        FUN_002971e4(param_1[0xd6],temp_v1);
        FUN_002bc200(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026f0d8(10);
      if (temp_v2 != 0) {
        param_1[1] = 0xc;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
        FUN_002b8584(1);
        FUN_002bc200(0x100016d);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_0026f0d8(0xf);
      if (temp_v2 != 0) goto LAB_003909e8;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    temp_v2 = FUN_002337a0(param_1 + 0x90);
    temp_v3 = puVar1[0x19e];
    FUN_002c4b30(&temp_v7,0x80);
    FUN_002be7fc(&temp_v7,&LAB_00390b84,temp_v3 + temp_v2 * 0x9c8);
    FUN_00295904(0,&temp_v7);
    FUN_002b8584(1);
    temp_v2 = FUN_0019dfbc(param_1[0xd6]);
    if (temp_v2 == 2) {
      temp_v2 = FUN_00297674();
      if (temp_v2 != 0) {
        if (temp_v2 == 1) {
          param_1[2] = 0;
        }
        return;
      }
      temp_v3 = param_1[2];
      if (temp_v3 != 2) {
        if (temp_v3 != 3) {
          if (temp_v3 != 4) {
            if (temp_v3 != 5) {
              if (temp_v3 != 6) {
                return;
              }
              piVar6 = (int *)param_1[0x82];
              param_1[1] = 0xd;
              param_1[2] = 0;
              if (piVar6 == (int *)0x0) {
                return;
              }
            }
            else {
              piVar6 = (int *)param_1[0x82];
              param_1[1] = 0xf;
              param_1[2] = 0;
              if (piVar6 == (int *)0x0) {
                return;
              }
            }
          }
          else {
            piVar6 = (int *)param_1[0x82];
            param_1[1] = 9;
            param_1[2] = 0;
            if (piVar6 == (int *)0x0) {
              return;
            }
          }
        }
        else {
          piVar6 = (int *)param_1[0x82];
          param_1[1] = 8;
          param_1[2] = 0;
          if (piVar6 == (int *)0x0) {
            return;
          }
        }
      }
      else {
        piVar6 = (int *)param_1[0x82];
        param_1[1] = 7;
        param_1[2] = 0;
        if (piVar6 == (int *)0x0) {
          return;
        }
      }
      (**(romwright_code **)(*piVar6 + 4))();
      param_1[0x82] = 0;
      return;
    }
  }
  return;
}
