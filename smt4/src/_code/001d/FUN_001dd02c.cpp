/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd02c` (_code @ 0x1dd02c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

extern unsigned int scrGetArg(void);
extern int jobIsValid(void);
extern int jobGetWork(unsigned int);
/* Supplied declaration required: jobStop. */


unsigned int FUN_001dd02c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = jobIsValid();
  if (temp_v1 != 0) {
    temp_v1 = jobGetWork(temp_v0);
    if (*(int *)(temp_v1 + 0xc) == 1) {
      jobStop(temp_v0,0);
      return 1;
    }
    *(unsigned char *)(temp_v1 + 0x30) = 1;
    *(unsigned int *)(temp_v1 + 0x28) = 0xbe800000;
  }
  return 1;
}

} /* extern "C" */
