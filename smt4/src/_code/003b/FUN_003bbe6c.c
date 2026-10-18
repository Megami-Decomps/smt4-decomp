/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbe6c` (_code @ 0x3bbe6c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003bbed0; /* 0x3bbed0 */
extern unsigned char LAB_003bbee8; /* 0x3bbee8 */
extern unsigned char DAT_00420a24; /* 0x420a24 */
extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */

/* Supplied declaration required: FUN_001db43c. */
/* Supplied declaration required: FUN_001db548. */
/* Supplied declaration required: FUN_0022ad84. */
extern int FUN_002634f4(unsigned int *);
extern unsigned int FUN_002c5c04(unsigned char *);
extern unsigned int FUN_00357818(unsigned int);


int FUN_003bbe6c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00420a24;
  param_1[2] = 0;
  temp_v0 = FUN_002634f4(param_1 + 3);
  FUN_001db548();
  FUN_001db43c();
  temp_v1 = FUN_002c5c04(&LAB_003bbed0);
  *(unsigned int *)(temp_v0 - 8) = temp_v1;
  temp_v1 = FUN_002c5c04(&LAB_003bbee8);
  *(unsigned int *)(temp_v0 - 4) = temp_v1;
  temp_v1 = FUN_00357818(0xe5c);
  FUN_0022ad84(temp_v1,DAT_0043ddb8);
  return temp_v0 - 0xc;
}
