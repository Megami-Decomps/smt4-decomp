/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038db98` (_code @ 0x38db98, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_003f220c(unsigned int, int, int);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_0014aa78(unsigned int, unsigned int);
extern unsigned long long FUN_00203d74(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003f220c. */


unsigned int FUN_0038db98(void)

{
/* irregular: 2 native warning(s); review required */
  long long temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v4 = FUN_00203d74();
  temp_v0 = romwright_piece_4_4((int)temp_v4,(int)((unsigned long long)temp_v4 >> 0x20));
  if ((int)temp_v4 != 0) {
    temp_v0 = (long long)(temp_v2 << 1) * 0x55555556;
    temp_v2 = (temp_v2 << 1) / 3;
  }
  temp_v3 = FUN_0014aa78((int)((unsigned long long)temp_v0 >> 0x20),(int)temp_v0);
  FUN_003f220c(temp_v3,temp_v1,temp_v2);
  return 1;
}

} /* extern "C" */
