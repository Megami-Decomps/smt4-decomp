/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ce4c` (_code @ 0x31ce4c, 0x264 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sceneTraverserVisit(unsigned int, unsigned int);
int FUN_002b3acc(unsigned char *, int, unsigned int, unsigned int);
int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* stack frame of param_1: 12 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned char sp57; /* 0x57: local_57 */
    unsigned char sp58; /* 0x58: local_58 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_1_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int g_asdModelTransformBuilder; /* 0x464b84 */
extern int g_asdLightCount; /* 0x4dad80 */

extern int asdLightSelectActive(unsigned int);
/* Supplied declaration required: sceneTraverserVisit. */
/* Supplied declaration required: FUN_002b3acc. */
extern unsigned int asdMemoryGetAllocatorA(void);
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_0031ce4c(int param_1)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
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
  unsigned int uStack_50;
  unsigned int uStack_4c;
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
  temp_v15 = asdLightSelectActive(1);
  piVar11 = *(int **)(param_1 + 0xa0);
  temp_v4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x9c) + 8) != 0) {
    do {
      temp_v5 = *(unsigned int *)(temp_v14 + 8);
      temp_v2 = asdMemoryGetAllocatorA();
      temp_v7 = 1;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v9 = 4;
      uStack_50 = 8;
      uStack_4c = 1;
      temp_v10 = 4;
      puVar4 = &temp_v7;
      temp_v8 = temp_v7;
      FUN_002b3acc(puVar4,0,temp_v5,temp_v2);
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
          if (temp_v16 <= (*(unsigned int *)(temp_v1 + 0x20) & 0x3fffffff)) goto LAB_0031d040;
          if ((*piVar14 != 0) && ((*(unsigned int *)(temp_v1 + 0x20) & 0xc0000000) == 0x40000000)) {
            puVar6 = (unsigned int *)
                     (**(romwright_code **)(*(int *)*piVar14 + 8))((int *)*piVar14,temp_v16 << 2,0x20);
            puVar8 = *(unsigned int **)(temp_v1 + 0x18);
            puVar9 = *(unsigned int **)(temp_v1 + 0x1c);
            temp_v6 = 0;
            puVar7 = puVar6;
            if (puVar8 != puVar9) {
              do {
                if (puVar7 != (unsigned int *)0x0) {
                  *puVar7 = *puVar8;
                }
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 1;
              } while (puVar8 != puVar9);
              temp_v6 = (*(int *)(temp_v1 + 0x1c) - *(int *)(temp_v1 + 0x18)) >> 2;
            }
            if (*(int *)(temp_v1 + 0x18) != 0) {
              (**(romwright_code **)(*(int *)*piVar14 + 0xc))((int *)*piVar14);
            }
            *(unsigned int **)(temp_v1 + 0x1c) = puVar6 + temp_v6;
            *(unsigned int **)(temp_v1 + 0x18) = puVar6;
            *(unsigned int *)(temp_v1 + 0x20) = temp_v16 | (*(unsigned int *)(temp_v1 + 0x20) & 0xc0000000);
            goto LAB_0031d040;
          }
          temp_v0 = 0;
        }
        else {
LAB_0031d040:
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
  sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
  return;
}

} /* extern "C" */
