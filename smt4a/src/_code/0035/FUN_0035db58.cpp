#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_001846d0. */


void FUN_0035db58(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(unsigned char *)(temp_v0 + 0x20ad) = 1;
  FUN_001846d0(temp_v0 + 0x274,7);
  FUN_001846d0(temp_v0 + 0x300,8);
  return;
}

} /* extern "C" */
