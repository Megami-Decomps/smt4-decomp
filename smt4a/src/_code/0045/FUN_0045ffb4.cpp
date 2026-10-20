/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045ffb4` (_code @ 0x45ffb4, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6668(int, int *);
int FUN_0045f834(int *);
int FUN_00463df8(int *);
int nw_ut_internal_LinkListImpl_insert(int, int, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_0045f834. */
/* Supplied declaration required: FUN_00463df8. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_0045ffb4(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)((int)param_1 + 0x328e) != '\0') {
    *(unsigned char *)((int)param_1 + 0x328e) = 0;
    FUN_00463df8(param_1 + 0x8c5);
    FUN_0045f834(param_1);
    temp_v0 = param_1[0xc11];
    FUN_001b6668(temp_v0 + 8,param_1 + 0x3e);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    nw_ut_internal_LinkListImpl_insert(temp_v0 + 0x14,temp_v0 + 0x18,param_1 + 0x3e);
    return;
  }
  return;
}

} /* extern "C" */
