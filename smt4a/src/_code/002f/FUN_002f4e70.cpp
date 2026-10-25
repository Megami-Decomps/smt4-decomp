/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4e70` (_code @ 0x2f4e70, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(unsigned int, unsigned int);
int streamReaderReadWordValue(void);

/* Supplied declaration required: onlineInstanceTableFind. */
extern int onlineInstantiationContextGetCurrent(void);
/* Supplied declaration required: streamReaderReadWordValue. */


void FUN_002f4e70(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  streamReaderReadWordValue();
  temp_v0 = onlineInstantiationContextGetCurrent();
  onlineInstanceTableFind(*(unsigned int *)(temp_v0 + 0x10),param_1);
  return;
}

} /* extern "C" */
