/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa6ac` (_code @ 0x2aa6ac, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int *g_commandBufferEnd; /* 0x4652a4 */


void FUN_002aa6ac(int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  if (g_commandBufferCursor + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 >= g_commandBufferEnd) {
    g_commandBufferCursor = g_commandBufferEnd;
  }
  else {
    temp_v1 = 0;
    if (temp_v1 < param_2) {
      do {
        puVar6 = (unsigned int *)(param_3 + temp_v1 * 4);
        temp_v2 = param_2 - temp_v1;
        puVar7 = puVar6 + 1;
        if (temp_v2 >= 0x81) {
          temp_v2 = 0x80;
        }
        *g_commandBufferCursor = *puVar6;
        temp_v0 = temp_v2 >> 1;
        puVar1 = g_commandBufferCursor + 2;
        g_commandBufferCursor[1] = (temp_v2 * 0x100000 - 0x100000) | (param_1 + temp_v1) | 0x800f0000;
        if (temp_v0 >= 0x80000000) {
          do {
            puVar8 = puVar7 + 1;
            temp_v0 = temp_v0 - 1;
            puVar6 = puVar1 + 1;
            *puVar1 = *puVar7;
            puVar7 = puVar7 + 2;
            puVar1 = puVar1 + 2;
            *puVar6 = *puVar8;
          } while (temp_v0 != 0);
        }
        else if (temp_v0 != 0 && -1 < (int)(temp_v0 * 2)) {
          g_commandBufferCursor = g_commandBufferCursor + 1;
          temp_v3 = (int)(temp_v0 * 2) >> 1;
          do {
            temp_v3 = temp_v3 - 1;
            g_commandBufferCursor[1] = puVar6[1];
            puVar6 = puVar6 + 2;
            g_commandBufferCursor = g_commandBufferCursor + 2;
            *g_commandBufferCursor = *puVar6;
          } while (temp_v3 != 0);
          puVar1 = puVar1 + temp_v0 * 2;
        }
        temp_v1 = temp_v1 + 0x80;
        g_commandBufferCursor = puVar1;
      } while (temp_v1 < param_2);
    }
  }
  return;
}

} /* extern "C" */
