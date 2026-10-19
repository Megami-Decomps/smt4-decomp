/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea5b8` (_code @ 0x2ea5b8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern int FUN_00442280(void);
extern unsigned int FUN_00442840(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_002ea5b8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v2 = DAT_00589384 == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  if ((temp_v2) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
    return 0xd8a0c7f8;
  }
  temp_v1 = FUN_00442840();
  return temp_v1;
}
