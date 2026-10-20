#include "romwright_types.h"

extern "C" {

int FUN_002b47bc(unsigned int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002b47bc. */
extern unsigned int FUN_002b47f4(unsigned int);


void FUN_0023478c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002b47f4(0x41);
  if (param_2 != -1) {
    FUN_002b47bc(temp_v0,param_2,0);
    return;
  }
  return;
}

} /* extern "C" */
