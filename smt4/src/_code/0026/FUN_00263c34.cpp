/* NON_MATCHING: destructor for vtable address point 0x422590; requires class/symbol integration before expressing the vtable write as a C++ destructor. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);

extern unsigned char DAT_00422590; /* 0x422590 */

/* Supplied declaration required: ifTouchRegionRemove. */


unsigned int * FUN_00263c34(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_00422590;
  if (0 < *(short *)(param_1 + 0xc)) {
    do {
      ifTouchRegionRemove();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0xc));
  }
  *(unsigned short *)(param_1 + 0xc) = 0;
  return param_1;
}

} /* extern "C" */
