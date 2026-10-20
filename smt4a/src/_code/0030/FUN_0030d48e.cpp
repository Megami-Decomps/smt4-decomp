/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d48e` (_code @ 0x30d48e, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefAddRef(unsigned int);
int onlineSockAddrCopy(int, unsigned int *);

/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: onlineSockAddrCopy. */
extern int onlineSockAddrConstruct(int);


unsigned int * FUN_0030d48e(int param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = onlineSockAddrConstruct(param_1 + 4);
  temp_v1 = *param_2;
  *(unsigned int *)(temp_v0 - 4) = temp_v1;
  sharedRefAddRef(temp_v1);
  onlineSockAddrCopy(temp_v0,param_2 + 1);
  return (unsigned int *)(temp_v0 - 4);
}

} /* extern "C" */
