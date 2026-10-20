/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030395c` (_code @ 0x30395c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(unsigned char [12]);
int FUN_002e9520(int, unsigned int);

extern int rt_malloc(int);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9520. */
extern unsigned int constructObj0055affc(unsigned char *);


int * FUN_0030395c(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  
  temp_v0 = constructObj0055affc(temp_v4);
  temp_v3 = 0x20;
  if (param_2 >= 0x20) {
    temp_v3 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v1 = rt_malloc(temp_v3 << 3);
  *param_1 = temp_v1;
  for (temp_v2 = param_2; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    if (temp_v1 != 0) {
      FUN_002e9520(temp_v1,temp_v0);
    }
    temp_v1 = temp_v1 + 8;
  }
  param_1[2] = *param_1 + temp_v3 * 8;
  param_1[1] = *param_1 + param_2 * 8;
  FUN_002e9318(temp_v4);
  return param_1;
}

} /* extern "C" */
