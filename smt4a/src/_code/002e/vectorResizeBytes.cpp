/* NON_MATCHING: romwright 0.5.0 decompilation of `vectorResizeBytes` (_code @ 0x2edb54, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZNSt6vectorIh12AsdAllocatorIhEE13_C_insert_auxEPhjRKh(int *, int, unsigned int, int *);
int byteVectorErase(int *, unsigned int, int, int, int *, unsigned int);

/* Supplied declaration required: _ZNSt6vectorIh12AsdAllocatorIhEE13_C_insert_auxEPhjRKh. */
/* Supplied declaration required: byteVectorErase. */


void vectorResizeBytes(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  temp_v2 = *param_1;
  temp_v1 = param_1[1];
  temp_v0 = temp_v1 - temp_v2;
  uStack_10 = param_3;
  if (temp_v0 < param_2) {
    _ZNSt6vectorIh12AsdAllocatorIhEE13_C_insert_auxEPhjRKh(param_1,temp_v1,param_2 - temp_v0,&uStack_10);
  }
  else if (param_2 < temp_v0) {
    byteVectorErase(param_1,temp_v2 + param_2,temp_v1,temp_v2,param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
