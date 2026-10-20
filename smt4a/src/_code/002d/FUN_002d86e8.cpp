#include "romwright_types.h"

extern "C" {

int FUN_001f4e20(int, int);
int FUN_002392b8(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_002392b8. */


void FUN_002d86e8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  *(unsigned char *)(DAT_0058103c + 0x1d) = 1;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  FUN_002392b8(param_1);
  FUN_001f4e20(0,1);
  return;
}

} /* extern "C" */
