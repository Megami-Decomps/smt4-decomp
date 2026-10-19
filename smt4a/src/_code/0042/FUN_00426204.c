/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426204` (_code @ 0x426204, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_005891a8; /* 0x5891a8 */
extern unsigned int DAT_0061a5f0; /* 0x61a5f0 */

extern int FUN_00146650(void);
/* Supplied declaration required: FUN_0042642c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_00426204(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061a5f0);
  temp_v1 = DAT_005891a8 == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a5f0);
  if ((temp_v1) && (temp_v0 = FUN_00146650(), temp_v0 == 0)) {
    return 0;
  }
  temp_v2 = temp_v2 & 0xffffff00;
  FUN_0042642c(0,&temp_v2);
  return (int)(char)temp_v2;
}
