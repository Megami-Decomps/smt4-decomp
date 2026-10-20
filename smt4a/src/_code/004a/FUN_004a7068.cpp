/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7068` (_code @ 0x4a7068, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int dataTable00FindById(void);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTable00FindById. */


int FUN_004a7068(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  dataTable00FindById();
  temp_v1 = (unsigned int)*param_2;
  dataTable00FindById();
  temp_v2 = *(int *)(temp_v0 + 4) - *(int *)(temp_v1 + 4);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_00184310();
    temp_v1 = (unsigned int)*param_2;
    FUN_00184310();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 6) - (unsigned int)*(unsigned short *)(temp_v0 + 6);
    if (temp_v2 == 0) {
      temp_v2 = (unsigned int)*param_1 - (unsigned int)*param_2;
    }
  }
  return temp_v2;
}

} /* extern "C" */
