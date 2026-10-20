/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cfb4` (_code @ 0x11cfb4, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001467a4(void);
int asdFatalError(void);

extern signed char DAT_0044e7e8; /* 0x44e7e8 */
extern unsigned int DAT_004d4638; /* 0x4d4638 */
extern unsigned int DAT_004d4648; /* 0x4d4648 */

extern int FUN_0013a170(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001467a4. */
/* Supplied declaration required: asdFatalError. */
extern void nn_cfg_CTR_Initialize(void);


void FUN_0011cfb4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e7e8 == '\0') {
    nn_cfg_CTR_Initialize();
    temp_v0 = FUN_0013a170(&DAT_004d4638,0x20,0x50005);
    if (temp_v0 < 0) {
      asdFatalError();
    }
    FUN_001467a4();
    DAT_0044e7e8 = '\x01';
  }
  param_1[0x12] = DAT_004d4648;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
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
