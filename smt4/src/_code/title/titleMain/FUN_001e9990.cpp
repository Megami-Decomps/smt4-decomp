/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e9990` (_code @ 0x1e9990, 0xf4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026faa4(void);
int FUN_0029c2cc(...);
int sndObjectForwardField8(...);

int FUN_0019213c(void);
int FUN_00210104(...);
int FUN_0026e324(...);
int FUN_0026f824(...);
int FUN_0026fe0c(void);
int FUN_0026ff54(void);
int FUN_00275be8(...);
int FUN_00275dc4(void);
int FUN_0028703c(...);
int FUN_00287c34(...);
int uiFadeRelease(void);
int soundChannelStopAll(...);
int FUN_0029c3c0(...);
int asdModelSlotRelease(...);
int FUN_002b827c(...);
int ifTouchRegionRemove(void);
int jobStop(...);
int asdSequenceRequest(...);
int FUN_002f4ce8(void);
int FUN_0030a9d8(void);

int FUN_00210194(...);
int FUN_00211bd0(void);
int commonBgReset(void);
int FUN_002898e4(void);
int buttonHelpCreate(void);
int fileSlotLoad(int);
int FUN_00298d50(...);
int FUN_0029bb14(void);
int asdMdlManagerCreateLoaded(...);
int FUN_0029ee6c(...);
int soundChannelRequestIfEnabled(int, int, int);
int FUN_002a03d8(...);
int FUN_002a0428(...);
int modelSlotAttachChild(...);
int FUN_002a09b4(...);
int FUN_002a5eb4(void);
int FUN_002a8638(...);
int buttonHelpSetPreset(...);
int eventQueueAddUnique(...);
int FUN_002bc0e0(void);
int dataTableGet(...);
int FUN_002c159c(...);
int FUN_002c1e30(...);
int FUN_003bc9d0(unsigned int *);
int VectorSignedToFloat(int, int);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_001e9fbc; /* 0x1e9fbc */
extern unsigned char LAB_001e9fd4; /* 0x1e9fd4 */
extern unsigned char LAB_001e9fec; /* 0x1e9fec */
extern unsigned char LAB_001ea004; /* 0x1ea004 */
extern unsigned char LAB_0031305f; /* 0x31305f */
extern unsigned int g_aocSystem; /* 0x433158 */
extern unsigned int *g_titleMain; /* 0x44e300 */
extern unsigned char DAT_0049f950; /* 0x49f950 */
extern unsigned int DAT_0049fc74; /* 0x49fc74 */
extern unsigned int DAT_0049fc88; /* 0x49fc88 */
extern int DAT_0049fd14; /* 0x49fd14 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019213c. */
/* Supplied declaration required: FUN_00210104. */
/* Supplied declaration required: FUN_00210194. */
/* Supplied declaration required: FUN_00211bd0. */
extern int FUN_00215a14(void);
extern int effIsFinished(unsigned int);
extern int FUN_0025a084(void);
/* Supplied declaration required: commonBgReset. */
extern unsigned int FUN_00263c1c(unsigned char *);
/* Supplied declaration required: FUN_0026e324. */
extern int FUN_0026ee68(unsigned int);
/* Supplied declaration required: FUN_0026f824. */
/* Supplied declaration required: FUN_0026faa4. */
/* Supplied declaration required: FUN_0026fe0c. */
/* Supplied declaration required: FUN_0026ff54. */
/* Supplied declaration required: FUN_00275be8. */
/* Supplied declaration required: FUN_00275dc4. */
extern int jobWorkerPollAndFree(void);
/* Supplied declaration required: FUN_0028703c. */
/* Supplied declaration required: FUN_00287c34. */
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: uiFadeRelease. */
/* Supplied declaration required: fileSlotLoad. */
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_0029c3c0. */
extern int FUN_0029d65c(int);
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: modelSlotAttachChild. */
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: FUN_002a5eb4. */
/* Supplied declaration required: asdModelSlotRelease. */
/* Supplied declaration required: FUN_002a8638. */
extern int FUN_002adee0(unsigned int);
/* Supplied declaration required: sndObjectForwardField8. */
/* Supplied declaration required: FUN_002b827c. */
extern unsigned short FUN_002b8584(unsigned int, unsigned int);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int padIsButtonRepeat(unsigned int);
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_002bc0e0. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
extern int padIsButtonPressed(unsigned int);
extern int gameDataBlocksGetSaveData(void);
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: jobStop. */
extern unsigned int FUN_002c501c(void);
/* Supplied declaration required: asdSequenceRequest. */
extern int gaugeTaskIsIdle(unsigned int);
/* Supplied declaration required: FUN_002f4ce8. */
extern int titleConfigIsClosed(void);
/* Supplied declaration required: FUN_0030a9d8. */
/* Supplied declaration required: FUN_003bc9d0. */


unsigned int FUN_001e9990(void)

{
/* irregular: 13 goto(s); irregular input(s): in_fpscr, in_s0; 48 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned short temp_v1;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar10;
  unsigned int **ppuVar11;
  unsigned int temp_v6;
  unsigned int *puVar13;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v8;
  long long temp_v9;
  unsigned int *temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char *temp_v13;
  unsigned char temp_v14 [24];
  
  puVar13 = g_titleMain;
  ppuVar11 = &temp_v10;
  switch(g_titleMain[0x27]) {
  case 0:
    fileSlotLoad(0x3a);
    FUN_002a5eb4();
    temp_v4 = FUN_002bf4f8(0x11,0x12);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar13[0x10] = temp_v6;
    puVar13[0x11] = temp_v5;
    temp_v4 = FUN_002bf4f8(0x11,0x13);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar13[0x12] = temp_v6;
    puVar13[0x13] = temp_v5;
    temp_v4 = FUN_002bf4f8(0x11,0x16);
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar13[0x14] = temp_v5;
    puVar13[0x15] = temp_v6;
    temp_v4 = FUN_002bf4f8(0x11,0x17);
    in_s0 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)&puVar13[0x16] = in_s0;
    puVar13[0x17] = temp_v6;
    FUN_002bc0e0();
    if (*(char *)((int)puVar13 + 0x95) == '\0') {
      temp_v4 = FUN_002c2a04(0);
      if (temp_v4 != 0) {
        FUN_002a03d8(0,4);
        FUN_002a03d8(1,4);
      }
      temp_v4 = puVar13[0x27] + 1;
      break;
    }
    temp_v4 = 2;
    break;
  case 1:
    FUN_003bc9d0(g_titleMain + 5);
    if (*(char *)((int)puVar13 + 0x17) == '\0') goto LAB_001ea720;
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 2:
    *(unsigned char *)(g_titleMain + 4) = 0;
    soundChannelRequestIfEnabled(0x1000001,0,0x3c);
    FUN_002898e4();
    if (*(char *)(puVar13 + 0x18) != '\0') {
      puVar13[2] = 1;
      puVar13[3] = 1;
    }
    if (*(char *)((int)puVar13 + 0x95) != '\0') {
      puVar13[2] = 3;
      puVar13[3] = 3;
    }
    buttonHelpCreate();
    buttonHelpSetPreset(0x9f);
    temp_v2 = puVar13[2];
    dataTableGet(0x3a,0);
    temp_v4 = dataTableGetEntries();
    FUN_0029ee6c(temp_v4 + temp_v2 * 0x56 + 0x16,0x323232ff);
    if (*(char *)(puVar13 + 0x18) != '\0') {
      commonBgReset();
    }
    else {
      FUN_00211bd0();
    }
    temp_v1 = FUN_002b8584(0x11,0x14);
    *(unsigned short *)(puVar13 + 0x1d) = temp_v1;
    temp_v1 = FUN_002b8584(0x11,0x15);
    *(unsigned short *)((int)puVar13 + 0x76) = temp_v1;
    temp_v1 = FUN_002b8584(0x11,0x18);
    *(unsigned short *)(puVar13 + 0x1e) = temp_v1;
    temp_v1 = FUN_002b8584(0x11,0x19);
    *(unsigned short *)((int)puVar13 + 0x7a) = temp_v1;
    temp_v6 = FUN_00263c1c(&LAB_001e9fbc);
    puVar13[0x22] = temp_v6;
    puVar5 = &LAB_001e9fd4;
    asdMdlManagerCreateLoaded(&LAB_001e9fd4,7);
    puVar13[0x23] = (unsigned int)puVar5;
    puVar5 = &LAB_001e9fec;
    asdMdlManagerCreateLoaded(&LAB_001e9fec,7);
    puVar13[0x24] = (unsigned int)puVar5;
    *(unsigned char *)((int)puVar13 + 0x85) = 1;
    FUN_002a09b4(&LAB_001ea004,0);
    *(unsigned char *)((int)puVar13 + 0x86) = 1;
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 3:
    temp_v4 = FUN_002adee0(g_titleMain[0x23]);
    if (temp_v4 == 0) {
      temp_v4 = FUN_002adee0(puVar13[0x24]);
      temp_v7 = temp_v4 == 0;
      if (temp_v7) {
        temp_v4 = puVar13[0x22];
      }
      if (temp_v7 && temp_v4 == 0) goto LAB_001ea720;
    }
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 4:
    *(unsigned char *)((int)g_titleMain + 0x86) = 0;
    modelSlotAttachChild(puVar13[0x22],0);
    temp_v6 = FUN_002c501c();
    temp_v10 = (unsigned int *)&temp_v12;
    FUN_002a8638(*(unsigned int *)(puVar13[0x22] + 8),&temp_v13,temp_v14,&temp_v11);
    temp_v13 = (unsigned char *)romwright_f2u((float)((romwright_u2f((unsigned int)(temp_v13)) * 180.0f * 0.31830987f)));
    FUN_002c1e30(temp_v6,1);
    temp_v5 = 0x3f800000;
    in_s0 = 5.0f;
    FUN_002c159c(temp_v6);
    FUN_00298d50(temp_v6);
    FUN_002a0428(puVar13[0x23],1);
    FUN_002a0428(puVar13[0x24],1);
    puVar10 = (unsigned int *)puVar13[0x23];
    if ((*puVar10 & 4) != 0) {
      *puVar10 = *puVar10 & 0xfffffffb;
      *(unsigned int *)(puVar10[2] + 0x74) = temp_v5;
      in_s0 = *(float *)(puVar10[2] + 0x78);
      FUN_0029bb14();
    }
    puVar10 = (unsigned int *)puVar13[0x24];
    if ((*puVar10 & 4) == 0) {
      *puVar10 = *puVar10 | 4;
      *(unsigned int *)(puVar10[2] + 0x74) = 0;
      in_s0 = *(float *)(puVar10[2] + 0x78);
      FUN_0029bb14();
    }
    puVar10 = (unsigned int *)puVar13[0x24];
    *puVar10 = *puVar10 | 2;
    *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
    FUN_002a03d8(0,10);
    FUN_002a03d8(1,10);
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 5:
    temp_v4 = FUN_002896bc();
    if ((temp_v4 == 0) || (temp_v4 = FUN_0025a084(), puVar2 = g_titleMain, temp_v4 == 0))
    goto LAB_001ea720;
    temp_v8 = 1.0f;
    g_titleMain[0x19] = (float)g_titleMain[0x19] + 1.0f;
    temp_v4 = padIsButtonRepeat(5);
    if ((temp_v4 != 0) || (temp_v4 = padIsButtonRepeat(0xe), temp_v4 != 0)) {
      puVar2[2] = puVar2[2] - 1;
    }
    temp_v4 = padIsButtonRepeat(6);
    if ((temp_v4 == 0) && (temp_v4 = padIsButtonRepeat(0xf), temp_v4 == 0)) {
      temp_v4 = puVar2[2];
    }
    else {
      temp_v4 = puVar2[2] + 1;
      puVar2[2] = temp_v4;
    }
    temp_v4 = (temp_v4 + 4) % 4;
    puVar2[2] = temp_v4;
    if (temp_v4 != puVar2[3]) {
      eventQueueAddUnique(0x100016c);
      puVar2[3] = puVar2[2];
    }
    if ((int)puVar2[0x19] >= 0x41f00001) {
      puVar2[0x19] = 0;
    }
    in_s0 = 0.06666667f;
    if ((int)puVar2[0x19] < 0x41700001) {
      in_s0 = (float)puVar2[0x1a] + 0.06666667f;
      *(float *)&puVar2[0x1a] = in_s0;
    }
    else if ((int)puVar2[0x19] < 0x41f00001) {
      in_s0 = (float)puVar2[0x1a] - 0.06666667f;
      *(float *)&puVar2[0x1a] = in_s0;
    }
    temp_v9 = (unsigned long long)(unsigned int)temp_v8 << 0x20;
    if ((int)puVar2[0x1a] < 0x3f800001) {
      temp_v8 = (float)puVar2[0x1a];
    }
    *(float *)&puVar2[0x1a] = temp_v8;
    if (temp_v8 <= 0.0f) {
      temp_v8 = 0.0f;
    }
    *(float *)&puVar2[0x1a] = temp_v8;
    puVar2 = g_titleMain;
    temp_v4 = 0;
    do {
      temp_v2 = FUN_0029d65c((int)*(short *)((int)puVar2 + temp_v4 * 2 + 0x74));
      if ((temp_v2 == 1) ||
         (temp_v2 = FUN_0029d65c((int)*(short *)((int)puVar2 + temp_v4 * 2 + 0x74)), temp_v2 == 2)) {
        puVar2[2] = temp_v4;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = 0;
    do {
      temp_v2 = FUN_0029d65c((int)*(short *)((int)puVar2 + temp_v4 * 2 + 0x74));
      if (temp_v2 == 6) {
        puVar2[2] = temp_v4;
        *(unsigned char *)((int)puVar2 + 99) = 1;
      }
      puVar3 = g_titleMain;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if ((*(char *)((int)g_titleMain + 0x96) != '\0') && (temp_v4 = FUN_0025a084(), temp_v4 != 0)) {
      *(unsigned char *)((int)puVar3 + 0x96) = 0;
      temp_v6 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
      if (*(char *)(puVar3 + 0x25) != '\0') {
        puVar10 = (unsigned int *)puVar3[0x24];
        *puVar10 = *puVar10 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 1;
        puVar10 = (unsigned int *)puVar3[0x24];
        if ((*puVar10 & 4) != 0) {
          *puVar10 = *puVar10 & 0xfffffffb;
          *(unsigned int *)(puVar10[2] + 0x74) = temp_v6;
          FUN_0029bb14();
        }
        temp_v6 = puVar3[0x24];
        in_s0 = (float)puVar3[0x26];
      }
      else {
        puVar10 = (unsigned int *)puVar3[0x23];
        *puVar10 = *puVar10 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 1;
        puVar10 = (unsigned int *)puVar3[0x23];
        if ((*puVar10 & 4) != 0) {
          *puVar10 = *puVar10 & 0xfffffffb;
          *(unsigned int *)(puVar10[2] + 0x74) = temp_v6;
          FUN_0029bb14();
        }
        temp_v6 = puVar3[0x23];
        in_s0 = (float)puVar3[0x26];
      }
      FUN_00210194(temp_v6);
    }
    temp_v4 = effIsFinished(*(unsigned int *)(puVar3[0x23] + 8));
    if (((temp_v4 != 0) && (temp_v4 = gaugeTaskIsIdle(*(unsigned int *)(puVar3[0x23] + 8)), temp_v4 != 0)) &&
       (*(char *)(puVar3 + 0x25) == '\0')) {
      puVar10 = (unsigned int *)puVar3[0x23];
      if ((*puVar10 & 4) == 0) {
        *puVar10 = *puVar10 | 4;
        *(int *)(puVar10[2] + 0x74) = (int)temp_v9;
        FUN_0029bb14();
      }
      puVar10 = (unsigned int *)puVar3[0x23];
      *puVar10 = *puVar10 | 2;
      *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
      puVar3[0x26] = (int)temp_v9;
      FUN_0028703c(*(unsigned int *)(puVar3[0x24] + 8));
      in_s0 = (float)temp_v9;
      FUN_00210104(*(unsigned int *)(puVar3[0x24] + 8));
      puVar10 = (unsigned int *)puVar3[0x24];
      *puVar10 = *puVar10 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 1;
      puVar10 = (unsigned int *)puVar3[0x24];
      if ((*puVar10 & 4) != 0) {
        *puVar10 = *puVar10 & 0xfffffffb;
        *(int *)(puVar10[2] + 0x74) = (int)((unsigned long long)temp_v9 >> 0x20);
        in_s0 = *(float *)(puVar10[2] + 0x78);
        FUN_0029bb14();
      }
      *(unsigned char *)(puVar3 + 0x25) = 1;
    }
    temp_v2 = puVar13[2];
    dataTableGet(0x3a,0);
    temp_v4 = dataTableGetEntries();
    FUN_0029ee6c(temp_v4 + temp_v2 * 0x56 + 0x16,0x323232ff);
    if (((*(char *)((int)puVar13 + 99) == '\0') && (temp_v4 = FUN_0026ee68(1), temp_v4 == 0)) &&
       (temp_v4 = padIsButtonPressed(0), temp_v4 == 0)) goto LAB_001ea720;
    puVar13 = g_titleMain;
    temp_v3 = g_titleMain[2];
    temp_v7 = temp_v3 == 1;
    if (temp_v7) {
      temp_v3 = (unsigned int)*(unsigned char *)(g_titleMain + 0x18);
    }
    if (temp_v7 && temp_v3 == 0) {
      *(unsigned char *)((int)g_titleMain + 99) = 0;
      goto LAB_001ea720;
    }
    eventQueueAddUnique(0x100016d);
    temp_v4 = puVar13[2];
    if (temp_v4 == 1) {
      temp_v4 = 0;
      *(unsigned char *)((int)puVar13 + 0x61) = 1;
      do {
        ifTouchRegionRemove();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      *(unsigned char *)((int)puVar13 + 99) = 0;
      *(unsigned char *)(puVar13 + 0x1f) = 1;
      puVar13[0x20] = 2;
      FUN_00275dc4();
      FUN_00275be8(1);
      temp_v4 = 7;
    }
    else if (temp_v4 != 0) {
      if (temp_v4 != 2) {
        if (temp_v4 == 3) {
          temp_v4 = 0;
          *(unsigned char *)((int)puVar13 + 99) = 0;
          do {
            ifTouchRegionRemove();
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 4);
          puVar13[0x27] = 0xb;
          FUN_0029c3c0(0,10,0xff);
          FUN_0029c3c0(1,10,0xff);
        }
        goto LAB_001ea720;
      }
      temp_v4 = 0;
      *(unsigned char *)((int)puVar13 + 0x61) = 1;
      do {
        ifTouchRegionRemove();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      *(unsigned char *)((int)puVar13 + 99) = 0;
      *(unsigned char *)(puVar13 + 0x1f) = 1;
      puVar13[0x20] = 2;
      FUN_00275dc4();
      FUN_00275be8(1);
      temp_v4 = 9;
    }
    else {
      *(unsigned char *)((int)puVar13 + 0x62) = 1;
      temp_v4 = 0;
      *(unsigned char *)((int)puVar13 + 99) = 0;
      do {
        ifTouchRegionRemove();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      FUN_0029c3c0(0,0xc,0xffffffff);
      FUN_0029c3c0(1,0xc,0xffffffff);
      soundChannelStopAll(0xf);
      temp_v4 = 6;
    }
    break;
  case 6:
    temp_v4 = 0xc;
    break;
  case 7:
    if (*(char *)(g_titleMain + 0x1f) != '\0') goto LAB_001ea720;
    asdModelSlotRelease(0);
    FUN_0030a9d8();
    temp_v4 = 8;
    break;
  case 8:
    temp_v4 = jobWorkerPollAndFree();
    if (temp_v4 != 0) goto LAB_001ea720;
    temp_v4 = FUN_00215a14();
    if (temp_v4 == 0) goto LAB_001ea4cc;
    *(unsigned char *)((int)puVar13 + 0x62) = 1;
    soundChannelStopAll(0xf);
    temp_v4 = 0xc;
    break;
  case 9:
    if (*(char *)(g_titleMain + 0x1f) != '\0') goto LAB_001ea720;
    asdModelSlotRelease(0);
    FUN_002f4ce8();
    temp_v4 = 10;
    break;
  case 10:
    temp_v4 = titleConfigIsClosed();
    if (temp_v4 != 0) {
LAB_001ea4cc:
      puVar13 = g_titleMain;
      in_s0 = 0.0f;
      g_titleMain[0x19] = 0;
      puVar13[0x1a] = 0;
      buttonHelpSetPreset(0x9f);
      temp_v1 = FUN_002b8584(0x11,0x14);
      *(unsigned short *)(puVar13 + 0x1d) = temp_v1;
      temp_v1 = FUN_002b8584(0x11,0x15);
      *(unsigned short *)((int)puVar13 + 0x76) = temp_v1;
      temp_v1 = FUN_002b8584(0x11,0x18);
      *(unsigned short *)(puVar13 + 0x1e) = temp_v1;
      temp_v1 = FUN_002b8584(0x11,0x19);
      *(unsigned short *)((int)puVar13 + 0x7a) = temp_v1;
      *(unsigned char *)((int)puVar13 + 0x61) = 0;
      FUN_00275be8(2);
      *(unsigned char *)(puVar13 + 0x21) = 1;
      FUN_002a09b4("title/title_top.bcenv",0);
      *(unsigned char *)((int)puVar13 + 0x85) = 1;
      modelSlotAttachChild(puVar13[0x22],0);
      *(unsigned char *)((int)puVar13 + 0x96) = 1;
      puVar13[0x27] = 5;
    }
    goto LAB_001ea720;
  case 0xb:
    temp_v4 = FUN_002896bc();
    if (temp_v4 == 0) goto LAB_001ea720;
    temp_v4 = 0xc;
    break;
  case 0xc:
    temp_v4 = FUN_002896bc();
    if (temp_v4 != 0) {
      uiFadeRelease();
      jobStop(*g_titleMain,0);
      FUN_002b827c(3);
      temp_v4 = puVar13[2];
      if (temp_v4 != 1) {
        if (temp_v4 != 0) {
          if (temp_v4 == 3) {
            FUN_0019213c();
          }
        }
        else {
          FUN_0026f824(0);
          FUN_0026e324(g_aocSystem);
          FUN_00287c34(0);
          DAT_0049fc74 = 0;
          DAT_0049fc88 = 1;
          temp_v10 = (unsigned int *)0x1;
          temp_v11 = 0xffffffff;
          temp_v12 = 0x31303065;
          temp_v13 = &LAB_0031305f;
          asdSequenceRequest(4,&temp_v10,0x20);
        }
      }
      else {
        FUN_0026ff54();
        FUN_00287c34(1);
        temp_v4 = gameDataBlocksGetSaveData();
        if (*(unsigned char *)(temp_v4 + 2) >= 2) {
          if (*(unsigned char *)(temp_v4 + 2) == 2) {
            temp_v6 = 0x20;
            temp_v10 = (unsigned int *)0x1;
            temp_v11 = 0xffffffff;
            temp_v12 = 0x31303065;
            temp_v13 = &LAB_0031305f;
            temp_v5 = 4;
            ppuVar11 = &temp_v10;
            DAT_0049fc88 = 1;
            DAT_0049fc74 = 0;
            asdSequenceRequest(temp_v5,ppuVar11,temp_v6);
          }
        }
        else {
          FUN_0026fe0c();
          FUN_0026faa4();
          if (DAT_0049fd14 >= 200) {
            temp_v10 = (unsigned int *)(DAT_0049fd14 - 200);
            temp_v6 = 4;
            temp_v5 = 0xe;
          }
          else {
            if (DAT_0049fd14 < 100) {
              DAT_0049f950 = 1;
            }
            temp_v6 = 0;
            ppuVar11 = (unsigned int **)0x0;
            if (DAT_0049fd14 < 100) {
              temp_v5 = 6;
            }
            else {
              temp_v5 = 8;
            }
          }
          DAT_0049fc88 = 1;
          DAT_0049fc74 = 0;
          asdSequenceRequest(temp_v5,ppuVar11,temp_v6);
        }
      }
    }
  default:
    goto LAB_001ea720;
  }
  puVar13[0x27] = temp_v4;
LAB_001ea720:
  puVar13 = g_titleMain;
  if (*(char *)(g_titleMain + 0x1f) != '\0') {
    if (g_titleMain[0x20] == 1) {
      *(unsigned char *)(g_titleMain + 0x21) = 0;
    }
    else if ((int)g_titleMain[0x20] < 0) {
      temp_v0 = *(char *)(g_titleMain + 0x25);
      g_titleMain[0x20] = 2;
      *(unsigned char *)(puVar13 + 0x1f) = 0;
      if (temp_v0 != '\0') {
        puVar10 = (unsigned int *)puVar13[0x24];
        if ((*puVar10 & 4) == 0) {
          *puVar10 = *puVar10 | 4;
          *(unsigned int *)(puVar10[2] + 0x74) = 0;
          in_s0 = *(float *)(puVar10[2] + 0x78);
          FUN_0029bb14();
        }
        puVar10 = (unsigned int *)puVar13[0x24];
        *puVar10 = *puVar10 | 2;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
        sndObjectForwardField8(puVar13[0x24]);
        *(float *)&puVar13[0x26] = in_s0;
      }
      else {
        puVar10 = (unsigned int *)puVar13[0x23];
        if ((*puVar10 & 4) == 0) {
          *puVar10 = *puVar10 | 4;
          *(unsigned int *)(puVar10[2] + 0x74) = 0;
          in_s0 = *(float *)(puVar10[2] + 0x78);
          FUN_0029bb14();
        }
        puVar10 = (unsigned int *)puVar13[0x23];
        *puVar10 = *puVar10 | 2;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
        sndObjectForwardField8(puVar13[0x23]);
        *(float *)&puVar13[0x26] = in_s0;
      }
      FUN_0029c2cc(puVar13[0x22],0);
      *(unsigned char *)((int)puVar13 + 0x85) = 0;
    }
    puVar13[0x20] = puVar13[0x20] - 1;
  }
  puVar13 = g_titleMain;
  temp_v8 = (float)g_titleMain[0x1b];
  if (*(char *)((int)g_titleMain + 0x61) != '\0') {
    if (temp_v8 < 0.0f) {
      return 0;
    }
    temp_v8 = temp_v8 - 0.1f;
    *(float *)&g_titleMain[0x1b] = temp_v8;
    if (temp_v8 <= 0.0f) {
      temp_v8 = 0.0f;
    }
  }
  else {
    if ((int)temp_v8 >= 0x3f800001) {
      return 0;
    }
    temp_v8 = temp_v8 + 0.1f;
    *(float *)&g_titleMain[0x1b] = temp_v8;
    if ((int)temp_v8 >= 0x3f800001) {
      temp_v8 = 1.0f;
    }
  }
  *(float *)&puVar13[0x1b] = temp_v8;
  return 0;
}

} /* extern "C" */
