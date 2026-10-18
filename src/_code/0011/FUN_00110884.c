/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110884` (_code @ 0x110884, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e909; /* 0x44e909 */
extern unsigned char DAT_0044e90a; /* 0x44e90a */
extern unsigned int DAT_0044e910; /* 0x44e910 */
extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_00121550. */
/* Supplied declaration required: FUN_001215dc. */
/* Supplied declaration required: FUN_00121890. */
/* Supplied declaration required: FUN_001218b0. */
/* Supplied declaration required: FUN_001218dc. */
/* Supplied declaration required: FUN_00121944. */
/* Supplied declaration required: FUN_001219a0. */
/* Supplied declaration required: FUN_001219f8. */
/* Supplied declaration required: FUN_001303bc. */
/* Supplied declaration required: FUN_002b5048. */
/* Supplied declaration required: FUN_002bb1bc. */
/* Supplied declaration required: FUN_002bb218. */
/* Supplied declaration required: FUN_002bb270. */
/* Supplied declaration required: FUN_002bb2f0. */
/* Supplied declaration required: FUN_002bb360. */
/* Supplied declaration required: FUN_002bd630. */
/* Supplied declaration required: FUN_002c39f4. */


void FUN_00110884(void)

{
/* irregular: 17 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0044e909 != '\0') {
    temp_v0 = FUN_002bb360();
    FUN_001303bc(temp_v0);
    FUN_00121550();
    FUN_002bb360();
    FUN_002b5048();
    FUN_002bd630();
    FUN_001218b0();
    FUN_002bd630();
    FUN_002c39f4();
    FUN_002bb2f0();
    FUN_00121944();
    FUN_002bb270();
    FUN_001219f8();
    FUN_001219a0(&DAT_004ea168);
    FUN_001215dc(&DAT_0044e910);
    FUN_002bd630();
    FUN_001218dc();
    FUN_002bb218();
    FUN_00121890();
    FUN_002bb1bc();
    FUN_00121890();
    DAT_0044e90a = 0;
    DAT_0044e909 = '\0';
  }
  return;
}
