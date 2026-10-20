/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e054` (_code @ 0x29e054, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned char g_ifTouch; /* 0x43dcb0 */


void FUN_0029e054(unsigned short param_1,unsigned short param_2,unsigned short param_3,unsigned short param_4)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_ifTouch + 0x4));
  if (*(short *)((*(int *)((unsigned char *)&g_ifTouch + 0x4)) + 0x64a) < 200) {
    temp_v1 = (*(int *)((unsigned char *)&g_ifTouch + 0x4)) + *(short *)((*(int *)((unsigned char *)&g_ifTouch + 0x4)) + 0x64a) * 8;
    *(unsigned short *)(temp_v1 + 10) = param_1;
    *(unsigned short *)(temp_v1 + 0xc) = param_2;
    *(unsigned short *)(temp_v1 + 0xe) = param_3;
    *(unsigned short *)(temp_v1 + 0x10) = param_4;
    *(short *)(temp_v0 + 0x64a) = *(short *)(temp_v0 + 0x64a) + 1;
  }
  return;
}

} /* extern "C" */
