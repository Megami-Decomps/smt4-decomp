/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001496f0` (_code @ 0x1496f0, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00161c64(int);

typedef int romwright_code(...);
extern romwright_code *g_gfxReleaseCallback; /* 0x589190 */
extern int g_textureBindingState; /* 0x5b4400 */
extern int DAT_005b4430; /* 0x5b4430 */

/* Supplied declaration required: FUN_00161c64. */


void FUN_001496f0(void)

{
/* irregular: 5 unstructured edge(s); 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = g_textureBindingState;
  if (DAT_005b4430 == 0) {
    return;
  }
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(DAT_005b4430 + temp_v2 * 4);
joined_r0x00149720:
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
        FUN_00161c64(temp_v0);
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
      goto joined_r0x00149720;
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x200) {
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,*(unsigned int *)(DAT_005b4430 + 0x800));
      }
      *(unsigned int *)(temp_v1 + 0x5dc) = 0;
      *(unsigned int *)(temp_v1 + 0x5d8) = 0;
      DAT_005b4430 = 0;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
