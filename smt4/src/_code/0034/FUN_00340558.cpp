/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340558` (_code @ 0x340558, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a014(unsigned int, int);
int FUN_002a0428(int, int);
int FUN_002a04f0(int);
int FUN_002d582c(unsigned int);
int FUN_002e1230(unsigned int, int);

/* Supplied declaration required: FUN_0029a014. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a04f0. */
extern int FUN_002adee0(void);
/* Supplied declaration required: FUN_002d582c. */
/* Supplied declaration required: FUN_002e1230. */


unsigned int FUN_00340558(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  while ((*(int *)(param_1 + temp_v1 * 4 + 0x10) == 0 || (temp_v0 = FUN_002adee0(), temp_v0 != 0))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 3) {
      temp_v1 = 0;
      do {
        temp_v0 = param_1 + temp_v1 * 4;
        if (*(int *)(temp_v0 + 0x10) != 0) {
          FUN_002a0428(*(int *)(temp_v0 + 0x10),1);
          FUN_002e1230(*(unsigned int *)(temp_v0 + 0x10),1);
          FUN_002d582c(*(unsigned int *)(temp_v0 + 0x10));
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      temp_v1 = 0;
      do {
        temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x10);
        if (temp_v0 != 0) {
          FUN_0029a014(*(unsigned int *)(temp_v0 + 8),0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      FUN_002a04f0(0);
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
