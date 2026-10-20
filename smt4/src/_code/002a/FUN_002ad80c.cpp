/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad80c` (_code @ 0x2ad80c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5a5c(void);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int wstrlenU16(int *);
/* Supplied declaration required: FUN_002b5a5c. */


void FUN_002ad80c(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int *piStack_24;
  int temp_v2;
  
  piVar1 = param_1;
  FUN_002b5a5c();
  if (piVar1 != (int *)0x0) {
    do {
      piStack_24 = (int *)((int)param_1 + 2);
      temp_v0 = *param_1;
      param_1 = piStack_24;
    } while ((short)temp_v0 != 0x3a);
    temp_v1 = 4;
    temp_v0 = wstrlenU16(piStack_24);
    temp_v2 = (temp_v0 + 1) * 2;
    (**(romwright_code **)(*piVar1 + 0x18))(piVar1,&temp_v1,param_3,param_4);
  }
  return;
}

} /* extern "C" */
