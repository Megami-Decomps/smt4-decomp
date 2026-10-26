/* NON_MATCHING: unit begins eight bytes late. The decoded image has LDR r2 / MVN r0 at 0x3f2134/0x3f2138 before this PUSH; its initial STRD uses those values, not real incoming arguments. Needs boundary repair. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char _ZN2nn2os15CriticalSectionD1Ev; /* 0x3574a8 */
extern unsigned int DAT_004656e0; /* 0x4656e0 */
extern unsigned int DAT_004656e4; /* 0x4656e4 */
extern unsigned int g_asdCecMessageBoxCriticalSection; /* 0x4e62a8 */
extern unsigned int g_asdCecMessageBoxStateCriticalSection; /* 0x4e62b4 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */


unsigned long long FUN_003f2134(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_1;
  DAT_004656e0 = 0;
  DAT_004656e4 = 0;
  g_asdCecMessageBoxCriticalSection = 0;
  nn_os_CriticalSection_Initialize(&g_asdCecMessageBoxCriticalSection);
  g_asdCecMessageBoxStateCriticalSection = 0;
  nn_os_CriticalSection_Initialize(&g_asdCecMessageBoxStateCriticalSection,&_ZN2nn2os15CriticalSectionD1Ev,0x100000);
  return 0x3574a8004e62b4;
}

} /* extern "C" */
