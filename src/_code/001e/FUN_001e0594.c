/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0594` (_code @ 0x1e0594, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0032c8fc; /* 0x32c8fc */

extern unsigned int FUN_002976ac(unsigned int);
/* Supplied declaration required: FUN_002b7f0a. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned int FUN_001e0594(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002976ac(0x16);
  temp_v1 = FUN_002c0ec4(0x16,0);
  temp_v2 = FUN_002c0e9c();
  temp_v1 = FUN_002c0e4c(temp_v1);
  FUN_002b7f0a(temp_v2,temp_v1,0x60,&LAB_0032c8fc);
  temp_v1 = FUN_002c0ec4(0x16,1);
  temp_v2 = FUN_002c0e9c();
  temp_v1 = FUN_002c0e4c(temp_v1);
  FUN_002b7f0a(temp_v2,temp_v1,0x60,&LAB_0032c8fc);
  return temp_v0;
}
