/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259e9c` (_code @ 0x259e9c, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0027eb88. */
/* Supplied declaration required: FUN_0029e054. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_00259e9c(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  temp_v3 = *param_1;
  if (0 < *(short *)(temp_v3 + 0x24)) {
    do {
      FUN_002b8cc8();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(temp_v3 + 0x24));
  }
  FUN_0027eb88(temp_v3 + 0x1c,0xffffffff);
  *(unsigned short *)(temp_v3 + 0x24) = 0;
  temp_v2 = FUN_0029efa8(temp_v3 + 0xe8);
  temp_v2 = FUN_002bf4f8(0x2f,temp_v2 + 0x1f);
  temp_v0 = FUN_002bf4f8(0x2f,0x1b);
  temp_v1 = (int)(short)(*(short *)(temp_v2 + 8) + *(short *)(temp_v0 + 8));
  FUN_0029e054(temp_v1,(int)(short)(*(short *)(temp_v2 + 10) + *(short *)(temp_v0 + 10)),
               *(unsigned short *)(temp_v0 + 4) & 0x7fff,*(unsigned short *)(temp_v0 + 6) & 0x7fff);
  *(short *)(temp_v3 + 0x1c) = (short)temp_v1;
  *(short *)(temp_v3 + 0x24) = *(short *)(temp_v3 + 0x24) + 1;
  temp_v0 = FUN_002bf4f8(0x2f,0x34);
  temp_v1 = (int)(short)(*(short *)(temp_v2 + 8) + *(short *)(temp_v0 + 8));
  FUN_0029e054(temp_v1,(int)(short)(*(short *)(temp_v2 + 10) + *(short *)(temp_v0 + 10)),
               *(unsigned short *)(temp_v0 + 4) & 0x7fff,*(unsigned short *)(temp_v0 + 6) & 0x7fff);
  *(short *)(temp_v3 + 0x1e) = (short)temp_v1;
  temp_v0 = FUN_002bf4f8(0x2f,0x38);
  temp_v1 = (int)(short)(*(short *)(temp_v2 + 8) + *(short *)(temp_v0 + 8));
  FUN_0029e054(temp_v1,(int)(short)(*(short *)(temp_v2 + 10) + *(short *)(temp_v0 + 10)),
               *(unsigned short *)(temp_v0 + 4) & 0x7fff,*(unsigned short *)(temp_v0 + 6) & 0x7fff);
  *(short *)(temp_v3 + 0x20) = (short)temp_v1;
  temp_v0 = FUN_002bf4f8(0x2f,0x33);
  temp_v1 = (int)(short)(*(short *)(temp_v2 + 8) + *(short *)(temp_v0 + 8));
  FUN_0029e054(temp_v1,(int)(short)(*(short *)(temp_v2 + 10) + *(short *)(temp_v0 + 10)),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  *(short *)(temp_v3 + 0x22) = (short)temp_v1;
  *(short *)(temp_v3 + 0x24) = *(short *)(temp_v3 + 0x24) + 3;
  return;
}
