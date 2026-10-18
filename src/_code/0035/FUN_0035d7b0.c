/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d7b0` (_code @ 0x35d7b0, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

/* Supplied declaration required: FUN_00237c14. */
/* Supplied declaration required: FUN_00237c2c. */
/* Supplied declaration required: FUN_00237e94. */
extern int FUN_00237f34(int, unsigned char);
/* Supplied declaration required: FUN_00237f9c. */


unsigned int FUN_0035d7b0(int *param_1,int *param_2,int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  FUN_00237e94(&temp_v2,param_1);
  if (temp_v2 != 0) {
    FUN_00237c2c(&temp_v3,*param_3 + 8);
    if (temp_v3 != 0) {
      temp_v1 = temp_v2;
      FUN_00237c14(temp_v3 + 8,&temp_v1,param_1[5]);
      temp_v0 = FUN_00237f34(temp_v3 + 0x10,*(unsigned char *)(*param_1 + 10));
      if (temp_v0 != 0) {
        temp_v0 = temp_v3 + 0x10;
        FUN_00237f9c();
        if (temp_v0 != 0) {
          *param_2 = temp_v2;
          *param_1 = *(int *)(*param_1 + 4);
          return 0;
        }
      }
    }
  }
  return 2;
}
