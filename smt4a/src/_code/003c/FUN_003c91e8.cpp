/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c91e8` (_code @ 0x3c91e8, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138718(void);
int asdMemFree(...);
int FUN_001a9110(unsigned int, unsigned int);
int FUN_00358cbc(void);
int FUN_003fd63c(int, int);
int FUN_0046bd44(unsigned int);
int rt_memcpy_w(...);

extern unsigned int g_aocSystem; /* 0x570280 */
extern signed char DAT_00588e16; /* 0x588e16 */
extern signed char DAT_00588e17; /* 0x588e17 */
extern signed char DAT_00588e18; /* 0x588e18 */
extern signed char DAT_00588e19; /* 0x588e19 */
extern int DAT_00588e1c; /* 0x588e1c */
extern unsigned int DAT_00588e20; /* 0x588e20 */
extern unsigned int DAT_00588e24; /* 0x588e24 */

/* Supplied declaration required: FUN_00138718. */
extern unsigned int FUN_0014af84(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001a9110. */
extern unsigned int FUN_00228af0(void);
extern unsigned int FUN_00261458(void);
/* Supplied declaration required: FUN_00358cbc. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_0046bd44. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003c91e8(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_00588e1c != 0) {
    temp_v0 = FUN_00261458();
    rt_memcpy_w(temp_v0,DAT_00588e1c,0x80);
    temp_v0 = FUN_00228af0();
    FUN_001a9110(temp_v0,DAT_00588e20);
    temp_v0 = FUN_0014af84();
    rt_memcpy_w(temp_v0,DAT_00588e24,0x2a71c);
    FUN_00358cbc();
    FUN_00138718();
    FUN_0046bd44(g_aocSystem);
    if ((DAT_00588e16 != '\0') && (temp_v1 = FUN_0018719c(0x470), temp_v1 == 0)) {
      FUN_003fd63c(0x470,1);
    }
    if (DAT_00588e17 != '\0') {
      temp_v1 = FUN_0018719c(0x471);
      if (temp_v1 == 0) {
        FUN_003fd63c(0x471,1);
      }
    }
    if (DAT_00588e18 != '\0') {
      temp_v1 = FUN_0018719c(0x558);
      if (temp_v1 == 0) {
        FUN_003fd63c(0x558,1);
      }
    }
    if (DAT_00588e19 != '\0') {
      temp_v1 = FUN_0018719c(0x559);
      if (temp_v1 == 0) {
        FUN_003fd63c(0x559,1);
      }
    }
    asdMemFree(DAT_00588e1c);
    asdMemFree(DAT_00588e20);
    asdMemFree(DAT_00588e24);
    DAT_00588e1c = 0;
    DAT_00588e20 = 0;
    DAT_00588e24 = 0;
  }
  return;
}

} /* extern "C" */
