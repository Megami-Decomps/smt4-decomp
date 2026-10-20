/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291764` (_code @ 0x291764, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrScriptProcessDestroy(...);
int asdMemFreeSlot(unsigned int);
int FUN_002a87e8(void);
int FUN_002bee58(unsigned int *, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int asdMemFree(...);
int jobStop(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char g_buttonHelp; /* 0x43da28 */
extern unsigned int *DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: FUN_002a87e8. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_00291764(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  int temp_v0;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  
  *param_1 = 0;
  if (param_1[3] != 0) {
    asdMemFree();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    asdMemFree();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    scrScriptProcessDestroy();
    param_1[5] = 0;
  }
  puVar1 = DAT_0043da2c;
  g_buttonHelp = g_buttonHelp - '\x01';
  if (g_buttonHelp < '\x01') {
    asdMemFreeSlot(DAT_0043da2c[0x156]);
    puVar1[0x156] = 0;
    if (puVar1[4] != 3) {
      temp_v0 = 0;
      do {
        FUN_002bee58(puVar1 + temp_v0 * 0x23 + 0xd,1,param_3,param_4,unaff_r4,unaff_r5,unaff_r6);
        if (*(char *)(puVar1 + temp_v0 + 0x125) != '\0') {
          FUN_002a87e8();
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
    }
    scrScriptProcessDestroy(puVar1[0x158]);
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    DAT_0043da2c = (unsigned int *)0x0;
    g_buttonHelp = '\0';
  }
  return;
}

} /* extern "C" */
