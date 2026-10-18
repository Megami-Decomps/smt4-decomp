/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001041d8` (_code @ 0x1041d8, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern signed char DAT_00464af1; /* 0x464af1 */
extern unsigned char DAT_00464af2; /* 0x464af2 */
extern int DAT_00464b30; /* 0x464b30 */
extern int DAT_00464b70; /* 0x464b70 */
extern unsigned int *DAT_004dae64; /* 0x4dae64 */
extern unsigned int *DAT_004dae68; /* 0x4dae68 */

/* Supplied declaration required: FUN_001107f0. */
/* Supplied declaration required: FUN_002c3568. */


void FUN_001041d8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  if (((DAT_00464af1 != '\0') && (DAT_00464b30 < 1)) && (DAT_00464b70 != 0)) {
    puVar1 = (unsigned int *)*DAT_004dae64;
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    if (DAT_004dae64 != DAT_004dae68) {
      DAT_004dae68 = DAT_004dae68 + -1;
    }
    FUN_002c3568(&DAT_00464b70);
    FUN_001107f0(&DAT_00464b70);
    DAT_00464af2 = 0;
  }
  return;
}
