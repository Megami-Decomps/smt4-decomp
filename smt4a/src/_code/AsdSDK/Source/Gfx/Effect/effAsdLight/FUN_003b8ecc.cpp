/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8ecc` (_code @ 0x3b8ecc, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sceneTraverserVisit(unsigned int, unsigned int);
int FUN_001b6d08(unsigned char *, int, unsigned int, unsigned int);
int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* stack frame of param_1: 12 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned char sp67; /* 0x67: local_67 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned int g_effAsdLightHandle; /* 0x5b3c80 */
extern unsigned int g_asdModelTransformBuilder; /* 0x5b3c88 */
extern int g_asdLightCount; /* 0x636e00 */

/* Supplied declaration required: sceneTraverserVisit. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: FUN_001b6d08. */
extern int FUN_0036bc10(unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_003b8ecc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v3;
  int *piVar11;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar14;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  temp_v14 = *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 8) + 0x2c);
  temp_v15 = FUN_0036bc10(1);
  piVar11 = *(int **)(param_1 + 0xa0);
  temp_v4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x9c) + 8) != 0) {
    do {
      temp_v5 = *(unsigned int *)(temp_v14 + 8);
      temp_v2 = asdMemoryGetAllocatorA();
      temp_v0 = 0;
      temp_v7 = 1;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v9 = 4;
      uStack_60 = 8;
      uStack_5c = 1;
      temp_v10 = 4;
      puVar4 = &temp_v7;
      temp_v8 = temp_v7;
      FUN_001b6d08(puVar4,0,temp_v5,temp_v2);
      temp_v1 = temp_v15;
      *piVar11 = (int)puVar4;
      puVar5 = *(unsigned char **)(temp_v15 + 0xc);
      if (((puVar5 == (unsigned char *)0x0) ||
          ((puVar5 != puVar4 &&
           (nw_gfx_SceneNode_IsCircularReference(), puVar5 == (unsigned char *)0x0)))) &&
         (*(int *)(puVar4 + 0xc) == 0)) {
        piVar14 = (int *)(temp_v1 + 0x14);
        temp_v3 = *(unsigned int *)(temp_v1 + 0x20) & 0x3fffffff;
        if ((*(int *)(temp_v1 + 0x1c) - *(int *)(temp_v1 + 0x18)) >> 2 >= (int)temp_v3) {
          if (temp_v3 == 0) {
            temp_v16 = 1;
          }
          else {
            temp_v16 = temp_v3 << 1;
          }
          if (temp_v16 > (*(unsigned int *)(temp_v1 + 0x20) & 0x3fffffff)) {
            if (((*piVar14 != 0) && ((*(unsigned int *)(temp_v1 + 0x20) & 0xc0000000) == 0x40000000)) &&
               (puVar6 = (unsigned int *)
                         (**(romwright_code **)(*(int *)*piVar14 + 8))((int *)*piVar14,temp_v16 << 2,0x20),
               puVar6 != (unsigned int *)0x0)) {
              temp_v6 = 0;
              puVar8 = *(unsigned int **)(temp_v1 + 0x18);
              puVar9 = *(unsigned int **)(temp_v1 + 0x1c);
              puVar7 = puVar6;
              if (puVar8 != puVar9) {
                do {
                  if (puVar7 != (unsigned int *)0x0) {
                    *puVar7 = *puVar8;
                  }
                  puVar8 = puVar8 + 1;
                  puVar7 = puVar7 + 1;
                } while (puVar8 != puVar9);
                puVar8 = *(unsigned int **)(temp_v1 + 0x18);
                temp_v6 = (*(int *)(temp_v1 + 0x1c) - (int)puVar8) >> 2;
              }
              if (puVar8 != (unsigned int *)0x0) {
                *(unsigned int **)(temp_v1 + 0x1c) = puVar8;
                (**(romwright_code **)(*(int *)*piVar14 + 0xc))((int *)*piVar14);
              }
              *(unsigned int **)(temp_v1 + 0x18) = puVar6;
              *(unsigned int **)(temp_v1 + 0x1c) = puVar6 + temp_v6;
              *(unsigned int *)(temp_v1 + 0x20) = temp_v16 | (*(unsigned int *)(temp_v1 + 0x20) & 0xc0000000);
              temp_v0 = 1;
              if (*(int **)(temp_v1 + 0x1c) != (int *)0x0) {
                **(int **)(temp_v1 + 0x1c) = (int)puVar4;
              }
              *(int *)(temp_v1 + 0x1c) = *(int *)(temp_v1 + 0x1c) + 4;
            }
          }
          else {
            temp_v0 = 1;
            if (*(int **)(temp_v1 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v1 + 0x1c) = (int)puVar4;
            }
            *(int *)(temp_v1 + 0x1c) = *(int *)(temp_v1 + 0x1c) + 4;
          }
        }
        else {
          temp_v0 = 1;
          if (*(int **)(temp_v1 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v1 + 0x1c) = (int)puVar4;
          }
          *(int *)(temp_v1 + 0x1c) = *(int *)(temp_v1 + 0x1c) + 4;
        }
        if (temp_v0) {
          *(unsigned int *)(puVar4 + 0xc) = *(unsigned int *)(temp_v1 + 0x10);
        }
      }
      temp_v4 = temp_v4 + 1;
      piVar11 = piVar11 + 7;
      g_asdLightCount = g_asdLightCount + 1;
    } while (temp_v4 < *(unsigned int *)(*(int *)(param_1 + 0x9c) + 8));
  }
  sceneTraverserVisit(g_effAsdLightHandle,g_asdModelTransformBuilder);
  return;
}

} /* extern "C" */
