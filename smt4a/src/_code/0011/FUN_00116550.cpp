/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116550` (_code @ 0x116550, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);
int FUN_002f9f12(void);

extern unsigned char DAT_00559ce4; /* 0x559ce4 */

extern int FUN_002e9318(int);
extern int FUN_002ea00c(int);
extern int destroyObj0055ae64(int);
extern int strDestroy(unsigned int *);
/* Supplied declaration required: FUN_002ecac4. */
/* Supplied declaration required: FUN_002f9f12. */
extern int FUN_002fb028(int);


void FUN_00116550(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559ce4;
  if (param_1[0x3e] != 0) {
    FUN_002f9f12();
  }
  temp_v0 = strDestroy(param_1 + 0x62);
  temp_v0 = FUN_002fb028(temp_v0 - 0x78);
  temp_v0 = FUN_002e9318(temp_v0 - 0x20);
  temp_v0 = destroyObj0055ae64(temp_v0 - 0x18);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x60);
  FUN_002ecac4(temp_v0 - 0x78);
  return;
}

} /* extern "C" */
