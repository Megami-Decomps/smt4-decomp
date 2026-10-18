/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225e50` (_code @ 0x225e50, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int FUN_00150ea0(void);
extern short *FUN_00235924(unsigned int, int);
extern short *FUN_0037f7e0(unsigned int);


unsigned int FUN_00225e50(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char *pbVar4;
  short *psVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar8;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  switch(param_5) {
  case 1:
    pbVar4 = (unsigned char *)*param_2;
    *param_2 = (unsigned int)(pbVar4 + 1);
    temp_v5 = (unsigned int)*pbVar4;
    break;
  case 2:
    puVar8 = (unsigned char *)*param_2;
    *param_2 = (unsigned int)(puVar8 + 1);
    temp_v1 = *puVar8;
    *param_2 = (unsigned int)(puVar8 + 2);
    temp_v5 = (unsigned int)romwright_piece_1_1(temp_v1,puVar8[1]);
    break;
  case 3:
    temp_v5 = 0;
    do {
      pbVar4 = (unsigned char *)*param_2;
      *param_2 = (unsigned int)(pbVar4 + 1);
      temp_v0 = *pbVar4;
      temp_v5 = (temp_v0 & 0x7f) | (temp_v5 << 7);
    } while ((temp_v0 & 0x80) != 0);
    break;
  case 4:
    puVar8 = (unsigned char *)*param_2;
    *param_2 = (unsigned int)(puVar8 + 1);
    temp_v1 = *puVar8;
    *param_2 = (unsigned int)(puVar8 + 2);
    temp_v6 = (int)romwright_piece_1_1(temp_v1,puVar8[1]);
    *param_2 = (unsigned int)(puVar8 + 3);
    temp_v1 = puVar8[2];
    *param_2 = (unsigned int)(puVar8 + 4);
    temp_v2 = puVar8[3];
    temp_v3 = FUN_00150ea0();
    temp_v5 = temp_v6 + (((romwright_piece_1_1(temp_v1,temp_v2) - temp_v6) + 1) * temp_v3 >> 0x10);
    break;
  case 5:
    pbVar4 = (unsigned char *)*param_2;
    *param_2 = (unsigned int)(pbVar4 + 1);
    temp_v4 = (unsigned int)*pbVar4;
    if (temp_v4 < 0x20) {
      psVar5 = (short *)FUN_0037f7e0(param_3);
    }
    else {
      if (temp_v4 >= 0x30) {
        return 0;
      }
      psVar5 = (short *)FUN_00235924(param_4,temp_v4 - 0x20);
    }
    if (psVar5 != (short *)0x0) {
      temp_v5 = (unsigned int)*psVar5;
    }
  }
  return temp_v5;
}
