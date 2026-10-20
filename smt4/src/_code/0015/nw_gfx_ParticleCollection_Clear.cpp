/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleCollection_Clear` (_code @ 0x150b5c, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c424c(unsigned int, int, int);

/* Supplied declaration required: FUN_002c424c. */


void nw_gfx_ParticleCollection_Clear(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  short *psVar5;
  short *psVar6;
  unsigned short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v6 = *(int *)(param_1 + 200);
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned short *)(param_1 + 0x1a4) = 0xffff;
  temp_v5 = 0;
  *(unsigned short *)(param_1 + 0x1a6) = 0;
  do {
    temp_v2 = temp_v5;
    if (*(char *)(param_1 + 0xde) == '\0') {
      temp_v3 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xd0) != '\0') {
        temp_v2 = 1 - temp_v2;
      }
      temp_v3 = *(unsigned int *)(param_1 + temp_v2 * 4 + 0x14c);
    }
    FUN_002c424c(temp_v3,temp_v6 << 1,0xff);
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 2);
  if (*(char *)(param_1 + 0xdf) == '\0') {
    psVar5 = (short *)0x0;
  }
  else {
    psVar5 = *(short **)(param_1 + (unsigned int)(*(char *)(param_1 + 0xd0) != '\0') * 4 + 0x154);
  }
  if (0 < temp_v6) {
    temp_v7 = ((temp_v6 - 1U) & 1) == 0;
    temp_v0 = (short)(temp_v6 - 1U);
    psVar6 = psVar5 + -1;
    if (temp_v7) {
      *psVar5 = temp_v0;
      psVar6 = psVar5;
    }
    temp_v4 = (unsigned short)temp_v7;
    for (temp_v6 = temp_v6 >> 1; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
      temp_v1 = temp_v0 - temp_v4;
      psVar6[1] = temp_v1;
      temp_v4 = temp_v4 + 2;
      psVar6 = psVar6 + 2;
      *psVar6 = temp_v1 - 1;
    }
  }
  return;
}

} /* extern "C" */
