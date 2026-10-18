/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ed98` (_code @ 0x20ed98, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_00295bd0(void);
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0020ed98(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x24));
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = FUN_00295bd0();
  if (temp_v1 != 0) {
    FUN_00295ba4(1);
  }
  FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x24),0);
  return;
}
