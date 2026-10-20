/* NON_MATCHING: romwright 0.5.0 decompilation of `streamReaderReadU64` (_code @ 0x2eeaf0, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int copyU64(int, unsigned int *);

extern int streamReaderHasBytes(int, unsigned int);
extern int onlineBufferGetData(unsigned int);
/* Supplied declaration required: copyU64. */


int streamReaderReadU64(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = streamReaderHasBytes(param_1,8);
  if (temp_v0 != 0) {
    temp_v0 = onlineBufferGetData(*(unsigned int *)(param_1 + 8));
    copyU64(temp_v0 + *(int *)(param_1 + 0xc),param_2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}

} /* extern "C" */
