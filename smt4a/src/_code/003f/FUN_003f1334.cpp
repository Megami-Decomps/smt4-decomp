#include "romwright_types.h"

extern "C" {

int FUN_003f881c(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_003f881c. */


void FUN_003f1334(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003f86c8(0x4d);
  if (temp_v0 == 0) {
    FUN_003f881c(0x4d,0);
    return;
  }
  return;
}

} /* extern "C" */
