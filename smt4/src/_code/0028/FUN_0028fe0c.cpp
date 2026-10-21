/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028fe0c` (_code @ 0x28fe0c, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiBindRecordRewardText(...);
int FUN_0028ffb8(int);
int asdTextDrawDirectoryEntry(unsigned int, int, unsigned int, int);
int FUN_00296b3c(unsigned int, int, unsigned int, int);
int dataTable1bOr1cGetRecord(void);
int FUN_002bcfc0(int, int);
int textFormatBuffer(int *, unsigned char *, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_0028ff98; /* 0x28ff98 */
extern unsigned char LAB_0028ffb4; /* 0x28ffb4 */
extern unsigned int g_aocSystem; /* 0x433158 */
extern int g_uiQuest; /* 0x43dd50 */

extern int FUN_00241c40(int);
/* Supplied declaration required: uiBindRecordRewardText. */
/* Supplied declaration required: FUN_0028ffb8. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_00296b3c. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned char *asdLoadFileSyncDefault(unsigned int *);
extern int FUN_003336dc(int, unsigned int);
extern unsigned char *FUN_00385ccc(unsigned int, int);


void FUN_0028fe0c(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  
  temp_v0 = g_uiQuest;
  if (param_1 != 0) {
    uiBindRecordRewardText(param_1,1);
    temp_v3 = (unsigned char *)FUN_00385ccc(g_aocSystem,param_1);
    if (temp_v3 != (unsigned char *)0x0) {
      *(unsigned char **)(temp_v0 + 0x5e0) = temp_v3;
      *(unsigned char *)(temp_v0 + 0x5f7) = 1;
    }
    else {
      textFormatBuffer(&temp_v2,&LAB_0028ff98,param_1);
      temp_v3 = (unsigned char *)asdLoadFileSyncDefault((unsigned int *)&temp_v2);
      *(unsigned char **)(temp_v0 + 0x5e0) = temp_v3;
      *(unsigned char *)(temp_v0 + 0x5f7) = 0;
    }
    temp_v2 = 3;
    temp_v4 = 0;
    asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v0 + 0x5d4),3,0xffffffff,0);
    temp_v1 = FUN_00241c40(param_1);
    if (0 < temp_v1) {
      temp_v3 = *(unsigned char **)(temp_v0 + 0x5e0);
      temp_v2 = 3;
      temp_v4 = temp_v1;
      asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v0 + 0x5dc),3,0xffffffff,0);
    }
    uiBindRecordRewardText(param_1,1,0);
    temp_v1 = FUN_003336dc(param_1,param_2);
    if (temp_v1 < 0) {
      temp_v1 = param_1;
      dataTable1bOr1cGetRecord();
      temp_v1 = temp_v1 + 0xe8;
      FUN_002bcfc0(temp_v1,0);
      temp_v3 = &LAB_0028ffb4;
      temp_v2 = 3;
      temp_v4 = temp_v1;
      FUN_00296b3c(*(unsigned int *)(temp_v0 + 0x5d8),3,0xffffffff,0);
    }
    else {
      temp_v3 = *(unsigned char **)(temp_v0 + 0x5e4);
      temp_v2 = 3;
      temp_v4 = temp_v1;
      asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v0 + 0x5d8),3,0xffffffff,0);
    }
    FUN_0028ffb8(param_1);
    return;
  }
  return;
}

} /* extern "C" */
