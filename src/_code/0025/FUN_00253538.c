/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253538` (_code @ 0x253538, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_00296de0. */
/* Supplied declaration required: FUN_002bdac0. */
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_00253538(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e128;
  *(unsigned char *)(DAT_0043e128 + 0x21) = 0;
  if (param_1 != 0) {
    FUN_002c4b30(temp_v0 + 0x15c,0x5a);
    temp_v1 = 0;
    do {
      if (*(char *)(param_1 + temp_v1) == '\0') {
        FUN_002c5ff4(temp_v0 + 0x15c,param_1,temp_v1 + 1);
        *(unsigned char *)(temp_v0 + 0x21) = 1;
        if (temp_v1 < 0x5c) {
          *(unsigned char *)(temp_v0 + 0x22) = 0;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x22) = 1;
          *(int *)(temp_v0 + 0x14) = (temp_v1 / 2) * 0xe;
        }
        FUN_002bdac0(temp_v0 + 0xd0,2,0);
        temp_v1 = FUN_002bef7c(temp_v0 + 0xd0);
        *(int *)(temp_v0 + 0x18) = temp_v1;
        *(int *)(temp_v0 + 0x1c) = temp_v1 + *(int *)(temp_v0 + 0x14) + 0x2a;
        if (*(int *)(temp_v0 + 8) == 3) {
          *(unsigned int *)(temp_v0 + 8) = 2;
        }
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x5a);
    FUN_00296de0(*(unsigned int *)(temp_v0 + 0x1b8),3,0xffffffff,0,3,temp_v0 + 0x15c);
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  }
  return;
}
