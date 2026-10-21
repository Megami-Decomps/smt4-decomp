/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Npc_SpawnRandomInRange` (_code @ 0x2ef2e0, 0x3d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247bf4(...);
int FUN_00252190(unsigned int, int);
int scrWorkGetValue(...);
int scrWorkSetValue(...);
int messageForwardDefaultMode(...);
int FUN_00289234(unsigned int);
int eventTexSetJobParam(void);
int FUN_00295660(...);
int FUN_0029c1c8(unsigned int, unsigned int, int);
int devilGetRecord(...);
int FUN_002bd06c(unsigned int);
int libc_strcpy(...);
int FUN_002bff38(...);
int jobStop(...);
int memClear(...);
int jyoucyuGetTableEntry(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1420; /* 0x1420: local_1420 */
} void_stack;

extern int DAT_0044cfa0; /* 0x44cfa0 */

/* Supplied declaration required: FUN_00247bf4. */
/* Supplied declaration required: FUN_00252190. */
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: messageForwardDefaultMode. */
/* Supplied declaration required: FUN_00289234. */
/* Supplied declaration required: eventTexSetJobParam. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_00295660. */
extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_0029c1c8. */
extern unsigned int FUN_0029c1fc(void);
extern int fileSlotGetBuffer(unsigned int);
/* Supplied declaration required: devilGetRecord. */
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
extern int jobIsValid(void);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bff38. */
extern int jobGetWork(unsigned int);
extern int randNextInRange(unsigned int);
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: jyoucyuGetTableEntry. */


unsigned int scrComm_Npc_SpawnRandomInRange(void)

{
/* irregular: 16 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [128];
  unsigned char temp_v9 [4984];
  
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    jyoucyuGetTableEntry(0);
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
    DAT_0044cfa0 = 0;
  }
  temp_v2 = scrWorkGetValue(0);
  switch(temp_v2) {
  case 0:
    temp_v1 = scrGetArg(0);
    temp_v3 = scrGetArg(1);
    temp_v6 = 0;
    temp_v5 = 1;
    do {
      temp_v4 = temp_v5;
      temp_v7[temp_v5] = 0;
      devilGetRecord();
      if ((((temp_v4 != 0) && ((*(unsigned short *)(temp_v4 + 6) & 1) != 0)) &&
          (temp_v1 <= (int)(unsigned int)*(unsigned char *)(temp_v4 + 3))) && ((int)(unsigned int)*(unsigned char *)(temp_v4 + 3) <= temp_v3))
      {
        temp_v7[temp_v6] = temp_v5;
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0x500);
    if (temp_v6 < 1) {
      return 1;
    }
    temp_v1 = randNextInRange((temp_v6 - 1U) & 0xffff);
    temp_v5 = temp_v7[temp_v1];
    temp_v2 = FUN_0029c1fc();
    FUN_0029c1c8(temp_v2,temp_v5 & 0xffff,0);
    scrWorkSetValue(0,1);
    DAT_0044cfa0 = 0;
    scrWorkSetValue(1,temp_v5 & 0xffff);
    break;
  case 1:
    temp_v2 = scrWorkGetValue(1);
    FUN_00252190(temp_v2,0);
    eventTexSetJobParam();
    FUN_00289234(temp_v2);
    scrWorkSetValue(2,temp_v2);
    FUN_00247bf4(temp_v2,0,1);
    scrWorkSetValue(0,2);
    DAT_0044cfa0 = 0;
    break;
  case 2:
    temp_v2 = scrWorkGetValue(2);
    FUN_00247bf4(temp_v2,0xf,0);
    scrWorkSetValue(0,3);
    DAT_0044cfa0 = 0;
    break;
  case 3:
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (DAT_0044cfa0 >= 0xf) {
      scrWorkSetValue(0,4);
      DAT_0044cfa0 = 0;
    }
    break;
  case 4:
    temp_v0 = scrWorkGetValue(1);
    devilGetRecord(temp_v0);
    memClear(temp_v8,0x80);
    memClear(temp_v9,0x80);
    temp_v5 = scrWorkGetValue(1);
    temp_v5 = temp_v5 & 0xffff;
    FUN_002bd06c(temp_v5);
    libc_strcpy(temp_v8,temp_v5);
    temp_v0 = scrWorkGetValue(1);
    temp_v2 = FUN_002bce30(temp_v0,1);
    libc_strcpy(temp_v9,temp_v2);
    FUN_00295660(8,temp_v8);
    FUN_00295660(9,temp_v9);
    temp_v1 = fileSlotGetBuffer(0x1e);
    FUN_002bff38(0x14);
    temp_v7[0] = 0;
    messageForwardDefaultMode(temp_v1,0x38,DAT_0044cfa0,6);
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (temp_v1 == 1) {
      scrWorkSetValue(0,10);
      DAT_0044cfa0 = 0;
    }
    break;
  case 10:
    temp_v2 = scrWorkGetValue(2);
    FUN_00247bf4(temp_v2,10,1);
    scrWorkSetValue(0,0xb);
    DAT_0044cfa0 = 0;
    break;
  case 0xb:
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (DAT_0044cfa0 >= 10) {
      scrWorkSetValue(0,0xc);
      DAT_0044cfa0 = 0;
    }
    break;
  case 0xc:
    temp_v2 = scrWorkGetValue(2);
    temp_v1 = jobIsValid();
    if (temp_v1 != 0) {
      temp_v1 = jobGetWork(temp_v2);
      if (*(int *)(temp_v1 + 0xc) != 1) {
        *(unsigned int *)(temp_v1 + 0x28) = 0xbe800000;
        *(unsigned char *)(temp_v1 + 0x30) = 1;
      }
      else {
        jobStop(temp_v2,0);
      }
    }
    scrWorkSetValue(0,0xd);
    DAT_0044cfa0 = 0;
    break;
  case 0xd:
    return 1;
  }
  return 0;
}

} /* extern "C" */
