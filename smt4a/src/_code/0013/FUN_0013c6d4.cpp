/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c6d4` (_code @ 0x13c6d4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001509fc(int);
int FUN_001537b0(void);

/* Supplied declaration required: FUN_001509fc. */
/* Supplied declaration required: FUN_001537b0. */
extern int FUN_001546e8(unsigned int);
extern int jobGetWork(void);


unsigned int FUN_0013c6d4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  temp_v1 = FUN_001546e8(0);
  if ((((temp_v1 == 0) && (*(char *)(temp_v0 + 0xfa4) != '\0')) && (*(char *)(temp_v0 + 0xfa5) != '\0'))
     && (((*(char *)(temp_v0 + 0xfae) != '\0' && (*(int *)(temp_v0 + 0x1490) != 0)) &&
         (*(char *)(temp_v0 + 0x148c) == '\0')))) {
    if (*(char *)(temp_v0 + 0x1494) != '\0') {
      FUN_001537b0();
    }
    else {
      FUN_001509fc(0);
    }
  }
  return 0;
}

} /* extern "C" */
