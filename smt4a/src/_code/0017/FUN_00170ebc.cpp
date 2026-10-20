/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170ebc` (_code @ 0x170ebc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_005891b0; /* 0x5891b0 */

/* Supplied declaration required: FUN_00189a38. */
extern unsigned int FUN_0018b1d0(void);
extern unsigned int nn_gxlow_CTR_ReleaseGpuRight(void);


void FUN_00170ebc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 != 0) {
    (*(signed char *)((unsigned char *)&DAT_005891b0 + 0x3)) = 1;
    temp_v0 = FUN_0018b1d0();
    temp_v1 = 0x170ee0;
  }
  else {
    if ((*(signed char *)((unsigned char *)&DAT_005891b0 + 0x3)) == '\0') {
      return;
    }
    (*(signed char *)((unsigned char *)&DAT_005891b0 + 0x3)) = 0;
    temp_v0 = nn_gxlow_CTR_ReleaseGpuRight();
    temp_v2 = 0xd8a02a05;
    if (temp_v0 != 0xd8a02a05) {
      temp_v2 = 0xd9001bf7;
    }
    if (temp_v0 == 0xd8a02a05 || temp_v0 == temp_v2) {
      return;
    }
    temp_v1 = 0x170f1c;
  }
  if (-1 < (int)temp_v0) {
    return;
  }
  FUN_00189a38(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
