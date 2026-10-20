/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317fb8` (_code @ 0x317fb8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c0544(int *);
int FUN_00451550(int *);

typedef int romwright_code(...);
extern signed char DAT_005b3bf5; /* 0x5b3bf5 */
extern unsigned char DAT_005b3bf6; /* 0x5b3bf6 */
extern int DAT_005b3c34; /* 0x5b3c34 */
extern int DAT_005b3c74; /* 0x5b3c74 */
extern unsigned int *DAT_00636ee4; /* 0x636ee4 */
extern unsigned int *DAT_00636ee8; /* 0x636ee8 */

/* Supplied declaration required: FUN_001c0544. */
/* Supplied declaration required: FUN_00451550. */


void FUN_00317fb8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  if (((DAT_005b3bf5 != '\0') && (DAT_005b3c34 < 1)) && (DAT_005b3c74 != 0)) {
    puVar1 = (unsigned int *)*DAT_00636ee4;
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    if (DAT_00636ee4 != DAT_00636ee8) {
      DAT_00636ee8 = DAT_00636ee8 + -1;
    }
    FUN_001c0544(&DAT_005b3c74);
    FUN_00451550(&DAT_005b3c74);
    DAT_005b3bf6 = 0;
  }
  return;
}

} /* extern "C" */
