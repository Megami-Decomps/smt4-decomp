/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad80c` (_code @ 0x2ad80c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_002b5a48(short *);
extern int *FUN_002b5a5c(void);


void FUN_002ad80c(short *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  short temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  short *psStack_24;
  int temp_v3;
  
  piVar2 = (int *)FUN_002b5a5c();
  if (piVar2 != (int *)0x0) {
    do {
      psStack_24 = param_1 + 1;
      temp_v0 = *param_1;
      param_1 = psStack_24;
    } while (temp_v0 != 0x3a);
    temp_v2 = 4;
    temp_v1 = FUN_002b5a48(psStack_24);
    temp_v3 = (temp_v1 + 1) * 2;
    (**(romwright_code **)(*piVar2 + 0x18))(piVar2,&temp_v2,param_3,param_4);
  }
  return;
}
