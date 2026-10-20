/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f6fc` (_code @ 0x34f6fc, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */
extern int FUN_002e5220(unsigned short);


int FUN_0034f6fc(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned short *puVar5;
  unsigned short *puVar6;
  
  puVar1 = (unsigned short *)(unsigned int)*param_1;
  FUN_00184310();
  puVar2 = (unsigned short *)(unsigned int)*param_2;
  FUN_00184310();
  temp_v0 = FUN_002e5220(*puVar1);
  temp_v1 = FUN_002e5220(*puVar2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    puVar5 = (unsigned short *)(unsigned int)*param_1;
    FUN_00184310();
    puVar6 = (unsigned short *)(unsigned int)*param_2;
    FUN_00184310();
    temp_v1 = (unsigned int)(unsigned char)puVar6[1] - (unsigned int)(unsigned char)puVar5[1];
    if ((temp_v1 == 0) && (temp_v1 = (unsigned int)puVar5[3] - (unsigned int)puVar6[3], temp_v1 == 0)) {
      temp_v1 = (unsigned int)*puVar6 - (unsigned int)*puVar5;
    }
  }
  return temp_v1;
}

} /* extern "C" */
