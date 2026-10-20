/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dffe4` (_code @ 0x4dffe4, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c5f90(void);
int FUN_004e5b5c(int *);
int FUN_004e6ed8(int *, int);
int FUN_004e7d20(int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_004c5f90. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e6ed8. */
/* Supplied declaration required: FUN_004e7d20. */


void FUN_004dffe4(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_001633a0(99);
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v4 * 0x408);
    if ((puVar5[1] & DAT_00571194) != 0 || (DAT_00571190 & *puVar5) != 0) {
      temp_v2 = (int)*(short *)(*(int *)(*param_1 + 0x1ffc) + temp_v4 * 0x408 + 8);
      FUN_004c5f90();
      if ((temp_v2 >= 1) && (temp_v3 = FUN_001633a0(99), temp_v3 > temp_v2)) {
        puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v4 * 0x408);
        temp_v0 = ~DAT_00571194;
        *puVar5 = *puVar5 & ~DAT_00571190;
        puVar5[1] = puVar5[1] & temp_v0;
      }
      else {
        temp_v5 = temp_v5 + 1;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  if (temp_v5 >= 3) {
    if (temp_v1 < 0x1e) {
      FUN_004e7d20(param_1,3);
      return;
    }
    if (temp_v1 < 0x41) {
      FUN_004e7d20(param_1,2);
      return;
    }
  }
  else {
    if (temp_v5 != 2) {
      FUN_004e5b5c(param_1);
      return;
    }
    if (temp_v1 < 0x28) {
      FUN_004e7d20(param_1,2);
      return;
    }
  }
  FUN_004e6ed8(param_1,0);
  return;
}

} /* extern "C" */
