/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c684` (_code @ 0x23c684, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short [6], unsigned int, unsigned int, int, unsigned char *);

extern unsigned char LAB_001b1814; /* 0x1b1814 */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_0023c684(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [6];
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = dataTableGet(0x11,2);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  temp_v2[0] = (unsigned short)param_1;
  libc_bsearch(temp_v2,temp_v1,temp_v0,0xc,&LAB_001b1814);
  return;
}

} /* extern "C" */
