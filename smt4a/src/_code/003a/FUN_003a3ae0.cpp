/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3ae0` (_code @ 0x3a3ae0, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_002e3328(void);
int FUN_00416c90(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00573c50; /* 0x573c50 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00416c90. */


void FUN_003a3ae0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00164a9c();
  temp_v0 = DAT_00573c50;
  if (DAT_00573c50 != 0) {
    if (*(int *)(DAT_00573c50 + 0x184) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x184) = 0;
    }
    if (*(int *)(temp_v0 + 0x30) != 0) {
      FUN_00416c90();
      FUN_002e3328();
      *(unsigned int *)(temp_v0 + 0x30) = 0;
    }
    if (*(int *)(temp_v0 + 0x28) != 0) {
      FUN_0019c364();
      *(unsigned int *)(temp_v0 + 0x28) = 0;
    }
    if (*(int *)(temp_v0 + 0x24) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x24) = 0;
    }
    if (DAT_00573c50 != 0) {
      FUN_0019a5a0();
      DAT_00573c50 = 0;
    }
  }
  FUN_001631d0(*(unsigned int *)(temp_v1 + 0x50),0);
  return;
}

} /* extern "C" */
