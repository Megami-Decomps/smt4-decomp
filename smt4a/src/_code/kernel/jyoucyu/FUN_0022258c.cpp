/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022258c` (_code @ 0x22258c, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137848(void);
int asdSequenceRequest(int, int);
int asdTMTexTableLoadTmx(...);
int asdTMTexTableLoadSprites(int);
int FUN_0014afd0(...);
int FUN_00212774(void);
int configSettingsResetDefaults(void);
int FUN_002326b4(void);
int gameSessionAcquireSpriteTable(void);
int asdMTeXLoadTableEntries(void);
int commonBgLoadSpritesOnFirstUse(void);
int FUN_00283d74(int);
int dataTableRefAcquire(void);
int texTableRefAcquire(void);
int FUN_002bf464(void);
int dataTableResolveEntryVariants(void);
int FUN_002c3364(void);
int tmSpriteTableAcquire(void);
int FUN_0031f4fc(void);
int FUN_00387454(void);
int engineClearStateTriple(void);
int saveLoadEnsureResources(void);
int FUN_003c5c88(void);
int dataTableReloadLocked(void);
int FUN_003f8940(void);
int resetFlagGroupsCD(void);

extern signed char g_jyoucyu; /* 0x57ffb8 */
extern signed char DAT_0057ffb9; /* 0x57ffb9 */
extern unsigned char DAT_0057ffba; /* 0x57ffba */
extern signed char g_jyoucyuLevel; /* 0x57ffd4 */

/* Supplied declaration required: FUN_00137848. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00212774. */
/* Supplied declaration required: configSettingsResetDefaults. */
/* Supplied declaration required: FUN_002326b4. */
/* Supplied declaration required: gameSessionAcquireSpriteTable. */
/* Supplied declaration required: asdMTeXLoadTableEntries. */
/* Supplied declaration required: commonBgLoadSpritesOnFirstUse. */
/* Supplied declaration required: FUN_00283d74. */
/* Supplied declaration required: dataTableRefAcquire. */
/* Supplied declaration required: texTableRefAcquire. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: dataTableResolveEntryVariants. */
/* Supplied declaration required: FUN_002c3364. */
/* Supplied declaration required: tmSpriteTableAcquire. */
/* Supplied declaration required: FUN_0031f4fc. */
/* Supplied declaration required: FUN_00387454. */
/* Supplied declaration required: engineClearStateTriple. */
/* Supplied declaration required: saveLoadEnsureResources. */
/* Supplied declaration required: FUN_003c5c88. */
/* Supplied declaration required: dataTableReloadLocked. */
/* Supplied declaration required: FUN_003f8940. */
/* Supplied declaration required: resetFlagGroupsCD. */


void FUN_0022258c(unsigned int param_1)

{
/* irregular: 26 native warning(s); review required */
  unsigned char temp_v0;
  
  if (g_jyoucyuLevel == '\0') {
    if (param_1 != 0) {
      if (param_1 != 1) {
        temp_v0 = param_1 == 2;
        if (temp_v0) {
          param_1 = (unsigned int)DAT_0057ffba;
        }
        if (temp_v0 && param_1 == 0) {
          asdMTeXLoadTableEntries();
          texTableRefAcquire();
          FUN_00212774();
          FUN_002c3364();
          gameSessionAcquireSpriteTable();
          FUN_0031f4fc();
          dataTableRefAcquire();
          resetFlagGroupsCD();
          FUN_003c5c88();
          DAT_0057ffba = 1;
        }
      }
      else if (DAT_0057ffb9 == '\0') {
        FUN_00387454();
        dataTableReloadLocked();
        dataTableResolveEntryVariants();
        asdTMTexTableLoadTmx(6,0);
        asdTMTexTableLoadTmx(0x10,0);
        asdTMTexTableLoadTmx(0);
        asdTMTexTableLoadTmx(1,0);
        asdTMTexTableLoadTmx(2,0);
        asdTMTexTableLoadTmx(0x16,0);
        asdTMTexTableLoadTmx(0x17,0);
        asdTMTexTableLoadTmx(0x1c,0);
        asdTMTexTableLoadSprites(0x27);
        asdTMTexTableLoadSprites(0x1d);
        asdTMTexTableLoadTmx(0xe,0);
        FUN_0014afd0(3,2);
        FUN_0014afd0(3);
        tmSpriteTableAcquire();
        DAT_0057ffb9 = '\x01';
      }
    }
    else if (g_jyoucyu == '\0') {
      FUN_003f8940();
      engineClearStateTriple();
      saveLoadEnsureResources();
      commonBgLoadSpritesOnFirstUse();
      FUN_002bf464();
      configSettingsResetDefaults();
      FUN_00283d74(0);
      FUN_00137848();
      FUN_002326b4();
      asdSequenceRequest(0x16,0);
      g_jyoucyu = '\x01';
    }
    if ((DAT_0057ffba == 1) && (DAT_0057ffb9 == '\x01' && g_jyoucyu == '\x01')) {
      g_jyoucyuLevel = '\x01';
    }
  }
  return;
}

} /* extern "C" */
