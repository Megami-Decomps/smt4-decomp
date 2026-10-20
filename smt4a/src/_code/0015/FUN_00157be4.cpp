#include "romwright_types.h"

extern "C" {

int FUN_0016d338(int *, int);
int FUN_0017d43c(void);
int FUN_0017d5f8(void);
int FUN_001960fc(void);
int FUN_0019eafc(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0016d338. */
/* Supplied declaration required: FUN_0017d43c. */
/* Supplied declaration required: FUN_0017d5f8. */
/* Supplied declaration required: FUN_001960fc. */
/* Supplied declaration required: FUN_0019eafc. */


void FUN_00157be4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xac);
  if (piVar2 != (int *)0x0) {
    if (((*piVar2 - piVar2[1]) & 0xfffffffcU) != 0) {
      FUN_001960fc();
      temp_v0 = piVar2[4];
      *(int *)(param_1 + 0xa4) = temp_v0;
      if (temp_v0 != 0) {
        FUN_0017d5f8();
        FUN_0016d338(piVar2,FUN_0019eafc());
      }
    }
    FUN_0017d43c();
    return;
  }
  return;
}

} /* extern "C" */
