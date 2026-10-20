/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dbb8` (_code @ 0x19dbb8, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002e3390(void);


unsigned int FUN_0019dbb8(int param_1)

{
/* irregular: 1 unstructured edge(s) */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002e3390();
  if ((int)temp_v0 >= 9) {
    temp_v0 = 8;
  }
  if ((int)temp_v0 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v0 & 1;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      do {
        if (*(char *)(param_1 + temp_v2) == ':') {
          return 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)temp_v1);
    }
  }
  while( 1 ) {
    if ((int)temp_v0 <= (int)temp_v1) {
      return 0;
    }
    if ((*(char *)(param_1 + temp_v1) == ':') || (*(char *)(param_1 + temp_v1 + 1) == ':')) break;
    temp_v1 = temp_v1 + 2;
  }
  return 1;
}

} /* extern "C" */
