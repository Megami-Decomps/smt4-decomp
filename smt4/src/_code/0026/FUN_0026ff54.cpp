/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ff54` (_code @ 0x26ff54, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e324(unsigned int);
int FUN_002ad8b4(unsigned int, unsigned int);
int asdMemFree(...);
int titleConfigApplyAudio(void);
int FUN_002e0bc4(void);
int rt_memcpy_w(...);

extern unsigned int g_aocSystem; /* 0x433158 */
extern int DAT_0044de38; /* 0x44de38 */
extern unsigned int DAT_0044de3c; /* 0x44de3c */
extern unsigned int DAT_0044de40; /* 0x44de40 */

extern unsigned int configGetSettings(void);
extern unsigned int gameDataBlocksGetTable(void);
/* Supplied declaration required: FUN_0026e324. */
/* Supplied declaration required: FUN_002ad8b4. */
extern unsigned int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: titleConfigApplyAudio. */
/* Supplied declaration required: FUN_002e0bc4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026ff54(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0044de38 != 0) {
    temp_v0 = gameDataBlocksGetTable();
    rt_memcpy_w(temp_v0,DAT_0044de38,0x80);
    temp_v0 = configGetSettings();
    FUN_002ad8b4(temp_v0,DAT_0044de3c);
    temp_v0 = gameDataBlocksGetSaveData();
    rt_memcpy_w(temp_v0,DAT_0044de40,0x24d28);
    FUN_002e0bc4();
    titleConfigApplyAudio();
    FUN_0026e324(g_aocSystem);
    asdMemFree(DAT_0044de38);
    asdMemFree(DAT_0044de3c);
    asdMemFree(DAT_0044de40);
    DAT_0044de38 = 0;
    DAT_0044de3c = 0;
    DAT_0044de40 = 0;
  }
  return;
}

} /* extern "C" */
