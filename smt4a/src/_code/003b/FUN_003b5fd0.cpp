#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);
int FUN_0019a7f4(int, unsigned int);
int FUN_00237210(unsigned int);
int FUN_0038b3f8(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_00237210. */
extern unsigned int FUN_002adba8(int);
/* Supplied declaration required: FUN_0038b3f8. */


void FUN_003b5fd0(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    FUN_00237210(param_1[temp_v2 + 2]);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 7);
  FUN_00237210(param_1[1]);
  FUN_00237210(*param_1);
  FUN_00237210(param_1[0xd]);
  temp_v2 = 0;
  do {
    FUN_00237210(param_1[temp_v2 + 0x14]);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  FUN_00237210(param_1[0xe]);
  FUN_00237210(param_1[0x10]);
  FUN_00237210(param_1[0x12]);
  FUN_0038b3f8((int)*(short *)(param_1 + 0x24),1);
  if (param_1 != (unsigned int *)0x0) {
    temp_v2 = 0;
    do {
      temp_v0 = FUN_002adba8(temp_v2);
      temp_v1 = FUN_0018206c(0x2e,temp_v0);
      if (temp_v1 != 0) {
        temp_v0 = FUN_002adba8(temp_v2);
        FUN_0019a7f4(0x2e,temp_v0);
        param_1[temp_v2 + 0x25] = 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 9);
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
