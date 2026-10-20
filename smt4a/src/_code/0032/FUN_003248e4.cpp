/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003248e4` (_code @ 0x3248e4, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);

extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */

/* Supplied declaration required: dataTable04FindById. */
extern int FUN_002a6a38(void);


unsigned int FUN_003248e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (((param_1[1] & DAT_005702a4) == 0 && (*param_1 & DAT_005702a0) == 0) &&
     ((DAT_005702a8 & *param_1) == 0 && (DAT_005702ac & param_1[1]) == 0)) {
    temp_v2 = 0;
    do {
      temp_v0 = *(short *)((int)param_1 + temp_v2 * 8 + 0x33a);
      if (temp_v0 == 2 || temp_v0 == 3) {
        temp_v1 = (int)(short)param_1[temp_v2 * 2 + 0xcf];
        dataTable04FindById();
        if ((temp_v1 != 0) && (temp_v1 = FUN_002a6a38(), temp_v1 != 0)) {
          return 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 10);
  }
  else if (*(short *)((int)param_1 + 0x32a) == 2 || *(short *)((int)param_1 + 0x32a) == 3) {
    temp_v2 = (int)(short)param_1[0xcb];
    dataTable04FindById();
    if ((temp_v2 != 0) && (temp_v2 = FUN_002a6a38(), temp_v2 != 0)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
