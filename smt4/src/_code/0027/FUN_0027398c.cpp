/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027398c` (_code @ 0x27398c, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_00297060(int, unsigned int);
int dataTable1bOr1cGetRecord(void);
int buttonHelpSetPreset(int);
int textFormatBuffer(...);
int aocQueueType08(unsigned int, int, unsigned int *, int);
int aocQueueType07(unsigned int, int, unsigned int *, int);

extern unsigned char LAB_00273b38; /* 0x273b38 */
extern unsigned char LAB_00273b50; /* 0x273b50 */
extern unsigned char LAB_00273b6c; /* 0x273b6c */
extern unsigned int g_aocSystem; /* 0x433158 */

extern int scrRunOpcodesStub(unsigned int);
extern int FUN_00289e54(unsigned int, unsigned short, unsigned int);
extern int FUN_002903f0(void);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: aocQueueType08. */
/* Supplied declaration required: aocQueueType07. */


unsigned int FUN_0027398c(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  switch(*param_1) {
  case 0:
    temp_v3 = FUN_002903f0();
    dataTable1bOr1cGetRecord();
    if ((temp_v3 == 0) || (temp_v0 = *(short *)(temp_v3 + 0x148), temp_v0 == 0)) {
      *param_1 = 3;
      return 0;
    }
    textFormatBuffer(temp_v4,&LAB_00273b38,temp_v0,temp_v0);
    textFormatBuffer(temp_v5,&LAB_00273b50,temp_v0);
    temp_v3 = FUN_00289e54(g_aocSystem,*(unsigned short *)(temp_v3 + 0x148),1);
    if (temp_v3 != 0) {
      aocQueueType07(g_aocSystem,temp_v0,param_1 + 3,0);
      aocQueueType08(g_aocSystem,temp_v0,param_1 + 4,0);
      *param_1 = 1;
      return 0;
    }
    temp_v2 = 4;
    break;
  case 1:
    temp_v3 = 0;
    if (param_1[3] != 0) {
      temp_v3 = param_1[4];
    }
    if (param_1[3] == 0 || temp_v3 == 0) {
      return 0;
    }
    temp_v3 = FUN_002903f0();
    dataTable1bOr1cGetRecord();
    if (temp_v3 == 0) {
      *param_1 = 3;
    }
    buttonHelpSetPreset(0x90);
    temp_v1 = param_1[3];
    FUN_00297060(temp_v1,param_1[4]);
    param_1[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    textFormatBuffer(temp_v4,&LAB_00273b6c,*(unsigned short *)(temp_v3 + 0x148),
                 *(unsigned short *)(temp_v3 + 0x14a));
    temp_v2 = tableGroupFindEntryIndex(param_1[3],temp_v4);
    scrScriptProcessStartEntry(param_1[5],temp_v2);
    temp_v2 = 2;
    break;
  case 2:
    temp_v3 = scrRunOpcodesStub(param_1[5]);
    if (temp_v3 != 2) {
      return 0;
    }
    *param_1 = 3;
    return 0;
  case 3:
    return 1;
  case 4:
    return 2;
  default:
    return 0;
  }
  *param_1 = temp_v2;
  return 0;
}

} /* extern "C" */
