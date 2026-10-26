/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00410628` (_code @ 0x410628, 0x700 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "util/FUN_0013def0.h"

struct BtlCameraA;

extern "C" {

int asdLoadFileWithSize(unsigned char *, int);
int asdMemFree(void);
int dataTableFileGetTable(void);
int __aeabi_memset4(void);
int slotSetRequest(...);
int asdOperatorNewD(void);
int asdOperatorDeleteC(unsigned int *);
int FUN_003d54f8(...);
int FUN_003e503c(void);
int btlReleaseEntries(...);
int FUN_003efbac(...);
int FUN_003f1b3c(int, unsigned int, int, int ***);
int markerOwnerUpdatePositions(...);
int FUN_00411c04(int, int);
int FUN_00416610(unsigned int);
int FUN_0047f98c(unsigned int);
int mathVectorClear(...);
int FUN_004f1c5c(...);
void FUN_004f1edc(BtlCameraA *camera);
int cameraBeginScalarTransition(...);
int FUN_004f41b0(...);
int FUN_004f5238(...);
int FUN_004fb43c(...);
void btlReflectCreateKind43(int, unsigned int, unsigned int, unsigned int, unsigned int);
int btlReflectCreateKind42(unsigned int, int, unsigned int, int **);
int fillThreeWordsWithByte(...);
int __aeabi_memcpy4(unsigned int ****, unsigned char *, int);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char DAT_005297d4; /* 0x5297d4 */
extern unsigned char DAT_00529834; /* 0x529834 */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern int g_btlCamera; /* 0x571508 */
extern unsigned int g_btlAux; /* 0x573808 */
extern int g_btlPartnerAttack; /* 0x573c50 */
extern unsigned int DAT_00573c68; /* 0x573c68 */
extern unsigned int DAT_00573c6c; /* 0x573c6c */
extern unsigned int g_btlStageModel; /* 0x57a4f8 */

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: asdLoadFileWithSize. */
extern int lcgRandomRange(unsigned int);
extern int FUN_00163e84(unsigned int);
extern int padButtonIsPressed(unsigned int);
extern int FUN_00187168(void);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: dataTableFileGetTable. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: asdOperatorDeleteC. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: btlReleaseEntries. */
/* Supplied declaration required: FUN_003efbac. */
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: markerOwnerUpdatePositions. */
extern int chainCountIdUnflagged(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00411c04. */
/* Supplied declaration required: FUN_00416610. */
/* Supplied declaration required: FUN_0047f98c. */
/* Supplied declaration required: mathVectorClear. */
/* Supplied declaration required: FUN_004f1c5c. */
/* Supplied declaration required: cameraBeginScalarTransition. */
/* Supplied declaration required: FUN_004f41b0. */
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: btlReflectCreateKind43. */
/* Supplied declaration required: btlReflectCreateKind42. */
/* Supplied declaration required: fillThreeWordsWithByte. */
/* Supplied declaration required: __aeabi_memcpy4. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00410628(int param_1)

{
/* irregular: irregular input(s): in_d10, in_d9; 28 native warning(s); review required */
  unsigned int ***pppuVar1;
  unsigned short temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned char *puVar5;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar12;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int ***pppuVar15;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  unsigned long long in_d9;
  unsigned long long in_d10;
  unsigned int ***temp_v12;
  int **temp_v13;
  unsigned int ***temp_v14;
  unsigned int uStack_9c;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int uStack_48;
  
  temp_v16 = reinterpret_cast<int>(btlGetMainState());
  switch(*(unsigned int *)(param_1 + 0x10)) {
  case 0:
    temp_v3 = FUN_00163e84(0);
    if (temp_v3 == 0) {
      return;
    }
    temp_v3 = (int)FUN_0013def0(0);
    if (temp_v3 != 0) {
      FUN_003d54f8(0,10);
    }
    break;
  case 1:
    temp_v3 = FUN_00163e84(0);
    if (temp_v3 == 0) {
      return;
    }
    *(unsigned int *)(param_1 + 0x18c) = 0;
    *(unsigned int *)(param_1 + 400) = 0;
    *(unsigned int *)(param_1 + 0x194) = 0;
    *(unsigned int *)(param_1 + 0x198) = 0;
    *(unsigned int *)(param_1 + 0x19c) = 0;
    *(unsigned int *)(param_1 + 0x1a0) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0;
    *(unsigned int *)(param_1 + 0x1a8) = 0;
    *(unsigned int *)(param_1 + 0x1ac) = 0;
    *(unsigned int *)(param_1 + 0x1b0) = 0;
    *(unsigned int *)(param_1 + 0x1b4) = 0;
    temp_v6 = 0;
    *(unsigned int *)(param_1 + 0x1b8) = 0;
    fillThreeWordsWithByte(param_1 + 0x1bc,1);
    temp_v5 = 0;
    do {
      temp_v0 = temp_v5;
      FUN_003e503c();
      temp_v3 = FUN_00187168();
      if (temp_v3 != 0) {
        temp_v2 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300), 1);
        temp_v12 = (unsigned int ***)&temp_v14;
        FUN_003f1b3c(temp_v16,temp_v2,5,&temp_v13);
        btlReflectCreateKind42(temp_v6 * 5,0,temp_v6,temp_v13);
        btlReflectCreateKind43(temp_v6 * 5,0xffffffff,0,temp_v6,1);
        temp_v3 = param_1 + temp_v6;
        *(unsigned int ****)(param_1 + temp_v6 * 4 + 0x18c) = temp_v14;
        temp_v6 = (unsigned int)(short)((short)temp_v6 + 1);
        *(unsigned char *)(temp_v3 + 0x1bc) = 0;
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0xc);
    if ((int)temp_v6 >= 4) {
      puVar3 = (unsigned int *)(temp_v6 << 2);
      asdOperatorNewD();
      __aeabi_memset4();
      temp_v8 = (temp_v6 & 1) != 0;
      puVar8 = puVar3 + -1;
      if (temp_v8) {
        *puVar3 = 0;
        puVar8 = puVar3;
      }
      temp_v5 = (unsigned int)temp_v8;
      for (temp_v3 = (int)temp_v6 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
        puVar8[1] = temp_v5;
        puVar8[2] = temp_v5 + 1;
        puVar8 = puVar8 + 2;
        temp_v5 = temp_v5 + 2;
      }
      fillThreeWordsWithByte(&temp_v12,0xffffffff);
      temp_v3 = 0;
      temp_v7 = 0;
      temp_v5 = temp_v6;
      if (0 < (int)temp_v6) {
        do {
          temp_v5 = temp_v5 - 1;
          temp_v1 = lcgRandomRange(temp_v5 & 0xffff);
          (&temp_v12)[temp_v3] = (unsigned int ***)puVar3[temp_v1];
          temp_v3 = temp_v3 + 1;
          if ((int)temp_v5 < 0) break;
          temp_v7 = temp_v7 + 1;
          puVar3[temp_v1] = puVar3[temp_v5];
          puVar3[temp_v5] = 0xffffffff;
        } while (temp_v7 < (int)temp_v6);
      }
      if (0 < (int)temp_v6) {
        pppuVar15 = (unsigned int ***)0x0;
        do {
          pppuVar1 = temp_v12;
          if (temp_v12 != pppuVar15) {
            pppuVar1 = (unsigned int ***)temp_v13;
          }
          if ((temp_v12 != pppuVar15 && pppuVar1 != pppuVar15) && (temp_v14 != pppuVar15)) {
            *(unsigned char *)((int)pppuVar15 + param_1 + 0x1bc) = 1;
          }
          temp_v6 = temp_v6 - 1;
          pppuVar15 = (unsigned int ***)((int)pppuVar15 + 1);
        } while (temp_v6 != 0);
      }
      asdOperatorDeleteC(puVar3);
    }
    *(unsigned int *)(param_1 + 0x1c8) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(unsigned int *)(param_1 + 0x14) = 0;
    return;
  case 2:
    in_d10 = in_d10 & 0xffffffff;
    temp_v3 = 0;
    temp_v7 = *(int *)(g_btlPartnerAttack + 0x30);
    do {
      if ((*(int *)(temp_v7 + temp_v3 * 0xb0 + 0xa4) != 0) &&
         (*(char *)(param_1 + temp_v3 + 0x1bc) != '\x01')) {
        in_d9 = in_d9 & 0xffffffff;
        temp_v10 = (unsigned long long)*(unsigned int *)(param_1 + temp_v3 * 0x1c + 0x48) << 0x20;
        __aeabi_memcpy4(&temp_v12,&DAT_005297d4,0x54);
        temp_v8 = 0;
        temp_v1 = 0;
        do {
          pppuVar15 = (&temp_v12)[temp_v1 * 3];
          temp_v9 = (float)(temp_v10 >> 0x20);
          if ((romwright_u2f((unsigned int)(pppuVar15)) < temp_v9) && (temp_v9 <= romwright_u2f((unsigned int)((&temp_v13)[temp_v1 * 3])))) {
            in_d9 = in_d9 & 0xffffffff;
            temp_v8 = 1;
          }
          temp_v11 = (float)in_d9;
          temp_v4 = temp_v1 + 1;
          if (romwright_u2f((unsigned int)(pppuVar15)) < temp_v11) {
            in_d9 = romwright_zext_4_8(pppuVar15);
          }
          if (romwright_u2f((unsigned int)(pppuVar15)) < temp_v11) {
            temp_v10 = (unsigned long long)(unsigned int)temp_v9 << 0x20;
          }
          if ((float)in_d10 < romwright_u2f((unsigned int)((&temp_v13)[temp_v1 * 3]))) {
            in_d9 = romwright_zext_4_8((&temp_v12)[temp_v1 * 3]);
            temp_v10 = temp_v10 & 0xffffffff00000000;
          }
          temp_v1 = temp_v4;
        } while (temp_v4 < 7);
        if (!temp_v8) {
          temp_v9 = (float)(temp_v10 >> 0x20);
          if (temp_v9 <= (float)in_d9) {
            in_d9 = in_d9 & 0xffffffff;
          }
          if ((float)in_d10 < temp_v9) {
            in_d9 = in_d9 & 0xffffffff;
          }
        }
        if (*(int *)(param_1 + 0x1c8) < 3) {
          temp_v17 = 0x3f800000;
          temp_v18 = 0x3f59999a;
          uStack_48 = 0x3f19999a;
        }
        FUN_0047f98c(*(unsigned int *)(param_1 + temp_v3 * 4 + 0x18c));
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
        *(unsigned char *)(param_1 + temp_v3 + 0x1bc) = 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0xc);
    temp_v7 = chainCountIdUnflagged(g_btlActionReflect,0);
    temp_v3 = temp_v16;
    if (0 < temp_v7) {
      return;
    }
    temp_v7 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = temp_v7;
    if (temp_v7 < 0xe) {
      return;
    }
    puVar12 = (unsigned int *)(temp_v16 + 0x45a8);
    if ((*puVar12 & DAT_00573c68) != 0 || (*(unsigned int *)(temp_v16 + 0x45ac) & DAT_00573c6c) != 0) {
      temp_v7 = padButtonIsPressed(9);
      if (temp_v7 != 0) {
        if (*(int *)(param_1 + 0x184) != 0) {
          asdMemFree();
          *(unsigned int *)(param_1 + 0x184) = 0;
        }
        puVar5 = &DAT_00529834;
        asdLoadFileWithSize(&DAT_00529834,0);
        *(unsigned char **)(param_1 + 0x184) = puVar5;
        dataTableFileGetTable();
        temp_v2 = dataTableGetEntries();
        *(unsigned int *)(param_1 + 0x188) = temp_v2;
        FUN_00411c04(param_1,0);
      }
      temp_v7 = padButtonIsPressed(1);
      if (temp_v7 == 0) {
        return;
      }
      temp_v5 = *(unsigned int *)(temp_v3 + 0x45ac);
      temp_v6 = ~DAT_00573c6c;
      *puVar12 = *puVar12 & ~DAT_00573c68;
      *(unsigned int *)(temp_v3 + 0x45ac) = temp_v5 & temp_v6;
      return;
    }
    FUN_00416610(*(unsigned int *)(param_1 + 0x30));
    temp_v13 = (int **)0x6;
    temp_v14 = (unsigned int ***)0x0;
    uStack_9c = 1;
    temp_v15 = 0;
    temp_v12 = (unsigned int ***)0x0;
    temp_v2 = g_btlAux;
    FUN_004f5238(g_btlAux,0,0,10);
    *(unsigned int *)(param_1 + 0x2c) = temp_v2;
    temp_v12 = (unsigned int ***)0x0;
    temp_v13 = (int **)0x0;
    temp_v14 = (unsigned int ***)0x0;
    FUN_004fb43c(0,0,0x1000232,1);
    break;
  case 3:
    if (*(int *)(*(int *)(param_1 + 0x2c) + 4) < *(int *)(*(int *)(param_1 + 0x2c) + 8)) {
      return;
    }
    slotSetRequest(0,0,0xff);
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    cameraBeginScalarTransition(g_btlCamera,1,0);
    return;
  case 4:
    temp_v3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = temp_v3;
    if (temp_v3 < 7) {
      return;
    }
    mathVectorClear(g_btlCamera);
    markerOwnerUpdatePositions(g_btlStageModel);
    FUN_004f1c5c(g_btlCamera,0);
    FUN_004f1edc(reinterpret_cast<BtlCameraA *>(g_btlCamera));
    temp_v3 = g_btlCamera;
    *(unsigned int *)(g_btlCamera + 0xc) = *(unsigned int *)(g_btlCamera + 0x14);
    *(unsigned int *)(temp_v3 + 0x10) = *(unsigned int *)(temp_v3 + 0x18);
    btlReleaseEntries(temp_v16);
    if (*(int *)(param_1 + 0x184) != 0) {
      asdMemFree();
      *(unsigned int *)(param_1 + 0x184) = 0;
    }
    FUN_003efbac(temp_v16);
    break;
  case 5:
    temp_v13 = (int **)0x6;
    temp_v14 = (unsigned int ***)0x0;
    uStack_9c = 1;
    temp_v15 = 0;
    temp_v12 = (unsigned int ***)0x1;
    temp_v2 = g_btlAux;
    FUN_004f5238(g_btlAux,0,0,10);
    *(unsigned int *)(param_1 + 0x2c) = temp_v2;
    FUN_003d54f8(0);
    FUN_004f41b0(g_btlCamera,0,8);
    break;
  case 6:
    if (*(int *)(*(int *)(param_1 + 0x2c) + 8) <= *(int *)(*(int *)(param_1 + 0x2c) + 4)) {
      *(unsigned int *)(param_1 + 8) = 7;
    }
    return;
  default:
    return;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

} /* extern "C" */
