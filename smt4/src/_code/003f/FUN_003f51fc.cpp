/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f51fc` (_code @ 0x3f51fc, 0x54c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gfxTextureStorageRelease(unsigned int, int);
int gfxTextureStorageUnbind(int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern romwright_code *g_gfxReleaseCallback; /* 0x44e334 */
extern unsigned int *g_textureBindingState; /* 0x4655c0 */
extern int g_textureBindingCache; /* 0x4655e8 */
extern unsigned int DAT_004655ec; /* 0x4655ec */

/* Supplied declaration required: gfxTextureStorageRelease. */
/* Supplied declaration required: gfxTextureStorageUnbind. */


void FUN_003f51fc(int param_1,int param_2)

{
/* irregular: 8 goto(s); 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int *piVar7;
  int temp_v4;
  int *piVar9;
  int temp_v5;
  
  puVar1 = g_textureBindingState;
  temp_v4 = 0;
  temp_v5 = param_2;
  if (0 < param_1) {
    do {
      temp_v0 = g_textureBindingCache;
      temp_v1 = *(unsigned int *)(param_2 + temp_v4 * 4);
      if (temp_v1 != 0) {
        piVar6 = *(int **)(g_textureBindingCache + (temp_v1 & 0x1ff) * 4 + 0x10);
        piVar9 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
LAB_003f524c:
          piVar7 = piVar6;
          if ((unsigned int)piVar7[2] < temp_v1) goto LAB_003f5258;
          if ((piVar7 != (int *)0x0) && (piVar7[2] == temp_v1)) {
            if (*piVar7 == 0) goto LAB_003f56c8;
            temp_v2 = piVar7[1];
            if (temp_v2 == 0) {
              if (puVar1[0x17] == temp_v1) {
                puVar1[0x17] = 0;
                if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                  temp_v2 = **(int **)(temp_v0 + 0x8a8);
                }
                else {
                  temp_v2 = *(int *)(temp_v0 + 8);
                }
                *(unsigned int *)(temp_v2 + 4) = 0;
                *(unsigned int *)(temp_v0 + 0x810) = 0;
                if ((char)puVar1[0x41] != '\0') {
                  *puVar1 = *puVar1 | 0x400;
                }
              }
              if (puVar1[0x18] == *(unsigned int *)(param_2 + temp_v4 * 4)) {
                puVar1[0x18] = 0;
                if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                  temp_v2 = **(int **)(temp_v0 + 0x8a8);
                }
                else {
                  temp_v2 = *(int *)(temp_v0 + 8);
                }
                *(unsigned int *)(temp_v2 + 8) = 0;
                *(unsigned int *)(temp_v0 + 0x814) = 0;
                if (*(char *)((int)puVar1 + 0x105) != '\0') {
                  *puVar1 = *puVar1 | 0x800;
                }
              }
              if (puVar1[0x19] == *(unsigned int *)(param_2 + temp_v4 * 4)) {
                puVar1[0x19] = 0;
                if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                  temp_v2 = **(int **)(temp_v0 + 0x8a8);
                }
                else {
                  temp_v2 = *(int *)(temp_v0 + 8);
                }
                *(unsigned int *)(temp_v2 + 0xc) = 0;
                *(unsigned int *)(temp_v0 + 0x818) = 0;
                if (*(char *)((int)puVar1 + 0x106) != '\0') {
                  *puVar1 = *puVar1 | 0x1000;
                }
              }
              temp_v0 = *piVar7;
              gfxTextureStorageUnbind(temp_v0 + 0x34);
              gfxTextureStorageRelease(*(unsigned int *)(temp_v0 + 0x2c),temp_v0 + 0x34);
              goto joined_r0x003f54c4;
            }
            if (temp_v2 != 1) {
              if (temp_v2 != 2) {
                if (temp_v2 == 3) {
                  temp_v2 = 0;
                  do {
                    if (puVar1[temp_v2 + 0x1d] == *(unsigned int *)(param_2 + temp_v4 * 4)) {
                      puVar1[temp_v2 + 0x1d] = 0;
                      if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                        temp_v3 = **(int **)(temp_v0 + 0x8a8);
                      }
                      else {
                        temp_v3 = *(int *)(temp_v0 + 8);
                      }
                      *(unsigned int *)(temp_v3 + temp_v2 * 4 + 0x1c) = 0;
                      *(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x828) = 0;
                    }
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < 0x20);
                  temp_v0 = 0;
                  do {
                    if (puVar1[temp_v0 + 0x43] == *(unsigned int *)(param_2 + temp_v4 * 4)) {
                      puVar1[temp_v0 + 0x43] = 0;
                      puVar1[temp_v0 + 100] = 0;
                      *puVar1 = *puVar1 | 0x4000;
                    }
                    temp_v0 = temp_v0 + 1;
                  } while (temp_v0 < 0x21);
                  temp_v0 = *piVar7;
                  if ((*(int *)(temp_v0 + 0x804) != 0) && (g_gfxReleaseCallback != (romwright_code *)0x0)) {
                    (*g_gfxReleaseCallback)(0x10000,0x100,0,*(int *)(temp_v0 + 0x804),param_1,temp_v5);
                  }
                  if ((*(int *)(temp_v0 + 0x808) != 0) && (g_gfxReleaseCallback != (romwright_code *)0x0)) {
                    (*g_gfxReleaseCallback)(0x10000,0x100,0);
                  }
                  if ((*(int *)(temp_v0 + 0x80c) != 0) && (g_gfxReleaseCallback != (romwright_code *)0x0)) {
                    (*g_gfxReleaseCallback)(0x10000,0x100,0);
                  }
                  if ((*(int *)(temp_v0 + 0x810) != 0) && (g_gfxReleaseCallback != (romwright_code *)0x0)) {
                    (*g_gfxReleaseCallback)(0x10000,0x100,0);
                  }
                  if ((*(int *)(temp_v0 + 0x814) != 0) && (g_gfxReleaseCallback != (romwright_code *)0x0)) {
                    (*g_gfxReleaseCallback)(0x10000,0x100,0);
                  }
                  if (*(int *)(temp_v0 + 0x818) != 0) {
                    if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                      (*g_gfxReleaseCallback)(0x10000,0x100,0);
                      goto LAB_003f56a0;
                    }
                  }
                  else {
LAB_003f56a0:
                    if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                      (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v0);
                    }
                  }
                  *piVar7 = 0;
                }
                goto LAB_003f56c8;
              }
              if (puVar1[0x3d] != temp_v1) goto joined_r0x003f54c4;
              *(unsigned int *)(g_textureBindingCache + 0xc) = temp_v1;
            }
            else {
              if (puVar1[0x1a] == temp_v1) {
                puVar1[0x1a] = 0;
                if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                  temp_v2 = **(int **)(temp_v0 + 0x8a8);
                }
                else {
                  temp_v2 = *(int *)(temp_v0 + 8);
                }
                *(unsigned int *)(temp_v2 + 0x10) = 0;
                *(unsigned int *)(temp_v0 + 0x81c) = 0;
                if (*(char *)((int)puVar1 + 0x107) != '\0') {
                  *puVar1 = *puVar1 | 0x400;
                }
              }
              if (puVar1[0x1b] == *(unsigned int *)(param_2 + temp_v4 * 4)) {
                puVar1[0x1b] = 0;
                if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                  temp_v2 = **(int **)(temp_v0 + 0x8a8);
                }
                else {
                  temp_v2 = *(int *)(temp_v0 + 8);
                }
                *(unsigned int *)(temp_v2 + 0x14) = 0;
                *(unsigned int *)(temp_v0 + 0x820) = 0;
                if ((char)puVar1[0x42] != '\0') {
                  *puVar1 = *puVar1 | 0x800;
                }
              }
              if (puVar1[0x1c] == *(unsigned int *)(param_2 + temp_v4 * 4)) {
                puVar1[0x1c] = 0;
                if (*(int **)(temp_v0 + 0x8a8) != (int *)0x0) {
                  temp_v2 = **(int **)(temp_v0 + 0x8a8);
                }
                else {
                  temp_v2 = *(int *)(temp_v0 + 8);
                }
                *(unsigned int *)(temp_v2 + 0x18) = 0;
                *(unsigned int *)(temp_v0 + 0x824) = 0;
                if (*(char *)((int)puVar1 + 0x109) != '\0') {
                  *puVar1 = *puVar1 | 0x1000;
                }
              }
              temp_v2 = *piVar7;
              temp_v0 = 0;
              do {
                temp_v3 = temp_v2 + temp_v0 * 0x44;
                gfxTextureStorageUnbind(temp_v3 + 0x34);
                gfxTextureStorageRelease(*(unsigned int *)(temp_v2 + 0x2c),temp_v3 + 0x34);
                temp_v0 = temp_v0 + 1;
              } while (temp_v0 < 6);
joined_r0x003f54c4:
              if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                (*g_gfxReleaseCallback)(0x10000,0x100,0);
              }
              *piVar7 = 0;
LAB_003f56c8:
              temp_v1 = *(unsigned int *)(param_2 + temp_v4 * 4);
              if (temp_v1 < DAT_004655ec) {
                DAT_004655ec = temp_v1;
              }
              if (piVar9 != (int *)0x0) {
                piVar9[3] = piVar7[3];
              }
              else {
                temp_v0 = g_textureBindingCache + (temp_v1 & 0x1ff) * 4;
                *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(*(int *)(temp_v0 + 0x10) + 0xc);
              }
              if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                (*g_gfxReleaseCallback)(0x10000,0x100,0,piVar7);
              }
            }
          }
        }
      }
LAB_003f5710:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < param_1);
  }
  return;
LAB_003f5258:
  piVar6 = (int *)piVar7[3];
  piVar9 = piVar7;
  if ((int *)piVar7[3] == (int *)0x0) goto LAB_003f5710;
  goto LAB_003f524c;
}

} /* extern "C" */
