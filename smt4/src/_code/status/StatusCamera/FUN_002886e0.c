/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002886e0` (_code @ 0x2886e0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0044e178; /* 0x44e178 */

/* Supplied declaration required: FUN_0021baf4. */
/* Supplied declaration required: FUN_00263c80. */
/* Supplied declaration required: FUN_00276a3c. */
extern int FUN_002a0b34(void);
/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002886e0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044e178;
  FUN_00263c80(DAT_0044e178);
  FUN_002a4d14();
  FUN_002c415c(temp_v0);
  DAT_0044e178 = 0;
  temp_v1 = FUN_002a0b34();
  if (temp_v1 != 0) {
    FUN_0021baf4();
    FUN_00276a3c();
    return;
  }
  return;
}
