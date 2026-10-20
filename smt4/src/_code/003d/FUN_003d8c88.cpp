/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8c88` (_code @ 0x3d8c88, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdListBoxAddItem(...);
int FUN_002271e8(...);
int FUN_00227200(...);
int FUN_0022a358(...);
int asdListBoxSetItemMode3(...);
int asdListBoxSetByteValue(...);
int FUN_00262914(...);
int asdListBoxCreate(...);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00400588; /* 0x400588 */
extern unsigned int *g_btlMain; /* 0x4342c8 */

/* Supplied declaration required: asdListBoxAddItem. */
/* Supplied declaration required: FUN_002271e8. */
/* Supplied declaration required: FUN_00227200. */
/* Supplied declaration required: FUN_0022a358. */
/* Supplied declaration required: asdListBoxSetItemMode3. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: FUN_00262914. */
/* Supplied declaration required: asdListBoxCreate. */


void FUN_003d8c88(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  
  *(short *)(param_1 + 0x14) = (short)param_4;
  asdListBoxCreate(param_3,0xeb,0x10,0x20,4);
  *(unsigned int *)(param_1 + 0xc) = param_3;
  FUN_00227200();
  FUN_002271e8(param_3,0xc,0x10);
  puVar1 = g_btlMain;
  if (param_4 >= 2) {
    if (param_4 == 2) {
      g_btlMain[9] = 0;
      FUN_00262914(param_3,"CAMERA EDIT");
      asdListBoxAddItem(param_3,&DAT_00400588);
      asdListBoxSetItemMode3(param_3,0,g_btlMain[9],0,1000,0);
    }
  }
  else {
    g_btlMain[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    FUN_00262914(param_3,"CAMERA EDIT");
    asdListBoxAddItem(param_3,"瞂삍垕쾕墍");
    asdListBoxAddItem(param_3,"碂삍垕쾕墍");
    asdListBoxAddItem(param_3,"禂삍垕쾕墍");
    FUN_0022a358(param_3,0,0xfffffc18);
    FUN_0022a358(param_3,1,0xfffffc18,1000);
    FUN_0022a358(param_3,2,0xfffffc18,1000);
  }
  asdListBoxSetByteValue(param_3,1);
  return;
}

} /* extern "C" */
