/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394750` (_code @ 0x394750, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c1d78(unsigned int);
int FUN_002c1dd8(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c1d78. */
/* Supplied declaration required: FUN_002c1dd8. */
extern int FUN_002c564c(unsigned int);


void FUN_00394750(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      puVar2 = (unsigned short *)(temp_v0 * 0x10 + 0x43988c);
      if (*puVar2 == param_1) {
        if (puVar2 != (unsigned short *)0x0) {
          param_1 = *(unsigned int *)(temp_v0 * 0x10 + 0x439890);
        }
        if (puVar2 == (unsigned short *)0x0 || param_1 == 0) {
          return;
        }
        temp_v0 = FUN_002c564c(1);
        if (temp_v0 != 0) {
          return;
        }
        FUN_002c1dd8(2);
        FUN_002c1d78(param_1);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  return;
}

} /* extern "C" */
