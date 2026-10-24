/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da0ec` (_code @ 0x3da0ec, 0x4b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ActionController.h"

extern "C" {

int FUN_002a0428(...);
int FUN_002a5960(...);
int _ZN9Obj42111cC1Ej(...);

int actionSequenceDispatchTriggers(...);
int actionSequenceUpdateLoopTransition(...);
int FUN_00226fc0(int);
int FUN_0023aa28(unsigned int, unsigned int *, int);
int animationSelectThirdPart(...);
int FUN_0024679c(void);
int FUN_00249e54(unsigned int, char *);
int FUN_002505c0(...);
int FUN_00257e74(unsigned int);
int asdOperatorNew(void);
int FUN_0034c7a8(unsigned int, float *);
int animationSelectSecondPart(...);
int animationSelectFirstPart(unsigned int);
int deadEffectStartLoad(void);
int FUN_003dc19c(int);
void battleActionFinishPlacement(ActionController*);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nw_ut_ResDicPatricia_Get(...);
int rt_memcpy_w(float *, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_1_stack;

extern int nw_anim_PlayPolicy_Loop(...); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */
extern unsigned char DAT_00421468; /* 0x421468 */
extern unsigned char DAT_00421570; /* 0x421570 */
extern unsigned char DAT_00422058; /* 0x422058 */
extern unsigned char DAT_0042208c; /* 0x42208c */
extern int DAT_004398d4; /* 0x4398d4 */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x476634 */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: actionSequenceDispatchTriggers. */
/* Supplied declaration required: actionSequenceUpdateLoopTransition. */
/* Supplied declaration required: FUN_00226fc0. */
extern int rangeIsValid(void);
/* Supplied declaration required: FUN_0023aa28. */
/* Supplied declaration required: animationSelectThirdPart. */
extern int FUN_00246708(void);
/* Supplied declaration required: FUN_0024679c. */
/* Supplied declaration required: FUN_00249e54. */
extern unsigned int keyedRecordRegisterName(int);
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00257e74. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a5960. */
/* Supplied declaration required: _ZN9Obj42111cC1Ej. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: asdOperatorNew. */
extern int *asdMemoryGetDefaultAllocator(void);
extern unsigned int libc_strlen(int *);
extern int asdMdlManagerCreateFromSourceB(int, unsigned int, unsigned short);
/* Supplied declaration required: FUN_0034c7a8. */
/* Supplied declaration required: animationSelectSecondPart. */
/* Supplied declaration required: animationSelectFirstPart. */
/* Supplied declaration required: deadEffectStartLoad. */
extern unsigned int _ZN9Obj4209ccC1Ev(void);
/* Supplied declaration required: FUN_003dc19c. */
/* Supplied declaration required: battleActionFinishPlacement. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_ut_ResDicPatricia_Get. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003da0ec(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_d8; 24 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  float temp_v2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  romwright_code *pcVar7;
  float temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int **ppiVar14;
  float *pfVar15;
  unsigned int temp_v9;
  int *piVar17;
  int temp_v10;
  int *unaff_r4;
  unsigned int temp_v11;
  char *pcVar20;
  unsigned int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int temp_v16;
  unsigned long long temp_v17;
  unsigned long long in_d8;
  unsigned long long temp_v18;
  int *piStack_b8;
  float fStack_b4;
  float temp_v19;
  float temp_v20;
  int temp_v21;
  int *piStack_a4;
  int *piStack_a0;
  int iStack_9c;
  int iStack_98;
  unsigned int uStack_94;
  unsigned char *puStack_90;
  unsigned char *puStack_84;
  int iStack_80;
  unsigned char *puStack_74;
  unsigned char *puStack_68;
  int *piStack_64;
  int aiStack_60 [5];
  int *piStack_4c;
  int iStack_48;
  unsigned long long uStack_38;
  unsigned int temp_v22;
  unsigned long long uStack_20;
  
  temp_v16 = 0;
  uStack_20 = in_d8;
  if (*(int *)(param_1 + 0x3058) != 0) {
    temp_v6 = rangeIsValid();
    if (temp_v6 != 0) {
      *(unsigned int *)(param_1 + 0x3064) = temp_v16;
      *(unsigned int *)(param_1 + 0x3060) = temp_v16;
    }
    else {
      FUN_00257e74(*(unsigned int *)(param_1 + 0x3058));
      FUN_0023aa28(*(unsigned int *)(param_1 + 0x3058),(unsigned int *)(param_1 + 0x3060),
                   param_1 + 0x3064);
    }
    if (*(int *)(param_1 + 0x304c) != 0) {
      temp_v6 = *(int *)(param_1 + 0x3048);
      temp_v21 = *(int *)(temp_v6 + 0x14);
      temp_v19 = *(float *)(temp_v6 + 0xc) + *(float *)(param_1 + 0x3060);
      temp_v20 = *(float *)(temp_v6 + 0x10) + *(float *)(param_1 + 0x3064);
      FUN_0034c7a8(*(unsigned int *)(param_1 + 0x304c),&temp_v19);
    }
  }
  if (*(int *)(param_1 + 0x305c) != 0) {
    temp_v6 = rangeIsValid();
    if (temp_v6 != 0) {
      *(unsigned int *)(param_1 + 0x306c) = temp_v16;
      *(unsigned int *)(param_1 + 0x3068) = temp_v16;
    }
    else {
      FUN_00257e74(*(unsigned int *)(param_1 + 0x305c));
      FUN_0023aa28(*(unsigned int *)(param_1 + 0x305c),(unsigned int *)(param_1 + 0x3068),
                   param_1 + 0x306c);
    }
    temp_v6 = DAT_004398d4;
    *(unsigned int *)(DAT_004398d4 + 0x90) = *(unsigned int *)(param_1 + 0x3060);
    *(unsigned int *)(temp_v6 + 0x94) = *(unsigned int *)(param_1 + 0x3064);
  }
  switch(*(unsigned char *)(param_1 + 0x3040)) {
  case 1:
    FUN_003dc19c(param_1);
    *(unsigned char *)(param_1 + 0x3040) = 2;
    break;
  case 2:
    temp_v6 = 0;
    do {
      rt_memcpy_w(&temp_v19,param_1 + temp_v6 * 0x8c + 0x3070,0x8c);
      if (((temp_v22 & 1) != 0) && (temp_v20 == 0.0f)) goto LAB_003da57c;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    temp_v6 = 0;
    do {
      temp_v7 = param_1 + temp_v6 * 0x8c;
      pcVar20 = *(char **)(temp_v7 + 0x3074);
      temp_v0 = *pcVar20;
      temp_v14 = temp_v0 == 'V';
      if (temp_v14) {
        temp_v0 = pcVar20[1];
      }
      temp_v15 = temp_v14 && temp_v0 == 'E';
      if (temp_v14 && temp_v0 == 'E') {
        temp_v15 = pcVar20[2] == 'R';
      }
      if (temp_v15) {
        temp_v16 = keyedRecordRegisterName(temp_v7 + 0x3078);
        *(char *)(temp_v7 + 0x3070) = (char)temp_v16;
        FUN_00249e54(temp_v16,pcVar20);
        *(char *)(temp_v7 + 0x3070) = (char)temp_v16;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    FUN_0024679c();
    *(unsigned char *)(param_1 + 0x3040) = 4;
    break;
  case 3:
    temp_v6 = 0;
    do {
      temp_v7 = param_1 + temp_v6 * 0x8c;
      pcVar20 = *(char **)(temp_v7 + 0x3074);
      temp_v0 = *pcVar20;
      temp_v14 = temp_v0 == 'V';
      if (temp_v14) {
        temp_v0 = pcVar20[1];
      }
      temp_v15 = temp_v14 && temp_v0 == 'E';
      if (temp_v14 && temp_v0 == 'E') {
        temp_v15 = pcVar20[2] == 'R';
      }
      if (temp_v15) {
        temp_v16 = keyedRecordRegisterName(temp_v7 + 0x3078);
        *(char *)(temp_v7 + 0x3070) = (char)temp_v16;
        FUN_00249e54(temp_v16,pcVar20);
        *(char *)(temp_v7 + 0x3070) = (char)temp_v16;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    FUN_0024679c();
    *(unsigned char *)(param_1 + 0x3040) = 4;
    break;
  case 4:
    temp_v6 = FUN_00246708();
    if (temp_v6 != 0) {
      temp_v22 = *(int *)(param_1 + 0x304c);
      if (temp_v22 != 0) goto code_r0x0034ca74;
      temp_v6 = 0x44;
      asdOperatorNew();
      temp_v16 = 0;
      if (temp_v6 != 0) {
        temp_v16 = _ZN9Obj4209ccC1Ev();
      }
      *(unsigned int *)(param_1 + 0x304c) = temp_v16;
      deadEffectStartLoad();
      *(unsigned char *)(param_1 + 0x3040) = 6;
    }
    break;
  case 5:
    temp_v22 = *(int *)(param_1 + 0x304c);
    if (temp_v22 != 0) goto code_r0x0034ca74;
    temp_v6 = 0x44;
    asdOperatorNew();
    temp_v16 = 0;
    if (temp_v6 != 0) {
      temp_v16 = _ZN9Obj4209ccC1Ev();
    }
    *(unsigned int *)(param_1 + 0x304c) = temp_v16;
    deadEffectStartLoad();
    *(unsigned char *)(param_1 + 0x3040) = 6;
    break;
  case 6:
    battleActionFinishPlacement(reinterpret_cast<ActionController*>(param_1));
    break;
  case 7:
    animationSelectFirstPart(*(unsigned int *)(param_1 + 0x304c));
    *(unsigned char *)(param_1 + 0x3040) = 8;
    FUN_00226fc0(param_1);
    temp_v1 = *(short *)(*(int *)(param_1 + 0x3054) + 4);
    temp_v19 = 0.0f;
    temp_v20 = 0.0f;
    temp_v21 = 0;
    if (!(temp_v1 == 0xf || temp_v1 == 0x10)) {
      FUN_002505c0(0,0,0x1000108,0);
    }
    else {
      FUN_002505c0(0,0,0x1000106,0);
    }
    break;
  case 8:
    FUN_00226fc0(param_1);
    break;
  case 9:
    animationSelectSecondPart(*(unsigned int *)(param_1 + 0x304c));
    *(unsigned char *)(param_1 + 0x3040) = 10;
    actionSequenceUpdateLoopTransition(param_1);
    break;
  case 10:
    actionSequenceUpdateLoopTransition(param_1);
    break;
  case 0xb:
    animationSelectThirdPart(*(unsigned int *)(param_1 + 0x304c));
    *(unsigned char *)(param_1 + 0x3040) = 0xc;
    actionSequenceDispatchTriggers(param_1);
    temp_v1 = *(short *)(*(int *)(param_1 + 0x3054) + 4);
    temp_v19 = 0.0f;
    temp_v20 = 0.0f;
    temp_v21 = 0;
    if (!(temp_v1 == 0xf || temp_v1 == 0x10)) {
      FUN_002505c0(0,0,0x1000109,0);
    }
    else {
      FUN_002505c0(0,0,0x1000107,0);
    }
    break;
  case 0xc:
    actionSequenceDispatchTriggers(param_1);
  }
LAB_003da57c:
  temp_v22 = *(int *)(param_1 + 0x304c);
  if (temp_v22 == 0) {
    return;
  }
code_r0x0034ca74:
  uStack_38 = uStack_20;
  switch(*(unsigned int *)(temp_v22 + 0x2c)) {
  case 1:
    if (*(int *)(temp_v22 + 0x24) != 0) {
      temp_v6 = asdMdlManagerCreateFromSourceB(*(int *)(temp_v22 + 0x24),*(unsigned int *)(temp_v22 + 0x28),
                            *(unsigned short *)(temp_v22 + 0x40));
      temp_v18 = 0x3f80000000000000;
      temp_v7 = 0;
      *(int *)(temp_v22 + 8) = temp_v6;
      temp_v6 = *(int *)(temp_v6 + 8);
      puStack_68 = &DAT_00421468;
      puStack_90 = &DAT_00422058;
      puStack_74 = &DAT_0042208c;
      puStack_84 = &DAT_00421570;
      do {
        piVar4 = (int *)(*(int *)(*(int *)(*(int *)(temp_v6 + 0x24) + temp_v7 * 4) + 8) + 0xc);
        temp_v8 = *piVar4;
        if (temp_v8 != 0) {
          unaff_r4 = (int *)(temp_v8 + (int)piVar4);
        }
        if (temp_v8 == 0) {
          unaff_r4 = (int *)0x0;
        }
        piVar4 = (int *)(*(int *)(*(int *)(temp_v6 + 4) + 0x18) + 0x68);
        temp_v8 = *piVar4;
        if (temp_v8 != 0) {
          piVar4 = (int *)((int)piVar4 + temp_v8);
        }
        else {
          piVar4 = (int *)0x0;
        }
        piStack_64 = piVar4;
        piStack_4c = unaff_r4;
        if (!(piVar4 == (int *)0x0 || unaff_r4 == (int *)0x0)) {
          temp_v16 = libc_strlen(unaff_r4);
          piVar4 = (int *)nw_ut_ResDicPatricia_Get(&piStack_64,unaff_r4,temp_v16);
          if (piVar4 != (int *)0x0) {
            piVar4 = piVar4 + 3;
            if (*piVar4 != 0) {
              temp_v8 = *piVar4 + (int)piVar4;
            }
            else {
              temp_v8 = 0;
            }
          }
          else {
            temp_v8 = 0;
          }
        }
        else {
          temp_v8 = 0;
        }
        if (temp_v8 != 0) {
          piVar17 = (int *)0x0;
          temp_v11 = *(unsigned int *)(temp_v8 + 0x18);
          piStack_a0 = (int *)(((unsigned int)piVar4 & 0xffffff00) | 1);
          iStack_48 = *(int *)(*(int *)(*(int *)(temp_v6 + 0x24) + temp_v7 * 4) + 0x228);
          temp_v12 = *(unsigned int *)(*(int *)(iStack_48 + 8) + 0x10);
          piVar5 = (int *)asdMemoryGetDefaultAllocator();
          piVar6 = (int *)(**(romwright_code **)(*piVar5 + 8))(piVar5,0x70,4);
          piVar4 = piVar17;
          if (piVar6 != (int *)0x0) {
            piVar6[1] = (int)piVar5;
            piVar6[2] = 0;
            piVar6[3] = 1;
            temp_v4 = (int)temp_v18;
            temp_v5 = (int)((unsigned long long)temp_v18 >> 0x20);
            temp_v17 = romwright_piece_4_4(temp_v4,temp_v5);
            *piVar6 = (int)puStack_68;
            piVar6[4] = 0;
            piVar6[5] = 0;
            piVar6[6] = 0;
            piVar6[7] = 0;
            piVar6[8] = 0;
            piVar6[9] = 0;
            piVar6[10] = 0;
            piVar6[0xb] = 0;
            piVar6[0xc] = (int)puStack_90;
            piVar6[0xd] = (int)puStack_74;
            piVar6[0xf] = temp_v4;
            piVar6[0xe] = temp_v4;
            piVar6[0x10] = temp_v5;
            piVar6[0x11] = temp_v4;
            piVar6[0x12] = temp_v5;
            piVar6[0x13] = (int)&LAB_00155650;
            piVar6[0x14] = 0;
            piVar6[0x15] = 0;
            *(unsigned char *)(piVar6 + 0x16) = 1;
            *(unsigned char *)((int)piVar6 + 0x59) = 0;
            *(unsigned char *)((int)piVar6 + 0x5a) = 0;
            *piVar6 = (int)puStack_84;
            *(unsigned char *)((int)piVar6 + 0x5b) = 0;
            *(unsigned char *)(piVar6 + 0x17) = 0;
            *(unsigned char *)((int)piVar6 + 0x5d) = 0;
            piVar6[0x18] = 0;
            piVar6[0x19] = 0;
            piVar6[0x1a] = 0;
            piVar6[0x1b] = 0;
            iStack_80 = (int)(char)(int)piStack_a0;
            piVar6[0x15] = temp_v8;
            piVar6[0x10] = temp_v5;
            piVar6[0x11] = temp_v4;
            piVar6[0x12] = *(int *)(temp_v8 + 0x14);
            piVar6[0xf] = temp_v4;
            piVar6[0xe] = temp_v4;
            if (*(char *)(temp_v8 + 0x10) == '\0') {
              pcVar7 = (romwright_code *)&LAB_00155650;
              piVar6[0x13] = (int)pcVar7;
            }
            else if (*(char *)(temp_v8 + 0x10) == '\x01') {
              pcVar7 = nw_anim_PlayPolicy_Loop;
              piVar6[0x13] = (int)pcVar7;
            }
            *(unsigned char *)(piVar6 + 0x16) = 1;
            temp_v3 = (float)(**(romwright_code **)(*(int *)piVar6[1] + 8))((int *)piVar6[1],temp_v12 << 2,4);
            if (temp_v3 == 0.0f) {
              piVar17 = (int *)0x80000000;
            }
            if (-1 < (int)piVar17) {
              ppiVar14 = (int **)(piVar6 + 4);
              temp_v2 = (float)(temp_v12 & 0x3fffffff);
              piStack_b8 = (int *)piVar6[1];
              fStack_b4 = temp_v3;
              temp_v20 = temp_v2;
              if (ppiVar14 != &piStack_b8) {
                fStack_b4 = (float)piVar6[5];
                temp_v20 = (float)piVar6[7];
                piStack_b8 = *ppiVar14;
                piVar6[7] = (int)temp_v2;
                piVar6[5] = (int)temp_v3;
                piVar6[6] = (int)temp_v3;
                *ppiVar14 = (int *)piVar6[1];
              }
              temp_v3 = 0.0f;
              if (piStack_b8 != (int *)0x0) {
                temp_v3 = fStack_b4;
              }
              temp_v19 = fStack_b4;
              if (piStack_b8 != (int *)0x0 && temp_v3 != 0.0f) {
                (**(romwright_code **)(*piStack_b8 + 0xc))(piStack_b8,fStack_b4);
              }
              temp_v4 = (**(romwright_code **)(*(int *)piVar6[1] + 8))((int *)piVar6[1],temp_v11 << 2,4);
              if (temp_v4 == 0) {
                piVar17 = (int *)0x80000000;
              }
              if (-1 < (int)piVar17) {
                ppiVar14 = (int **)(piVar6 + 8);
                piStack_a0 = (int *)piVar6[1];
                iStack_9c = temp_v4;
                uStack_94 = temp_v11 & 0x3fffffff;
                if (ppiVar14 != &piStack_a0) {
                  iStack_9c = piVar6[9];
                  uStack_94 = piVar6[0xb];
                  piStack_a0 = *ppiVar14;
                  *ppiVar14 = (int *)piVar6[1];
                  piVar6[9] = temp_v4;
                  piVar6[10] = temp_v4;
                  piVar6[0xb] = temp_v11 & 0x3fffffff;
                }
                temp_v4 = 0;
                if (piStack_a0 != (int *)0x0) {
                  temp_v4 = iStack_9c;
                }
                iStack_98 = iStack_9c;
                if (piStack_a0 != (int *)0x0 && temp_v4 != 0) {
                  (**(romwright_code **)(*piStack_a0 + 0xc))(piStack_a0,iStack_9c);
                }
              }
            }
            piVar4 = piVar6;
            if (((-1 < (int)piVar17) && (iStack_80 != 0)) &&
               (temp_v3 = (float)(**(romwright_code **)(*(int *)piVar6[1] + 8))((int *)piVar6[1],temp_v11 << 6,4),
               temp_v3 != 0.0f)) {
              ppiVar14 = (int **)(piVar6 + 0x18);
              piStack_b8 = (int *)piVar6[1];
              fStack_b4 = temp_v3;
              temp_v19 = temp_v3;
              temp_v20 = (float)(temp_v11 & 0x3fffffff);
              if (ppiVar14 != &piStack_b8) {
                fStack_b4 = (float)piVar6[0x19];
                temp_v19 = (float)piVar6[0x1a];
                temp_v20 = (float)piVar6[0x1b];
                piStack_b8 = *ppiVar14;
                piVar6[0x19] = (int)temp_v3;
                piVar6[0x1a] = (int)temp_v3;
                piVar6[0x1b] = temp_v11 & 0x3fffffff;
                *ppiVar14 = (int *)piVar6[1];
              }
              pfVar15 = &fStack_b4;
              if ((unsigned int)fStack_b4 < (unsigned int)temp_v19) {
                pfVar15 = (float *)((int)temp_v19 - (int)fStack_b4);
              }
              if ((unsigned int)fStack_b4 < (unsigned int)temp_v19) {
                pfVar15 = (float *)((int)pfVar15 << 0x19);
              }
              if ((unsigned int)fStack_b4 < (unsigned int)temp_v19) {
                temp_v11 = (unsigned int)pfVar15 >> 0x1f;
              }
              else {
                temp_v11 = 0;
              }
              for (temp_v4 = temp_v11 + 1; temp_v4 < (((int)temp_v19 - (int)fStack_b4) >> 6) + 1;
                  temp_v4 = temp_v4 + 2) {
              }
              temp_v19 = fStack_b4;
              if (piStack_b8 != (int *)0x0 && fStack_b4 != 0.0f) {
                (**(romwright_code **)(*piStack_b8 + 0xc))(piStack_b8,fStack_b4);
              }
              temp_v11 = *(unsigned int *)(temp_v8 + 0x18);
              temp_v8 = (piVar6[0x1a] - piVar6[0x19]) >> 6;
              if ((int)temp_v11 < temp_v8) {
                if ((int)temp_v11 < 0) {
                  temp_v11 = 0;
                }
                if ((int)temp_v11 < temp_v8) {
                  temp_v12 = (temp_v8 - temp_v11) & 1;
                }
                else {
                  temp_v12 = 0;
                }
                for (temp_v4 = temp_v12 + temp_v11; temp_v4 < temp_v8; temp_v4 = temp_v4 + 2) {
                }
                temp_v8 = piVar6[0x19] + temp_v11 * 0x40;
              }
              else {
                if ((int)(piVar6[0x1b] & 0x3fffffffU) < (int)temp_v11) {
                  if ((piVar6[0x18] == 0) || ((piVar6[0x1b] & 0xc0000000U) != 0x40000000)) {
                    temp_v11 = piVar6[0x1b] & 0x3fffffff;
                  }
                  else {
                    temp_v5 = (**(romwright_code **)(*(int *)piVar6[0x18] + 8))
                                       ((int *)piVar6[0x18],temp_v11 << 6,0x20);
                    temp_v10 = piVar6[0x19];
                    temp_v13 = piVar6[0x1a];
                    temp_v8 = 0;
                    temp_v4 = temp_v5;
                    if (temp_v10 != temp_v13) {
                      do {
                        if (temp_v5 != 0) {
                          nn_math_ARMv6_MTX34CopyAsm(temp_v5,temp_v10);
                          temp_v16 = *(unsigned int *)(temp_v10 + 0x34);
                          temp_v9 = *(unsigned int *)(temp_v10 + 0x38);
                          *(unsigned int *)(temp_v5 + 0x30) = *(unsigned int *)(temp_v10 + 0x30);
                          *(unsigned int *)(temp_v5 + 0x34) = temp_v16;
                          *(unsigned int *)(temp_v5 + 0x38) = temp_v9;
                          *(unsigned int *)(temp_v5 + 0x3c) = *(unsigned int *)(temp_v10 + 0x3c);
                        }
                        temp_v10 = temp_v10 + 0x40;
                        temp_v5 = temp_v5 + 0x40;
                      } while (temp_v10 != temp_v13);
                      temp_v8 = (piVar6[0x1a] - piVar6[0x19]) >> 6;
                    }
                    if (piVar6[0x19] != 0) {
                      (**(romwright_code **)(*(int *)piVar6[0x18] + 0xc))();
                    }
                    piVar6[0x19] = temp_v4;
                    piVar6[0x1a] = temp_v4 + temp_v8 * 0x40;
                    piVar6[0x1b] = (piVar6[0x1b] & 0xc0000000U) | temp_v11;
                  }
                }
                for (temp_v8 = (piVar6[0x1a] - piVar6[0x19]) >> 6; temp_v8 < (int)temp_v11;
                    temp_v8 = temp_v8 + 1) {
                  temp_v4 = piVar6[0x19] + temp_v8 * 0x40;
                  if (temp_v4 != 0) {
                    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) &&
                       (temp_v5 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v5 != 0)) {
                      _ZZN2nw4math5MTX348IdentityEvE8identity = (unsigned int)temp_v17;
                      DAT_004efd70 = (unsigned int)((unsigned long long)temp_v17 >> 0x20);
                      DAT_004efd74 = DAT_004efd70;
                      DAT_004efd78 = DAT_004efd70;
                      DAT_004efd7c = DAT_004efd70;
                      DAT_004efd80 = _ZZN2nw4math5MTX348IdentityEvE8identity;
                      DAT_004efd84 = DAT_004efd70;
                      DAT_004efd88 = DAT_004efd70;
                      DAT_004efd8c = DAT_004efd70;
                      DAT_004efd90 = DAT_004efd70;
                      DAT_004efd94 = _ZZN2nw4math5MTX348IdentityEvE8identity;
                      DAT_004efd98 = DAT_004efd70;
                    }
                    nn_math_ARMv6_MTX34CopyAsm(temp_v4,&_ZZN2nw4math5MTX348IdentityEvE8identity);
                    temp_v16 = (unsigned int)temp_v17;
                    *(unsigned int *)(temp_v4 + 0x30) = temp_v16;
                    *(unsigned int *)(temp_v4 + 0x34) = temp_v16;
                    *(unsigned int *)(temp_v4 + 0x38) = temp_v16;
                    *(unsigned int *)(temp_v4 + 0x3c) = 0x801;
                  }
                }
                temp_v8 = piVar6[0x19] + temp_v11 * 0x40;
              }
              piVar6[0x1a] = temp_v8;
            }
          }
          (**(romwright_code **)(*piVar4 + 0xc))(piVar4,iStack_48);
          temp_v8 = *(int *)(*(int *)(temp_v6 + 0x24) + temp_v7 * 4);
          if (*(int *)(temp_v8 + 0x228) != 0) {
            temp_v4 = *(int *)(temp_v8 + 0x28);
            temp_v8 = *(int *)(temp_v8 + 0x22c);
            if (((-1 < temp_v8) && (temp_v8 < (*(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0xc)) >> 2))
               && (0 < *(int *)(temp_v4 + 0x28))) {
              *(int **)(*(int *)(temp_v4 + 0x1c) + *(int *)(temp_v4 + 0x28) * temp_v8 * 4) = piVar4;
            }
          }
          *(int **)(temp_v22 + temp_v7 * 4 + 0xc) = piVar4;
        }
        unaff_r4 = piStack_4c;
        piVar4 = (int *)(*(int *)(*(int *)(temp_v6 + 4) + 0x18) + 0x70);
        aiStack_60[0] = *piVar4;
        if (aiStack_60[0] != 0) {
          aiStack_60[0] = aiStack_60[0] + (int)piVar4;
        }
        if (!(aiStack_60[0] == 0 || piStack_4c == (int *)0x0)) {
          temp_v16 = libc_strlen(piStack_4c);
          temp_v8 = nw_ut_ResDicPatricia_Get(aiStack_60,unaff_r4,temp_v16);
          if (temp_v8 != 0) {
            temp_v4 = *(int *)(temp_v8 + 0xc);
            if (temp_v4 != 0) {
              temp_v4 = temp_v8 + 0xc + temp_v4;
            }
            else {
              temp_v4 = 0;
            }
          }
          else {
            temp_v4 = 0;
          }
        }
        else {
          temp_v4 = 0;
        }
        if (temp_v4 != 0) {
          temp_v8 = *(int *)(*(int *)(*(int *)(temp_v6 + 0x24) + temp_v7 * 4) + 0x148);
          piStack_a4 = *(int **)(*(int *)(temp_v8 + 8) + 0x10);
          iStack_9c = romwright_piece_3_1((((unsigned int)(iStack_9c) >> 8) & 0xffffffU),1);
          temp_v21 = temp_v4;
          piStack_a0 = piStack_a4;
          piVar4 = (int *)asdMemoryGetDefaultAllocator();
          unaff_r4 = (int *)(**(romwright_code **)(*piVar4 + 8))(piVar4,0x74,4);
          if (unaff_r4 == (int *)0x0) {
            unaff_r4 = (int *)0x0;
          }
          else {
            _ZN9Obj42111cC1Ej(unaff_r4,piVar4);
            FUN_002a5960(unaff_r4,&temp_v21,piStack_a4,piStack_a0,(int)(char)iStack_9c);
          }
          (**(romwright_code **)(*unaff_r4 + 0xc))(unaff_r4,temp_v8);
          temp_v8 = *(int *)(*(int *)(temp_v6 + 0x24) + temp_v7 * 4);
          if (*(int *)(temp_v8 + 0x148) != 0) {
            temp_v4 = *(int *)(temp_v8 + 0x14c);
            temp_v8 = *(int *)(temp_v8 + 0x28);
            if (((-1 < temp_v4) && (temp_v4 < (*(int *)(temp_v8 + 0x10) - *(int *)(temp_v8 + 0xc)) >> 2))
               && (0 < *(int *)(temp_v8 + 0x28))) {
              *(int **)(*(int *)(temp_v8 + 0x1c) + *(int *)(temp_v8 + 0x28) * temp_v4 * 4) = unaff_r4;
            }
          }
          *(int **)(temp_v22 + temp_v7 * 4 + 0x18) = unaff_r4;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      FUN_002a0428(*(unsigned int *)(temp_v22 + 8),1);
      if (*(int *)(temp_v22 + 8) != 0) {
        *(unsigned char *)(**(int **)(*(int *)(*(int *)(temp_v22 + 8) + 8) + 0x24) + 0x1f6) = 0;
        *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v22 + 8) + 8) + 0x24) + 4) + 0x1f6)
             = 0;
        *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v22 + 8) + 8) + 0x24) + 8) + 0x1f6)
             = 0;
      }
      *(unsigned int *)(temp_v22 + 0x2c) = 2;
    }
  }
  return;
}

} /* extern "C" */
