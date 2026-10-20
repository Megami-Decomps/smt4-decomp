#include "romwright_types.h"

extern "C" {

int FUN_001962c0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned char DAT_0061a470; /* 0x61a470 */

/* Supplied declaration required: FUN_001962c0. */


void FUN_0017d258(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  FUN_001962c0((*(unsigned int *)((unsigned char *)&DAT_0061a470 + 0x9c)),param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
