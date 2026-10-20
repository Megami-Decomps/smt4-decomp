/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dec74` (_code @ 0x2dec74, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00203d04(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_002619e0(void);


void FUN_002dec74(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x44));
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = FUN_002619e0();
  if (temp_v1 != 0) {
    FUN_00203d04(1);
  }
  FUN_001631d0(*(unsigned int *)(temp_v0 + 0x44),0);
  return;
}

} /* extern "C" */
