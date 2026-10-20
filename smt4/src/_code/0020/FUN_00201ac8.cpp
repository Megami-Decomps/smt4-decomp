#include "romwright_types.h"

extern "C" {

int FUN_00297410(int);
int FUN_002a5ed0(int, int);
int FUN_002c4c2c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c4c2c. */


void FUN_00201ac8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c4c2c(0x19);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x19,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_00297410(0x39);
  return;
}

} /* extern "C" */
