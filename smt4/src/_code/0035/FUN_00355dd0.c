/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00355dd0` (_code @ 0x355dd0, 0x88 bytes) from smt4_v1.2.0.cxi.
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

extern int FUN_002b5a48(void);
extern int *FUN_002b5a5c(short *);


void FUN_00355dd0(unsigned int *param_1,short *param_2)

{
  short temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *temp_v5;
  int temp_v6;
  
  piVar2 = (int *)FUN_002b5a5c(param_2);
  if (piVar2 != (int *)0x0) {
    do {
      temp_v5 = param_2 + 1;
      temp_v0 = *param_2;
      param_2 = temp_v5;
    } while (temp_v0 != 0x3a);
    temp_v4 = 4;
    temp_v1 = FUN_002b5a48();
    temp_v6 = (temp_v1 + 1) * 2;
    temp_v2 = (**(romwright_code **)(*piVar2 + 4))(piVar2,&temp_v3,&temp_v4);
    if ((temp_v2 & 0x80000000) == 0) {
      *param_1 = temp_v3;
    }
  }
  return;
}
