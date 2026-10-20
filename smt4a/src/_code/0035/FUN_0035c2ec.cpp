#include "romwright_types.h"

extern "C" {

int FUN_00318544(unsigned int, unsigned int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00318544. */


unsigned int FUN_0035c2ec(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  FUN_00318544(temp_v0,temp_v1,0,0,0);
  return 1;
}

} /* extern "C" */
