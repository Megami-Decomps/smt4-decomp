/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce4d4` (_code @ 0x2ce4d4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);

/* Supplied declaration required: FUN_00192550. */
extern int FUN_001ba3d4(unsigned short);


int FUN_002ce4d4(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_001ba3d4(*param_1);
  temp_v1 = FUN_001ba3d4(*param_2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    temp_v2 = (unsigned int)*param_1;
    FUN_00192550();
    temp_v3 = (unsigned int)*param_2;
    FUN_00192550();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 + 0x43) - (unsigned int)*(unsigned char *)(temp_v3 + 0x43);
  }
  return temp_v1;
}

} /* extern "C" */
