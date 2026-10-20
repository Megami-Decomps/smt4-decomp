#include "romwright_types.h"

extern "C" {

int FUN_00264444(int);
int FUN_002664d8(int);
int FUN_002666a0(int, int, unsigned int);
int FUN_00273c54(void);
int FUN_00273d34(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_00264444. */
/* Supplied declaration required: FUN_002664d8. */
/* Supplied declaration required: FUN_002666a0. */
/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */


void FUN_002d1b48(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447060;
  if (DAT_00447060 != 0) {
    FUN_00273d34();
    FUN_00273c54();
    FUN_00264444(temp_v0 + 0xec);
    FUN_002666a0(temp_v0 + 0xec,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
    FUN_002664d8(temp_v0 + 0xec);
    return;
  }
  return;
}

} /* extern "C" */
