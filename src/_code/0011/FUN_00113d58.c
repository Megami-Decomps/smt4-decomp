/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113d58` (_code @ 0x113d58, 0x618 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp248; /* 0x248: local_248 */
} void_stack;

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */
extern signed char DAT_00465000; /* 0x465000 */
extern unsigned int DAT_00465004; /* 0x465004 */
extern int *DAT_0046500c; /* 0x46500c */
extern unsigned int DAT_00465010; /* 0x465010 */
extern unsigned int DAT_00465024; /* 0x465024 */
extern unsigned int DAT_00465124; /* 0x465124 */

/* Supplied declaration required: FUN_00138f5c. */
/* Supplied declaration required: FUN_002b93f0. */
extern int FUN_002b9408(int *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002b9426. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002bce48. */
extern int FUN_002bf798(unsigned int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c3628. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5450. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c6388. */


void FUN_00113d58(void)

{
/* irregular: 1 goto(s); 15 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  char *pcVar3;
  unsigned short *puVar4;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar7;
  int *piVar8;
  int temp_v2;
  unsigned int uStack_244;
  int uStack_240;
  unsigned char temp_v3 [512];
  char *temp_v4;
  unsigned int uStack_38;
  unsigned char temp_v5 [4];
  int temp_v6;
  unsigned int temp_v7;
  
  do {
    FUN_002c3628(&DAT_00465024);
    if (DAT_00465000 != '\0') {
      return;
    }
    uStack_240 = DAT_00465010;
    temp_v2 = -1;
    uStack_244 = 0xffffffff;
    puVar1 = temp_v3;
    FUN_002c42fc(puVar1,&uStack_240,1,0);
    if ((int)puVar1 < 0) {
      FUN_002c5468();
    }
    piVar8 = DAT_0046500c;
    piVar2 = &temp_v2;
    FUN_002c5450(&temp_v2,DAT_00465010,1);
    while( 1 ) {
      if ((int)piVar2 < 0) {
        FUN_002c5468();
      }
      if (piVar8 == (int *)0x0) break;
      if (DAT_00465000 != '\0') {
        return;
      }
      if (!(*piVar8 == 4 || *piVar8 == 5)) {
        if (piVar8[0x4e] != 0) {
          uStack_240 = DAT_00465010;
          temp_v2 = -1;
          uStack_244 = 0xffffffff;
          puVar1 = temp_v3;
          FUN_002c42fc(puVar1,&uStack_240,1,0);
          if ((int)puVar1 < 0) {
            FUN_002c5468();
          }
          (*(romwright_code *)piVar8[0x4e])(piVar8 + 0xb);
          piVar8[0x4e] = 0;
          piVar2 = &temp_v2;
          FUN_002c5450(&temp_v2,DAT_00465010,1);
          if ((int)piVar2 < 0) {
            FUN_002c5468();
          }
        }
        switch(*piVar8) {
        case 0:
          pcVar3 = (char *)0x18;
          FUN_002c23f8();
          if (pcVar3 != (char *)0x0) {
            pcVar3[4] = '\0';
            pcVar3[5] = '\0';
            pcVar3[6] = '\0';
            pcVar3[7] = '\0';
            pcVar3[8] = '\0';
            pcVar3[9] = '\0';
            pcVar3[10] = '\0';
            pcVar3[0xb] = '\0';
            pcVar3[0xc] = '\0';
            pcVar3[0xd] = '\0';
            pcVar3[0xe] = '\0';
            pcVar3[0xf] = '\0';
            pcVar3[0x10] = '\0';
            pcVar3[0x11] = '\0';
            pcVar3[0x12] = '\0';
            pcVar3[0x13] = '\0';
            pcVar3[0x14] = '\0';
            pcVar3[0x15] = '\0';
            pcVar3[0x16] = '\0';
            pcVar3[0x17] = '\0';
            pcVar3[0] = -0x50;
            pcVar3[1] = '\b';
            pcVar3[2] = 'B';
            pcVar3[3] = '\0';
            pcVar3[0] = -0x50;
            pcVar3[1] = '\b';
            pcVar3[2] = 'B';
            pcVar3[3] = '\0';
          }
          piVar8[0x4b] = (int)pcVar3;
          temp_v4 = pcVar3 + 4;
          temp_v6 = 0;
          temp_v7 = 0;
          uStack_38 = 1;
          piVar7 = piVar8 + 0xb;
          FUN_002b9426(&temp_v6);
          piVar2 = &temp_v2;
          while ((temp_v1 = FUN_002b9408(piVar7,0x105,(unsigned int *)&temp_v6), temp_v1 != 0 &&
                 (puVar4 = (unsigned short *)piVar2, FUN_002c6388(piVar2,piVar7,temp_v1,&temp_v6),
                 puVar4 != (unsigned short *)0x0))) {
            piVar2 = (int *)((int)piVar2 + 2);
            piVar7 = (int *)((int)piVar7 + temp_v1);
          }
          *(unsigned short *)piVar2 = 0;
          temp_v4[0xc] = '\0';
          temp_v4[0xd] = '\0';
          temp_v4[0xe] = '\0';
          temp_v4[0xf] = '\0';
          temp_v4[0x10] = '\0';
          temp_v4[0x11] = '\0';
          temp_v4[0x12] = '\0';
          temp_v4[0x13] = '\0';
          temp_v4[4] = '\0';
          temp_v4[5] = '\0';
          temp_v4[6] = '\0';
          temp_v4[7] = '\0';
          temp_v4[8] = '\0';
          temp_v4[9] = '\0';
          temp_v4[10] = '\0';
          temp_v4[0xb] = '\0';
          pcVar3 = temp_v4;
          FUN_002bb8e4(temp_v4,&temp_v2,uStack_38);
          if (((unsigned int)pcVar3 & 0x80000000) != 0) {
            *piVar8 = 5;
          }
          temp_v1 = (**(romwright_code **)(*(int *)piVar8[0x4b] + 0x24))();
          piVar8[6] = temp_v1;
          temp_v2 = 0;
          (**(romwright_code **)(*(int *)piVar8[0x4b] + 0xc))();
          if (piVar8[3] == 0) {
            temp_v1 = piVar8[9];
            if (temp_v1 != 0x10) {
              if (temp_v1 != 1) {
                if (temp_v1 != 0x11) {
                  temp_v2 = piVar8[10];
                  uStack_244 = 1;
                  temp_v1 = FUN_002bf798(0x100,0x100,0,piVar8[6]);
                  piVar8[3] = temp_v1;
                }
                else {
                  temp_v2 = piVar8[10];
                  uStack_244 = 0;
                  temp_v1 = FUN_002bf798(0x10000,0x100,0,piVar8[6]);
                  piVar8[3] = temp_v1;
                }
              }
              else {
                temp_v2 = piVar8[10];
                uStack_244 = 1;
                temp_v1 = FUN_002bf798(0x10000,0x100,0,piVar8[6]);
                piVar8[3] = temp_v1;
              }
            }
            else {
              temp_v2 = piVar8[10];
              uStack_244 = 0;
              temp_v1 = FUN_002bf798(0x100,0x100,0,piVar8[6]);
              piVar8[3] = temp_v1;
            }
          }
          FUN_002c3aa8(DAT_00465124);
          DAT_00465004 = 1;
          temp_v0 = (**(romwright_code **)(*(int *)piVar8[0x4b] + 0x28))
                            ((int *)piVar8[0x4b],temp_v5,piVar8[3],piVar8[6]);
          DAT_00465004 = 0;
          FUN_002c3a24(DAT_00465124);
          if ((temp_v0 & 0x80000000) != 0) {
            *piVar8 = 5;
          }
          temp_v1 = piVar8[0x4b];
          if ((*(unsigned int *)(temp_v1 + 4) & 0xfffffffe) != 0) {
            if ((*(unsigned int *)(temp_v1 + 4) & 1) != 0) {
              FUN_002bce48();
            }
            FUN_002b93f0(*(unsigned int *)(temp_v1 + 4) & 0xfffffffe);
            *(unsigned int *)(temp_v1 + 4) = 0;
          }
          if ((int *)piVar8[0x4b] != (int *)0x0) {
            (**(romwright_code **)(*(int *)piVar8[0x4b] + 4))();
          }
          *piVar8 = 3;
          piVar8[0x4b] = 0;
        case 3:
          *piVar8 = 4;
        }
        if ((*piVar8 == 4 || *piVar8 == 5) && (piVar8[0x4c] != 0)) {
          uStack_240 = DAT_00465010;
          temp_v2 = -1;
          uStack_244 = 0xffffffff;
          puVar1 = temp_v3;
          FUN_002c42fc(puVar1,&uStack_240,1,0);
          if ((int)puVar1 < 0) {
            FUN_002c5468();
          }
          piVar2 = (int *)piVar8[0x4d];
          if ((int *)piVar8[0x4d] == (int *)0x0) {
            piVar2 = piVar8;
          }
          (*(romwright_code *)piVar8[0x4c])(piVar2);
          piVar2 = &temp_v2;
          FUN_002c5450(&temp_v2,DAT_00465010,1);
joined_r0x00114278:
          if ((int)piVar2 < 0) {
            FUN_002c5468();
          }
        }
        uStack_240 = DAT_00465010;
        temp_v2 = -1;
        uStack_244 = 0xffffffff;
        puVar1 = temp_v3;
        FUN_002c42fc(puVar1,&uStack_240,1,0);
        if ((int)puVar1 < 0) {
          FUN_002c5468();
        }
        piVar8 = (int *)piVar8[0x4f];
        piVar2 = &temp_v2;
        FUN_002c5450(&temp_v2,DAT_00465010,1);
      }
      else {
        uStack_240 = DAT_00465010;
        temp_v2 = -1;
        uStack_244 = 0xffffffff;
        puVar1 = temp_v3;
        FUN_002c42fc(puVar1,&uStack_240,1,0);
        if ((int)puVar1 < 0) {
          FUN_002c5468();
        }
        temp_v1 = piVar8[1];
        piVar8[1] = temp_v1 - piVar8[2];
        if (0 < temp_v1 - piVar8[2]) {
          piVar2 = &temp_v2;
          FUN_002c5450(&temp_v2,DAT_00465010,1);
          goto joined_r0x00114278;
        }
        temp_v1 = piVar8[0x50];
        piVar7 = (int *)piVar8[0x4f];
        if (temp_v1 != 0) {
          *(int **)(temp_v1 + 0x13c) = piVar7;
          if (piVar7 != (int *)0x0) {
            piVar7[0x50] = temp_v1;
          }
        }
        else {
          DAT_0046500c = piVar7;
          if (piVar7 != (int *)0x0) {
            piVar7[0x50] = 0;
          }
        }
        if ((piVar8[4] == 0) && (piVar8[3] != 0)) {
          FUN_002c4360();
        }
        piVar8[3] = 0;
        FUN_002c4360(piVar8);
        piVar2 = &temp_v2;
        FUN_002c5450(&temp_v2,DAT_00465010,1);
        piVar8 = piVar7;
      }
    }
    if (DAT_00465000 != '\0') {
      return;
    }
    FUN_00138f5c(&DAT_00465024);
    FUN_002bb490(&LAB_002dc6c0,0);
  } while( 1 );
}
