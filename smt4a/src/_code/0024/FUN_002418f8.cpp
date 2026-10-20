/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002418f8` (_code @ 0x2418f8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186f58(void);

/* Supplied declaration required: FUN_00186f58. */
extern int FUN_003e4230(int);


int FUN_002418f8(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = *param_1;
  FUN_00186f58();
  temp_v1 = *param_2;
  FUN_00186f58();
  temp_v2 = FUN_003e4230(*param_1);
  temp_v3 = FUN_003e4230(*param_2);
  if (temp_v2 != 2) {
    if (temp_v3 == 2) {
      return -1;
    }
  }
  else if (temp_v3 != 2) {
    return 1;
  }
  temp_v0 = (unsigned int)*(unsigned short *)(temp_v0 + 0x26) - (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  if (temp_v0 == 0) {
    temp_v0 = *param_1;
    FUN_00186f58();
    temp_v1 = *param_2;
    FUN_00186f58();
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v0 + 0x24) - (unsigned int)*(unsigned short *)(temp_v1 + 0x24);
  }
  return temp_v0;
}

} /* extern "C" */
