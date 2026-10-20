/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f61c4` (_code @ 0x1f61c4, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00257510(void);
int devilGetRecord(...);

extern int FUN_00257444(int);
/* Supplied declaration required: FUN_00257510. */
/* Supplied declaration required: devilGetRecord. */


int FUN_001f61c4(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned short *puVar6;
  
  temp_v0 = (unsigned int)param_1[1];
  FUN_00257510();
  temp_v1 = (unsigned int)param_2[1];
  FUN_00257510();
  devilGetRecord(*param_1);
  devilGetRecord(*param_2);
  temp_v2 = FUN_00257444((int)*(short *)(temp_v0 + 0x22));
  temp_v3 = FUN_00257444((int)*(short *)(temp_v1 + 0x22));
  temp_v2 = temp_v2 - temp_v3;
  if (temp_v2 == 0) {
    puVar5 = (unsigned short *)(unsigned int)*param_1;
    devilGetRecord();
    puVar6 = (unsigned short *)(unsigned int)*param_2;
    devilGetRecord();
    temp_v2 = (unsigned int)(unsigned char)puVar5[1] - (unsigned int)(unsigned char)puVar6[1];
    if ((temp_v2 == 0) &&
       (temp_v2 = (unsigned int)*(unsigned char *)((int)puVar6 + 3) - (unsigned int)*(unsigned char *)((int)puVar5 + 3), temp_v2 == 0)) {
      temp_v2 = (unsigned int)*puVar5 - (unsigned int)*puVar6;
    }
  }
  return temp_v2;
}

} /* extern "C" */
