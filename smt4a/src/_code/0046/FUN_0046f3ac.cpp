/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046f3ac` (_code @ 0x46f3ac, 0x6c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(...);
int FUN_00191f68(...);
int FUN_001b57a8(...);
int FUN_001ba1c0(...);
int FUN_001d1038(...);
int FUN_001d10ac(...);
int FUN_001d25ec(...);
int FUN_002e3140(...);
int FUN_002e56ec(...);
int FUN_002fb0d4(...);
int FUN_00429f38(...);
int FUN_0046c528(...);
int FUN_0046e334(...);
int FUN_0046fb60(...);
int FUN_00473e44(...);
int FUN_004740b4(...);
int FUN_00474164(...);
int FUN_004741f0(...);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern int FUN_0019241c(...); /* 0x19241c */
extern int FUN_00471adc(...); /* 0x471adc */
extern unsigned char LAB_00514a94; /* 0x514a94 */
extern unsigned char LAB_00514b38; /* 0x514b38 */
extern unsigned char LAB_00514b90; /* 0x514b90 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00191f68. */
extern int FUN_001a7470(int);
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001b57a8. */
extern int *FUN_001b5acc(unsigned char *);
/* Supplied declaration required: FUN_001ba1c0. */
/* Supplied declaration required: FUN_001d1038. */
/* Supplied declaration required: FUN_001d10ac. */
/* Supplied declaration required: FUN_001d25ec. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e56ec. */
/* Supplied declaration required: FUN_002fb0d4. */
/* Supplied declaration required: FUN_00429f38. */
/* Supplied declaration required: FUN_0046c528. */
/* Supplied declaration required: FUN_0046e334. */
/* Supplied declaration required: FUN_0046fb60. */
/* Supplied declaration required: FUN_00473e44. */
/* Supplied declaration required: FUN_004740b4. */
extern int FUN_00474144(int);
/* Supplied declaration required: FUN_00474164. */
/* Supplied declaration required: FUN_004741f0. */
extern int FUN_004743e4(int);
extern int FUN_0047d754(int);


void FUN_0046f3ac(unsigned char *param_1,int param_2)

{
/* irregular: 20 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned char *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char **ppuVar9;
  int temp_v5;
  int *piVar11;
  int temp_v6;
  int temp_v7;
  unsigned char *temp_v8;
  int temp_v9;
  int temp_v10;
  int iStack_64;
  int iStack_60;
  int temp_v11;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int temp_v12;
  unsigned char *temp_v13;
  unsigned char *temp_v14;
  unsigned char *temp_v15;
  int iStack_38;
  int temp_v16;
  int iStack_30;
  int iStack_2c;
  
  ppuVar9 = &temp_v8;
  *param_1 = 1;
  piVar1 = (int *)FUN_001b5acc(param_1 + 4);
  piVar1[2] = 0;
  piVar11 = piVar1 + -1;
  piVar1[3] = 0;
  piVar2 = &temp_v10;
  FUN_001b57a8(piVar2,0);
  temp_v3 = piVar2[1];
  *piVar1 = *piVar2;
  piVar1[1] = temp_v3;
  temp_v3 = FUN_001af210(g_aocMain + 0x98);
  if (temp_v3 != 0) {
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
    *(unsigned int *)(param_2 + 0x344) = 6;
    *(char *)piVar11 = -0x38;
  }
  else {
    temp_v3 = *(int *)(param_2 + 0x344);
    switch(temp_v3) {
    case 0:
      FUN_00429f38();
      if (temp_v3 == 0) {
        jyoucyuGetTableEntry(0);
        *(char *)piVar11 = '\0';
        return;
      }
      if (*(int *)(param_2 + 0x318) != 0) {
        FUN_002e56ec(*(int *)(param_2 + 0x318),FUN_0019241c);
        *(unsigned int *)(param_2 + 0x318) = 0;
      }
      FUN_0046e334(&temp_v8,param_2);
      temp_v3 = FUN_001d10ac(&temp_v8);
      if (temp_v3 != 0) {
        temp_v12 = temp_v9;
        temp_v13 = (unsigned char *)temp_v10;
        temp_v3 = FUN_001d25ec(&temp_v12);
        temp_v6 = FUN_001d25ec(&temp_v12);
        if ((temp_v6 == -0x377ec779) || (temp_v3 == -0x377ec76c)) {
          *(char *)piVar11 = '\0';
          return;
        }
        *piVar11 = (int)temp_v8;
        *piVar1 = temp_v9;
        piVar1[1] = temp_v10;
        piVar1[2] = iStack_64;
        piVar1[3] = iStack_60;
        break;
      }
      FUN_0046fb60(&temp_v15,param_2);
      temp_v8 = temp_v15;
      temp_v9 = iStack_38;
      temp_v10 = temp_v16;
      iStack_64 = iStack_30;
      iStack_60 = iStack_2c;
      temp_v0 = FUN_001d10ac(&temp_v8);
      puVar4 = temp_v8;
      temp_v3 = temp_v9;
      temp_v6 = temp_v10;
      temp_v5 = iStack_64;
      temp_v7 = iStack_60;
      if (temp_v0 == 0) {
        *(unsigned int *)(param_2 + 0x344) = 1;
        return;
      }
      *piVar11 = (int)puVar4;
      *piVar1 = temp_v3;
      piVar1[1] = temp_v6;
      piVar1[2] = temp_v5;
      piVar1[3] = temp_v7;
      break;
    case 1:
      if (*(int *)(param_2 + 0x468) < *(int *)(param_2 + 0x464)) {
        *(int *)(param_2 + 0x468) = *(int *)(param_2 + 0x468) + 1;
        return;
      }
      temp_v4 = g_aocMain + 0x88;
      temp_v13 = &LAB_00514a94;
      temp_v12 = 4;
      temp_v14 = &LAB_00514b90;
      temp_v15 = &LAB_00514b38;
      temp_v8 = (unsigned char *)
                 (*(int *)(*(int *)(g_aocMain + 0x94) + 0xc) +
                 *(int *)(*(int *)(g_aocMain + 0x94) + 8));
      temp_v9 = 0x11;
      temp_v10 = -2;
      iStack_64 = 0;
      temp_v16 = param_2;
      FUN_002fb0d4(temp_v4,&temp_v12,FUN_00471adc,&temp_v16);
      if ((temp_v4 & 0x7e00000) != 0x600000 && (int)temp_v4 < 0) {
        FUN_002e3140();
      }
      temp_v1 = 2;
      *(unsigned int *)(param_2 + 0x344) = temp_v1;
      return;
    case 2:
      temp_v3 = FUN_0047d754(g_aocMain + 0x88);
      if (temp_v3 == 0) {
        return;
      }
      temp_v3 = FUN_001d10ac(param_2 + 0x31c);
      if (temp_v3 == 0) {
        temp_v3 = 0;
        if (temp_v3 < *(int *)(param_2 + 0x310)) {
          do {
            temp_v6 = FUN_001a7470(*(int *)(param_2 + 0x318) + temp_v3 * 0x50 + 8);
            if (temp_v6 != 0) {
              FUN_00474164(*(int *)(param_2 + 0x318) + temp_v3 * 0x50);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < *(int *)(param_2 + 0x310));
        }
        temp_v1 = 3;
        *(unsigned int *)(param_2 + 0x344) = temp_v1;
        return;
      }
      puVar4 = *(unsigned char **)(param_2 + 0x31c);
      temp_v3 = *(int *)(param_2 + 800);
      temp_v6 = *(int *)(param_2 + 0x324);
      temp_v5 = *(int *)(param_2 + 0x328);
      temp_v7 = *(int *)(param_2 + 0x32c);
      *piVar11 = (int)puVar4;
      *piVar1 = temp_v3;
      piVar1[1] = temp_v6;
      piVar1[2] = temp_v5;
      piVar1[3] = temp_v7;
      break;
    case 3:
      temp_v3 = *(int *)(param_2 + 0x310);
      temp_v6 = 0;
      if (0 < temp_v3) {
        do {
          temp_v3 = FUN_001a7470(*(int *)(param_2 + 0x318) + temp_v6 * 0x50 + 8);
          if ((temp_v3 != 0) &&
             (temp_v3 = FUN_00474144(*(int *)(param_2 + 0x318) + temp_v6 * 0x50), temp_v3 == 0)) {
            return;
          }
          temp_v3 = *(int *)(param_2 + 0x310);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < temp_v3);
      }
      temp_v6 = 0;
      if (0 < temp_v3) {
        do {
          temp_v3 = FUN_001a7470(*(int *)(param_2 + 0x318) + temp_v6 * 0x50 + 8);
          if ((temp_v3 != 0) &&
             (temp_v3 = FUN_00474144(*(int *)(param_2 + 0x318) + temp_v6 * 0x50), temp_v3 != 0)) {
            FUN_004740b4(*(int *)(param_2 + 0x318) + temp_v6 * 0x50);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(param_2 + 0x310));
      }
      *(unsigned int *)(param_2 + 0x354) = 0;
      *(unsigned int *)(param_2 + 0x344) = 4;
      *(unsigned int *)(param_2 + 0x358) = 0;
      return;
    case 4:
      if (*(int *)(param_2 + 0x310) != 0) {
        if (*(int *)(param_2 + 0x358) != 0) {
          if ((*(int *)(param_2 + 0x358) == 1) &&
             (temp_v3 = FUN_004743e4(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50),
             temp_v3 != 0)) {
            *(int *)(param_2 + 0x354) = *(int *)(param_2 + 0x354) + 1;
            *(unsigned int *)(param_2 + 0x358) = 0;
          }
        }
        else if (*(int *)(param_2 + 0x354) < *(int *)(param_2 + 0x310)) {
          do {
            temp_v3 = FUN_001a7470(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50 + 8);
            if ((temp_v3 != 0) &&
               (temp_v3 = FUN_00474144(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50),
               temp_v3 != 0)) {
              FUN_004741f0(*(int *)(param_2 + 0x318) + *(int *)(param_2 + 0x354) * 0x50);
              *(unsigned int *)(param_2 + 0x358) = 1;
              break;
            }
            temp_v3 = *(int *)(param_2 + 0x354) + 1;
            *(int *)(param_2 + 0x354) = temp_v3;
          } while (temp_v3 < *(int *)(param_2 + 0x310));
        }
        if (*(int *)(param_2 + 0x354) < *(int *)(param_2 + 0x310)) {
          return;
        }
      }
      *(unsigned int *)(param_2 + 0x344) = 5;
      return;
    case 5:
      FUN_0046c528(param_2);
      *(char *)piVar11 = '\0';
      *(unsigned int *)(param_2 + 0x344) = 6;
      return;
    default:
      return;
    }
  }
  *(unsigned int *)(param_2 + 0x310) = 0;
  *(unsigned int *)(param_2 + 0x314) = 0;
  *(unsigned int *)(param_2 + 0x350) = 0;
  if (*(int *)(param_2 + 0x318) != 0) {
    FUN_002e56ec(*(int *)(param_2 + 0x318),FUN_0019241c);
    *(unsigned int *)(param_2 + 0x318) = 0;
  }
  FUN_00191f68(param_2);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  jyoucyuGetTableEntry(0);
  temp_v3 = g_aocMain;
  temp_v4 = *(unsigned int *)(g_aocMain + 0x754);
  if ((temp_v4 & 0x10) == 0) {
    *(unsigned int *)(g_aocMain + 0x754) = temp_v4 | 0x10;
    *(unsigned int *)(temp_v3 + 0x754) = temp_v4 | 0x50;
    *(unsigned int *)(param_2 + 0x344) = 6;
    temp_v3 = FUN_001d25ec(piVar1);
    if (temp_v3 != -0x36bec76f) {
      temp_v3 = FUN_001af210(g_aocMain + 0x98);
      if (temp_v3 != 0) {
        *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
      }
      else if ((char)*piVar11 != -0x38) {
        temp_v11 = *piVar11;
        iStack_58 = *piVar1;
        iStack_54 = piVar1[1];
        iStack_50 = piVar1[2];
        iStack_4c = piVar1[3];
        temp_v3 = g_aocMain;
        FUN_001d1038(g_aocMain,&temp_v11,*piVar1,piVar1[1]);
        if (temp_v3 != 0) {
          return;
        }
        if ((char)*piVar11 != 'i') {
          if ((char)*piVar11 != 'j') {
            FUN_001d25ec(piVar1);
            temp_v2 = FUN_001d25ec(piVar1);
            temp_v4 = temp_v2 >> 0x1b;
            if ((temp_v2 & 0x80000000) != 0) {
              temp_v4 = temp_v4 - 0x20;
            }
            if (temp_v4 != 0xfffffffc) {
              temp_v2 = FUN_001d25ec(piVar1);
              temp_v4 = temp_v2 >> 0x1b;
              if ((temp_v2 & 0x80000000) != 0) {
                temp_v4 = temp_v4 - 0x20;
              }
              if (temp_v4 != 0xfffffffb) {
                temp_v3 = *(int *)(param_2 + 0x350) + 1;
                *(int *)(param_2 + 0x350) = temp_v3;
                if (temp_v3 >= 3) {
                  return;
                }
                *(unsigned int *)(param_2 + 0x344) = 0;
                *(char *)piVar11 = '\x01';
                piVar2 = &temp_v10;
                piVar1[2] = 0;
                FUN_001b57a8();
                temp_v3 = piVar2[1];
                *piVar1 = *piVar2;
                piVar1[1] = temp_v3;
                return;
              }
            }
            temp_v12 = *piVar11;
            temp_v13 = (unsigned char *)*piVar1;
            temp_v14 = (unsigned char *)piVar1[1];
            temp_v15 = (unsigned char *)piVar1[2];
            iStack_38 = piVar1[3];
            ppuVar9 = (unsigned char **)&temp_v12;
          }
          else {
            temp_v8 = (unsigned char *)*piVar11;
            temp_v9 = *piVar1;
            temp_v10 = piVar1[1];
            iStack_64 = piVar1[2];
            iStack_60 = piVar1[3];
          }
          FUN_001ba1c0(g_aocMain,ppuVar9);
          return;
        }
        temp_v8 = (unsigned char *)*piVar11;
        temp_v9 = *piVar1;
        temp_v10 = piVar1[1];
        iStack_64 = piVar1[2];
        iStack_60 = piVar1[3];
        FUN_00473e44(g_aocMain,&temp_v8,piVar1[2]);
        return;
      }
      temp_v12 = *piVar11;
      temp_v13 = (unsigned char *)*piVar1;
      temp_v14 = (unsigned char *)piVar1[1];
      temp_v15 = (unsigned char *)piVar1[2];
      iStack_38 = piVar1[3];
      FUN_001ba1c0(g_aocMain,&temp_v12);
      return;
    }
  }
  return;
}

} /* extern "C" */
