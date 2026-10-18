/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa580` (_code @ 0x3fa580, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int FUN_00111800(int);
/* Supplied declaration required: FUN_00123bd8. */
/* Supplied declaration required: FUN_002e9afe. */
extern int FUN_002f4e86(int);
extern int FUN_00432acc(void);


unsigned int FUN_003fa580(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  
  temp_v0 = FUN_00432acc();
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0xc) = 1;
    *(unsigned char *)(param_1 + 0xd) = 1;
    *(unsigned char *)(param_1 + 0xe) = 1;
    *(unsigned int *)(param_1 + 0x10) = 8;
    return 1;
  }
  if ((*(int **)(param_1 + 0x44) != (int *)0x0) &&
     (temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x44) + 4))(), temp_v0 != 0)) {
    temp_v1 = (**(romwright_code **)**(unsigned int **)(param_1 + 0x44))();
    FUN_002e9afe(param_1 + 0x1c,temp_v1);
    temp_v0 = FUN_002f4e86(param_1 + 0x1c);
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 4) = 8;
    }
    else {
      temp_v1 = FUN_00111800(param_1 + 0x1c);
      *(unsigned int *)(param_1 + 0x28) = temp_v1;
      *(unsigned char *)(param_1 + 0xc) = 1;
      *(unsigned char *)(param_1 + 0xd) = 1;
      *(unsigned char *)(param_1 + 0xe) = 1;
      *(unsigned int *)(param_1 + 0x10) = 8;
    }
    return 1;
  }
  FUN_00123bd8(temp_v2,*(unsigned int *)(param_1 + 0x34));
  FUN_002e9afe(param_1 + 0x1c,temp_v2);
  temp_v0 = FUN_002f4e86(param_1 + 0x1c);
  if (temp_v0 == 0) {
    temp_v1 = FUN_00111800(param_1 + 0x1c);
    *(unsigned int *)(param_1 + 0x28) = temp_v1;
    *(unsigned char *)(param_1 + 0xc) = 1;
    *(unsigned char *)(param_1 + 0xd) = 1;
    *(unsigned char *)(param_1 + 0xe) = 1;
    *(unsigned int *)(param_1 + 0x10) = 8;
  }
  return 0;
}
