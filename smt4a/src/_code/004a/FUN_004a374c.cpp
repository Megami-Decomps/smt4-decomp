#include "romwright_types.h"

extern "C" {

int sysPlaySe(void);
int FUN_003343f0(int);
int FUN_00341f88(void);
int FUN_003c5fc4(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00341f88. */
/* Supplied declaration required: FUN_003c5fc4. */


void FUN_004a374c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x85c));
  if (temp_v0 == 2) {
    FUN_003c5fc4(0);
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned char *)(param_1 + 0xa870) = 0;
    FUN_00341f88();
    sysPlaySe();
    return;
  }
  return;
}

} /* extern "C" */
