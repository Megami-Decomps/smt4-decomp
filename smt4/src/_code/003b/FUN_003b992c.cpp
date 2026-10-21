/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b992c` (_code @ 0x3b992c, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b778(void);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_00297060(int, unsigned int);
int scrScriptProcessDestroy(unsigned int);
int textFormatBuffer(unsigned char [128], unsigned char *, int, int);
int FUN_002bff50(void);
int asdMemFree(unsigned int);

extern unsigned char LAB_003b9a54; /* 0x3b9a54 */
extern unsigned char LAB_003b9a6c; /* 0x3b9a6c */
extern unsigned short DAT_0049fa80; /* 0x49fa80 */
extern short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_0022b778. */
extern unsigned int tableGroupFindEntryIndex(int, unsigned char *);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: asdMemFree. */
extern unsigned int asdLoadFileSyncDefault(unsigned char *);


void FUN_003b992c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char temp_v2 [128];
  
  FUN_0022b778();
  piVar3 = (int *)(param_1 + 0xdb4);
  if (*(int *)(param_1 + 0x2c) != 0) {
    if ((*(int *)(param_1 + 0x2c) == 1) &&
       (temp_v0 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xdbc)), temp_v0 == 2)) {
      scrScriptProcessDestroy(*(unsigned int *)(param_1 + 0xdbc));
      *(unsigned int *)(param_1 + 0xdbc) = 0;
      asdMemFree(*(unsigned int *)(param_1 + 0xdb4));
      *piVar3 = 0;
      asdMemFree(*(unsigned int *)(param_1 + 0xdb8));
      *(unsigned int *)(param_1 + 0xdb8) = 0;
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    return;
  }
  DAT_0049fa80 = 0;
  FUN_002bff50();
  textFormatBuffer(temp_v2,&LAB_003b9a54,(int)DAT_0049fa82,(int)DAT_0049fa82);
  temp_v1 = asdLoadFileSyncDefault(temp_v2);
  *(unsigned int *)(param_1 + 0xdb4) = temp_v1;
  textFormatBuffer(temp_v2,&LAB_003b9a6c,(int)DAT_0049fa82,(int)DAT_0049fa82);
  temp_v1 = asdLoadFileSyncDefault(temp_v2);
  *(unsigned int *)(param_1 + 0xdb8) = temp_v1;
  temp_v0 = *piVar3;
  FUN_00297060(temp_v0,temp_v1);
  *(int *)(param_1 + 0xdbc) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  temp_v1 = tableGroupFindEntryIndex(*piVar3,&DAT_0049fa84);
  scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xdbc),temp_v1);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}

} /* extern "C" */
