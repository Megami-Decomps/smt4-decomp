/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a0e0` (_code @ 0x15a0e0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int FUN_001a0eb0(void);

extern signed char DAT_00589504; /* 0x589504 */
extern unsigned int DAT_0062d6d8; /* 0x62d6d8 */
extern unsigned int DAT_0062d6e8; /* 0x62d6e8 */

extern int FUN_00189738(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_001a0eb0. */
extern void nn_cfg_CTR_Initialize(void);


void FUN_0015a0e0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00589504 == '\0') {
    nn_cfg_CTR_Initialize();
    temp_v0 = FUN_00189738(&DAT_0062d6d8,0x20,0x50005);
    if (temp_v0 < 0) {
      sysFatalBreak();
    }
    FUN_001a0eb0();
    DAT_00589504 = '\x01';
  }
  param_1[0x12] = DAT_0062d6e8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

} /* extern "C" */
