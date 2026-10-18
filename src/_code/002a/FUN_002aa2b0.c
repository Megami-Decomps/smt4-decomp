/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa2b0` (_code @ 0x2aa2b0, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */

extern int FUN_002bf6d0(void);


int FUN_002aa2b0(void)

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
  
  temp_v7 = DAT_0043dcb4;
  temp_v6 = FUN_002bf6d0();
  temp_v5 = DAT_0043dcb4;
  if (*(short *)(temp_v7 + 0x64c) < 10) {
    puVar9 = *(unsigned short **)(temp_v6 + 0xc);
    if (puVar9 != (unsigned short *)0x0) {
      temp_v2 = *puVar9;
      temp_v3 = puVar9[1];
      temp_v4 = *(unsigned short *)(temp_v6 + 10);
      temp_v7 = (int)*(short *)(DAT_0043dcb4 + 0x64c);
      if (temp_v7 < 10) {
        temp_v8 = DAT_0043dcb4 + temp_v7 * 8;
        *(unsigned short *)(temp_v8 + 10) = *(unsigned short *)(temp_v6 + 8);
        *(unsigned short *)(temp_v8 + 0xc) = temp_v4;
        *(unsigned short *)(temp_v8 + 0xe) = temp_v2;
        *(unsigned short *)(temp_v8 + 0x10) = temp_v3;
        *(short *)(temp_v5 + 0x64c) = *(short *)(temp_v5 + 0x64c) + 1;
        return temp_v7;
      }
    }
    else {
      temp_v0 = *(unsigned short *)(temp_v6 + 6);
      temp_v1 = *(unsigned short *)(temp_v6 + 4);
      temp_v2 = *(unsigned short *)(temp_v6 + 10);
      temp_v7 = (int)*(short *)(DAT_0043dcb4 + 0x64c);
      if (temp_v7 < 10) {
        temp_v8 = DAT_0043dcb4 + temp_v7 * 8;
        *(unsigned short *)(temp_v8 + 10) = *(unsigned short *)(temp_v6 + 8);
        *(unsigned short *)(temp_v8 + 0xc) = temp_v2;
        *(unsigned short *)(temp_v8 + 0xe) = temp_v1 & 0x7fff;
        *(unsigned short *)(temp_v8 + 0x10) = temp_v0 & 0x7fff;
        *(short *)(temp_v5 + 0x64c) = *(short *)(temp_v5 + 0x64c) + 1;
        return temp_v7;
      }
    }
  }
  return -1;
}
