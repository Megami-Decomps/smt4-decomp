/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388068` (_code @ 0x388068, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e52bc(void);
int gameFlagSetValue(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

extern int gameDataBlocksGetSaveData(void);
extern int FUN_0017760c(int);
extern int gameFlagIsSet(unsigned int);
extern int slotRecordFindById(void);
/* Supplied declaration required: FUN_003e52bc. */
/* Supplied declaration required: gameFlagSetValue. */
extern int aocHasType36(unsigned int, unsigned int);
extern int bitsAt60Test(int, unsigned int);


void FUN_00388068(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = aocHasType36(g_aocSystem,0x4f6);
  if ((temp_v1 != 0) && (temp_v1 = gameFlagIsSet(0x4f6), temp_v1 == 0)) {
    temp_v1 = gameDataBlocksGetSaveData();
    gameFlagSetValue(0x45b,1);
    gameFlagSetValue(0x4f6,1);
    temp_v4 = 0;
    do {
      if ((((*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x28310) & 0xffff) != 0) &&
          (temp_v2 = slotRecordFindById(), temp_v2 != 0)) && (temp_v3 = bitsAt60Test(temp_v2,1), temp_v3 == 0)) {
        temp_v3 = FUN_0017760c(temp_v2);
        temp_v0 = ((short)temp_v3 - *(short *)(temp_v2 + 0xe)) + *(short *)(temp_v2 + 0x2a);
        if (temp_v0 <= temp_v3) {
          temp_v3 = (int)temp_v0;
        }
        *(short *)(temp_v2 + 0x2a) = temp_v0;
        *(short *)(temp_v2 + 0x2a) = (short)temp_v3;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 10);
  }
  temp_v1 = aocHasType36(g_aocSystem,0x4f7);
  if ((temp_v1 != 0) && (temp_v1 = gameFlagIsSet(0x4f7), temp_v1 == 0)) {
    gameFlagSetValue(0x45b,1);
    gameFlagSetValue(0x4f7,1);
    FUN_003e52bc();
    return;
  }
  return;
}

} /* extern "C" */
