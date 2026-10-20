#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019c364(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_005738c8; /* 0x5738c8 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_00357e24(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00164a9c();
  temp_v0 = DAT_005738c8;
  if (DAT_005738c8 != 0) {
    if (*(int *)(DAT_005738c8 + 0x14) != 0) {
      FUN_0019c364();
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    if (*(int *)(temp_v0 + 0x10) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    if (*(int *)(temp_v0 + 0x18) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    FUN_0019a5a0(DAT_005738c8);
    DAT_005738c8 = 0;
  }
  FUN_001631d0(*(unsigned int *)(temp_v1 + 0x4c),0);
  return;
}

} /* extern "C" */
