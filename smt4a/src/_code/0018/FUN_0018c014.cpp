/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018c014` (_code @ 0x18c014, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c090(int);
int FUN_0018c108(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_005b4484; /* 0x5b4484 */

/* Supplied declaration required: FUN_0018c090. */
/* Supplied declaration required: FUN_0018c108. */


void FUN_0018c014(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_005b4484 + 0x1)) != '\0') {
    temp_v0 = (unsigned int)DAT_005b4484;
    FUN_0018c108();
    if (temp_v0 == 0xc9405001) {
      FUN_0018c090(DAT_005b4484);
      return;
    }
  }
  return;
}

} /* extern "C" */
