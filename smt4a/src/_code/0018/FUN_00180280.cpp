#include "romwright_types.h"

extern "C" {

int FUN_0019b770(int, unsigned int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int asdTMTexTableCallFileC(void);
/* Supplied declaration required: FUN_0019b770. */


void FUN_00180280(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = asdTMTexTableCallFileC();
  FUN_0019b770(**(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14,param_3,temp_v0,0);
  return;
}

} /* extern "C" */
