/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377468` (_code @ 0x377468, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mapIfClearGroupRecordStates(int);
int FUN_002d23f0(void);

extern int DAT_005f163c; /* 0x5f163c */
extern int DAT_005f1640; /* 0x5f1640 */
extern unsigned char DAT_005f185d; /* 0x5f185d */
extern unsigned char DAT_005f185e; /* 0x5f185e */
extern unsigned char DAT_005f185f; /* 0x5f185f */
extern unsigned int DAT_005f1860; /* 0x5f1860 */
extern unsigned int DAT_005f1864; /* 0x5f1864 */
extern unsigned char DAT_005f187c; /* 0x5f187c */

/* Supplied declaration required: mapIfClearGroupRecordStates. */
/* Supplied declaration required: FUN_002d23f0. */
extern int dataTable23Type0FindIndexById(void);


void FUN_00377468(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_005f163c != 0) && (temp_v0 = dataTable23Type0FindIndexById(), temp_v0 != -1)) {
    FUN_002d23f0();
    mapIfClearGroupRecordStates(DAT_005f163c);
  }
  if (DAT_005f1640 != 0) {
    temp_v0 = dataTable23Type0FindIndexById();
    if (temp_v0 != -1) {
      FUN_002d23f0();
      mapIfClearGroupRecordStates(DAT_005f1640);
    }
    DAT_005f1640 = 0;
  }
  DAT_005f185d = 0;
  DAT_005f185e = 0;
  DAT_005f185f = 0;
  DAT_005f1860 = 0;
  DAT_005f1864 = 0;
  DAT_005f187c = 0;
  return;
}

} /* extern "C" */
