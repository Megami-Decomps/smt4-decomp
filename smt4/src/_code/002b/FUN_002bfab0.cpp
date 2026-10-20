#include "romwright_types.h"

extern "C" {

int FUN_001373b4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002bc1e4(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001373b4. */
/* Supplied declaration required: FUN_002bc1e4. */


void FUN_002bfab0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002bc1e4();
  FUN_001373b4(*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_2 + 0x24),
               *(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),
               *(unsigned int *)(param_1 + 0x1c));
  return;
}

} /* extern "C" */
