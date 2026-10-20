/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442100` (_code @ 0x442100, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00589380; /* 0x589380 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern int FUN_00442280(void);
extern unsigned int FUN_0044268c(unsigned int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_00442100(void)

{
/* irregular: irregular input(s): in_r3; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  unsigned char temp_v2;
  int temp_v3;
  
  temp_v3 = in_r3;
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v2 = (*(int *)((unsigned char *)&DAT_00589380 + 0x4)) == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  if ((temp_v2) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
    return 0;
  }
  temp_v1 = FUN_0044268c((unsigned int *)&temp_v3);
  if ((temp_v1 & 0x80000000) == 0) {
    temp_v0 = (int)(char)temp_v3;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
