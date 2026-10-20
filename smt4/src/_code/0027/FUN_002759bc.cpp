/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002759bc` (_code @ 0x2759bc, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureRelease(void);

extern int g_frameTex; /* 0x43e278 */

/* Supplied declaration required: asdTextureRelease. */


void FUN_002759bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_frameTex;
  *(unsigned char *)(g_frameTex + 0xe8c) = 0;
  if (*(int *)(temp_v0 + 0xfdc) != 0) {
    asdTextureRelease();
    *(unsigned int *)(temp_v0 + 0xfdc) = 0;
  }
  if (*(int *)(temp_v0 + 0xfe8) != 0) {
    asdTextureRelease();
    *(unsigned int *)(temp_v0 + 0xfe8) = 0;
  }
  if (*(int *)(temp_v0 + 0xfe4) != 0) {
    asdTextureRelease();
    *(unsigned int *)(temp_v0 + 0xfe4) = 0;
  }
  return;
}

} /* extern "C" */
