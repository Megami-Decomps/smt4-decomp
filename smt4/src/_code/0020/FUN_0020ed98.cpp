#include "romwright_types.h"

extern "C" {

int FUN_00295ba4(int);
int FUN_002c43b4(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_00295bd0(void);
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0020ed98(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x24));
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = FUN_00295bd0();
  if (temp_v1 != 0) {
    FUN_00295ba4(1);
  }
  FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x24),0);
  return;
}

} /* extern "C" */
