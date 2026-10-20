/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cf00` (_code @ 0x31cf00, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_0031cf00(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v2 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c;
  if ((int)*(short *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x27e94) != 0) {
    temp_v0 = 0;
    while ((temp_v1 = (int)*(char *)(temp_v2 + temp_v0 + 0x1c88), temp_v1 < 0 ||
           ((unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 300 + 0xca) != (int)*(short *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x27e94)
           ))) {
      temp_v0 = temp_v0 + 1;
      if (temp_v0 >= 0x18) {
        return 0;
      }
    }
    temp_v0 = temp_v2 + *(char *)(temp_v2 + temp_v0 + 0x1c88) * 300 + 0x68;
  }
  return temp_v0;
}

} /* extern "C" */
