/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bcbb4` (_code @ 0x4bcbb4, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186f58(void);
int dataTable04FindById(void);
int FUN_0034a304(unsigned int, int, int);

/* Supplied declaration required: FUN_00186f58. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_0034a304. */
extern int gameDataFlagTestBit(unsigned int);


void FUN_004bcbb4(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_2;
  dataTable04FindById();
  if (temp_v0 != 0) {
    temp_v1 = gameDataFlagTestBit(0xc);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = gameDataFlagTestBit(0xd);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = gameDataFlagTestBit(0xe);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = gameDataFlagTestBit(0xf);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = 0;
    if (param_1 != 0) {
      temp_v2 = 0;
      do {
        if (*(unsigned short *)(param_1 + temp_v2 * 2 + 0x34) == param_2) {
          temp_v1 = (int)*(char *)(temp_v2 + param_1 + 0x44);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 8);
    }
    FUN_0034a304(temp_v0,temp_v1,4);
    FUN_0034a304(temp_v0,temp_v1,7);
  }
  return;
}

} /* extern "C" */
