#include "romwright_types.h"

extern "C" {

int FUN_002497f8(unsigned int *, unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002497f8. */
extern int FUN_0029a924(unsigned int);
extern int FUN_0029a9d4(unsigned int, unsigned int);


void FUN_002dc72c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((int)param_1[1] < 0) {
    temp_v0 = FUN_0029a9d4(*param_1,1);
  }
  else {
    temp_v0 = FUN_0029a924(*param_1);
  }
  if ((int)param_2[1] < 0) {
    temp_v1 = FUN_0029a9d4(*param_2,1);
  }
  else {
    temp_v1 = FUN_0029a924(*param_2);
  }
  int d = temp_v0 - temp_v1;
  if (d == 0) {
    FUN_002497f8(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
