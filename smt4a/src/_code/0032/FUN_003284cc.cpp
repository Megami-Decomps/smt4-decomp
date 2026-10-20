#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);


void FUN_003284cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xa4) * 4 + 0xc));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xa4) * 4 + 0xc),0);
    return;
  }
  return;
}

} /* extern "C" */
