/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158f64` (_code @ 0x158f64, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017094c(unsigned char *);

extern unsigned char DAT_00589285; /* 0x589285 */
extern unsigned char DAT_00589286; /* 0x589286 */
extern unsigned short DAT_00589288; /* 0x589288 */
extern unsigned short DAT_0058928a; /* 0x58928a */
extern unsigned int *DAT_0058928c; /* 0x58928c */
extern unsigned int DAT_00589294; /* 0x589294 */
extern unsigned int DAT_00589298; /* 0x589298 */
extern unsigned int DAT_0058929c; /* 0x58929c */
extern unsigned int DAT_005892a0; /* 0x5892a0 */
extern unsigned char DAT_0061a664; /* 0x61a664 */
extern unsigned char g_callbackFuncs; /* 0x61a684 */
extern unsigned char DAT_0061a6a4; /* 0x61a6a4 */

extern int FUN_0016f864(unsigned int);
extern int FUN_0016f988(unsigned int *, char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0017094c. */
extern unsigned int wstrlen(char *);


int FUN_00158f64(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (DAT_0058928c != (unsigned int *)0x0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_0016f864(0);
    if (-1 < temp_v0) {
      temp_v1 = wstrlen("dsp::DSP");
      temp_v0 = FUN_0016f988(&DAT_00589298,"dsp::DSP",temp_v1,0);
      if (-1 < temp_v0) {
        DAT_0058928c = &DAT_00589294;
        DAT_00589294 = DAT_00589298;
        temp_v0 = 0;
        temp_v2 = 8;
        do {
          *(unsigned int *)(&g_callbackFuncs + temp_v0 * 4) = 0;
          *(unsigned int *)(&DAT_0061a664 + temp_v0 * 4) = 0;
          *(unsigned int *)(temp_v0 * 4 + 0x61a644) = 0;
          temp_v2 = temp_v2 - 1;
          temp_v0 = temp_v0 + 1;
        } while (temp_v2 != 0);
        DAT_00589285 = 0;
        DAT_0058929c = 0;
        DAT_005892a0 = 0;
        DAT_00589288 = 0;
        DAT_0058928a = 0;
        DAT_00589286 = 0;
        FUN_0017094c(&DAT_0061a6a4);
        temp_v0 = 0;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
