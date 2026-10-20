/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f764` (_code @ 0x10f764, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011bde8(void);

extern unsigned char DAT_0044e650; /* 0x44e650 */
extern signed char DAT_0044e651; /* 0x44e651 */
extern int DAT_0044e668; /* 0x44e668 */
extern int DAT_0044e66c; /* 0x44e66c */

/* Supplied declaration required: FUN_0011bde8. */
extern unsigned char nn_cfg_CTR_IsDebugMode(void);


void FUN_0010f764(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_0011bde8();
  DAT_0044e668 = param_1 * 10;
  DAT_0044e66c = DAT_0044e668 >> 0x1f;
  temp_v0 = nn_cfg_CTR_IsDebugMode();
  if (temp_v0) {
    DAT_0044e651 = '\x01';
  }
  if ((DAT_0044e651 != '\0') || (DAT_0044e66c != 0 || DAT_0044e668 != 0)) {
    DAT_0044e650 = 1;
  }
  return;
}

} /* extern "C" */
