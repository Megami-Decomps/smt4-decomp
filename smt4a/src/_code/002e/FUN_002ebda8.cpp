#include "romwright_types.h"

extern "C" {

int FUN_00192748(unsigned int);
int FUN_00192798(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
/* Supplied declaration required: FUN_00192798. */


void FUN_002ebda8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00187180(0x37,0);
  FUN_00192798();
  FUN_00192748(temp_v0);
  return;
}

} /* extern "C" */
