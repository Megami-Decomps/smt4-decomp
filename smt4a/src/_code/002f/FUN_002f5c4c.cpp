/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5c4c` (_code @ 0x2f5c4c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int *);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7614(unsigned char [32], int);
int FUN_002ec8a8(unsigned int, unsigned char [32]);
int FUN_002ec9f4(unsigned char [32]);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: FUN_002ec9f4. */


unsigned int FUN_002f5c4c(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  unsigned char temp_v2 [12];
  
  FUN_002e6e34(temp_v2,param_1 + 4);
  FUN_002e7614(temp_v1,2000);
  temp_v0 = (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2,temp_v1);
  FUN_002ec8a8(param_2,temp_v1);
  FUN_002ec9f4(temp_v1);
  FUN_002e6e5c(temp_v2);
  return temp_v0;
}

} /* extern "C" */
