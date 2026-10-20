/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146808` (_code @ 0x146808, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00158ef4(void);

extern unsigned char DAT_00589398; /* 0x589398 */
extern signed char DAT_00589399; /* 0x589399 */
extern int DAT_005893b0; /* 0x5893b0 */
extern int DAT_005893b4; /* 0x5893b4 */

/* Supplied declaration required: FUN_00158ef4. */
extern unsigned char nn_cfg_CTR_IsDebugMode(void);


void FUN_00146808(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  FUN_00158ef4();
  DAT_005893b0 = param_1 * 10;
  DAT_005893b4 = DAT_005893b0 >> 0x1f;
  temp_v0 = nn_cfg_CTR_IsDebugMode();
  if (temp_v0) {
    DAT_00589399 = '\x01';
  }
  if ((DAT_00589399 != '\0') || (DAT_005893b4 != 0 || DAT_005893b0 != 0)) {
    DAT_00589398 = 1;
  }
  return;
}

} /* extern "C" */
