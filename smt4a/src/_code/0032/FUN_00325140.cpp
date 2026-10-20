#include "romwright_types.h"

extern "C" {

int FUN_00408338(int, int, int);
int FUN_004083a8(...);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_00408338. */
/* Supplied declaration required: FUN_004083a8. */


void FUN_00325140(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 != 0 || param_2 != 0) && (temp_v0 = FUN_004083a8(param_1), temp_v0 == 0)) {
    FUN_00408338(param_1,param_2,1);
  }
  if ((param_3 != 0 || param_4 != 0) && (temp_v0 = FUN_004083a8(param_3,param_4), temp_v0 == 0)) {
    FUN_00408338(param_3,param_4,1);
  }
  if ((param_5 != 0 || param_6 != 0) && (temp_v0 = FUN_004083a8(param_5,param_6), temp_v0 == 0)) {
    FUN_00408338(param_5,param_6,1);
    return;
  }
  return;
}

} /* extern "C" */
