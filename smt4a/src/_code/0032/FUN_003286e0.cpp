#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(int);
int FUN_004f5e6c(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_005737f0; /* 0x5737f0 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_004f5e6c. */


void FUN_003286e0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if ((*(int *)((unsigned char *)&DAT_005737f0 + 0x18)) != 0) {
    FUN_004f5e6c((*(int *)((unsigned char *)&DAT_005737f0 + 0x18)),temp_v0);
    FUN_0019a5a0((*(int *)((unsigned char *)&DAT_005737f0 + 0x18)));
    (*(int *)((unsigned char *)&DAT_005737f0 + 0x18)) = 0;
  }
  FUN_001631d0(*(unsigned int *)(temp_v0 + 100),0);
  FUN_001631d0(*(unsigned int *)(temp_v0 + 0x60),0);
  FUN_001631d0(*(unsigned int *)(temp_v0 + 0x5c),0);
  return;
}

} /* extern "C" */
