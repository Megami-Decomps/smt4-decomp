/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037de7c` (_code @ 0x37de7c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int ifTouchRegionRemove(void);
int asdMemFree(...);
int scrScriptProcessDestroy(void);
int __aeabi_memset4(unsigned int *, int, unsigned int);
int asdMemFreeSlot(unsigned int);

extern unsigned int *g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: asdMemFreeSlot. */


void FUN_0037de7c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = g_statusDown;
  temp_v0 = 0;
  if (*(char *)((int)g_statusDown + 0x59a) != '\0') {
    do {
      ifTouchRegionRemove();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned char *)((int)puVar1 + 0x59a));
  }
  *(unsigned char *)((int)puVar1 + 0x59a) = 0;
  __aeabi_memset4(puVar1 + 0x151,0x54,0xffffffff);
  asdMemFreeSlot(puVar1[0x8ee]);
  puVar2 = g_statusDown;
  if (g_statusDown[0x95d] != 0) {
    scrScriptProcessDestroy();
    puVar2[0x95d] = 0;
  }
  if (puVar2[0x95b] != 0) {
    asdMemFree();
    puVar2[0x95b] = 0;
  }
  if (puVar2[0x95c] != 0) {
    asdMemFree();
    puVar2[0x95c] = 0;
  }
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  g_statusDown = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
