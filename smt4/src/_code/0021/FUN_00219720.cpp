/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219720` (_code @ 0x219720, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

extern unsigned int FUN_0029ea68(unsigned short);
/* Supplied declaration required: devilGetRecord. */


int FUN_00219720(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  
  temp_v0 = FUN_0029ea68(*param_1);
  temp_v1 = FUN_0029ea68(*param_2);
  if ((temp_v1 & ~temp_v0) != 0) {
    temp_v2 = -1;
  }
  else if ((temp_v0 & ~temp_v1) != 0) {
    temp_v2 = 1;
  }
  else {
    puVar4 = (unsigned short *)(unsigned int)*param_1;
    devilGetRecord();
    puVar5 = (unsigned short *)(unsigned int)*param_2;
    devilGetRecord();
    temp_v2 = (unsigned int)(unsigned char)puVar4[1] - (unsigned int)(unsigned char)puVar5[1];
    if ((temp_v2 == 0) &&
       (temp_v2 = (unsigned int)*(unsigned char *)((int)puVar5 + 3) - (unsigned int)*(unsigned char *)((int)puVar4 + 3), temp_v2 == 0)) {
      temp_v2 = (unsigned int)*puVar4 - (unsigned int)*puVar5;
    }
  }
  return temp_v2;
}

} /* extern "C" */
