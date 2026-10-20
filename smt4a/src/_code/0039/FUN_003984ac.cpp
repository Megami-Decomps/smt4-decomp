/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003984ac` (_code @ 0x3984ac, 0xd70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f034c(...);
int FUN_004fbeac(...);

int jyoucyuGetTableEntry(...);
int dataTable04FindById(void);
int FUN_003e892c(int);
int FUN_003eaf20(void);
int FUN_003ebca0(void);
int FUN_004abba8(...);
int FUN_004abbe8(unsigned int);
int FUN_004c1114(...);
int btlSlotSetStoreValue(...);
int FUN_004c571c(...);
int FUN_004c6cb0(int, int);
int hasFlag80Or1000(...);
int FUN_004fcffc(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern int g_btlMain; /* 0x573920 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a10; /* 0x573a10 */
extern unsigned int DAT_00573a14; /* 0x573a14 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a30; /* 0x573a30 */
extern unsigned int DAT_00573a34; /* 0x573a34 */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */
extern unsigned int DAT_00573a70; /* 0x573a70 */
extern unsigned int DAT_00573a74; /* 0x573a74 */
extern unsigned int DAT_00573ab0; /* 0x573ab0 */
extern unsigned int DAT_00573ab4; /* 0x573ab4 */
extern unsigned int DAT_00573ab8; /* 0x573ab8 */
extern unsigned int DAT_00573abc; /* 0x573abc */
extern unsigned int DAT_00573ac0; /* 0x573ac0 */
extern unsigned int DAT_00573ac4; /* 0x573ac4 */
extern unsigned int DAT_00573ad8; /* 0x573ad8 */
extern unsigned int DAT_00573adc; /* 0x573adc */
extern unsigned int DAT_00573ae0; /* 0x573ae0 */
extern unsigned int DAT_00573ae4; /* 0x573ae4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */
extern unsigned int DAT_00573af0; /* 0x573af0 */
extern unsigned int DAT_00573af4; /* 0x573af4 */
extern unsigned int DAT_00573b10; /* 0x573b10 */
extern unsigned int DAT_00573b14; /* 0x573b14 */
extern unsigned int DAT_00573b48; /* 0x573b48 */
extern unsigned int DAT_00573b4c; /* 0x573b4c */
extern int g_btlPartnerAttack; /* 0x573c50 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

extern int saveSlotFindSelected(void);
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_003e48bc(void);
extern int FUN_003e4978(void);
/* Supplied declaration required: FUN_003e892c. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ebca0. */
/* Supplied declaration required: FUN_003f034c. */
/* Supplied declaration required: FUN_004abba8. */
/* Supplied declaration required: FUN_004abbe8. */
/* Supplied declaration required: FUN_004c1114. */
/* Supplied declaration required: btlSlotSetStoreValue. */
extern unsigned int FUN_004c53fc(unsigned int);
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_004c6cb0. */
/* Supplied declaration required: hasFlag80Or1000. */
extern int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fcffc. */


void FUN_003984ac(int param_1)

{
/* irregular: 5 goto(s); 15 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar9;
  unsigned int *puVar10;
  int *piVar11;
  int temp_v7;
  unsigned char temp_v8;
  
  temp_v6 = param_1;
  FUN_003ebca0();
  if (temp_v6 != 0) {
    temp_v2 = 0xc;
  }
  else {
    temp_v6 = 0;
    piVar9 = (int *)(param_1 + 0x1ffc);
    *(unsigned int *)(param_1 + 0x2414) = 0;
    do {
      puVar6 = (unsigned int *)(*piVar9 + temp_v6 * 0x408);
      if (((DAT_00573978 & *puVar6) != 0 || (DAT_0057397c & puVar6[1]) != 0) &&
         ((*puVar6 & DAT_005739a0) == 0 && (puVar6[1] & DAT_005739a4) == 0)) {
        btlSlotSetStoreValue((int)*(short *)((int)puVar6 + 0x6e),0x2c,0);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x6d);
    if (0 < *(int *)(param_1 + 0x1a8)) {
      temp_v2 = 9;
    }
    else {
      puVar6 = (unsigned int *)(param_1 + 0x45a0);
      temp_v3 = *puVar6;
      temp_v5 = *(unsigned int *)(param_1 + 0x45a4);
      if ((DAT_00573ad8 & temp_v3) == 0 && (DAT_00573adc & temp_v5) == 0) {
        temp_v0 = *(short *)(param_1 + 0x4c74);
        if (temp_v0 < 1) {
          temp_v0 = *(short *)(param_1 + 0x4c76);
        }
        if (0 < temp_v0) {
          if ((((DAT_00573b10 & *(unsigned int *)(param_1 + 0x45a8)) == 0 &&
                (*(unsigned int *)(param_1 + 0x45ac) & DAT_00573b14) == 0) &&
              ((DAT_00573a10 & temp_v3) == 0 && (DAT_00573a14 & temp_v5) == 0)) &&
             ((DAT_00573a70 & temp_v3) == 0 && (temp_v5 & DAT_00573a74) == 0)) {
            FUN_003e892c(param_1);
          }
          FUN_004abbe8(g_btlUiBlock);
          temp_v5 = ~DAT_00573a70;
          temp_v3 = ~DAT_00573a10;
          *(unsigned int *)(param_1 + 0x45a4) = *(unsigned int *)(param_1 + 0x45a4) & ~DAT_00573a14 & ~DAT_00573a74;
          *puVar6 = *puVar6 & temp_v3 & temp_v5;
          temp_v2 = 0xc;
          if (g_btlMain != 0) {
            *(unsigned int *)(g_btlMain + 0x8c) = temp_v2;
          }
          return;
        }
      }
      piVar11 = (int *)(param_1 + 0x4d68);
      if ((((DAT_00573a2c & temp_v5) == 0 && (DAT_00573a28 & temp_v3) == 0) &&
          ((DAT_00573ab4 & temp_v5) == 0 && (DAT_00573ab0 & temp_v3) == 0)) &&
         ((DAT_005739f0 & temp_v3) != 0 || (DAT_005739f4 & temp_v5) != 0)) {
        temp_v0 = *(short *)(param_1 + 0x4c74);
        temp_v8 = temp_v0 == 0;
        if (temp_v8) {
          temp_v0 = *(short *)(param_1 + 0x4c76);
        }
        if (((!temp_v8 || temp_v0 != 0) || ((temp_v3 & DAT_00573ae0) != 0 || (temp_v5 & DAT_00573ae4) != 0)
            ) || (temp_v6 = param_1, FUN_003eaf20(), temp_v6 == 0)) goto LAB_003987dc;
        temp_v6 = (int)*(short *)(temp_v6 + 8);
        FUN_004c6cb0(temp_v6,1);
        if ((temp_v6 == 0) || (temp_v7 = temp_v6, dataTable04FindById(), temp_v7 == 0)) goto LAB_003987dc;
        temp_v3 = *(unsigned int *)(param_1 + 0x45a4) | DAT_00573ae4;
        *puVar6 = *puVar6 | DAT_00573ae0;
        *(unsigned int *)(param_1 + 0x45a4) = temp_v3;
        if (temp_v6 < 1) goto LAB_003987dc;
        FUN_003eaf20();
        *piVar11 = *(int *)(param_1 + 0x400);
        temp_v6 = btlUnitGet(g_btlScriptUnit);
        temp_v3 = 0;
        if (temp_v6 != 0) {
          temp_v6 = hasFlag80Or1000(g_btlScriptUnit,temp_v6);
          temp_v3 = 0;
          if (temp_v6 != 0) {
            temp_v3 = 1;
          }
        }
        FUN_004abba8(g_btlUiBlock,temp_v3 ^ 1);
        temp_v6 = btlUnitGet(g_btlScriptUnit);
        if ((temp_v6 == 0) || (temp_v6 = hasFlag80Or1000(g_btlScriptUnit), temp_v6 == 0)) {
          jyoucyuGetTableEntry(1);
        }
      }
      else {
LAB_003987dc:
        temp_v3 = *(unsigned int *)(param_1 + 0x45a4);
        temp_v5 = *puVar6;
        if (((((temp_v3 & DAT_00573a2c) == 0 && (temp_v5 & DAT_00573a28) == 0) &&
             ((DAT_00573ab0 & temp_v5) == 0 && (DAT_00573ab4 & temp_v3) == 0)) &&
            ((DAT_00573ae0 & temp_v5) == 0 && (DAT_00573ae4 & temp_v3) == 0)) &&
           ((temp_v3 & DAT_00573adc) == 0 && (temp_v5 & DAT_00573ad8) == 0)) {
          temp_v6 = 0;
          do {
            puVar10 = (unsigned int *)(*piVar9 + temp_v6 * 0x408);
            if (((DAT_00573978 & *puVar10) != 0 || (DAT_0057397c & puVar10[1]) != 0) &&
               ((puVar10[1] & DAT_005739a4) == 0 && (*puVar10 & DAT_005739a0) == 0)) {
              if ((puVar10[0x9d] & 0x10) != 0) {
                FUN_004c571c((int)(short)puVar10[2],0x22,1,0);
                temp_v7 = temp_v6;
                FUN_004c1114(temp_v6,4);
                if (temp_v7 != 0) {
                  FUN_004fcffc(0,0,*(int *)(param_1 + 0x1ed4) + (short)puVar10[2] * 0x1d0,0x10);
                }
              }
              else {
                temp_v2 = FUN_004c53fc(0x22);
                btlSlotSetStoreValue((int)(short)puVar10[2],0x22,temp_v2);
              }
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x6d);
        }
        temp_v6 = 0;
        do {
          puVar10 = (unsigned int *)(*piVar9 + temp_v6 * 0x408);
          temp_v3 = *puVar10;
          temp_v5 = puVar10[1];
          if (((DAT_00573978 & temp_v3) != 0 || (DAT_0057397c & temp_v5) != 0) &&
             ((DAT_005739a0 & temp_v3) == 0 && (DAT_005739a4 & temp_v5) == 0)) {
            temp_v1 = *puVar6;
            temp_v4 = *(unsigned int *)(param_1 + 0x45a4);
            if (!((DAT_005739f0 & temp_v1) == 0 && (DAT_005739f4 & temp_v4) == 0)) {
              if ((temp_v5 & DAT_00573994) != 0 || (temp_v3 & DAT_00573990) != 0) {
LAB_00398a18:
                temp_v3 = 0;
                if (((puVar10[0x9d] & 0x80) != 0) &&
                   (temp_v7 = temp_v6, FUN_004c1114(temp_v6,7), temp_v7 != 0)) {
                  temp_v3 = 0x80;
                }
                if (((puVar10[0x9d] & 0x40) != 0) &&
                   (temp_v7 = temp_v6, FUN_004c1114(temp_v6,6), temp_v7 != 0)) {
                  temp_v3 = temp_v3 | 0x40;
                }
                if (((puVar10[0x9d] & 0x100) != 0) &&
                   (temp_v7 = temp_v6, FUN_004c1114(temp_v6,8), temp_v7 != 0)) {
                  temp_v3 = temp_v3 | 0x100;
                }
                if (((puVar10[0x9d] & 8) != 0) &&
                   (temp_v7 = temp_v6, FUN_004c1114(temp_v6,3), temp_v7 != 0)) {
                  temp_v3 = temp_v3 | 8;
                }
                if (((puVar10[0x9d] & 0x800) != 0) &&
                   (temp_v7 = temp_v6, FUN_004c1114(temp_v6,0xb), temp_v7 != 0)) {
                  temp_v3 = temp_v3 | 0x800;
                }
                if (((puVar10[0x9d] & 0x2000) != 0) &&
                   (temp_v7 = temp_v6, FUN_004c1114(temp_v6,0xd), temp_v7 != 0)) {
                  temp_v3 = temp_v3 | 0x2000;
                }
                if ((temp_v3 != 0) && (-1 < (short)puVar10[2])) {
                  FUN_004fcffc(0,0,*(int *)(param_1 + 0x1ed4) + (short)puVar10[2] * 0x1d0,temp_v3);
                }
              }
            }
            else if (((((temp_v3 & DAT_00573990) == 0 && (temp_v5 & DAT_00573994) == 0) &&
                      ((DAT_00573a28 & temp_v1) == 0 && (DAT_00573a2c & temp_v4) == 0)) &&
                     ((DAT_00573ab0 & temp_v1) == 0 && (DAT_00573ab4 & temp_v4) == 0)) &&
                    (((DAT_00573ae0 & temp_v1) == 0 && (DAT_00573ae4 & temp_v4) == 0 &&
                     ((temp_v1 & DAT_00573ad8) == 0 && (temp_v4 & DAT_00573adc) == 0))))
            goto LAB_00398a18;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x6d);
        temp_v3 = *(unsigned int *)(param_1 + 0x45a4);
        temp_v5 = *puVar6;
        if ((((DAT_00573ab4 & temp_v3) == 0 && (DAT_00573ab0 & temp_v5) == 0) &&
            ((DAT_00573ae0 & temp_v5) == 0 && (DAT_00573ae4 & temp_v3) == 0)) &&
           ((temp_v3 & DAT_00573adc) == 0 && (DAT_00573ad8 & temp_v5) == 0)) {
          temp_v6 = 0;
          do {
            puVar10 = (unsigned int *)(*piVar9 + temp_v6 * 0x408);
            temp_v3 = *puVar10;
            temp_v5 = puVar10[1];
            if (((DAT_00573978 & temp_v3) != 0 || (DAT_0057397c & temp_v5) != 0) &&
               ((DAT_005739a0 & temp_v3) == 0 && (DAT_005739a4 & temp_v5) == 0)) {
              if (!((DAT_005739f0 & *puVar6) == 0 &&
                   (DAT_005739f4 & *(unsigned int *)(param_1 + 0x45a4)) == 0)) {
                if ((temp_v5 & DAT_00573994) != 0 || (DAT_00573990 & temp_v3) != 0) {
LAB_00398c7c:
                  temp_v7 = (int)(short)puVar10[2];
                  if ((puVar10[0x9d] & 0x80) != 0) {
                    FUN_004c571c(temp_v7,0x1b,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x1b);
                    btlSlotSetStoreValue(temp_v7,0x1b,temp_v2);
                  }
                  if ((puVar10[0x9d] & 0x40) != 0) {
                    FUN_004c571c(temp_v7,0x1c,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x1c);
                    btlSlotSetStoreValue(temp_v7,0x1c,temp_v2);
                  }
                  if ((puVar10[0x9d] & 0x100) != 0) {
                    FUN_004c571c(temp_v7,0x1d,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x1d);
                    btlSlotSetStoreValue(temp_v7,0x1d,temp_v2);
                  }
                  if ((puVar10[0x9d] & 8) != 0) {
                    FUN_004c571c(temp_v7,0x1e,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x1e);
                    btlSlotSetStoreValue(temp_v7,0x1e,temp_v2);
                  }
                  if ((puVar10[0x9d] & 0x800) != 0) {
                    FUN_004c571c(temp_v7,0x1f,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x1f);
                    btlSlotSetStoreValue(temp_v7,0x1f,temp_v2);
                  }
                  if ((puVar10[0x9d] & 0x1000) != 0) {
                    FUN_004c571c(temp_v7,0x20,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x20);
                    btlSlotSetStoreValue(temp_v7,0x20,temp_v2);
                  }
                  if ((puVar10[0x9d] & 0x2000) != 0) {
                    FUN_004c571c(temp_v7,0x21,1,0);
                  }
                  else {
                    temp_v2 = FUN_004c53fc(0x21);
                    btlSlotSetStoreValue(temp_v7,0x21,temp_v2);
                  }
                }
              }
              else if (((temp_v3 & DAT_00573990) == 0 && (temp_v5 & DAT_00573994) == 0) &&
                      ((*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) == 0 &&
                       (*puVar6 & DAT_00573a28) == 0)) goto LAB_00398c7c;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x6d);
        }
        temp_v3 = *(unsigned int *)(param_1 + 0x45a4);
        temp_v5 = *puVar6;
        if ((DAT_00573ae8 & temp_v5) != 0 || (DAT_00573aec & temp_v3) != 0) {
          FUN_003f034c(param_1);
          return;
        }
        if (*(char *)(param_1 + 0x4cd0) == '\0') {
          if (((temp_v3 & DAT_005739f4) == 0 && (temp_v5 & DAT_005739f0) == 0) &&
             (temp_v6 = saveSlotFindSelected(), temp_v6 != 0)) {
            temp_v6 = *(int *)(param_1 + 0x4d74);
            if ((-1 < temp_v6) && (temp_v6 = temp_v6 - 1, *(int *)(param_1 + 0x4d74) = temp_v6, temp_v6 == 0))
            {
              temp_v2 = 0x15;
              if (g_btlMain != 0) {
                *(unsigned int *)(g_btlMain + 0x8c) = temp_v2;
              }
              return;
            }
          }
          FUN_003f034c(param_1);
          return;
        }
        if (((DAT_00573b48 & *(unsigned int *)(param_1 + 0x45a8)) != 0 ||
             (DAT_00573b4c & *(unsigned int *)(param_1 + 0x45ac)) != 0) ||
           ((temp_v3 & DAT_00573adc) != 0 || (temp_v5 & DAT_00573ad8) != 0)) {
          FUN_003f034c(param_1);
          return;
        }
        temp_v6 = param_1;
        FUN_003eaf20();
        if (temp_v6 == 0) {
          *(unsigned char *)(param_1 + 0x4cd0) = 0;
          FUN_003f034c(param_1);
          return;
        }
        temp_v3 = *(unsigned int *)(param_1 + 0x45a4);
        temp_v5 = *puVar6;
        if ((((DAT_005739f0 & temp_v5) != 0 || (DAT_005739f4 & temp_v3) != 0) ||
            ((DAT_00573a30 & temp_v5) != 0 || (DAT_00573a34 & temp_v3) != 0)) ||
           (*(int *)(param_1 + 0x235c) == 4)) {
          FUN_003f034c(param_1);
          return;
        }
        if ((DAT_00573ab0 & temp_v5) != 0 || (DAT_00573ab4 & temp_v3) != 0) {
          if (*(int *)(g_btlPartnerAttack + 0x18) != 2) {
            *(int *)(g_btlPartnerAttack + 0x18) = *(int *)(g_btlPartnerAttack + 0x18) + 1;
            temp_v2 = 0xf;
          }
          else {
            temp_v2 = 0x11;
          }
          if (g_btlMain != 0) {
            *(unsigned int *)(g_btlMain + 0x8c) = temp_v2;
          }
          return;
        }
        if ((((DAT_00573ac4 & temp_v3) == 0 && (DAT_00573ac0 & temp_v5) == 0) &&
            ((DAT_00573ab8 & temp_v5) == 0 && (DAT_00573abc & temp_v3) == 0)) &&
           (((temp_v3 & DAT_00573af4) == 0 && (temp_v5 & DAT_00573af0) == 0 &&
            ((temp_v6 = FUN_003e48bc(), temp_v6 != 0 && (temp_v6 = FUN_003e4978(), temp_v6 != 0)))))) {
          *(unsigned int *)(g_btlPartnerAttack + 0x18) = 0;
          temp_v3 = *(unsigned int *)(param_1 + 0x45a4) | DAT_00573a2c;
          *puVar6 = *puVar6 | DAT_00573a28;
          *(unsigned int *)(param_1 + 0x45a4) = temp_v3;
          temp_v2 = 0xf;
          if (g_btlMain != 0) {
            *(unsigned int *)(g_btlMain + 0x8c) = temp_v2;
          }
          return;
        }
        if ((*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) != 0 || (*puVar6 & DAT_00573a28) != 0) {
          FUN_003f034c(param_1);
          return;
        }
        temp_v6 = param_1;
        FUN_003eaf20();
        *piVar11 = *(int *)(temp_v6 + 0x400);
        temp_v6 = btlUnitGet(g_btlScriptUnit);
        temp_v3 = 0;
        if (temp_v6 != 0) {
          temp_v6 = hasFlag80Or1000(g_btlScriptUnit,temp_v6);
          temp_v3 = 0;
          if (temp_v6 != 0) {
            temp_v3 = 1;
          }
        }
        FUN_004abba8(g_btlUiBlock,temp_v3 ^ 1);
        temp_v6 = btlUnitGet(g_btlScriptUnit);
        if ((temp_v6 == 0) || (temp_v6 = hasFlag80Or1000(g_btlScriptUnit), temp_v6 == 0)) {
          jyoucyuGetTableEntry(1);
          if ((*piVar11 != 0) &&
             ((((temp_v6 = FUN_0019acdc(*(unsigned short *)(*piVar11 + 300),0), temp_v6 == 1 ||
                (temp_v6 = FUN_0019acdc(*(unsigned short *)(*piVar11 + 300),0), temp_v6 == 4)) &&
               (temp_v6 = gameFlagIsSet(0xd1), temp_v6 != 0)) &&
              ((temp_v6 = gameFlagIsSet(0xed), temp_v6 == 0 &&
               ((*puVar6 & DAT_00573a50) == 0 && (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a54) == 0))
              )))) {
            FUN_004fbeac(0,0,0,0x47,0);
          }
        }
        temp_v3 = *(unsigned int *)(param_1 + 0x45a4) | DAT_00573a2c;
        *puVar6 = *puVar6 | DAT_00573a28;
        *(unsigned int *)(param_1 + 0x45a4) = temp_v3;
      }
      temp_v2 = 0xe;
    }
  }
  if (g_btlMain != 0) {
    *(unsigned int *)(g_btlMain + 0x8c) = temp_v2;
  }
  return;
}

} /* extern "C" */
