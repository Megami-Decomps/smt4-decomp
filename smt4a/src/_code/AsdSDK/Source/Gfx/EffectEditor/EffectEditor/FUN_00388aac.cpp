/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388aac` (_code @ 0x388aac, 0x1074 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W5_W5Match2_LinkedItems.h"

extern "C" {

int FUN_0019c0e0(...);
int FUN_001abbc4(void);
int FUN_001ac8ec(...);
int FUN_001acb48(void);
int FUN_001b4c1c(...);
int FUN_001b4eb8(...);
int eventDispatch(...);
int FUN_00243c24(void);
int FUN_002b30e4(void);
int FUN_00323bc4(...);
int swapSlotExchange(...);
int effectEditorApplyHandlerState(void);
int FUN_003874ec(...);
int objectRegistryInsert(...);

int textFormatBuffer(...);
int padButtonRepeat(...);
int padButtonIsPressed(...);
int memAlloc(int, int, int, unsigned int, int, int);
int asdMemFree(...);
int FUN_00202178(...);
int effEditorNodeChainApply(...);
int asdDebugLog(...);
int effPartCreate(void);
int rt_memclr(void);
int linkedFindItemByIndex(...);
int nodeChainCount(...);
int asdEffectQueueRelease(...);
int rt_memcpy_w(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int FUN_00362584(...); /* 0x362584 */
extern int effEditorReleaseResources(...); /* 0x388a70 */
extern unsigned char LAB_003891d8; /* 0x3891d8 */
extern unsigned char LAB_003891e4; /* 0x3891e4 */
extern unsigned char LAB_003891f0; /* 0x3891f0 */
extern unsigned char LAB_00389208; /* 0x389208 */
extern unsigned char LAB_0038921c; /* 0x38921c */
extern unsigned char LAB_00389778; /* 0x389778 */
extern unsigned char LAB_00389780; /* 0x389780 */
extern unsigned char LAB_00389790; /* 0x389790 */
extern unsigned char LAB_00389794; /* 0x389794 */
extern unsigned char LAB_003897a4; /* 0x3897a4 */
extern unsigned char LAB_00389b24; /* 0x389b24 */
extern unsigned char LAB_00389b2c; /* 0x389b2c */
extern unsigned char LAB_00389b34; /* 0x389b34 */
extern unsigned char LAB_00389b3c; /* 0x389b3c */
extern unsigned char LAB_00389b40; /* 0x389b40 */
extern unsigned char LAB_00389b48; /* 0x389b48 */
extern unsigned char LAB_00389b50; /* 0x389b50 */
extern int FUN_003aa520(...); /* 0x3aa520 */
extern int FUN_003c3654(...); /* 0x3c3654 */
extern int effectPollResourceFileDialog(...); /* 0x3c58c4 */
extern signed char g_effectEditor; /* 0x59dbe0 */
extern unsigned char DAT_0059dbe1; /* 0x59dbe1 */
extern signed char DAT_0059dbe6; /* 0x59dbe6 */
extern signed char DAT_0059dbe7; /* 0x59dbe7 */
extern unsigned char DAT_0059dbe8; /* 0x59dbe8 */
extern unsigned char DAT_0059dbe9; /* 0x59dbe9 */
extern int DAT_0059dbec; /* 0x59dbec */
extern int DAT_0059dbf0; /* 0x59dbf0 */
extern int DAT_0059dbf4; /* 0x59dbf4 */
extern int DAT_0059dc00; /* 0x59dc00 */
extern unsigned char *DAT_0059dc14; /* 0x59dc14 */
extern unsigned char *DAT_0059dc18; /* 0x59dc18 */
extern unsigned char DAT_0059dc5c; /* 0x59dc5c */
extern int iRam0059dc60; /* 0x59dc60 */
extern char s_EXIT_0059dc74[5]; /* 0x59dc74 */
extern unsigned char DAT_0059dc84; /* 0x59dc84 */
extern unsigned char DAT_0059e658; /* 0x59e658 */
extern unsigned char DAT_0059e700; /* 0x59e700 */
extern unsigned char DAT_0059e8c8; /* 0x59e8c8 */
extern unsigned char DAT_0059e938; /* 0x59e938 */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern unsigned int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned int DAT_0059e9b8; /* 0x59e9b8 */
extern int DAT_0059e9bc; /* 0x59e9bc */
extern int DAT_0059e9c0; /* 0x59e9c0 */
extern unsigned char DAT_0059e9e0; /* 0x59e9e0 */
extern unsigned int uRam0059e9f0; /* 0x59e9f0 */
extern char s_LOAD_PARTS_0059eff0[11]; /* 0x59eff0 */
extern char s_NEW__PARTS_0059effb[11]; /* 0x59effb */
extern char s_SAVE_EPL__0059f006[10]; /* 0x59f006 */
extern char s_LOAD_EPL__0059f010[10]; /* 0x59f010 */
extern unsigned int DAT_00634c90; /* 0x634c90 */
extern unsigned int DAT_00634ca0; /* 0x634ca0 */
extern unsigned int uRam00634d04; /* 0x634d04 */
extern unsigned char DAT_00634d20; /* 0x634d20 */

/* Supplied declaration required: textFormatBuffer. */
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: padButtonRepeat. */
/* Supplied declaration required: padButtonIsPressed. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019c0e0. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: FUN_001ac8ec. */
/* Supplied declaration required: FUN_001acb48. */
/* Supplied declaration required: FUN_001b4c1c. */
/* Supplied declaration required: FUN_001b4eb8. */
extern unsigned char *FUN_00200bcc(unsigned char *);
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: eventDispatch. */
/* Supplied declaration required: FUN_00243c24. */
/* Supplied declaration required: asdDebugLog. */
/* Supplied declaration required: effPartCreate. */
/* Supplied declaration required: FUN_002b30e4. */
/* Supplied declaration required: rt_memclr. */
extern unsigned int FUN_0030061c(int);
/* Supplied declaration required: linkedFindItemByIndex. */
/* Supplied declaration required: FUN_00323bc4. */
/* Supplied declaration required: nodeChainCount. */
/* Supplied declaration required: swapSlotExchange. */
/* Supplied declaration required: effectEditorApplyHandlerState. */
extern u32 effResourceListHasActiveData(LinkedItems* resources);
/* Supplied declaration required: FUN_003874ec. */
/* Supplied declaration required: objectRegistryInsert. */
/* Supplied declaration required: asdEffectQueueRelease. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00388aac(void)

{
/* irregular: 11 goto(s); 33 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *puVar11;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int unaff_r11;
  unsigned int *puVar17;
  unsigned char temp_v13;
  unsigned char temp_v14;
  int temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned long long temp_v18;
  
  temp_v14 = 0;
  temp_v17 = 0;
  if (DAT_0059dc14 == &DAT_0059e9a8) {
    DAT_0059e9b8 = DAT_0059e9b8 & 0xfffffffe;
  }
  if (DAT_0059dbf4 == 0) {
    effPartCreate();
  }
  temp_v2 = nodeChainCount();
  temp_v1 = 0;
  if (DAT_0059dc14 == &DAT_0059e9a8) {
    if (DAT_0059e9b4 != 0) {
      if (DAT_0059e9b4 == 0x14) {
        temp_v3 = padButtonRepeat(6);
        if (temp_v3 == 0) {
          FUN_00202178(6);
          temp_v3 = padButtonRepeat();
          if (temp_v3 == 0) goto LAB_00388bf0;
        }
        if (DAT_0059e9b4 + DAT_0059dbec + 1 < temp_v2) {
          temp_v1 = 1;
          temp_v17 = 1;
          DAT_0059dbec = DAT_0059dbec + 1;
        }
      }
    }
    else {
      temp_v3 = padButtonRepeat(5);
      if (temp_v3 == 0) {
        FUN_00202178(5);
        temp_v3 = padButtonRepeat();
        if (temp_v3 == 0) goto LAB_00388bf0;
      }
      if (DAT_0059dbec != 0) {
        DAT_0059dbec = DAT_0059dbec - 1;
        temp_v1 = 1;
        temp_v17 = 1;
      }
    }
LAB_00388bf0:
    temp_v10 = DAT_0059e9b4 + DAT_0059dbec;
    if (temp_v10 < temp_v2) {
      temp_v3 = linkedFindItemByIndex(DAT_0059dbf4,temp_v10);
      temp_v8 = *(unsigned int *)(temp_v3 + 0x80);
      temp_v4 = padButtonRepeat(4);
      if (temp_v4 == 0) {
        FUN_00202178(4);
        temp_v4 = padButtonRepeat();
        if (temp_v4 != 0) goto LAB_00388c50;
LAB_00388cd0:
        temp_v4 = padButtonRepeat(3);
        if (temp_v4 == 0) {
          FUN_00202178(3);
          temp_v4 = padButtonRepeat();
          if (temp_v4 == 0) goto LAB_00388d64;
        }
        temp_v14 = 1;
        temp_v4 = FUN_00163fd4(7);
        if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x18), temp_v4 != 0)) {
          temp_v8 = temp_v8 + 10;
        }
        else {
          temp_v4 = FUN_00163fd4(8);
          if ((temp_v4 == 0) && (temp_v4 = FUN_00163fd4(0x1c), temp_v4 == 0)) {
            temp_v8 = temp_v8 + 1;
          }
          else {
            temp_v8 = temp_v8 + 100;
          }
        }
      }
      else {
LAB_00388c50:
        if (temp_v8 == 0) goto LAB_00388cd0;
        temp_v14 = 1;
        temp_v4 = FUN_00163fd4(7);
        if ((temp_v4 != 0) || (temp_v4 = FUN_00163fd4(0x18), temp_v4 != 0)) {
          if (temp_v8 >= 10) {
            temp_v8 = temp_v8 - 10;
          }
          else {
            temp_v8 = 0;
          }
        }
        else {
          temp_v4 = FUN_00163fd4(8);
          if ((temp_v4 == 0) && (temp_v4 = FUN_00163fd4(0x1c), temp_v4 == 0)) {
            temp_v8 = temp_v8 - 1;
          }
          else if (temp_v8 >= 100) {
            temp_v8 = temp_v8 - 100;
          }
          else {
            temp_v8 = 0;
          }
        }
      }
LAB_00388d64:
      *(unsigned int *)(temp_v3 + 0x80) = temp_v8;
    }
    temp_v3 = padButtonIsPressed(10);
    if (temp_v3 == 0) {
      FUN_00202178(10);
      temp_v3 = padButtonIsPressed();
      if (temp_v3 != 0) {
        if (temp_v10 < temp_v2) {
          temp_v3 = linkedFindItemByIndex(DAT_0059dbf4,temp_v10);
          *(unsigned int *)(temp_v3 + 0x84) = *(unsigned int *)(temp_v3 + 0x84) ^ 2;
        }
      }
    }
    else if (temp_v10 < temp_v2) {
      temp_v3 = linkedFindItemByIndex(DAT_0059dbf4,temp_v10);
      *(unsigned int *)(temp_v3 + 0x84) = *(unsigned int *)(temp_v3 + 0x84) ^ 2;
    }
  }
  temp_v10 = temp_v2;
  if (temp_v2 >= 0x16) {
    temp_v10 = 0x15;
  }
  temp_v8 = temp_v10 + 10;
  temp_v4 = 0x10000;
  memAlloc(0x10000,0x100,0,temp_v8 * 0x2c,0x10,1);
  rt_memclr();
  puVar11 = (unsigned char *)0x80;
  temp_v12 = temp_v4 + temp_v8 * 0x18;
  temp_v3 = temp_v4;
  rt_memcpy_w(&DAT_00634ca0,DAT_0059dbf4);
  if (temp_v10 != 0) {
    unaff_r11 = 0x59e624;
  }
  temp_v15 = 0;
  temp_v18 = 0;
  temp_v9 = 0;
  if (temp_v9 < temp_v10) {
    do {
      temp_v15 = linkedFindItemByIndex(DAT_0059dbf4,DAT_0059dbec + temp_v9);
      temp_v6 = 0;
      do {
        puVar6 = *(unsigned int **)(unaff_r11 + temp_v6 * 4);
        if (puVar6 != (unsigned int *)0x0) {
          puVar11 = (unsigned char *)*puVar6;
        }
        if (puVar6 != (unsigned int *)0x0 && puVar11 != (unsigned char *)0x0) {
          do {
            if (((*(short *)(puVar11 + 4) != 0x1b) &&
                (*(short *)(puVar11 + 4) == *(short *)(*(int *)(temp_v15 + 0x90) + 4))) &&
               (*(short *)(puVar11 + 8) == *(short *)(*(int *)(temp_v15 + 0x90) + 0xc)))
            goto LAB_00388edc;
            puVar6 = puVar6 + 7;
            puVar11 = (unsigned char *)*puVar6;
          } while (puVar11 != (unsigned char *)0x0);
        }
        temp_v6 = (temp_v6 + 1) & 0xffff;
      } while (temp_v6 < 0xd);
      puVar11 = &DAT_0059dc84;
LAB_00388edc:
      temp_v6 = *(unsigned int *)(temp_v15 + 0x84) & 2;
      if ((*(unsigned int *)(temp_v15 + 0x98) & 1) != 0) {
        if (*(short *)(puVar11 + 4) != 0x14) {
          textFormatBuffer(temp_v12,&LAB_003891d8,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        else {
          textFormatBuffer(temp_v12,&LAB_00389208,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        temp_v15 = temp_v4 + temp_v9 * 0x18;
        *(unsigned char **)(temp_v15 + 8) = &DAT_0059e8c8;
        if (temp_v6 == 0) {
          temp_v7 = 0xffffff;
        }
        else {
          temp_v7 = 0xfffffe;
        }
        *(unsigned int *)(temp_v15 + 0xc) = temp_v7;
      }
      else {
        if (*(short *)(puVar11 + 4) != 0x14) {
          textFormatBuffer(temp_v12,&LAB_003891e4,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        else {
          textFormatBuffer(temp_v12,&LAB_003891f0,temp_v15 + 0x9c,*(unsigned int *)(temp_v15 + 0x80));
        }
        if (*(short *)(puVar11 + 4) == 0) {
          temp_v7 = 0x59e900;
        }
        else {
          temp_v7 = 0x59e890;
        }
        *(unsigned int *)(temp_v4 + temp_v9 * 0x18 + 8) = temp_v7;
        if (temp_v6 != 0) {
          temp_v7 = 0xfffffe;
        }
        if (temp_v6 == 0) {
          temp_v7 = 0xffffff;
        }
        *(unsigned int *)(temp_v4 + temp_v9 * 0x18 + 0xc) = temp_v7;
      }
      piVar7 = (int *)(temp_v4 + temp_v9 * 0x18);
      puVar11 = (unsigned char *)0x1a;
      *piVar7 = temp_v12;
      *(unsigned char *)(piVar7 + 1) = 0x1a;
      temp_v9 = temp_v9 + 1;
      piVar7[4] = 0;
      temp_v12 = temp_v12 + 0x14;
      temp_v15 = (int)temp_v18;
      piVar7[5] = temp_v15;
    } while (temp_v9 < temp_v10);
  }
  temp_v13 = temp_v10 != 0;
  if (temp_v13) {
    puVar6 = (unsigned int *)(temp_v4 + temp_v9 * 0x18);
    *puVar6 = 0;
    *(unsigned char *)(puVar6 + 1) = 0x19;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar17 = (unsigned int *)(temp_v4 + (temp_v9 + 1) * 0x18);
    puVar6[5] = temp_v15;
    *puVar17 = (unsigned int)&LAB_0038921c;
    *(unsigned char *)(puVar17 + 1) = 0x1a;
    puVar17[4] = 0;
    puVar17[2] = (unsigned int)&DAT_0059e9e0;
    puVar17[3] = 0;
    temp_v9 = temp_v9 + 2;
    puVar17[5] = temp_v15;
  }
  puVar6 = (unsigned int *)(temp_v4 + temp_v9 * 0x18);
  *puVar6 = (unsigned int)s_NEW__PARTS_0059effb;
  *(unsigned char *)(puVar6 + 1) = 0x1c;
  puVar11 = &DAT_0059e938;
  puVar6[4] = 0;
  puVar6[2] = (unsigned int)&DAT_0059e938;
  puVar6[3] = 0;
  puVar17 = (unsigned int *)(temp_v4 + (temp_v9 + 1) * 0x18);
  puVar6[5] = temp_v15;
  *puVar17 = (unsigned int)s_LOAD_PARTS_0059eff0;
  *(unsigned char *)(puVar17 + 1) = 0x1e;
  puVar17[4] = 0;
  puVar17[2] = (unsigned int)FUN_003c3654;
  puVar17[3] = (unsigned int)effEditorReleaseResources;
  puVar17[5] = temp_v15;
  temp_v12 = temp_v9 + 3;
  *(unsigned char *)(temp_v4 + (temp_v9 + 2) * 0x18 + 4) = 0x18;
  if (temp_v13) {
    puVar6 = (unsigned int *)(temp_v4 + temp_v12 * 0x18);
    temp_v12 = temp_v9 + 4;
    *puVar6 = (unsigned int)s_SAVE_EPL__0059f006;
    *(unsigned char *)(puVar6 + 1) = 0x1e;
    puVar6[4] = 0;
    puVar6[5] = temp_v15;
    puVar6[2] = (unsigned int)FUN_00362584;
    puVar6[3] = (unsigned int)FUN_003aa520;
  }
  puVar6 = (unsigned int *)(temp_v4 + temp_v12 * 0x18);
  DAT_0059e9c0 = temp_v12 + 1;
  *puVar6 = (unsigned int)s_LOAD_EPL__0059f010;
  *(unsigned char *)(puVar6 + 1) = 0x1e;
  puVar6[4] = 0;
  puVar6[5] = temp_v15;
  puVar6[2] = (unsigned int)effectPollResourceFileDialog;
  puVar6[3] = (unsigned int)effEditorReleaseResources;
  if (temp_v13) {
    puVar6 = (unsigned int *)(temp_v4 + DAT_0059e9c0 * 0x18);
    *puVar6 = (unsigned int)&DAT_0059dc5c;
    *(unsigned char *)(puVar6 + 1) = 0x1a;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[5] = temp_v15;
    DAT_0059e9c0 = temp_v12 + 2;
    puVar6[2] = (unsigned int)&DAT_0059e658;
  }
  puVar6 = (unsigned int *)(temp_v4 + DAT_0059e9c0 * 0x18);
  DAT_0059e9c0 = DAT_0059e9c0 + 1;
  *puVar6 = (unsigned int)s_EXIT_0059dc74;
  *(unsigned char *)(puVar6 + 1) = 0x1a;
  puVar6[4] = 0;
  puVar6[2] = (unsigned int)&DAT_0059e700;
  puVar6[3] = 0;
  puVar6[5] = temp_v15;
  if (temp_v8 <= DAT_0059e9b4) {
    DAT_0059e9b4 = temp_v10 + 9;
  }
  temp_v10 = DAT_0059e9b4;
  temp_v16 = *(float *)(DAT_0059dbf4 + 0x74);
  DAT_0059e9bc = temp_v4;
  if (DAT_0059dbe9 == 0) {
    DAT_0059dc14 = (unsigned char *)FUN_00200bcc(DAT_0059dc14);
  }
  if ((DAT_0059dc14 == &DAT_0059e9e0) && ((uRam0059e9f0 & 8) != 0)) {
    temp_v14 = 1;
  }
  if (temp_v1) {
    if (DAT_0059e9b4 == DAT_0059e9c0 - 1U) {
      DAT_0059e9b4 = 0;
    }
    else if ((DAT_0059e9b4 == 0x16) && (DAT_0059dbec + 0x15U <= temp_v2)) {
      DAT_0059e9b4 = 0x14;
    }
  }
  temp_v8 = DAT_0059e9c0 - 1;
  temp_v2 = temp_v8;
  if (temp_v8 == temp_v10) {
    temp_v2 = DAT_0059e9b4;
  }
  if (temp_v8 == temp_v10 && temp_v2 == 0) {
    DAT_0059dbec = 0;
  }
  effEditorNodeChainApply(DAT_0059dc14);
  if (*(float *)(DAT_0059dbf4 + 0x74) != temp_v16) {
    temp_v14 = 1;
  }
  if (DAT_0059dc18 != (unsigned char *)0x0) {
    DAT_0059dc14 = DAT_0059dc18;
    DAT_0059dc18 = (unsigned char *)0x0;
  }
  asdMemFree(temp_v3);
  if (DAT_0059dbe7 == '\0') {
    temp_v7 = 0x800001;
  }
  else {
    DAT_0059dbe7 = '\0';
    DAT_0059dbe8 = 1;
    DAT_0059dbec = 0;
    temp_v7 = 0;
    DAT_0059e9b4 = 0;
  }
  rt_memcpy_w(DAT_0059dbf4,&DAT_00634ca0,0x80);
  temp_v3 = padButtonIsPressed(0x19);
  if (temp_v3 != 0) {
    DAT_0059dbe9 = DAT_0059dbe9 != 1;
  }
  else {
    temp_v3 = padButtonIsPressed(0);
    if (temp_v3 == 0) {
      FUN_00202178(0);
      temp_v3 = padButtonIsPressed();
      if (temp_v3 != 0) {
        if (DAT_0059dbe9 == 1) {
          DAT_0059dbe9 = 2;
        }
      }
    }
    else if (DAT_0059dbe9 == 1) {
      DAT_0059dbe9 = 2;
    }
  }
  if (DAT_0059dbe9 != 1) {
    if (DAT_0059dbe9 == 2) {
      asdDebugLog(0x1c4,0x17,5,&LAB_00389780);
    }
  }
  else {
    asdDebugLog(0x1c4,0x17,5,&LAB_00389778);
  }
  if (DAT_0059dc14 != &DAT_0059e9a8) {
    temp_v3 = padButtonIsPressed(10);
    if (temp_v3 == 0) {
      FUN_00202178(10);
      temp_v3 = padButtonIsPressed();
      if (temp_v3 != 0) {
        DAT_0059dbe6 = '\x01';
      }
    }
    else {
      DAT_0059dbe6 = '\x01';
    }
  }
  if (DAT_0059dbe6 == '\0') {
    if (DAT_0059dc14 == &DAT_0059e9a8) {
      temp_v2 = DAT_0059e9b4;
      if (DAT_0059e9b4 == temp_v10) {
        temp_v2 = temp_v17;
      }
      if (DAT_0059e9b4 != temp_v10 || temp_v2 != 0) goto LAB_003894e4;
    }
    temp_v3 = padButtonIsPressed(9);
    if (temp_v3 == 0) {
      FUN_00202178(9);
      temp_v3 = padButtonIsPressed();
      if (temp_v3 != 0) {
        temp_v1 = 1;
      }
      else {
        temp_v1 = 0;
      }
    }
    else {
      temp_v1 = 1;
    }
    if (temp_v1 || temp_v14) {
      if (DAT_0059dbf0 != 0) {
        asdEffectQueueRelease(DAT_0059dbf0,3);
        DAT_0059dbf0 = 0;
        if (!temp_v14) goto LAB_00389604;
      }
      temp_v3 = DAT_0059dbf4;
      FUN_001abbc4();
      DAT_0059dbf0 = temp_v3;
      FUN_001acb48();
      FUN_001b4eb8(DAT_0059dbf0,&DAT_00634c90);
      FUN_001ac8ec(DAT_0059dbf0);
      FUN_001b4c1c(DAT_0059dbf0,uRam00634d04);
    }
  }
  else {
LAB_003894e4:
    if (DAT_0059dc00 != 0) {
      objectRegistryInsert(DAT_0059dc00,3);
      DAT_0059dc00 = 0;
    }
    temp_v10 = DAT_0059e9b4 + DAT_0059dbec;
    temp_v2 = nodeChainCount(DAT_0059dbf4);
    if (temp_v10 < temp_v2) {
      if (DAT_0059dbf0 != 0) {
        asdEffectQueueRelease(DAT_0059dbf0,3);
        DAT_0059dbf0 = 0;
      }
      temp_v3 = linkedFindItemByIndex(DAT_0059dbf4,temp_v10);
      temp_v4 = *(int *)(temp_v3 + 0x90);
      FUN_00243c24();
      DAT_0059dc00 = temp_v4;
      rt_memcpy_w(&DAT_00634d20,temp_v3,0x80);
    }
    DAT_0059dbe6 = '\0';
  }
LAB_00389604:
  temp_v11 = 1;
  FUN_003874ec(0);
  temp_v3 = FUN_00163fd4(0x18);
  if (temp_v3 != 0) {
    temp_v11 = 2;
    FUN_003874ec(1);
  }
  else {
    temp_v3 = FUN_00163fd4(0x1c);
    if (temp_v3 != 0) {
      temp_v11 = 4;
      FUN_003874ec(1);
    }
  }
  swapSlotExchange(temp_v11);
  if (g_effectEditor != '\0') {
    asdDebugLog(0xaa,0,6,&LAB_00389790);
  }
  if (DAT_0059dbf0 != 0) {
    temp_v11 = *(unsigned int *)(DAT_0059dbf0 + 0x84);
    temp_v5 = FUN_0030061c(DAT_0059dbf0);
    asdDebugLog(0xaa,0xc,6,&LAB_00389794,temp_v5,temp_v11);
    if (DAT_0059dbe9 != 0) {
      if (DAT_0059dbe9 != 1) {
        temp_v0 = DAT_0059dbe9;
        if (DAT_0059dbe9 == 2) {
          temp_v0 = DAT_0059dbe1;
        }
        if (DAT_0059dbe9 == 2 && temp_v0 == 0) {
          FUN_0019c0e0(DAT_0059dbf0);
        }
      }
      else {
        temp_v3 = padButtonIsPressed(1);
        if (temp_v3 == 0) {
          FUN_00202178(1);
          temp_v3 = padButtonIsPressed();
          if (temp_v3 != 0) {
            FUN_0019c0e0(DAT_0059dbf0);
          }
        }
        else {
          FUN_0019c0e0(DAT_0059dbf0);
        }
      }
    }
    else {
      FUN_0019c0e0(DAT_0059dbf0);
    }
    FUN_00323bc4(DAT_0059dbf0);
    temp_v3 = effResourceListHasActiveData(reinterpret_cast<LinkedItems*>(DAT_0059dbf0));
    if (temp_v3 != 0) {
      iRam0059dc60 = iRam0059dc60 + 1;
      if (iRam0059dc60 < 0x18) {
        asdDebugLog(10,0xf0,0,&LAB_003897a4,temp_v5,temp_v11);
      }
      else if (iRam0059dc60 >= 0x30) {
        iRam0059dc60 = 0;
      }
    }
LAB_00389804:
    if (DAT_0059dbe9 == 2) {
      temp_v0 = DAT_0059dbe1 & 8;
      DAT_0059dbe1 = DAT_0059dbe1 + 1;
      if (temp_v0 != 0) {
        DAT_0059dbe1 = 0;
      }
    }
  }
  else {
    if (DAT_0059dc00 == 0) goto LAB_00389804;
    effectEditorApplyHandlerState();
    if (DAT_0059dbe9 != 0) {
      if ((DAT_0059dbe9 != 1) && (DAT_0059dbe9 == 2)) {
        if (DAT_0059dbe1 == 0) goto LAB_003897fc;
        temp_v0 = DAT_0059dbe1 & 8;
        DAT_0059dbe1 = DAT_0059dbe1 + 1;
        if (temp_v0 != 0) {
          DAT_0059dbe1 = 0;
        }
      }
    }
    else {
LAB_003897fc:
      eventDispatch(DAT_0059dc00);
      if (DAT_0059dbe9 == 2) {
        temp_v0 = DAT_0059dbe1 & 8;
        DAT_0059dbe1 = DAT_0059dbe1 + 1;
        if (temp_v0 != 0) {
          DAT_0059dbe1 = 0;
        }
      }
    }
  }
  temp_v10 = DAT_0059e9b4 + DAT_0059dbec;
  temp_v2 = nodeChainCount(DAT_0059dbf4);
  if (temp_v10 < temp_v2) {
    temp_v4 = linkedFindItemByIndex(DAT_0059dbf4,temp_v10);
    temp_v3 = temp_v4;
    FUN_002b30e4();
    if (*(short *)(temp_v3 + 4) == 1) {
      temp_v4 = *(int *)(temp_v4 + 0x90);
      temp_v3 = *(int *)(temp_v3 + 0xc);
      temp_v2 = 0;
      do {
        puVar6 = *(unsigned int **)(temp_v2 * 4 + 0x59e624);
        if (puVar6 != (unsigned int *)0x0) {
          puVar11 = (unsigned char *)*puVar6;
        }
        if (puVar6 != (unsigned int *)0x0 && puVar11 != (unsigned char *)0x0) {
          do {
            temp_v14 = *(short *)(puVar11 + 4) == *(short *)(temp_v4 + 4);
            if (temp_v14) {
              puVar11 = (unsigned char *)(unsigned int)*(unsigned short *)(puVar11 + 8);
            }
            if (temp_v14 && puVar11 == (unsigned char *)(unsigned int)*(unsigned short *)(temp_v4 + 0xc)) {
              temp_v12 = puVar6[1];
              goto LAB_003898ec;
            }
            puVar6 = puVar6 + 7;
            puVar11 = (unsigned char *)*puVar6;
          } while (puVar11 != (unsigned char *)0x0);
        }
        temp_v2 = (temp_v2 + 1) & 0xffff;
      } while (temp_v2 < 0xd);
      temp_v12 = 0;
LAB_003898ec:
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v4 + 0x1c);
      if (!(temp_v2 == 5 || temp_v2 == 6)) {
        temp_v11 = 0;
      }
      else {
        *(unsigned int *)(temp_v3 + 0xc0) = 0;
        temp_v2 = 1;
        temp_v11 = 0xffffffff;
        *(unsigned int *)(temp_v3 + 0xc4) = 1;
      }
      if (temp_v12 != 0) {
        temp_v2 = *(unsigned int *)(temp_v12 + 0x18);
      }
      if (temp_v12 != 0 && temp_v2 != 0) {
        temp_v3 = 0;
        do {
          temp_v4 = *(int *)(temp_v12 + 0x14);
          if ((*(char *)(temp_v4 + temp_v3 * 0x18 + 4) == '\x1a') &&
             (*(int *)(temp_v4 + temp_v3 * 0x18 + 0x14) == -0x380ee000)) {
            *(unsigned int *)(temp_v4 + temp_v3 * 0x18 + 0x10) = temp_v11;
            *(unsigned int *)(*(int *)(temp_v12 + 0x14) + temp_v3 * 0x18 + 0xc) = temp_v11;
          }
          temp_v2 = temp_v2 - 1;
          temp_v3 = temp_v3 + 1;
        } while (temp_v2 != 0);
      }
    }
  }
  if (DAT_0059dbf0 == 0) {
    temp_v10 = DAT_0059e9b4 + DAT_0059dbec;
    temp_v2 = nodeChainCount(DAT_0059dbf4);
    if (temp_v10 < temp_v2) {
      puVar17 = (unsigned int *)linkedFindItemByIndex(DAT_0059dbf4,temp_v10);
      puVar6 = puVar17;
      FUN_002b30e4();
      switch(*(unsigned short *)(puVar17[0x24] + 0x1c)) {
      case 0:
      case 4:
        asdDebugLog(0xf0,0,0,&LAB_00389b3c,*puVar6);
        break;
      case 1:
        asdDebugLog(0xf0,0,0,&LAB_00389b24,*puVar6);
        break;
      case 2:
        asdDebugLog(0xf0,0,0,&LAB_00389b2c,*puVar6);
        break;
      case 3:
        asdDebugLog(0xf0,0,0,&LAB_00389b34,*puVar6);
        break;
      case 5:
        asdDebugLog(0xf0,0,0,&LAB_00389b40,*puVar6);
        break;
      case 6:
        asdDebugLog(0xf0,0,0,&LAB_00389b48,*puVar6);
        break;
      case 7:
        asdDebugLog(0xf0,0,0,&LAB_00389b50,*puVar6);
      }
    }
  }
  return temp_v7;
}

} /* extern "C" */
