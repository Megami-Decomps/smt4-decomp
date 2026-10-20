#include "romwright_types.h"

extern "C" {

int FUN_002532f8(int);
int FUN_0027e774(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_002532f8. */
/* Supplied declaration required: FUN_0027e774. */


void FUN_0020d660(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned char *)(DAT_00447a78 + 0x18) = 1;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_002532f8(param_1);
  FUN_0027e774(0,1);
  return;
}

} /* extern "C" */
