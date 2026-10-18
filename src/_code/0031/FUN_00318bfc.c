/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318bfc` (_code @ 0x318bfc, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439b58; /* 0x439b58 */

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(unsigned int);
extern unsigned int FUN_003c0a90(unsigned int);


unsigned int FUN_00318bfc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v3 = FUN_00296f60(2);
  temp_v4 = FUN_003c0a90(DAT_00439b58);
  FUN_002c0e4c();
  temp_v5 = FUN_002c0e9c(temp_v4);
  if (temp_v2 != 0) {
    temp_v0 = *(unsigned short *)(((temp_v5 + temp_v1 * 0x7c + temp_v2 * 0x24) - 0x1c) + temp_v3 * 2);
  }
  else {
    temp_v0 = *(unsigned short *)(temp_v5 + temp_v1 * 0x7c + temp_v3 * 2);
  }
  FUN_0028df54(temp_v0);
  return 1;
}
