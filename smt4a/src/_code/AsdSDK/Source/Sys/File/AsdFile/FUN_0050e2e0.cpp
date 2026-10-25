/* NON_MATCHING: retail retains unused pool word 0x005b3fcc at +0x50 and removed destructor-registration calls as NOPs at +0x1c/+0x30. */
#include "romwright_types.h"

extern "C" {

int __aeabi_atexit(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int g_asdFileMutex; /* 0x5b3fc0 */
extern unsigned int g_asdFileEvent; /* 0x5b3fd4 */
extern unsigned int DAT_005b3fd8; /* 0x5b3fd8 */

/* Supplied declaration required: __aeabi_atexit. */


void FUN_0050e2e0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 1;
  g_asdFileMutex = 0;
  g_asdFileEvent = 0;
  DAT_005b3fd8 = 0;
  __aeabi_atexit(&g_asdFileEvent,0x42cd08,0x100000);
  return;
}

} /* extern "C" */
