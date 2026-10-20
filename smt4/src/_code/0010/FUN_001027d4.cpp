/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001027d4` (_code @ 0x1027d4, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4e98(unsigned int);
int FUN_002c4f8c(unsigned int, unsigned int);
int FUN_002c501c(void);

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_00446db8; /* 0x446db8 */
extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c4e98. */
/* Supplied declaration required: FUN_002c4f8c. */
/* Supplied declaration required: FUN_002c501c. */
extern int FUN_002c5210(void);


unsigned int FUN_001027d4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c5210();
  if ((temp_v0 == 1) && (DAT_00446db1 != '\0')) {
    temp_v0 = FUN_002c501c();
    if (temp_v0 != 0) {
      temp_v1 = FUN_002c501c();
      FUN_002c4f8c(g_titleScene,temp_v1);
    }
    if (DAT_00446db0 == '\0') {
      FUN_002c4e98(DAT_00446db8);
    }
  }
  return 0;
}

} /* extern "C" */
