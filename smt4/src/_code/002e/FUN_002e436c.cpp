#include "romwright_types.h"

extern "C" {

int FUN_00298140(int, int, int);
int FUN_002bd8e8(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00298140. */
/* Supplied declaration required: FUN_002bd8e8. */


void FUN_002e436c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002bd8e8(param_1 + 0x96c,0xd,0);
  FUN_00298140(param_1,0xe,1);
  return;
}

} /* extern "C" */
