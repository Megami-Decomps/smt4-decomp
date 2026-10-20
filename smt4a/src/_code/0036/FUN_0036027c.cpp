/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036027c` (_code @ 0x36027c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int contentEntryFindById2(void);

/* Supplied declaration required: contentEntryFindById2. */


int FUN_0036027c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  contentEntryFindById2();
  temp_v1 = (unsigned int)*param_2;
  contentEntryFindById2();
  temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x25) - (unsigned int)*(unsigned char *)(temp_v1 + 0x25);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    contentEntryFindById2();
    temp_v1 = (unsigned int)*param_2;
    contentEntryFindById2();
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x24) - (unsigned int)*(unsigned char *)(temp_v1 + 0x24);
  }
  return temp_v2;
}

} /* extern "C" */
