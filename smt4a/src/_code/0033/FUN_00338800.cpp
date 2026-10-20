#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int FUN_002b2f08(void);
int FUN_002b40ec(void);
int FUN_00350ca4(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002b2f08. */
/* Supplied declaration required: FUN_002b40ec. */
/* Supplied declaration required: FUN_00350ca4. */


void FUN_00338800(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_002b40ec();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    temp_v0 = *(int *)(param_1 + 0x28);
    FUN_00350ca4(*(unsigned int *)(temp_v0 + 0x10));
    FUN_00350ca4(*(unsigned int *)(temp_v0 + 0x14));
    asdMemFree(temp_v0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_002b2f08();
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
