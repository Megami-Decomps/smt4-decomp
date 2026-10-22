/* NON_MATCHING: romwright 0.5.0 decompilation of `btlAiScriptLoadFile` (_code @ 0x335518, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002402c4(int, unsigned char [132]);
int scrScriptProcessDestroy(void);
int dataTable00FindById(unsigned int);
int textFormatBuffer(...);
int libc_strcpy(int *, unsigned char [132]);
int asdMemFree(void);
int memClear(unsigned char [132], int);

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002402c4. */
extern int btlGetMainState(void);
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: dataTable00FindById. */
extern int supportUnitGetEntry(int, int);
extern int FUN_002b6ad0(void);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
extern int aocContentLookupSucceeds(int, unsigned short);


void btlAiScriptLoadFile(int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [132];
  
  if (param_1[1] != 0) {
    scrScriptProcessDestroy();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    asdMemFree();
    *param_1 = 0;
  }
  param_1[3] = 1;
  temp_v0 = 0;
  if (((**(unsigned char **)(param_2 + 0x28) & 8) != 0) && (temp_v1 = FUN_002b6ad0(), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  *(unsigned int *)(g_aocSystem + 0x444) = 0xffffffff;
  temp_v1 = *(int *)(param_2 + 0x28);
  if (temp_v0) {
    temp_v1 = supportUnitGetEntry((int)*(short *)(temp_v1 + 4),(int)*(short *)(temp_v1 + 6));
    memClear(temp_v3,0x80);
    textFormatBuffer(temp_v3,"battle/AI/%s.bf",temp_v1 + 0x48);
    temp_v1 = btlGetMainState();
    FUN_002402c4(temp_v1,temp_v3);
    if (temp_v1 == 0) {
      textFormatBuffer(temp_v3,"battle/AI/tmp.bf");
    }
    libc_strcpy(param_1 + 4,temp_v3);
  }
  else {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
    dataTable00FindById(temp_v2);
    memClear(temp_v3,0x80);
    textFormatBuffer(temp_v3,"battle/AI/%s.bf",temp_v2 + 0x8a);
    temp_v1 = btlGetMainState();
    FUN_002402c4(temp_v1,temp_v3);
    if (temp_v1 == 0) {
      textFormatBuffer(temp_v3,"battle/AI/tmp.bf");
    }
    libc_strcpy(param_1 + 4,temp_v3);
    temp_v1 = aocContentLookupSucceeds(g_aocSystem,*(unsigned short *)(*(int *)(param_2 + 0x28) + 2));
    if (temp_v1 != 0) {
      *(unsigned int *)(g_aocSystem + 0x444) = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x28) + 2);
      return;
    }
  }
  return;
}

} /* extern "C" */
