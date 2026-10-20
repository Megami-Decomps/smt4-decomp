/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7bf4` (_code @ 0x2c7bf4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short [8], unsigned int, unsigned int, int, unsigned char *);

extern unsigned char LAB_00241798; /* 0x241798 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


void FUN_002c7bf4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [8];
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = dataTableGet(0x11,0);
  temp_v1 = dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  temp_v2[0] = (unsigned short)param_1;
  FUN_00100854(temp_v2,temp_v1,temp_v0,0x10,&LAB_00241798);
  return;
}

} /* extern "C" */
