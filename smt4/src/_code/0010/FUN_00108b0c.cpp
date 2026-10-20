/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108b0c` (_code @ 0x108b0c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011340c(int);

/* Supplied declaration required: FUN_0011340c. */
extern int FUN_002bff10(unsigned int);
extern int jobGetWork(void);


unsigned char FUN_00108b0c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  if ((((*(char *)(temp_v0 + 0xf28) != '\0') && (*(char *)(temp_v0 + 0xf2b) != '\0')) &&
      (temp_v1 = FUN_002bff10(0), temp_v1 == 0)) && (*(char *)(temp_v0 + 0x1c) != '\0')) {
    FUN_0011340c(0);
  }
  return 0;
}

} /* extern "C" */
