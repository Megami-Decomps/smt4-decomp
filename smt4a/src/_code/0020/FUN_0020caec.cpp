#include "romwright_types.h"

extern "C" {

int FUN_001835b4(int, int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_001835b4. */
extern int FUN_0019e4d4(unsigned int);
extern int FUN_002a4b28(unsigned int);
extern int FUN_004bd340(int, unsigned int);


void FUN_0020caec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019e4d4(param_1);
  if ((temp_v0 != 0) && (temp_v0 = FUN_004bd340(temp_v0,10), temp_v0 == 0)) {
    FUN_001835b4(2,0x1a,0x5b,param_2,param_3,param_4);
    return;
  }
  temp_v0 = FUN_002a4b28(param_1);
  if (temp_v0 != 0) {
    FUN_001835b4(2,0x1a,0x5a,param_2,param_3,param_4);
  }
  return;
}

} /* extern "C" */
