/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301490` (_code @ 0x301490, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int socketReset(void);

extern int onlineSockAddrConstruct(int);
/* Supplied declaration required: socketReset. */


int FUN_00301490(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = onlineSockAddrConstruct(param_1 + 0x10);
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  socketReset();
  return temp_v0 - 0x10;
}

} /* extern "C" */
