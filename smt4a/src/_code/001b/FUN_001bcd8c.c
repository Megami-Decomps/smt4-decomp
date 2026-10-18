/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bcd8c` (_code @ 0x1bcd8c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ab878. */
extern int FUN_001ab8ac(int);


void FUN_001bcd8c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_001ab8ac(temp_v1);
  puVar2 = (unsigned int *)param_1[5];
  if (temp_v0 != 0) {
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
    }
    if ((romwright_code *)param_1[1] != (romwright_code *)0x0) {
      (*(romwright_code *)param_1[1])(0,param_1[2]);
    }
  }
  else {
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = *(unsigned int *)(temp_v1 + 0xc);
    }
    if ((romwright_code *)param_1[1] != (romwright_code *)0x0) {
      (*(romwright_code *)param_1[1])(*(unsigned int *)(temp_v1 + 0xc),param_1[2],*(unsigned int *)(temp_v1 + 0x18));
    }
    *(unsigned int *)(temp_v1 + 0xc) = 0;
  }
  FUN_001ab878(*param_1);
  FUN_0019a5a0(param_1);
  return;
}
