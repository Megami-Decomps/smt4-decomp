/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8b34` (_code @ 0x3d8b34, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdListBoxAddItem(...);
int FUN_002271e8(...);
int FUN_00227200(...);
int asdListBoxSetFloatItem(...);
int asdListBoxSetItemMode3(...);
int asdListBoxSetByteValue(...);
int jobSetText(...);
int asdListBoxCreate(...);
int FUN_0027da30(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_00400600; /* 0x400600 */

/* Supplied declaration required: asdListBoxAddItem. */
/* Supplied declaration required: FUN_002271e8. */
/* Supplied declaration required: FUN_00227200. */
/* Supplied declaration required: asdListBoxSetFloatItem. */
/* Supplied declaration required: asdListBoxSetItemMode3. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: jobSetText. */
/* Supplied declaration required: asdListBoxCreate. */
/* Supplied declaration required: FUN_0027da30. */


void FUN_003d8b34(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  asdListBoxCreate(param_3,0xeb,0x10,0x20,4);
  *(unsigned int *)(param_1 + 0xc) = param_3;
  FUN_00227200();
  FUN_002271e8(param_3,0xc,0x10);
  jobSetText(param_3,"ENEMY EDIT");
  asdListBoxAddItem(param_3,"窔疒ꮈ芖");
  asdListBoxAddItem(param_3,"瞂窔疒쪈疒쾕墍");
  asdListBoxAddItem(param_3,"碂窔疒쪈疒쾕墍");
  asdListBoxAddItem(param_3,&DAT_00400600);
  FUN_0027da30();
  asdListBoxSetItemMode3(param_3,0,*(unsigned short *)(param_2 + 2),1,999,0);
  asdListBoxSetFloatItem(param_3,1,0xfffffc18);
  asdListBoxSetFloatItem(param_3,2,0xfffffc18,1000);
  asdListBoxSetFloatItem(param_3,3,0xfffffc18,1000);
  asdListBoxSetByteValue(param_3,1);
  return;
}

} /* extern "C" */
