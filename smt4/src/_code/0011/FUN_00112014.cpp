/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112014` (_code @ 0x112014, 0x33c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gfxTextureStorageRelease(unsigned int, int);
int gfxTextureStorageUnbind(int);
int memClear(int, int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern romwright_code *g_gfxReleaseCallback; /* 0x44e334 */
extern int g_textureBindingState; /* 0x4655c0 */
extern int *g_textureBindingCache; /* 0x4655e8 */

/* Supplied declaration required: gfxTextureStorageRelease. */
/* Supplied declaration required: gfxTextureStorageUnbind. */
/* Supplied declaration required: memClear. */


void FUN_00112014(void)

{
/* irregular: irregular input(s): in_r12; 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  romwright_code *in_r12;
  unsigned char temp_v5;
  
  temp_v2 = g_textureBindingState;
  if (g_textureBindingCache == (int *)0x0) {
    return;
  }
  temp_v4 = 0;
  do {
    piVar6 = (int *)g_textureBindingCache[temp_v4 + 4];
    while (piVar1 = piVar6, piVar1 != (int *)0x0) {
      temp_v1 = *piVar1;
      piVar6 = (int *)piVar1[3];
      if (temp_v1 != 0) {
        temp_v0 = piVar1[1];
        if (temp_v0 != 0) {
          if (temp_v0 == 1) {
            temp_v0 = 0;
            do {
              temp_v3 = temp_v1 + temp_v0 * 0x44;
              gfxTextureStorageUnbind(temp_v3 + 0x34);
              gfxTextureStorageRelease(*(unsigned int *)(temp_v1 + 0x2c),temp_v3 + 0x34);
              temp_v0 = temp_v0 + 1;
            } while (temp_v0 < 6);
            if (g_gfxReleaseCallback != (romwright_code *)0x0) {
              (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v1);
            }
          }
          else if (temp_v0 != 2) {
            if (temp_v0 != 3) {
              in_r12 = g_gfxReleaseCallback;
              if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                (*g_gfxReleaseCallback)(0x10000,0x100,0,piVar1);
              }
              continue;
            }
            if ((*(int *)(temp_v1 + 0x804) != 0) &&
               (in_r12 = g_gfxReleaseCallback, g_gfxReleaseCallback != (romwright_code *)0x0)) {
              (*g_gfxReleaseCallback)(0x10000,0x100,0);
            }
            temp_v5 = *(int *)(temp_v1 + 0x808) != 0;
            if (temp_v5) {
              in_r12 = g_gfxReleaseCallback;
            }
            if (temp_v5 && in_r12 != (romwright_code *)0x0) {
              (*in_r12)(0x10000,0x100,0);
            }
            temp_v5 = *(int *)(temp_v1 + 0x80c) != 0;
            if (temp_v5) {
              in_r12 = g_gfxReleaseCallback;
            }
            if (temp_v5 && in_r12 != (romwright_code *)0x0) {
              (*in_r12)(0x10000,0x100,0);
            }
            temp_v5 = *(int *)(temp_v1 + 0x810) != 0;
            if (temp_v5) {
              in_r12 = g_gfxReleaseCallback;
            }
            if (temp_v5 && in_r12 != (romwright_code *)0x0) {
              (*in_r12)(0x10000,0x100,0);
            }
            temp_v5 = *(int *)(temp_v1 + 0x814) != 0;
            if (temp_v5) {
              in_r12 = g_gfxReleaseCallback;
            }
            if (temp_v5 && in_r12 != (romwright_code *)0x0) {
              (*in_r12)(0x10000,0x100,0);
            }
            if (*(int *)(temp_v1 + 0x818) == 0) {
              if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v1);
              }
            }
            else if (g_gfxReleaseCallback != (romwright_code *)0x0) {
              (*g_gfxReleaseCallback)(0x10000,0x100,0);
              if (g_gfxReleaseCallback != (romwright_code *)0x0) {
                (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v1);
              }
            }
          }
          else if (g_gfxReleaseCallback != (romwright_code *)0x0) {
            (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v1);
          }
        }
        else {
          gfxTextureStorageUnbind(temp_v1 + 0x34);
          gfxTextureStorageRelease(*(unsigned int *)(temp_v1 + 0x2c),temp_v1 + 0x34);
          if (g_gfxReleaseCallback != (romwright_code *)0x0) {
            (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v1);
          }
        }
        *piVar1 = 0;
      }
      in_r12 = g_gfxReleaseCallback;
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,piVar1);
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x200) {
      *(unsigned int *)(temp_v2 + 0x5c) = 0;
      *(unsigned int *)(temp_v2 + 0x68) = 0;
      *(unsigned int *)(temp_v2 + 0x60) = 0;
      *(unsigned int *)(temp_v2 + 0x6c) = 0;
      *(unsigned int *)(temp_v2 + 100) = 0;
      *(unsigned int *)(temp_v2 + 0x70) = 0;
      memClear(temp_v2 + 0x74,0x80);
      *(unsigned int *)(temp_v2 + 0xf4) = 0;
      temp_v2 = *g_textureBindingCache;
      gfxTextureStorageUnbind(temp_v2 + 0x34);
      gfxTextureStorageRelease(*(unsigned int *)(temp_v2 + 0x2c),temp_v2 + 0x34);
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v2);
      }
      temp_v2 = 0;
      temp_v4 = g_textureBindingCache[1];
      do {
        temp_v1 = temp_v4 + temp_v2 * 0x44;
        gfxTextureStorageUnbind(temp_v1 + 0x34);
        gfxTextureStorageRelease(*(unsigned int *)(temp_v4 + 0x2c),temp_v1 + 0x34);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v4);
      }
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,g_textureBindingCache[2]);
      }
      g_textureBindingCache = (int *)0x0;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
