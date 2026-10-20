/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f6524` (_code @ 0x1f6524, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9024(void);

extern int FUN_00288118(unsigned short);
/* Supplied declaration required: FUN_002b9024. */


int FUN_001f6524(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned short *puVar5;
  unsigned short *puVar6;
  
  puVar1 = (unsigned short *)(unsigned int)*param_1;
  FUN_002b9024();
  puVar2 = (unsigned short *)(unsigned int)*param_2;
  FUN_002b9024();
  temp_v0 = FUN_00288118(*puVar1);
  temp_v1 = FUN_00288118(*puVar2);
  temp_v0 = temp_v0 - temp_v1;
  if (temp_v0 == 0) {
    puVar5 = (unsigned short *)(unsigned int)*param_1;
    FUN_002b9024();
    puVar6 = (unsigned short *)(unsigned int)*param_2;
    FUN_002b9024();
    temp_v0 = (unsigned int)(unsigned char)puVar5[1] - (unsigned int)(unsigned char)puVar6[1];
    if ((temp_v0 == 0) &&
       (temp_v0 = (unsigned int)*(unsigned char *)((int)puVar6 + 3) - (unsigned int)*(unsigned char *)((int)puVar5 + 3), temp_v0 == 0)) {
      temp_v0 = (unsigned int)*puVar5 - (unsigned int)*puVar6;
    }
  }
  return temp_v0;
}

} /* extern "C" */
