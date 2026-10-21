/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111bb4` (_code @ 0x111bb4, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *g_gfxReleaseCallback; /* 0x44e334 */
extern int *DAT_004652a8; /* 0x4652a8 */
extern unsigned int *g_textureBindingState; /* 0x4655c0 */


void FUN_00111bb4(void)

{
/* irregular: 1 unstructured edge(s); irregular input(s): in_r12 */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  int *piVar6;
  romwright_code *in_r12;
  unsigned char temp_v2;
  
  if (DAT_004652a8 == (int *)0x0) {
    return;
  }
  piVar6 = (int *)DAT_004652a8[1];
  piVar2 = DAT_004652a8;
  do {
    piVar1 = piVar6;
    DAT_004652a8 = piVar2;
    if (piVar1 == (int *)0x0) {
      temp_v0 = *piVar2;
      while (temp_v0 != 0) {
        temp_v2 = temp_v0 != 0;
        if (temp_v2) {
          in_r12 = g_gfxReleaseCallback;
        }
        temp_v0 = *(int *)(temp_v0 + 0x24);
        if (temp_v2 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
      }
      DAT_004652a8 = (int *)0x0;
      return;
    }
    piVar6 = (int *)piVar1[0x11];
    if (piVar1 != (int *)0x0) {
      for (temp_v0 = *piVar2; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x24)) {
        temp_v1 = 0;
        do {
          puVar5 = (unsigned int *)(temp_v0 + temp_v1 * 0x10);
          if ((int *)puVar5[3] == piVar1) {
            if (piVar2[2] == temp_v0) {
              *g_textureBindingState = *g_textureBindingState | 1;
            }
            puVar5[3] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 2);
      }
      if (*piVar1 != 0) {
        in_r12 = g_gfxReleaseCallback;
        piVar2 = DAT_004652a8;
        if (g_gfxReleaseCallback == (romwright_code *)0x0) continue;
        (*g_gfxReleaseCallback)(piVar1[0xf],0x103,piVar1[0x10]);
      }
      in_r12 = g_gfxReleaseCallback;
      piVar2 = DAT_004652a8;
      if (g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(0x10000,0x100,0,piVar1);
        piVar2 = DAT_004652a8;
      }
    }
  } while( 1 );
}

} /* extern "C" */
