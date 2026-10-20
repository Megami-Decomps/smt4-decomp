/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105c08` (_code @ 0x105c08, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFileWakeWorker(void);
int FUN_001131b0(unsigned int);
int FUN_0011d100(void);

extern unsigned int DAT_004e3b9c; /* 0x4e3b9c */
extern int DAT_004e3ba8; /* 0x4e3ba8 */
extern int DAT_004e3bac; /* 0x4e3bac */
extern signed char DAT_004e3bb0; /* 0x4e3bb0 */

/* Supplied declaration required: asdFileWakeWorker. */
/* Supplied declaration required: FUN_001131b0. */
/* Supplied declaration required: FUN_0011d100. */


void FUN_00105c08(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  asdFileWakeWorker();
  temp_v0 = DAT_004e3bac;
  DAT_004e3b9c = 0;
  if (-1 < DAT_004e3bac) {
    temp_v2 = DAT_004e3bac == 0;
    DAT_004e3ba8 = DAT_004e3bac;
    DAT_004e3bac = -1;
    if (temp_v2) {
      temp_v1 = 0x700;
    }
    else {
      if (temp_v0 != 1) {
        if (DAT_004e3bb0 == '\0') {
          FUN_0011d100();
          DAT_004e3bb0 = '\x01';
        }
        return;
      }
      temp_v1 = 0x702;
    }
    FUN_001131b0(temp_v1);
  }
  if (DAT_004e3bb0 == '\0') {
    FUN_0011d100();
    DAT_004e3bb0 = '\x01';
  }
  return;
}

} /* extern "C" */
