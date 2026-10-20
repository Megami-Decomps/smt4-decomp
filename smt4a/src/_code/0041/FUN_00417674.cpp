#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_001add24(int);
int FUN_0023b45c(int);
int FUN_002bf4f4(int);
int FUN_002c7ce8(int);
int FUN_002c8538(int);
int FUN_002c85b0(int);
int FUN_00333f6c(void);
int FUN_0033449c(int);
int FUN_00371f18(void);
int FUN_0037b450(void);
int FUN_003a7b2c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002bf4f4. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_00371f18. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003a7b2c. */


void FUN_00417674(int param_1)

{
/* irregular: 14 native warning(s); review required */
  FUN_00371f18();
  FUN_003a7b2c();
  FUN_002c85b0(0);
  FUN_002c7ce8(0);
  FUN_0023b45c(0);
  FUN_002c8538(0);
  FUN_0033449c(0);
  FUN_00333f6c();
  FUN_002bf4f4(0);
  FUN_001681cc(*(unsigned short *)(param_1 + 0x42));
  FUN_0037b450();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  FUN_001add24(0x25);
  return;
}

} /* extern "C" */
