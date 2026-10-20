/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4e64` (_code @ 0x3e4e64, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(unsigned short);
extern int gameGetSlotTable(void);


void FUN_003e4e64(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned long long temp_v5;
  
  temp_v2 = 0;
  temp_v5 = 0x3fa00000;
  do {
    if ((temp_v2 & 0xffff) < 0xc) {
      temp_v0 = gameGetSlotTable();
      temp_v0 = temp_v0 + (temp_v2 & 0xffff) * 0x134;
      if ((temp_v0 != -0x1ddc) && ((*(unsigned int *)(temp_v0 + 0x1f0c) & 1) != 0)) {
        *(unsigned short *)(temp_v0 + 0x1e3c) = 0;
        temp_v3 = *(short *)(temp_v0 + 0x1dea);
        temp_v1 = FUN_0018416c(*(unsigned short *)(temp_v0 + 0x1e3e));
        if (temp_v1 != 0) {
          temp_v4 = (float)VectorSignedToFloat((int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v3 = (short)(int)(temp_v4 * (float)temp_v5);
        }
        *(short *)(temp_v0 + 0x1e06) = temp_v3;
        *(unsigned short *)(temp_v0 + 0x1e08) = *(unsigned short *)(temp_v0 + 0x1dec);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 0xc);
  return;
}

} /* extern "C" */
