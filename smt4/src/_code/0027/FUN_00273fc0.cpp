/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273fc0` (_code @ 0x273fc0, 0x7d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a0428(...);

int FUN_0020ffe8(int, int);
int FUN_0025bc80(void);
int FUN_0025bdc4(void);
int vec4Forward(void);
int FUN_0027f94c(int);
int FUN_0027fca0(unsigned int);
int FUN_00287098(...);
int FUN_0028c618(...);
int nodeSetTranslation(...);
int FUN_00293e08(int);
int FUN_00293e78(int, int *);
int FUN_00294450(...);
int FUN_00297684(int);
int FUN_002a55ec(...);
int FUN_002a5710(...);
int FUN_003351e0(int);
int FUN_00343c58(int, unsigned int, int *, int *);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int *g_lmapScene; /* 0x447e88 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern signed char DAT_0049f93e; /* 0x49f93e */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern unsigned char DAT_0049fab5; /* 0x49fab5 */
extern signed char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fac4; /* 0x49fac4 */
extern unsigned int DAT_0049fbac; /* 0x49fbac */
extern unsigned int DAT_0049fbb0; /* 0x49fbb0 */
extern int DAT_0049fc88; /* 0x49fc88 */

/* Supplied declaration required: FUN_0020ffe8. */
extern int asdMdlManagerCreateFromSource(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0025bc80. */
/* Supplied declaration required: FUN_0025bdc4. */
/* Supplied declaration required: vec4Forward. */
/* Supplied declaration required: FUN_0027f94c. */
/* Supplied declaration required: FUN_0027fca0. */
/* Supplied declaration required: FUN_00287098. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: FUN_00293e08. */
/* Supplied declaration required: FUN_00293e78. */
/* Supplied declaration required: FUN_00294450. */
/* Supplied declaration required: FUN_00297684. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a55ec. */
/* Supplied declaration required: FUN_002a5710. */
extern int gameGetPlayerData(void);
extern int *FUN_00335118(int);
/* Supplied declaration required: FUN_003351e0. */
/* Supplied declaration required: FUN_00343c58. */


void FUN_00273fc0(void)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar7;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int temp_v5;
  
  if ((0 < g_lmapScene[100]) && (g_lmapScene[99] != -1)) {
    vec4Forward();
    g_lmapScene[100] = g_lmapScene[100] - 1;
  }
  if ((char)g_lmapScene[0x4d] == '\0') {
    return;
  }
  if ((char)g_lmapScene[0x66] != '\0') {
    temp_v0 = 0;
    do {
      piVar7 = g_lmapScene;
      piVar3 = (int *)g_lmapScene[temp_v0 + 0x6a];
      piVar4 = (int *)g_lmapScene[temp_v0 + 0x67];
      if (piVar3 != piVar4) {
        g_lmapScene[temp_v0 + 0x67] = (int)piVar3;
        if (temp_v0 < 3) {
          piVar4 = (int *)0x1c0;
        }
        FUN_00343c58(piVar7[0x65],temp_v0 & 0xff,piVar3,piVar4);
      }
      temp_v0 = temp_v0 + 1;
    } while ((int)temp_v0 < 3);
  }
  else {
    temp_v2 = gameGetPlayerData();
    piVar3 = g_lmapScene;
    if ((short)g_lmapScene[0x6d] != *(short *)(temp_v2 + 6)) {
      *(short *)(g_lmapScene + 0x6d) = *(short *)(temp_v2 + 6);
      FUN_00294450(piVar3[0x65],0,0x1c0);
    }
    piVar3 = g_lmapScene;
    if (*(short *)((int)g_lmapScene + 0x1b6) != *(short *)(temp_v2 + 8)) {
      *(short *)((int)g_lmapScene + 0x1b6) = *(short *)(temp_v2 + 8);
      FUN_00294450(piVar3[0x65],1,0x1c0);
    }
    piVar7 = g_lmapScene;
    piVar3 = g_lmapScene + 0x40;
    if ((short)g_lmapScene[0x6e] != *(short *)(temp_v2 + 10)) {
      *(short *)(g_lmapScene + 0x6e) = *(short *)(temp_v2 + 10);
      piVar3 = (int *)0x1c0;
      FUN_00294450(piVar7[0x65],2);
    }
  }
  FUN_00297684(g_lmapScene[0x65]);
  temp_v2 = 0;
  if ((*g_lmapScene == 0x1d || *g_lmapScene == 0x21) || (DAT_0049f93e != '\0')) {
    temp_v3 = 0;
    piVar7 = (int *)0xc7c34f80;
    temp_v4 = (int *)0xc7c34f80;
    temp_v5 = 0;
    FUN_00293e78(g_lmapScene[0x65],&temp_v3);
  }
  else {
    temp_v3 = g_lmapScene[7];
    piVar3 = (int *)g_lmapScene[8];
    temp_v5 = g_lmapScene[9];
    temp_v4 = piVar3;
    FUN_00293e78(g_lmapScene[0x65],&temp_v3);
    FUN_003351e0(g_lmapScene[0x65]);
    piVar7 = (int *)0x3f800000;
    FUN_00293e08(g_lmapScene[0x65]);
  }
  temp_v1 = 0;
  if ((char)g_lmapScene[0x17] == '\0') {
    piVar1 = (int *)FUN_00335118(g_lmapScene[0x65]);
    piVar4 = g_lmapScene;
    piVar3 = (int *)g_lmapScene[0x15];
    if (piVar1 != piVar3) goto LAB_002741d4;
    g_lmapScene[0x18] = g_lmapScene[0x18] + 1;
    FUN_0027f94c(piVar4[0x65]);
    if (g_lmapScene[0x15] != 2) {
      if ((g_lmapScene[0x15] == 0x12) &&
         ((((temp_v2 = g_lmapScene[0x19], temp_v2 < 0x41f00000 &&
            (piVar3 = piVar7, (int)piVar7 >= 0x41f00000)) ||
           (((temp_v2 < 0x42940000 && (piVar3 = piVar7, (int)piVar7 >= 0x42940000)) ||
            ((temp_v2 < 0x41000000 && ((int)piVar7 >= 0x41000000)))))) ||
          ((temp_v2 < 0x42500000 && ((int)piVar7 >= 0x42500000)))))) {
        FUN_0025bdc4();
        FUN_0025bc80();
        FUN_0027fca0(0xffffffff);
      }
    }
    else if (((g_lmapScene[0x19] < 0x40000000) && ((int)piVar7 >= 0x40000000)) ||
            ((g_lmapScene[0x19] < 0x41300000 && ((int)piVar7 >= 0x41300000)))) {
      FUN_0025bdc4();
      FUN_0025bc80();
      FUN_0027fca0(0xffffffff);
    }
    g_lmapScene[0x19] = (int)piVar7;
  }
  else {
LAB_002741d4:
    piVar7 = g_lmapScene;
    *(unsigned char *)(g_lmapScene + 0x17) = 0;
    piVar7[0x18] = 0;
    FUN_0020ffe8(piVar7[0x65],piVar7[0x15]);
    g_lmapScene[0x19] = temp_v2;
  }
  puVar2 = (unsigned int *)g_lmapScene[0x5e];
  if (puVar2 != (unsigned int *)0x0) {
    piVar3 = (int *)g_lmapScene[0x5f];
  }
  if (puVar2 == (unsigned int *)0x0 || piVar3 == (int *)0x0) {
    return;
  }
  if (g_lmapScene[0x59] == 0) {
    return;
  }
  if (DAT_0049f934 != '\0') {
    if ((*puVar2 & 2) == 0) {
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    }
    puVar2 = (unsigned int *)g_lmapScene[0x5f];
    if ((*puVar2 & 2) == 0) {
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    }
  }
  else {
    temp_v0 = *puVar2;
    if (*(char *)((int)g_lmapScene + 0x182) != '\0') {
      if ((temp_v0 & 2) != 0) {
        *puVar2 = temp_v0 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
      }
    }
    else if ((temp_v0 & 2) == 0) {
      *puVar2 = temp_v0 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    }
    temp_v3 = g_lmapScene[7];
    temp_v4 = (int *)g_lmapScene[8];
    temp_v5 = g_lmapScene[9];
    nodeSetTranslation(*(unsigned int *)(g_lmapScene[0x5e] + 8),0,&temp_v3);
    FUN_0028c618(*(unsigned int *)(g_lmapScene[0x5e] + 8),0);
    if (*(char *)((int)g_lmapScene + 0x183) != '\0') {
      FUN_002a5710(*(unsigned int *)(g_lmapScene[0x5e] + 8),1);
      FUN_00287098(*(unsigned int *)(g_lmapScene[0x5e] + 8),1);
      FUN_002a55ec(*(unsigned int *)(g_lmapScene[0x5e] + 8),1);
      piVar3 = g_lmapScene;
      *(unsigned char *)((int)g_lmapScene + 0x183) = 0;
      *(unsigned char *)(piVar3 + 0x61) = 0;
    }
    puVar2 = (unsigned int *)g_lmapScene[0x5f];
    if (puVar2 != (unsigned int *)0x0) {
      temp_v0 = *puVar2;
      if ((char)g_lmapScene[0x60] != '\0') {
        if ((temp_v0 & 2) != 0) {
          *puVar2 = temp_v0 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
        }
      }
      else if ((temp_v0 & 2) == 0) {
        *puVar2 = temp_v0 | 2;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      }
      temp_v3 = g_lmapScene[7];
      temp_v4 = (int *)g_lmapScene[8];
      temp_v5 = g_lmapScene[9];
      nodeSetTranslation(*(unsigned int *)(g_lmapScene[0x5f] + 8),0,&temp_v3);
      FUN_0028c618(*(unsigned int *)(g_lmapScene[0x5f] + 8),0);
      piVar3 = g_lmapScene;
      if (*(char *)((int)g_lmapScene + 0x181) != '\0') {
        *(unsigned char *)((int)g_lmapScene + 0x181) = 0;
        FUN_002a5710(*(unsigned int *)(piVar3[0x5f] + 8),0);
        FUN_00287098(*(unsigned int *)(g_lmapScene[0x5f] + 8),0);
        FUN_002a55ec(*(unsigned int *)(g_lmapScene[0x5f] + 8),0);
      }
    }
  }
  if ((g_lmapScene[0x5c] == 0) && (puVar2 = (unsigned int *)g_lmapScene[0x59], puVar2 != (unsigned int *)0x0)) {
    temp_v0 = *puVar2;
    if (DAT_0049fa98 != '\0') {
      if ((temp_v0 & 2) != 0) {
        *puVar2 = temp_v0 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
      }
LAB_0027461c:
      nodeSetTranslation(*(unsigned int *)(g_lmapScene[0x59] + 8),0,g_lmapScene + 7);
      FUN_0028c618(*(unsigned int *)(g_lmapScene[0x59] + 8),0);
      temp_v1 = g_lmapScene[0x5a];
      piVar3 = g_lmapScene;
      if (temp_v1 != g_lmapScene[0x5b]) {
        piVar3[0x5b] = temp_v1;
        FUN_002a5710(*(unsigned int *)(piVar3[0x59] + 8));
        FUN_00287098(*(unsigned int *)(g_lmapScene[0x59] + 8),g_lmapScene[0x5a]);
      }
    }
    else {
      if ((temp_v0 & 2) != 0) goto LAB_0027461c;
      *puVar2 = temp_v0 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      piVar3 = g_lmapScene;
      g_lmapScene[0x5a] = 0;
      piVar3[0x5b] = temp_v1;
      FUN_002a5710(*(unsigned int *)(piVar3[0x59] + 8));
      FUN_00287098(*(unsigned int *)(g_lmapScene[0x59] + 8),g_lmapScene[0x5a]);
    }
  }
  if (DAT_0049fabc != '\0') {
    temp_v0 = DAT_0049fac0;
    if (DAT_0049fac0 == 2) {
      temp_v0 = (unsigned int)DAT_0049fab5;
    }
    if ((DAT_0049fac0 == 2 && temp_v0 == 0) && (DAT_0049fc88 != 0)) {
      temp_v2 = asdMdlManagerCreateFromSource(DAT_0049fbac,DAT_0049fbb0,7);
      g_lmapScene[0x5d] = temp_v2;
      FUN_002a0428(temp_v2,1);
      nodeSetTranslation(*(unsigned int *)(g_lmapScene[0x5d] + 8),0,&DAT_0049fac4);
      FUN_0028c618(*(unsigned int *)(g_lmapScene[0x5d] + 8),0);
      FUN_002a5710(*(unsigned int *)(g_lmapScene[0x5d] + 8),0);
      FUN_00287098(*(unsigned int *)(g_lmapScene[0x5d] + 8),0);
    }
    DAT_0049fac0 = DAT_0049fac0 + 1;
    if ((int)DAT_0049fac0 >= 0x33) {
      DAT_0049fabc = '\0';
      DAT_0049fac0 = 0;
    }
  }
  return;
}

} /* extern "C" */
