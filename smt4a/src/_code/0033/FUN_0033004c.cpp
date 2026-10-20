/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033004c` (_code @ 0x33004c, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);
int software_interrupt(int);

extern int g_cecProcess; /* 0x57f390 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
extern void nn_os_CriticalSection_Leave(unsigned int);
extern unsigned char nn_os_CriticalSection_TryEnter(unsigned int);


unsigned int FUN_0033004c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = g_cecProcess;
  temp_v3 = 0;
  if (g_cecProcess != 0) {
    temp_v2 = *(unsigned int *)(g_cecProcess + 0xd34);
    if (temp_v2 != 0) {
      software_interrupt(0x24);
      if ((int)temp_v2 < 0) {
        FUN_002e3140();
      }
      if ((temp_v2 & 0x3ff) == 0x3fe) {
        temp_v1 = nn_os_CriticalSection_TryEnter(temp_v0 + 0xd28);
        if (!temp_v1) {
          return 0;
        }
        if (*(int *)(temp_v0 + 0x90) != *(int *)(temp_v0 + 0x94)) {
          *(int *)(temp_v0 + 0x94) = *(int *)(temp_v0 + 0x94) + 1;
        }
        nn_os_CriticalSection_Leave(temp_v0 + 0xd28);
        return 0;
      }
    }
    temp_v3 = 1;
    while (*(int *)(temp_v0 + 0x90) != *(int *)(temp_v0 + 0x94)) {
      *(int *)(temp_v0 + 0x94) = *(int *)(temp_v0 + 0x94) + 1;
    }
  }
  return temp_v3;
}

} /* extern "C" */
