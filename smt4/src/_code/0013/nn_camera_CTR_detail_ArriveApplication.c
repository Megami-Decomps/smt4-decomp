/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_camera_CTR_detail_ArriveApplication` (_code @ 0x13be58, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_004656c8; /* 0x4656c8 */
extern unsigned char DAT_004656c9; /* 0x4656c9 */

/* Supplied declaration required: FUN_0013bed4. */
/* Supplied declaration required: FUN_0013bf4c. */


unsigned int nn_camera_CTR_detail_ArriveApplication(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_004656c8 != '\0') {
    temp_v0 = (unsigned int)DAT_004656c9;
    FUN_0013bf4c();
    if (temp_v0 == 0xc9405001) {
      temp_v0 = (unsigned int)DAT_004656c9;
      FUN_0013bed4();
      return temp_v0;
    }
  }
  return temp_v0;
}
