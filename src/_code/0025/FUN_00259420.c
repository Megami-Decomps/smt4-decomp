/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259420` (_code @ 0x259420, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001921e4. */
/* Supplied declaration required: FUN_00259490. */
/* Supplied declaration required: FUN_00286928. */
/* Supplied declaration required: FUN_00289640. */
/* Supplied declaration required: FUN_0028df3c. */
extern unsigned int FUN_003a167c(void);


void FUN_00259420(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_001921e4();
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_00259490();
  }
  FUN_001921e4();
  temp_v2 = FUN_003a167c();
  FUN_0028df3c(0);
  temp_v3 = FUN_00289640();
  FUN_00286928(temp_v0 + 0x170,0,temp_v3,0xf,0,temp_v2);
  return;
}
