#include "romwright_types.h"

extern "C" {

int FUN_002e7888(int, unsigned int);
int FUN_002eea94(int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_002e7888. */
extern int FUN_002ea0e4(void);
/* Supplied declaration required: FUN_002eea94. */


void FUN_0030f234(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ea0e4();
  FUN_002eea94(temp_v0,param_3 + param_5 + 1);
  temp_v0 = *(int *)(temp_v0 + 4);
  FUN_002e7888(temp_v0,param_2);
  FUN_002e7888(param_3 * 2 + temp_v0,param_4);
  return;
}

} /* extern "C" */
