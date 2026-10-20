#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


void FUN_0049d048(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x17,1);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_2 >= temp_v2) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v1 + param_2 * 0x8c;
  }
  FUN_00187180(0x17,*(unsigned short *)(temp_v1 + 0x26) + 2);
  FUN_00192748();
  return;
}

} /* extern "C" */
