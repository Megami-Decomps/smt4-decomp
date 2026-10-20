/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109520` (_code @ 0x109520, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001132fc(int);
int FUN_002c39a4(unsigned int);

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001132fc. */
extern int FUN_002bff10(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned char FUN_00109520(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (((*(char *)(temp_v0 + 0xf9a) != '\0') && (*(char *)(temp_v0 + 0xf9c) != '\0')) &&
     (temp_v0 = FUN_002bff10(0), temp_v0 == 0)) {
    FUN_002c39a4(DAT_0044ea00);
    FUN_001132fc(0);
    return 0;
  }
  return 0;
}

} /* extern "C" */
