/* NON_MATCHING: callback table contains unsymbolized targets 0x3abad4, 0x3abd84 and 0x3ab3d8; unit-boundary repair required. */
#include "romwright_types.h"

extern "C" {

extern int itemMenuTakeSelected(...); /* 0x3aae38 */
extern int bibleScreenStartScript(...); /* 0x3ab0b4 */
extern int FUN_003ab128(...); /* 0x3ab128 */
extern int FUN_003ab348(...); /* 0x3ab348 */
extern int FUN_003ab3dc(...); /* 0x3ab3dc */
extern int sceneScriptDoneSetState(...); /* 0x3ab7a0 */
extern int FUN_003ab7c8(...); /* 0x3ab7c8 */
extern int FUN_003ab948(...); /* 0x3ab948 */
extern int FUN_003ab9a4(...); /* 0x3ab9a4 */
extern int FUN_003abe00(...); /* 0x3abe00 */
extern int FUN_003abed8(...); /* 0x3abed8 */
extern unsigned char DAT_00422450; /* 0x422450 */

extern unsigned int *FUN_0022cb58(void);


void bibleScreenInitializeCallbacks(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_0022cb58();
  temp_v1 = 0xd;
  *puVar1 = (unsigned int)&DAT_00422450;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    puVar1[temp_v0 * 2 + 0x296e] = 0;
    puVar1[temp_v0 * 2 + 0x296f] = 0;
    puVar1[temp_v0 * 2 + 0x2988] = 0;
    puVar1[temp_v0 * 2 + 0x2989] = 0;
    puVar1[temp_v0 * 2 + 0x29a2] = 0;
    puVar1[temp_v0 * 2 + 0x29a3] = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  puVar1[0x296e] = 0x3abad4;
  puVar1[0x296f] = 0;
  puVar1[0x2970] = (unsigned int)bibleScreenStartScript;
  puVar1[0x2971] = 0;
  puVar1[0x2972] = (unsigned int)FUN_003ab348;
  puVar1[0x2973] = 0;
  puVar1[0x2974] = (unsigned int)FUN_003abed8;
  puVar1[0x2975] = 0;
  puVar1[0x2976] = (unsigned int)FUN_003abe00;
  puVar1[0x2977] = 0;
  puVar1[0x2978] = (unsigned int)FUN_003ab9a4;
  puVar1[0x2979] = 0;
  puVar1[0x297a] = (unsigned int)itemMenuTakeSelected;
  puVar1[0x297b] = 0;
  puVar1[0x297c] = (unsigned int)itemMenuTakeSelected;
  puVar1[0x297d] = 0;
  puVar1[0x297e] = (unsigned int)sceneScriptDoneSetState;
  puVar1[0x297f] = 0;
  puVar1[0x2980] = (unsigned int)FUN_003ab128;
  puVar1[0x2981] = 0;
  puVar1[0x2982] = (unsigned int)FUN_003ab7c8;
  puVar1[0x2983] = 0;
  puVar1[0x2984] = (unsigned int)FUN_003ab948;
  puVar1[0x2985] = 0;
  puVar1[0x29a6] = (unsigned int)FUN_003ab3dc;
  puVar1[0x29a7] = 0;
  puVar1[0x29a8] = (unsigned int)FUN_003ab3dc;
  puVar1[0x29a9] = 0;
  puVar1[0x29aa] = (unsigned int)FUN_003ab3dc;
  puVar1[0x29ab] = 0;
  puVar1[0x29b6] = (unsigned int)FUN_003ab3dc;
  puVar1[0x29b7] = 0;
  puVar1[0x29ac] = 0x3abd84;
  puVar1[0x29ad] = 0;
  puVar1[0x29ae] = 0x3abd84;
  puVar1[0x29af] = 0;
  puVar1[0x29b0] = (unsigned int)FUN_003ab3dc;
  puVar1[0x29b1] = 0;
  puVar1[0x29b2] = 0x3ab3d8;
  puVar1[0x29b3] = 0;
  puVar1[0x29b4] = (unsigned int)FUN_003ab3dc;
  puVar1[0x29b5] = 0;
  return;
}

} /* extern "C" */
