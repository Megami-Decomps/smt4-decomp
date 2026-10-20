/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221a08` (_code @ 0x221a08, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186f58(void);

/* Supplied declaration required: FUN_00186f58. */
extern unsigned int FUN_003e46f4(int);


int FUN_00221a08(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_003e46f4(*param_1);
  temp_v3 = 0;
  temp_v1 = FUN_003e46f4(*param_2);
  if ((temp_v0 & ~temp_v1) != 0) {
    temp_v3 = -1;
  }
  temp_v4 = (temp_v1 & ~temp_v0) != 0;
  if (temp_v4) {
    temp_v3 = 1;
  }
  if (!temp_v4 && temp_v3 == 0) {
    temp_v3 = *param_1;
    FUN_00186f58();
    temp_v2 = *param_2;
    FUN_00186f58();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 0x24) - (unsigned int)*(unsigned short *)(temp_v2 + 0x24);
  }
  return temp_v3;
}

} /* extern "C" */
