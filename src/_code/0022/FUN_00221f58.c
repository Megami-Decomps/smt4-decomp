/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221f58` (_code @ 0x221f58, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043e08c; /* 0x43e08c */

/* Supplied declaration required: FUN_0024dc64. */
/* Supplied declaration required: FUN_0024dcec. */
/* Supplied declaration required: FUN_0024dcfc. */
extern int FUN_002580b4(void);
/* Supplied declaration required: FUN_00262a38. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_00221f58(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002580b4();
  if (temp_v0 != 0) {
    FUN_0024dcfc();
    FUN_0024dcec(0);
  }
  temp_v0 = FUN_002bf244(DAT_0043e08c);
  if (temp_v0 != 0) {
    FUN_00262a38();
    FUN_0024dc64();
    FUN_002c43b4(DAT_0043e08c,0);
  }
  return 1;
}
