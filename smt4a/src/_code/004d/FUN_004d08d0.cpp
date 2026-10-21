/* NON_MATCHING: destructor for vtable address point 0x55ca10; requires class/symbol integration before expressing the vtable write as a C++ destructor. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);

extern unsigned char DAT_0055ca10; /* 0x55ca10 */

/* Supplied declaration required: ifTouchRegionRemove. */


unsigned int * FUN_004d08d0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_0055ca10;
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
