/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c4f2` (_code @ 0x11c4f2, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

/* Supplied declaration required: FUN_0010cab4. */
extern int FUN_003113e4(int);


void FUN_0011c4f2(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1 [2];
  int iStack_24;
  unsigned int uStack_20;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  piVar1 = (int *)(param_1 + 0x80);
  iStack_24 = param_1;
  uStack_20 = param_2;
  temp_v2 = param_3;
  temp_v3 = param_4;
  (**(romwright_code **)(*piVar1 + 8))();
  temp_v1[0] = 0;
  temp_v0 = FUN_003113e4(param_1);
  FUN_0010cab4(param_2,*(unsigned int *)(temp_v0 + 0x10),temp_v2,temp_v3,param_5,temp_v1,param_6);
  (**(romwright_code **)(*piVar1 + 0xc))(piVar1);
  return;
}
