#include "romwright_types.h"

extern "C" {

int FUN_00275f44(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00581274; /* 0x581274 */
extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned int);


void FUN_00312db0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00581274;
  temp_v1 = FUN_00357bc8((*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x50c)),param_1);
  FUN_00275f44(*(unsigned int *)(temp_v0 + 0x58),temp_v1);
  return;
}

} /* extern "C" */
