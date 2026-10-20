#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_001acf98(int, int);
int FUN_003f86f8(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_003f86f8. */


void FUN_002c3364(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0014384c(0x11);
  temp_v0 = 0;
  do {
    FUN_001acf98(0x11,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_003f86f8(0x39);
  return;
}

} /* extern "C" */
