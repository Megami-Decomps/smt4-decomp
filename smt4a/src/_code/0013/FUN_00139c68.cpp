#include "romwright_types.h"

extern "C" {

int FUN_0018d9f0(unsigned int *, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_005b3bf4; /* 0x5b3bf4 */

extern unsigned int FUN_00168188(void);
/* Supplied declaration required: FUN_0018d9f0. */


void FUN_00139c68(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  (*(unsigned int *)((unsigned char *)&DAT_005b3bf4 + 0x7c)) = param_1;
  temp_v0 = FUN_00168188();
  FUN_0018d9f0(&(*(unsigned int *)((unsigned char *)&DAT_005b3bf4 + 0x7c)),temp_v0,(*(unsigned int *)((unsigned char *)&DAT_005b3bf4 + 0x7c)));
  return;
}

} /* extern "C" */
