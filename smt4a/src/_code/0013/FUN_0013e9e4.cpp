/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013e9e4` (_code @ 0x13e9e4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014b01c(int);
int FUN_00157558(unsigned int);

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014b01c. */
extern int FUN_001546e8(unsigned int);
/* Supplied declaration required: FUN_00157558. */
extern int FUN_00164a9c(void);


unsigned char FUN_0013e9e4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  if ((((*(char *)(temp_v0 + 0x1414) != '\0') && (*(char *)(temp_v0 + 0x1417) != '\0')) &&
      (temp_v1 = FUN_001546e8(0), temp_v1 == 0)) && (*(char *)(temp_v0 + 0xc) != '\0')) {
    FUN_00157558(DAT_0059dbb4);
    FUN_0014b01c(0);
  }
  return 0;
}

} /* extern "C" */
