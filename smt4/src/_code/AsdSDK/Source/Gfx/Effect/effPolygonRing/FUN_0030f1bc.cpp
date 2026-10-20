#include "romwright_types.h"

extern "C" {

int FUN_002570a8(unsigned int);
int FUN_002c415c(...);

typedef int romwright_code(...);
extern unsigned char DAT_00472718;
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002570a8. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0030f1bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002570a8(*(unsigned int *)(param_1 + 8));
  temp_v0 = *(int *)(param_1 + 4);
  (**(romwright_code **)(&DAT_00472718 + *(int *)(temp_v0 + 0x38) * 0x18 + 8))(*(unsigned int *)(temp_v0 + 0x3c));
  FUN_002c415c(temp_v0);
  FUN_002c415c(*(unsigned int *)(param_1 + 0xc));
  return;
}

} /* extern "C" */
