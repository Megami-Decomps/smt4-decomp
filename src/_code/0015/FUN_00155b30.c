/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155b30` (_code @ 0x155b30, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0014e634(int);
/* Supplied declaration required: FUN_002b0408. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00155b30(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_0014e634(temp_v1);
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
  FUN_002b0408(*param_1);
  FUN_002c4360(param_1);
  return;
}
