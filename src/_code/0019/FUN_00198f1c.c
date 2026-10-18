/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00198f1c` (_code @ 0x198f1c, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_0028efe0. */
/* Supplied declaration required: FUN_0028f134. */
/* Supplied declaration required: FUN_0028f15c. */
/* Supplied declaration required: FUN_0029025c. */
/* Supplied declaration required: FUN_002906a8. */
extern int FUN_002971e4(unsigned int, unsigned int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002b6e78. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_00198f1c(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = DAT_0043dd50;
  *(unsigned char *)(DAT_0043dd50 + 0x5f3) = 1;
  temp_v1 = FUN_0029f260(temp_v3 + 0x660);
  temp_v2 = FUN_0029f248(temp_v3 + 0x660);
  temp_v0 = *(unsigned short *)(temp_v3 + (temp_v2 + temp_v1) * 2 + 0x78a);
  FUN_0028f15c(temp_v0);
  FUN_002b6e78();
  FUN_0028f134();
  FUN_0029025c(temp_v0);
  FUN_002bf030(temp_v3 + 0x264,2);
  FUN_0028efe0(temp_v0,0,1);
  temp_v3 = FUN_002971e4(*(unsigned int *)(temp_v3 + 0x5b4),3);
  if (temp_v3 != 0) {
    FUN_002b8b78(0x9e);
    FUN_002906a8();
    temp_v3 = DAT_0043dd50;
    *(unsigned int *)(DAT_0043dd50 + 8) = *(unsigned int *)(DAT_0043dd50 + 4);
    *(unsigned int *)(temp_v3 + 4) = 0xc;
    *(unsigned int *)(temp_v3 + 0x10) = 0;
  }
  return;
}
