/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6940` (_code @ 0x2b6940, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_001413d0. */
extern int FUN_0014143c(unsigned int, int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b6940(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_24;
  int temp_v2;
  
  if (-1 < param_1) {
    temp_v0 = FUN_0014143c(DAT_00433158,param_1);
    if (temp_v0 == 0) {
      if (param_1 < 0x200) {
        temp_v1 = (param_1 / 0x10) * 0x10;
        iStack_24 = temp_v1 + 0x10;
        temp_v2 = (param_1 % 0x10) * 0x20;
        if (*(char *)(param_1 + 0x18) != '\0' ||
            &temp_v1 != *(int **)(param_1 + ((int)&temp_v1 >> 0x20) * 4 + 8)) {
          (**(romwright_code **)(param_1 + 0x1c))();
          *(char *)(param_1 + 0x18) = (char)param_3;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_001413d0(DAT_00433158,param_1,param_2,param_3,param_4);
  }
  return;
}
