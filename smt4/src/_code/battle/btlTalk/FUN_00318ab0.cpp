/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318ab0` (_code @ 0x318ab0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002c0c74(void);

extern unsigned int DAT_00439b58; /* 0x439b58 */

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(unsigned int);
extern unsigned int FUN_003c0868(unsigned int);


unsigned int FUN_00318ab0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  temp_v3 = FUN_00296cc8(2);
  temp_v4 = FUN_003c0868(DAT_00439b58);
  FUN_002c0c74();
  temp_v5 = FUN_002c0cc4(temp_v4);
  if (temp_v2 != 0) {
    temp_v0 = *(unsigned short *)(((temp_v5 + temp_v1 * 0x7c + temp_v2 * 0x24) - 0x1c) + temp_v3 * 2);
  }
  else {
    temp_v0 = *(unsigned short *)(temp_v5 + temp_v1 * 0x7c + temp_v3 * 2);
  }
  FUN_0028dcb0(temp_v0);
  return 1;
}

} /* extern "C" */
