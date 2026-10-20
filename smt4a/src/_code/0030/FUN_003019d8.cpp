#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_003019d8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v1 + 4));
  if (temp_v0 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v1 + 4),0);
    return;
  }
  return;
}

} /* extern "C" */
