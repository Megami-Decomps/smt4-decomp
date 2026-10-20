/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146dc8` (_code @ 0x146dc8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

extern signed char DAT_00589285; /* 0x589285 */
extern unsigned char DAT_00589287; /* 0x589287 */
extern unsigned int DAT_0058928c; /* 0x58928c */
extern int DAT_00589290; /* 0x589290 */

/* Supplied declaration required: FUN_00195fc8. */
extern unsigned int nn_dsp_CTR_DSP_UnloadComponent(unsigned int);


unsigned int FUN_00146dc8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_00589290 != 0) {
    FUN_00195fc8();
  }
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v1 * 4 + 0x61a644) != 0) {
      FUN_00195fc8();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  temp_v0 = 0;
  if (DAT_00589285 != '\0') {
    temp_v0 = nn_dsp_CTR_DSP_UnloadComponent(DAT_0058928c);
    DAT_00589285 = '\0';
  }
  DAT_00589287 = 1;
  return temp_v0;
}

} /* extern "C" */
