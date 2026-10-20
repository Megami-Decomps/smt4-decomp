/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_io_FileStream_FilePosition_Seek` (_code @ 0x235d54, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


/* WARNING: Removing unreachable block (ram,0x00235da0) */

void nw_io_FileStream_FilePosition_Seek(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_3 != 0) {
    if ((param_3 != 1) && (param_3 == 2)) {
      temp_v0 = *param_1;
      param_1[1] = temp_v0;
    }
  }
  else {
    param_1[1] = temp_v0;
  }
  if (param_2 != 0) {
    temp_v0 = *param_1;
    if (param_1[1] + param_2 <= *param_1) {
      temp_v0 = param_1[1] + param_2;
    }
    param_1[1] = temp_v0;
  }
  return;
}

} /* extern "C" */
