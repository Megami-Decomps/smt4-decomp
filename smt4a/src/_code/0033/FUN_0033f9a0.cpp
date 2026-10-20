#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00573828; /* 0x573828 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0033f9a0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00164a9c();
  temp_v0 = DAT_00573828;
  if (DAT_00573828 != 0) {
    if (*(int *)(DAT_00573828 + 4) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 4) = 0;
    }
    FUN_0019a5a0(DAT_00573828);
    DAT_00573828 = 0;
  }
  FUN_001631d0(*(unsigned int *)(temp_v1 + 8),0);
  return;
}

} /* extern "C" */
