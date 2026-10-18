/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b1e4` (_code @ 0x42b1e4, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00197c78. */
extern int FUN_002e783c(void);


void FUN_0042b1e4(unsigned int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int temp_v5;
  
  piVar1 = param_2;
  FUN_00197c78();
  if (piVar1 != (int *)0x0) {
    do {
      temp_v4 = (int *)((int)param_2 + 2);
      temp_v0 = *param_2;
      param_2 = temp_v4;
    } while ((short)temp_v0 != 0x3a);
    temp_v3 = 4;
    temp_v0 = FUN_002e783c();
    temp_v5 = (temp_v0 + 1) * 2;
    temp_v1 = (**(romwright_code **)(*piVar1 + 4))(piVar1,&temp_v2,&temp_v3);
    if ((temp_v1 & 0x80000000) == 0) {
      *param_1 = temp_v2;
    }
  }
  return;
}
