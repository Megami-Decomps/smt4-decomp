/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b280` (_code @ 0x24b280, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "addon/aocMain.h"

extern "C" {

int FUN_001760cc(int);
int jyoucyuGetTableEntry(int);
int _ZN18WindowStatusResultC1Ej(unsigned int *, int);
int FUN_001d0fcc(int *, int);
int asdFsIsSdCardDetected(void);
int aocClearDisplayFlag(int);
void aocResetOperationState(AocSystemA*);
int FUN_0046f3ac(int *, int);
int flagObjAdvance(int);
int FUN_0047306c(int, int, int, int);
int jobOwnerFreeSlotAndStop(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int g_aocMain; /* 0x570260 */
extern int g_aocBoot; /* 0x570264 */
extern unsigned int DAT_00570268; /* 0x570268 */
extern int g_aocSystem; /* 0x570280 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_001760cc. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern int sysLightEventTryWait(int);
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern unsigned int *_ZN18WindowStatusResultC1Ev(unsigned int *);
/* Supplied declaration required: FUN_001d0fcc. */
extern int byteIsAtLeast100(unsigned int *);
/* Supplied declaration required: asdFsIsSdCardDetected. */
/* Supplied declaration required: aocClearDisplayFlag. */
/* Supplied declaration required: FUN_0046f3ac. */
/* Supplied declaration required: flagObjAdvance. */
/* Supplied declaration required: FUN_0047306c. */
/* Supplied declaration required: jobOwnerFreeSlotAndStop. */
extern int startsWithH(unsigned int *);
extern int isEmptyString(unsigned int *);


unsigned int FUN_0024b280(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  int temp_v7;
  int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  temp_v0 = g_aocBoot;
  temp_v6 = romwright_piece_3_1((((unsigned int)(temp_v6) >> 8) & 0xffffffU),1);
  puVar1 = (unsigned int *)_ZN18WindowStatusResultC1Ev((unsigned int *)&uStack_4c);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)&uStack_38;
  _ZN18WindowStatusResultC1Ej(puVar2,0);
  temp_v4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v4;
  if (*(unsigned int *)(temp_v0 + 0x5f0) < 0xff) {
    *(unsigned int *)(temp_v0 + 0x5f0) = *(unsigned int *)(temp_v0 + 0x5f0) + 1;
  }
  temp_v3 = g_aocMain;
  temp_v5 = *(unsigned int *)(g_aocMain + 0x754);
  *(unsigned int *)(g_aocMain + 0x754) = temp_v5 & 0xffffff8f;
  if ((temp_v5 & 0x10) != 0) {
    *(unsigned char *)(temp_v0 + 8) = 4;
    FUN_001760cc(g_aocSystem);
    jobOwnerFreeSlotAndStop(temp_v0 + 0xc);
    *(unsigned char *)(temp_v0 + 9) = 0;
    temp_v0 = sysLightEventTryWait(g_aocMain + 0x98);
    if (temp_v0 != 0) {
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
    }
  }
  else {
    switch(*(unsigned char *)(temp_v0 + 8)) {
    case 0:
      temp_v1 = sysLightEventTryWait(temp_v3 + 0x98);
      temp_v3 = g_aocMain;
      temp_v2 = 0;
      if (temp_v1 != 0) {
        *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
        temp_v2 = temp_v3;
      }
      asdFsIsSdCardDetected();
      if (temp_v2 != 0) {
        *(unsigned char *)(temp_v0 + 8) = 1;
        *(unsigned char *)(g_aocMain + 0xd50) = 1;
        aocResetOperationState((AocSystemA*)g_aocSystem);
      }
      else {
        jyoucyuGetTableEntry(0);
        *(unsigned char *)(temp_v0 + 8) = 2;
      }
      break;
    case 1:
      FUN_0046f3ac(&temp_v7,g_aocSystem);
      temp_v6 = temp_v7;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
      uStack_44 = uStack_30;
      uStack_40 = uStack_2c;
      if ((*(char *)(temp_v0 + 9) == '\0') && (*(int *)(g_aocSystem + 0x314) != 0)) {
        *(unsigned int *)(g_aocSystem + 0x464) = 6;
        FUN_0047306c(temp_v0 + 0xc,0xbe,2,0);
        *(unsigned char *)(temp_v0 + 9) = 1;
      }
      temp_v5 = *(unsigned int *)(g_aocMain + 0x754);
      *(unsigned int *)(g_aocMain + 0x754) = temp_v5 & 0xffffff8f;
      if ((temp_v5 & 0x10) == 0) {
        temp_v3 = startsWithH((unsigned int *)&temp_v6);
        if (temp_v3 != 0) {
          *(unsigned char *)(temp_v0 + 8) = 0;
          FUN_0047306c(temp_v0 + 0xc,0xbe,2,0);
          *(unsigned char *)(temp_v0 + 9) = 1;
          return 0;
        }
        temp_v3 = isEmptyString((unsigned int *)&temp_v6);
        if ((temp_v3 == 0) && (temp_v3 = byteIsAtLeast100((unsigned int *)&temp_v6), temp_v3 == 0)) {
          return 0;
        }
        *(unsigned char *)(temp_v0 + 8) = 2;
        return 0;
      }
      *(unsigned char *)(temp_v0 + 8) = 4;
      FUN_001760cc(g_aocSystem);
      jobOwnerFreeSlotAndStop(temp_v0 + 0xc);
      *(unsigned char *)(temp_v0 + 9) = 0;
      temp_v0 = sysLightEventTryWait(g_aocMain + 0x98);
      if (temp_v0 != 0) {
        *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
      }
      break;
    case 2:
      if (*(char *)(temp_v0 + 9) != '\0') {
        if (*(unsigned int *)(temp_v0 + 0x5f0) < 0x1e) {
          return 0;
        }
        flagObjAdvance(temp_v0 + 0xc);
      }
      *(unsigned char *)(temp_v0 + 8) = 3;
      break;
    case 3:
      if (*(char *)(temp_v0 + 9) != '\0') {
        if (*(unsigned int *)(temp_v0 + 0x5f0) < 0x1e) {
          return 0;
        }
        if (*(char *)(temp_v0 + 0x4d6) == '\0') {
          return 0;
        }
        jobOwnerFreeSlotAndStop(temp_v0 + 0xc);
      }
      aocClearDisplayFlag(g_aocSystem);
      FUN_001d0fcc(&temp_v7,g_aocSystem);
      DAT_00570268 = 1;
      *(unsigned char *)(temp_v0 + 8) = 5;
      return 0xffffffff;
    case 4:
      if ((temp_v5 & 4) == 0 && (temp_v5 & 8) == 0) {
        *(unsigned int *)(temp_v0 + 0x5f0) = 0xffff;
        *(unsigned char *)(temp_v0 + 8) = 3;
      }
    }
  }
  return 0;
}

} /* extern "C" */
