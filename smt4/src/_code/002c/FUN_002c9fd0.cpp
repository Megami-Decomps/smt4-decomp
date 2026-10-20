/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9fd0` (_code @ 0x2c9fd0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(int);
int FUN_002c43b4(unsigned int, int);
int FUN_003d9be4(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00435d18; /* 0x435d18 */

extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_003d9be4. */


void FUN_002c9fd0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (DAT_00435d18 != 0) {
    FUN_003d9be4(DAT_00435d18,temp_v0);
    FUN_002c415c(DAT_00435d18);
    DAT_00435d18 = 0;
  }
  FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x40),0);
  FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x3c),0);
  FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x38),0);
  return;
}

} /* extern "C" */
