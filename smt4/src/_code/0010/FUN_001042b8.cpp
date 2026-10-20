#include "romwright_types.h"

extern "C" {

int FUN_0011d100(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_0011d100. */
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_001042b8(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e4138);
  FUN_0011d100();
  return;
}

} /* extern "C" */
