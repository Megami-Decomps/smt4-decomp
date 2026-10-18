/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aeb78` (_code @ 0x2aeb78, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014cae4. */
/* Supplied declaration required: FUN_0014ec5c. */
/* Supplied declaration required: FUN_002a7144. */
/* Supplied declaration required: FUN_002a7170. */
extern int FUN_002a71c0(unsigned int, int, unsigned int, unsigned char *);
extern int FUN_002a728c(unsigned int);
extern int FUN_002b96f0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */


int FUN_002aeb78(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [128];
  
  temp_v0 = FUN_002a728c(param_2);
  if (temp_v0 != -1) {
    FUN_002c4b30(temp_v2,0x80);
    temp_v0 = FUN_002a71c0(param_1,temp_v0,param_3,temp_v2);
    if ((temp_v0 != 0) && (temp_v1 = FUN_002b96f0(param_2,param_3), temp_v1 != 0)) {
      FUN_0014ec5c();
      FUN_0014cae4(temp_v2,temp_v1,temp_v0);
      FUN_002a7170(temp_v1,param_4);
      FUN_002a7144(temp_v1);
      return temp_v1;
    }
  }
  return 0;
}
