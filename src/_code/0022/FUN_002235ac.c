/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002235ac` (_code @ 0x2235ac, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027d81c. */
/* Supplied declaration required: FUN_002854ec. */
extern int FUN_002857e4(void);


void FUN_002235ac(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002857e4();
  temp_v0 = temp_v0 * 0x44;
  FUN_00276c24((int)*(char *)(temp_v0 + 0x447f55),(int)*(char *)(temp_v0 + 0x447f56),
               (int)*(char *)(temp_v0 + 0x447f57));
  FUN_0027d81c(0);
  FUN_002854ec(0);
  return;
}
