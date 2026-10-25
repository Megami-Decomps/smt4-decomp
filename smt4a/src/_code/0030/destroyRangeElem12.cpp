#include "romwright_types.h"

extern "C" {

int _ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EED1Ev(int);

/* Supplied declaration required: _ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EED1Ev. */


void destroyRangeElem12(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    _ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EED1Ev(param_2);
  }
  return;
}

} /* extern "C" */
