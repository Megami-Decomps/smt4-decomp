#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);
int FUN_001ad6d8(void);
int FUN_001f42b0(int);
int FUN_001f4998(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: FUN_001f42b0. */
/* Supplied declaration required: FUN_001f4998. */


void FUN_0038a184(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if (*(char *)(temp_v0 + 0x1c) != '\0') {
    FUN_001f42b0(0);
    *(unsigned char *)(temp_v0 + 0x1c) = 0;
  }
  if (*(int *)(temp_v0 + 0x18) != 0) {
    FUN_001f4998();
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  FUN_001ad6d8();
  FUN_0019a5a0(temp_v0);
  return;
}

} /* extern "C" */
