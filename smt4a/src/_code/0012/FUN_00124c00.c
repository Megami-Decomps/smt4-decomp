/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124c00` (_code @ 0x124c00, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_00302f88. */


unsigned int
FUN_00124c00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            )

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [3];
  unsigned int temp_v3 [2];
  int iStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v4;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v4 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 4));
  if (temp_v0 != 0) {
    temp_v2[0] = param_5;
    temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))
                      (*(int **)(param_1 + 0x14),param_2,param_3,temp_v4);
  }
  else {
    temp_v3[0] = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v2,temp_v3);
    FUN_00302f88(param_1 - 0x68,temp_v1);
    temp_v1 = 0;
  }
  return temp_v1;
}
