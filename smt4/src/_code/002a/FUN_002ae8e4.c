/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae8e4` (_code @ 0x2ae8e4, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014cbcc. */
/* Supplied declaration required: FUN_0014ed4c. */
/* Supplied declaration required: FUN_002a6e00. */
/* Supplied declaration required: FUN_002a6e2c. */
extern int FUN_002a6e7c(unsigned int, int, unsigned int, unsigned char *);
extern int FUN_002a6f48(unsigned int);
extern int FUN_002b93b0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */


int FUN_002ae8e4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [128];
  
  temp_v0 = FUN_002a6f48(param_2);
  if (temp_v0 != -1) {
    FUN_002c4938(temp_v2,0x80);
    temp_v0 = FUN_002a6e7c(param_1,temp_v0,param_3,temp_v2);
    if ((temp_v0 != 0) && (temp_v1 = FUN_002b93b0(param_2,param_3), temp_v1 != 0)) {
      FUN_0014ed4c();
      FUN_0014cbcc(temp_v2,temp_v1,temp_v0);
      FUN_002a6e2c(temp_v1,param_4);
      FUN_002a6e00(temp_v1);
      return temp_v1;
    }
  }
  return 0;
}
