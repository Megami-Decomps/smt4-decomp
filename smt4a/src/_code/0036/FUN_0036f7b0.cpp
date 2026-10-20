#include "romwright_types.h"

extern "C" {

int FUN_00318544(unsigned int, unsigned int, int, unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00318544. */


unsigned int FUN_0036f7b0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_00236038(3);
  FUN_00318544(temp_v0,temp_v1,0,temp_v2,temp_v3);
  return 1;
}

} /* extern "C" */
