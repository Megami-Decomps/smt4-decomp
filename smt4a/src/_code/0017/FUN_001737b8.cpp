/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001737b8` (_code @ 0x1737b8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00190f58(int, unsigned int);

/* Supplied declaration required: FUN_00190f58. */


void FUN_001737b8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    return;
  }
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 4) = param_2;
  do {
    temp_v0 = 0x7fffffff;
    while( 1 ) {
      FUN_00190f58(param_1 + temp_v1 * 0x10 + 8,temp_v0);
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 4) {
        *(unsigned char *)(param_1 + 0x58) = 1;
        *(unsigned char *)(param_1 + 0x59) = 0;
        return;
      }
      if (temp_v1 == 0) break;
      temp_v0 = 1;
    }
  } while( 1 );
}

} /* extern "C" */
