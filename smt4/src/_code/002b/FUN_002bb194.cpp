/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb194` (_code @ 0x2bb194, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c131c(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern signed char DAT_0044e363; /* 0x44e363 */

extern unsigned int FUN_00129b14(void);
/* Supplied declaration required: FUN_002c131c. */
extern unsigned int nn_gxlow_CTR_ReleaseGpuRight(void);


void FUN_002bb194(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 != 0) {
    DAT_0044e363 = 1;
    temp_v0 = FUN_00129b14();
    temp_v1 = 0x2bb1b8;
  }
  else {
    if (DAT_0044e363 == '\0') {
      return;
    }
    DAT_0044e363 = 0;
    temp_v0 = nn_gxlow_CTR_ReleaseGpuRight();
    temp_v2 = 0xd8a02a05;
    if (temp_v0 != 0xd8a02a05) {
      temp_v2 = 0xd9001bf7;
    }
    if (temp_v0 == 0xd8a02a05 || temp_v0 == temp_v2) {
      return;
    }
    temp_v1 = 0x2bb1f4;
  }
  if (-1 < (int)temp_v0) {
    return;
  }
  FUN_002c131c(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
