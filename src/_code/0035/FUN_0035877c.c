/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035877c` (_code @ 0x35877c, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned char sp7C; /* 0x7c: local_7c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_003589c8. */
/* Supplied declaration required: FUN_00358fa4. */


void FUN_0035877c(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [100];
  
  piVar1 = param_1;
  FUN_003589c8();
  if ((piVar1 != (int *)0x0) && (temp_v0 = 0, param_1[6] != 0)) {
    do {
      piVar1 = param_1 + temp_v0 * 4 + 7;
      FUN_00358fa4();
      if (piVar1 != (int *)0x0) {
        temp_v1 = 0;
        FUN_002c4b30(temp_v2,0x60);
        (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v2,0x60,&temp_v1,piVar1,2,0x12);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[6]);
  }
  return;
}
