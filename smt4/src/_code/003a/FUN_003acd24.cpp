/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acd24` (_code @ 0x3acd24, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable00FindById(void);
int devilGetRecord(void);

/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: devilGetRecord. */


int FUN_003acd24(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  dataTable00FindById();
  temp_v1 = (unsigned int)*param_2;
  dataTable00FindById();
  temp_v2 = *(int *)(temp_v1 + 8) - *(int *)(temp_v0 + 8);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    devilGetRecord();
    temp_v1 = (unsigned int)*param_2;
    devilGetRecord();
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 3) - (unsigned int)*(unsigned char *)(temp_v1 + 3);
    if (temp_v2 == 0) {
      temp_v2 = (unsigned int)*param_2 - (unsigned int)*param_1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
