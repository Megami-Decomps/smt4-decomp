/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e54f4` (_code @ 0x2e54f4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

/* Supplied declaration required: jobStop. */
extern int jobIsValid(void);
extern int jobGetWork(unsigned int);
extern unsigned int scrGetArg(void);


unsigned int FUN_002e54f4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = jobIsValid();
  if (temp_v1 != 0) {
    temp_v1 = jobGetWork(temp_v0);
    if (*(int *)(temp_v1 + 4) == 1) {
      jobStop(temp_v0,0);
      return 1;
    }
    *(unsigned int *)(temp_v1 + 0x10) = 0xbe800000;
    *(unsigned char *)(temp_v1 + 0x14) = 1;
  }
  return 1;
}

} /* extern "C" */
