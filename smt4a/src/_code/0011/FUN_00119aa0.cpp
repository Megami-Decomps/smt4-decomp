/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119aa0` (_code @ 0x119aa0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);
int FUN_002ea9dc(int);
int FUN_002ecac4(int);
int FUN_002f9f12(void);

extern unsigned char DAT_0055a1e4; /* 0x55a1e4 */

extern int FUN_0011077c(unsigned int *);
/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002e9318(int);
extern int FUN_002ea00c(int);
/* Supplied declaration required: FUN_002ea9dc. */
extern int strDestroy(int);
/* Supplied declaration required: FUN_002ecac4. */
/* Supplied declaration required: FUN_002f9f12. */
extern int FUN_002fb028(int);


void FUN_00119aa0(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a1e4;
  if (param_1[0xc3] != 0) {
    FUN_002e7232();
    param_1[0xc3] = 0;
  }
  if (param_1[0x1d] != 0) {
    FUN_002f9f12();
  }
  temp_v0 = FUN_0011077c(param_1 + 0x82);
  temp_v0 = temp_v0 - 0x6c;
  FUN_002ea9dc(temp_v0);
  temp_v0 = strDestroy(temp_v0 - 0x24);
  temp_v0 = FUN_002fb028(temp_v0 - 0x90);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x60);
  temp_v0 = FUN_002e9318(temp_v0 - 0x10);
  temp_v0 = FUN_002e9318(temp_v0 - 0xc);
  FUN_002ecac4(temp_v0 - 0x6c);
  return;
}

} /* extern "C" */
