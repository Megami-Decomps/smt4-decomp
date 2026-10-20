/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea12c` (_code @ 0x2ea12c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern int FUN_00442280(void);
extern unsigned int FUN_00442774(unsigned int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_002ea12c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3 [5];
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v2 = DAT_00589384 == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  if ((temp_v2) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
    return 0;
  }
  temp_v1 = FUN_00442774(temp_v3);
  if ((temp_v1 & 0x80000000) != 0) {
    temp_v3[0] = 0;
  }
  return temp_v3[0];
}

} /* extern "C" */
