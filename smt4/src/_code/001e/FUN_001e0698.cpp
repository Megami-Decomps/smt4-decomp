/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0698` (_code @ 0x1e0698, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7bca(unsigned int, unsigned int, int, unsigned char *);

extern unsigned char LAB_0032c6c8; /* 0x32c6c8 */

extern unsigned int FUN_00297410(unsigned int);
/* Supplied declaration required: FUN_002b7bca. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned int FUN_001e0698(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00297410(0x16);
  temp_v1 = FUN_002c0cec(0x16,0);
  temp_v2 = FUN_002c0cc4();
  temp_v1 = FUN_002c0c74(temp_v1);
  FUN_002b7bca(temp_v2,temp_v1,0x60,&LAB_0032c6c8);
  temp_v1 = FUN_002c0cec(0x16,1);
  temp_v2 = FUN_002c0cc4();
  temp_v1 = FUN_002c0c74(temp_v1);
  FUN_002b7bca(temp_v2,temp_v1,0x60,&LAB_0032c6c8);
  return temp_v0;
}

} /* extern "C" */
