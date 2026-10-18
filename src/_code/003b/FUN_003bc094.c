/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc094` (_code @ 0x3bc094, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003bc0f8; /* 0x3bc0f8 */
extern unsigned char LAB_003bc110; /* 0x3bc110 */
extern unsigned char DAT_0042066c; /* 0x42066c */
extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */

/* Supplied declaration required: FUN_001db340. */
/* Supplied declaration required: FUN_001db440. */
/* Supplied declaration required: FUN_0022af18. */
extern int FUN_00263720(unsigned int *);
extern unsigned int FUN_002c5e2c(unsigned char *);
extern unsigned int FUN_00357a28(unsigned int);


int FUN_003bc094(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0042066c;
  param_1[2] = 0;
  temp_v0 = FUN_00263720(param_1 + 3);
  FUN_001db440();
  FUN_001db340();
  temp_v1 = FUN_002c5e2c(&LAB_003bc0f8);
  *(unsigned int *)(temp_v0 - 8) = temp_v1;
  temp_v1 = FUN_002c5e2c(&LAB_003bc110);
  *(unsigned int *)(temp_v0 - 4) = temp_v1;
  temp_v1 = FUN_00357a28(0xe5c);
  FUN_0022af18(temp_v1,DAT_0043ddb8);
  return temp_v0 - 0xc;
}
