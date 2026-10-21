/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137080` (_code @ 0x137080, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int g_commandBufferEnd; /* 0x4652a4 */
extern int g_textureBindingState; /* 0x4655c0 */


void FUN_00137080(unsigned int *param_1)

{
  int temp_v0;
  
  temp_v0 = g_textureBindingState;
  *param_1 = 0x1c00;
  *(unsigned int *)(temp_v0 + 0x770) = (*(unsigned int *)(temp_v0 + 0x770) & 0xffffdfff) | 0x11000;
  temp_v0 = 0;
  do {
    while (temp_v0 == 0) {
      if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor = 0x11000;
        g_commandBufferCursor[1] = 0xd0080;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      temp_v0 = 1;
    }
    if (temp_v0 != 0xc) {
      if ((temp_v0 != 0xf) && ((unsigned int)g_commandBufferCursor < g_commandBufferEnd)) {
        *g_commandBufferCursor = 0;
        g_commandBufferCursor[1] = (temp_v0 + 0x80U) | 0xf0000;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
    }
    else if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
      *g_commandBufferCursor = 0xff0000;
      g_commandBufferCursor[1] = 0xf008c;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x1f);
  return;
}

} /* extern "C" */
