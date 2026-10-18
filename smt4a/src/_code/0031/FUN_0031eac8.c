/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031eac8` (_code @ 0x31eac8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00324bc8. */
extern int FUN_00376f94(void);
/* Supplied declaration required: FUN_00376fb8. */
/* Supplied declaration required: FUN_00398004. */


void FUN_0031eac8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00376f94();
  temp_v0 = temp_v0 * 0x44;
  FUN_00324bc8((int)*(char *)(temp_v0 + 0x5814d9),(int)*(char *)(temp_v0 + 0x5814da),
               (int)*(char *)(temp_v0 + 0x5814db));
  FUN_00376fb8(0);
  FUN_00398004(0);
  return;
}
