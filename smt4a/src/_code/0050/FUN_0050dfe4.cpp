/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050dfe4` (_code @ 0x50dfe4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_003f2c5c(...); /* 0x3f2c5c */

/* Supplied declaration required: emptyStub_002f4370. */
extern int FUN_0043907c(void);


void FUN_0050dfe4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0043907c();
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned char *)(temp_v0 + 0x38) = 1;
  emptyStub_002f4370(temp_v0 - 8,FUN_003f2c5c,0x100000);
  return;
}

} /* extern "C" */
