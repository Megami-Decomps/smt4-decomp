/* NON_MATCHING: romwright 0.5.0 decompilation of `campCommonBgRelease` (_code @ 0x35b304, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int uiFadeClose(void);

extern signed char g_commonBg; /* 0x57f208 */
extern signed char DAT_0057f20a; /* 0x57f20a */
extern unsigned int *DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: uiFadeClose. */


void campCommonBgRelease(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f20c;
  g_commonBg = g_commonBg - '\x01';
  if (g_commonBg < '\x01') {
    jobStop(*DAT_0057f20c,0);
    asdMemFree(puVar1);
    DAT_0057f20c = (unsigned int *)0x0;
    g_commonBg = '\0';
    uiFadeClose();
    puVar1 = DAT_0057f214;
    if ((DAT_0057f214 != (unsigned int *)0x0) &&
       (DAT_0057f20a = DAT_0057f20a - '\x01', DAT_0057f20a < '\x01')) {
      jobStop(*DAT_0057f214,0);
      asdMemFree(puVar1);
      DAT_0057f214 = (unsigned int *)0x0;
      DAT_0057f20a = '\0';
    }
  }
  return;
}

} /* extern "C" */
