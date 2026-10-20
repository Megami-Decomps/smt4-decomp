/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3dd4` (_code @ 0x1d3dd4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a11c(...);
int FUN_0022a304(...);
int FUN_00242914(...);
int FUN_00256898(...);
int FUN_002568c4(...);
int FUN_00292dd0(...);
int FUN_00296f4c(...);
int FUN_00297060(...);
int FUN_00297468(...);
int FUN_002b8838(...);
int FUN_002be624(...);
int asdMemFree(void);
int memClear(...);
int FUN_00385c58(unsigned int, unsigned int, unsigned int *, unsigned char [128]);
int FUN_00387a7c(unsigned int, unsigned int, unsigned int *, unsigned char [132]);
int FUN_003dadd8(...);
int FUN_003dbe68(...);
int FUN_003dc13c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_aocMain; /* 0x432fc8 */
extern unsigned int g_aocSystem; /* 0x433158 */
extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *g_btlEvent; /* 0x435d48 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0019e0c0(unsigned int);
extern unsigned int FUN_0022a07c(unsigned int *, int);
/* Supplied declaration required: FUN_0022a11c. */
extern unsigned int FUN_0022a190(unsigned int *, int);
extern int FUN_0022a2c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022a304. */
/* Supplied declaration required: FUN_00242914. */
/* Supplied declaration required: FUN_00256898. */
/* Supplied declaration required: FUN_002568c4. */
extern int FUN_00256940(int, int, unsigned int);
/* Supplied declaration required: FUN_00292dd0. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */
extern unsigned int FUN_002ac068(int, unsigned int);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002be624. */
extern int jobGetWork(void);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_00385c58. */
/* Supplied declaration required: FUN_00387a7c. */
/* Supplied declaration required: FUN_003dadd8. */
/* Supplied declaration required: FUN_003dbe68. */
/* Supplied declaration required: FUN_003dc13c. */
extern int FUN_003dcc34(int);


unsigned int FUN_001d3dd4(void)

{
/* irregular: 5 goto(s); 18 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [132];
  
  temp_v1 = jobGetWork();
  puVar2 = g_btlEvent;
  if (g_btlEvent == (unsigned int *)0x0) {
    return 0;
  }
  switch(*g_btlEvent) {
  default:
    return 0;
  case 1:
    memClear(temp_v7,0x80);
    FUN_002be624(temp_v7,"battle/event/%s/ProTable_%s.tbb",temp_v1 + 0x100);
    temp_v5 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_00387a7c(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 2,temp_v7);
    }
    else {
      FUN_00297468(temp_v7,puVar2 + 2,0);
    }
    *puVar2 = 2;
    if (puVar2[2] == 0) {
      return 0;
    }
    temp_v3 = FUN_002ac068(puVar2[2],0);
    temp_v2 = dataTableGetEntries();
    puVar2[6] = temp_v2;
    temp_v3 = dataTableGetCount(temp_v3);
    *puVar2 = 3;
    puVar2[7] = temp_v3;
    temp_v3 = FUN_0022a190(puVar2,temp_v1);
    return temp_v3;
  case 2:
    if (g_btlEvent[2] == 0) {
      return 0;
    }
    temp_v3 = FUN_002ac068(g_btlEvent[2],0);
    temp_v2 = dataTableGetEntries();
    puVar2[6] = temp_v2;
    temp_v3 = dataTableGetCount(temp_v3);
    *puVar2 = 3;
    puVar2[7] = temp_v3;
    goto code_r0x0022a190;
  case 3:
code_r0x0022a190:
    memClear(temp_v6,0x80);
    FUN_002be624(temp_v6,"battle/event/%s/%s.mbm",temp_v1 + 0x100);
    temp_v5 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_00385c58(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 3,temp_v6);
    }
    else {
      FUN_00297468(temp_v6,puVar2 + 3,0);
    }
    *puVar2 = 4;
    temp_v3 = 0;
    if (puVar2[3] != 0) {
      *puVar2 = 5;
      memClear(temp_v7,0x80);
      FUN_002be624(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x100);
      temp_v5 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4));
      if (temp_v5 != 0) {
        FUN_0022a11c(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 4,temp_v7);
      }
      else {
        FUN_00297468(temp_v7,puVar2 + 4,0);
      }
      *puVar2 = 6;
      if (puVar2[4] == 0) {
        temp_v3 = 0;
      }
      else {
        *puVar2 = 7;
        temp_v3 = FUN_0022a07c(puVar2,temp_v1);
      }
    }
    return temp_v3;
  case 4:
    if (g_btlEvent[3] == 0) {
      return 0;
    }
    *g_btlEvent = 5;
    memClear(temp_v7,0x80);
    FUN_002be624(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x100);
    temp_v5 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_0022a11c(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 4,temp_v7);
    }
    else {
      FUN_00297468(temp_v7,puVar2 + 4,0);
    }
    *puVar2 = 6;
    temp_v5 = puVar2[4];
    break;
  case 5:
    memClear(temp_v7,0x80);
    FUN_002be624(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x100);
    temp_v5 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4));
    if (temp_v5 != 0) {
      FUN_0022a11c(g_aocSystem,*(unsigned int *)(temp_v1 + 0xc4),puVar2 + 4,temp_v7);
    }
    else {
      FUN_00297468(temp_v7,puVar2 + 4,0);
    }
    *puVar2 = 6;
    temp_v5 = puVar2[4];
    break;
  case 6:
    if (g_btlEvent[4] == 0) {
      return 0;
    }
    *g_btlEvent = 7;
    goto code_r0x0022a07c;
  case 7:
code_r0x0022a07c:
    temp_v4 = *(unsigned int *)(g_aocMain + 0x754);
    *(unsigned int *)(g_aocMain + 0x754) = temp_v4 & 0xffffff8f;
    if ((temp_v4 & 0x10) == 0) {
      temp_v1 = puVar2[4];
      FUN_00297060(temp_v1,puVar2[3]);
      puVar2[5] = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      *puVar2 = 0;
      return 0;
    }
    *puVar2 = 1;
    if (puVar2[2] != 0) {
      asdMemFree();
      puVar2[2] = 0;
    }
    if (puVar2[3] != 0) {
      asdMemFree();
      puVar2[3] = 0;
    }
    if (puVar2[4] != 0) {
      asdMemFree();
      puVar2[4] = 0;
    }
    return 0;
  case 8:
    temp_v0 = *(char *)(g_btlEvent + 0xb);
    if (temp_v0 != '\0') {
      if (temp_v0 == '\x01') goto code_r0x003c7c28;
      if (temp_v0 == '\x02') {
        temp_v5 = FUN_003dcc34(DAT_00435d18);
        if (temp_v5 == 0) {
          return 0;
        }
        *(unsigned char *)(puVar2 + 0xb) = 3;
      }
    }
    else {
      FUN_003dadd8(DAT_00435d18);
      *(unsigned char *)(puVar2 + 0xb) = 1;
code_r0x003c7c28:
      temp_v5 = DAT_00435d18;
      FUN_003dc13c();
      if (temp_v5 == 0) {
        return 0;
      }
      FUN_003dbe68(DAT_00435d18);
      *(unsigned char *)(puVar2 + 0xb) = 2;
      temp_v5 = FUN_003dcc34(DAT_00435d18);
      if (temp_v5 == 0) {
        return 0;
      }
      *(unsigned char *)(puVar2 + 0xb) = 3;
    }
    *puVar2 = 9;
    if ((int)puVar2[8] < 0) {
      return 0;
    }
    FUN_00296f4c(puVar2[5]);
    *puVar2 = 10;
    puVar2[10] = 0;
    temp_v4 = *(unsigned int *)(temp_v1 + 0x44a0);
    goto joined_r0x003c7b80;
  case 9:
    if ((int)g_btlEvent[8] < 0) {
      return 0;
    }
    FUN_00296f4c(g_btlEvent[5]);
    *puVar2 = 10;
    puVar2[10] = 0;
    temp_v4 = *(unsigned int *)(temp_v1 + 0x44a0);
joined_r0x003c7b80:
    if ((temp_v4 & 0x100000) != 0) {
      FUN_002b8838(0xdd);
    }
FUN_003c7760:
    puVar8 = (unsigned int *)(temp_v1 + 0x44a0);
    if (((*puVar8 & 0x100000) != 0) && ((puVar2[1] & 1) == 0)) {
      if ((-1 < *(int *)(g_btlMain + 0x760)) &&
         (temp_v1 = FUN_00256940(g_btlMain,temp_v1,1), temp_v1 != 0)) {
        FUN_002568c4(0);
      }
      FUN_00256898(1,0);
      puVar2[1] = puVar2[1] | 1;
    }
    temp_v1 = FUN_0019e0c0(puVar2[5]);
    if (temp_v1 == 2) {
      if (((*puVar8 & 0x100000) != 0) && (FUN_00292dd0(0), (*puVar8 & 0x20000000) != 0)) {
        FUN_00242914(DAT_00439ca8,0);
        *puVar8 = *puVar8 & 0xdfffffff;
      }
      *puVar2 = 0;
      *puVar8 = *puVar8 & 0xffefffff;
      FUN_0022a304(DAT_00435d18);
    }
    if ((int)puVar2[10] < 0xffff) {
      puVar2[10] = puVar2[10] + 1;
    }
    return 0;
  case 10:
    goto FUN_003c7760;
  }
  if (temp_v5 != 0) {
    *puVar2 = 7;
    temp_v3 = FUN_0022a07c(puVar2,temp_v1);
    return temp_v3;
  }
  return 0;
}

} /* extern "C" */
