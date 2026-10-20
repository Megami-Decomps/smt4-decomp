#include "romwright_types.h"

extern "C" {

int FUN_00231cdc(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00231cdc. */


void FUN_004a92d0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74a0) = 0xb;
  FUN_00231cdc(temp_v0 + 0x28c4,param_2,0xffffffff,param_3);
  return;
}

} /* extern "C" */
