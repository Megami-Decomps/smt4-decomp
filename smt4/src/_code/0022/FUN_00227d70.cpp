#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_00227668(unsigned int);
extern int FUN_00227ecc(unsigned int, unsigned int);
extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


int FUN_00227d70(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002939f4();
  temp_v0 = FUN_00293230();
  if (temp_v0 != 0) {
    temp_v0 = 5;
  }
  else {
    temp_v1 = FUN_00227ecc(param_1,param_2);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = (int)*(short *)(temp_v1 + 0x10);
    }
    if (temp_v1 == 0 || temp_v0 == 0) {
      temp_v0 = FUN_00227668(param_1);
      return temp_v0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
