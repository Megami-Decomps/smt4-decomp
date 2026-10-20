#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8430(void);
extern int FUN_004f59b0(unsigned int);
extern int FUN_004f7aa4(unsigned int, unsigned int);


int FUN_004f7a58(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8430();
  if (temp_v0 != 0) {
    temp_v0 = 5;
  }
  else {
    temp_v1 = FUN_004f7aa4(param_1,param_2);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = (int)*(short *)(temp_v1 + 0x10);
    }
    if (temp_v1 == 0 || temp_v0 == 0) {
      temp_v0 = FUN_004f59b0(param_1);
      return temp_v0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
