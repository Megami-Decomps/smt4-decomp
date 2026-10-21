/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011235c` (_code @ 0x11235c, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123b88(int);

typedef int romwright_code(...);
extern romwright_code *g_gfxReleaseCallback; /* 0x44e334 */
extern int g_textureBindingState; /* 0x4655c0 */
extern int DAT_004655f0; /* 0x4655f0 */

/* Supplied declaration required: FUN_00123b88. */


void FUN_0011235c(void)

{
/* irregular: 5 unstructured edge(s); 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = g_textureBindingState;
  if (DAT_004655f0 == 0) {
    return;
  }
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(DAT_004655f0 + temp_v2 * 4);
joined_r0x0011238c:
    temp_v0 = temp_v3;
    if (temp_v0 != 0) {
      temp_v3 = *(int *)(temp_v0 + 0xc);
      if (*(int *)(temp_v0 + 4) != 0) {
        if (*(int *)(temp_v0 + 4) == 1) {
          if (*(int *)(temp_v0 + 8) == 0) {
            if (g_gfxReleaseCallback != (romwright_code *)0x0) {
              (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v0);
            }
          }
          else if (g_gfxReleaseCallback != (romwright_code *)0x0) {
            (*g_gfxReleaseCallback)(0x10000,0x100,0);
            if (g_gfxReleaseCallback != (romwright_code *)0x0) {
              (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v0);
            }
          }
        }
      }
      else if (*(int *)(temp_v0 + 8) != 0) {
        FUN_00123b88(temp_v0);
        if (g_gfxReleaseCallback != (romwright_code *)0x0) {
          (*g_gfxReleaseCallback)(0x10000,0x100,0,*(unsigned int *)(temp_v0 + 8));
          if (g_gfxReleaseCallback != (romwright_code *)0x0) {
            (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v0);
          }
        }
      }
      else if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v0);
      }
      goto joined_r0x0011238c;
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x200) {
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,*(unsigned int *)(DAT_004655f0 + 0x800));
      }
      *(unsigned int *)(temp_v1 + 0x5dc) = 0;
      *(unsigned int *)(temp_v1 + 0x5d8) = 0;
      DAT_004655f0 = 0;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
