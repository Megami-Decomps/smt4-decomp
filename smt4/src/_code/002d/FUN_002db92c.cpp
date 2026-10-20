/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db92c` (_code @ 0x2db92c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294f64(void);
int FUN_002ae898(...);
int FUN_002c415c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002db92c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (*(int *)(temp_v0 + 0x48) != 0) {
    FUN_00294f64();
    *(unsigned int *)(temp_v0 + 0x48) = 0;
  }
  else if (*(int *)(temp_v0 + 0xc) != 1) {
    FUN_002ae898(*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40));
    if (-1 < *(int *)(temp_v0 + 0x44)) {
      FUN_002ae898(*(unsigned int *)(temp_v0 + 0x3c));
    }
    if (*(char *)(temp_v0 + 100) != '\0') {
      FUN_002ae898(0x32,0);
    }
  }
  FUN_002c415c(temp_v0);
  return;
}

} /* extern "C" */
