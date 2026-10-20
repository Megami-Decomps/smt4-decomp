/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023793c` (_code @ 0x23793c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00351db0(int, unsigned int *);

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0044e348; /* 0x44e348 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

extern int FUN_0010f50c(void);
/* Supplied declaration required: FUN_00351db0. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_0023793c(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004c6410);
  temp_v1 = (*(int *)((unsigned char *)&DAT_0044e348 + 0x4)) == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004c6410);
  if ((temp_v1) && (temp_v0 = FUN_0010f50c(), temp_v0 == 0)) {
    return 0;
  }
  temp_v2 = temp_v2 & 0xffffff00;
  FUN_00351db0(0,&temp_v2);
  return (int)(char)temp_v2;
}

} /* extern "C" */
