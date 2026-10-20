/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bd4c` (_code @ 0x29bd4c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int timerStart(int, int, int);
int __aeabi_memset4(int, int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_statusDown; /* 0x44e190 */

/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: __aeabi_memset4. */


void FUN_0029bd4c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  
  temp_v2 = g_statusDown;
  if (*(int *)(g_statusDown + 0x400) != 0) {
    timerStart(g_statusDown + 0x28,2,0);
    temp_v0 = g_statusDown;
    puVar3 = (unsigned int *)(g_statusDown + 0x400);
    *(unsigned int *)(g_statusDown + 0x40c) = 0;
    temp_v1 = *(unsigned int *)(temp_v0 + 0x400);
    *puVar3 = 2;
    *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
    *(unsigned int *)(temp_v2 + 0x408) = 0;
    *(unsigned char *)(temp_v2 + 0x3fc) = 0;
    temp_v2 = 0;
    if (*(char *)(temp_v0 + 0x480) != '\0') {
      do {
        ifTouchRegionRemove();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x480));
    }
    *(unsigned char *)(temp_v0 + 0x480) = 0;
    __aeabi_memset4(temp_v0 + 0x42c,0x29,0xffffffff);
    return;
  }
  return;
}

} /* extern "C" */
