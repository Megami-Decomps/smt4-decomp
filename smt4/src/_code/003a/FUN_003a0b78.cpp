/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0b78` (_code @ 0x3a0b78, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231240(int, unsigned int, unsigned int);
int FUN_00233240(int, int);
int FUN_002b8ee0(int, int);

/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);


void FUN_003a0b78(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00233240(param_1 + 0x3a8,0);
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    temp_v2 = param_1 + 0x3c8;
    FUN_002b8ee0(temp_v2,0);
    temp_v0 = FUN_002bed98(temp_v2);
    temp_v1 = FUN_002beda4(temp_v2);
    FUN_00231240(param_1 + 0x380,temp_v1,temp_v0);
    if (*(char *)(param_1 + 0x452) != '\0') {
      switch(*(unsigned int *)(param_1 + 0x860)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        temp_v2 = FUN_0029e0f8();
        if (temp_v2 != 0) {
          *(unsigned int *)(param_1 + 4) = 0xf;
          *(unsigned int *)(param_1 + 8) = 0;
          return;
        }
        break;
      case 7:
        *(unsigned int *)(param_1 + 4) = 0xf;
        *(unsigned int *)(param_1 + 8) = 0;
        return;
      case 8:
        *(unsigned int *)(param_1 + 4) = 0x10;
        *(unsigned int *)(param_1 + 8) = 0;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
