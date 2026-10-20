#include "romwright_types.h"

extern "C" {

int FUN_00184c00(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00184c00. */


void FUN_00472514(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_1;
  if ((temp_v0 & 0x10) != 0 && (temp_v0 & 0x20) != 0) {
    param_1[2] = 3;
    *param_1 = temp_v0 & 0xffffffdf;
    FUN_00184c00(param_1 + 0x110,2,0);
    FUN_00184c00(param_1 + 0x156,2,0);
    return;
  }
  return;
}

} /* extern "C" */
