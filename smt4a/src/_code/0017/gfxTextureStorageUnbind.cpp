/* NON_MATCHING: romwright 0.5.0 decompilation of `gfxTextureStorageUnbind` (_code @ 0x178b38, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_005b40e8; /* 0x5b40e8 */
extern unsigned int *g_textureBindingState; /* 0x5b4400 */


void gfxTextureStorageUnbind(int param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  
  piVar1 = DAT_005b40e8;
  if (param_1 != 0) {
    for (temp_v0 = *DAT_005b40e8; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x24)) {
      temp_v1 = 0;
      do {
        puVar4 = (unsigned int *)(temp_v0 + temp_v1 * 0x10);
        if (puVar4[3] == param_1) {
          if (piVar1[2] == temp_v0) {
            *g_textureBindingState = *g_textureBindingState | 1;
          }
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 2);
    }
    return;
  }
  return;
}

} /* extern "C" */
