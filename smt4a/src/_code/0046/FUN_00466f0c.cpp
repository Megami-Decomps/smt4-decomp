/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466f0c` (_code @ 0x466f0c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6668(int, int *);
int FUN_0045f834(int *);
int nw_ut_internal_LinkListImpl_insert(int, int, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_0045f834. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_00466f0c(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if ((char)param_1[0x48] != '\0') {
    *(unsigned char *)(param_1 + 0x48) = 0;
    *(unsigned char *)((int)param_1 + 0x121) = 0;
    FUN_0045f834(param_1);
    temp_v0 = param_1[0x47];
    FUN_001b6668(temp_v0 + 8,param_1 + 0x3e);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    nw_ut_internal_LinkListImpl_insert(temp_v0 + 0x14,temp_v0 + 0x18,param_1 + 0x3e);
    return;
  }
  return;
}

} /* extern "C" */
