/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd748` (_code @ 0x4bd748, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);

/* Supplied declaration required: FUN_0034a290. */


unsigned int FUN_004bd748(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2 + 0x34);
    if (temp_v1 != 0) {
      FUN_0034a290();
      temp_v0 = '\0';
      if (temp_v1 != 0) {
        temp_v0 = *(char *)(temp_v1 + 0x33);
      }
      if (temp_v1 != 0 && temp_v0 != '\0') {
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 8) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
