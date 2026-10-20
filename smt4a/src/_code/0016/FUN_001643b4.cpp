/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001643b4` (_code @ 0x1643b4, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_ifTouch; /* 0x57f248 */

extern int FUN_001834a4(void);


int FUN_001643b4(void)

{
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  int temp_v8;
  
  temp_v7 = (*(int *)((unsigned char *)&g_ifTouch + 0x4));
  temp_v6 = FUN_001834a4();
  temp_v5 = (*(int *)((unsigned char *)&g_ifTouch + 0x4));
  if (*(short *)(temp_v7 + 0x64a) < 200) {
    puVar9 = *(unsigned short **)(temp_v6 + 0xc);
    if (puVar9 != (unsigned short *)0x0) {
      temp_v2 = *puVar9;
      temp_v3 = puVar9[1];
      temp_v4 = *(unsigned short *)(temp_v6 + 10);
      temp_v7 = (int)*(short *)((*(int *)((unsigned char *)&g_ifTouch + 0x4)) + 0x64a);
      if (temp_v7 < 200) {
        temp_v8 = (*(int *)((unsigned char *)&g_ifTouch + 0x4)) + temp_v7 * 8;
        *(unsigned short *)(temp_v8 + 10) = *(unsigned short *)(temp_v6 + 8);
        *(unsigned short *)(temp_v8 + 0xc) = temp_v4;
        *(unsigned short *)(temp_v8 + 0xe) = temp_v2;
        *(unsigned short *)(temp_v8 + 0x10) = temp_v3;
        *(short *)(temp_v5 + 0x64a) = *(short *)(temp_v5 + 0x64a) + 1;
        return temp_v7;
      }
    }
    else {
      temp_v0 = *(unsigned short *)(temp_v6 + 6);
      temp_v1 = *(unsigned short *)(temp_v6 + 4);
      temp_v2 = *(unsigned short *)(temp_v6 + 10);
      temp_v7 = (int)*(short *)((*(int *)((unsigned char *)&g_ifTouch + 0x4)) + 0x64a);
      if (temp_v7 < 200) {
        temp_v8 = (*(int *)((unsigned char *)&g_ifTouch + 0x4)) + temp_v7 * 8;
        *(unsigned short *)(temp_v8 + 10) = *(unsigned short *)(temp_v6 + 8);
        *(unsigned short *)(temp_v8 + 0xc) = temp_v2;
        *(unsigned short *)(temp_v8 + 0xe) = temp_v1 & 0x7fff;
        *(unsigned short *)(temp_v8 + 0x10) = temp_v0 & 0x7fff;
        *(short *)(temp_v5 + 0x64a) = *(short *)(temp_v5 + 0x64a) + 1;
        return temp_v7;
      }
    }
  }
  return -1;
}

} /* extern "C" */
