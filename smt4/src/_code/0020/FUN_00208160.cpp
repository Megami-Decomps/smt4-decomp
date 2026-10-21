/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208160` (_code @ 0x208160, 0x31c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int modelSelectSecondaryMotion(unsigned int, int);
int nodeSetTranslation(unsigned int, int, int *);
int FUN_002a0428(unsigned int, int);
int modelSelectPrimaryMotion(unsigned int, int);
int textFormatBuffer(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern unsigned char LAB_0020848c; /* 0x20848c */
extern unsigned char LAB_002084a4; /* 0x2084a4 */
extern int g_mapDepartWork; /* 0x4474d8 */
extern unsigned char g_gameState; /* 0x49f91c */

extern int mapTableGetValue(int);
extern unsigned int asdMdlManagerCreateFromSource(int, unsigned int, unsigned int);
/* Supplied declaration required: modelSelectSecondaryMotion. */
/* Supplied declaration required: nodeSetTranslation. */
extern unsigned int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: modelSelectPrimaryMotion. */
extern int FUN_002adee0(unsigned int);
/* Supplied declaration required: textFormatBuffer. */


unsigned int FUN_00208160(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short *puVar1;
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5 [128];
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v3 = g_mapDepartWork;
  temp_v0 = *(short *)(g_mapDepartWork + 8);
  if (temp_v0 == 10) {
    if (*(int *)(g_mapDepartWork + 0x20) != 0) {
      temp_v1 = asdMdlManagerCreateFromSource(*(int *)(g_mapDepartWork + 0x20),*(unsigned int *)(g_mapDepartWork + 0x24),0x38);
      *(unsigned int *)(g_mapDepartWork + 0xc) = temp_v1;
      FUN_002a0428(temp_v1,1);
      modelSelectPrimaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 8),0);
      modelSelectSecondaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 8),0);
      *(unsigned short *)(g_mapDepartWork + 8) = 99;
      return 0;
    }
    temp_v0 = *(short *)(g_mapDepartWork + 4);
    if ((temp_v0 != 0x29) && (!(temp_v0 == 0x2a || temp_v0 == 0x2b))) {
      puVar1 = (unsigned short *)(g_mapDepartWork + 6);
      *(short *)(g_mapDepartWork + 0x1c) = temp_v0;
      *(unsigned short *)(temp_v3 + 0x1e) = *puVar1;
    }
    else {
      *(unsigned short *)(g_mapDepartWork + 0x1c) = 0x24;
      *(unsigned short *)(temp_v3 + 0x1e) = 1;
    }
    textFormatBuffer(temp_v5,&LAB_002084a4,(int)*(short *)(temp_v3 + 0x1c),
                 (int)*(short *)(temp_v3 + 0x1c),(int)*(short *)(temp_v3 + 0x1e));
    temp_v1 = asdMdlManagerCreateSecondList(temp_v5,0x38);
    temp_v3 = g_mapDepartWork;
    *(unsigned int *)(g_mapDepartWork + 0xc) = temp_v1;
    *(short *)(temp_v3 + 8) = *(short *)(temp_v3 + 8) + 1;
    return 0;
  }
  if (temp_v0 >= 10) {
    if (temp_v0 == 0xb) {
      temp_v3 = FUN_002adee0(*(unsigned int *)(g_mapDepartWork + 0xc));
      if (temp_v3 == 0) {
        return 0;
      }
      FUN_002a0428(*(unsigned int *)(g_mapDepartWork + 0xc),1);
      modelSelectPrimaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 8),0);
      modelSelectSecondaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 8),0);
      *(unsigned short *)(g_mapDepartWork + 8) = 99;
      return 0;
    }
    if (temp_v0 != 99) {
      return 0;
    }
    return 1;
  }
  temp_v4 = 0xc69c400000000000;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      return 0;
    }
  }
  else {
    if ((*(int *)((unsigned char *)&g_gameState + 0x360)) == 1) {
      *(unsigned int *)(g_mapDepartWork + 0xc) = 0;
      *(unsigned short *)(temp_v3 + 8) = 99;
      return 0;
    }
    if (*(int *)(g_mapDepartWork + 0x28) != 0) {
      temp_v1 = asdMdlManagerCreateFromSource(*(int *)(g_mapDepartWork + 0x28),*(unsigned int *)(g_mapDepartWork + 0x2c),0x1c0)
      ;
      *(unsigned int *)(g_mapDepartWork + 0x10) = temp_v1;
      FUN_002a0428(temp_v1,1);
      modelSelectPrimaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 8),0);
      modelSelectSecondaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 8),0);
      temp_v0 = *(short *)(g_mapDepartWork + 4);
      if (temp_v0 == 0x13) {
        temp_v6 = (unsigned int)temp_v4;
        temp_v7 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
        temp_v8 = temp_v6;
        nodeSetTranslation(*(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 8),0,&temp_v6);
      }
      *(unsigned short *)(g_mapDepartWork + 8) = 10;
      return 0;
    }
    temp_v2 = mapTableGetValue((int)*(short *)(g_mapDepartWork + 6));
    temp_v3 = g_mapDepartWork;
    *(int *)(g_mapDepartWork + 0x18) = temp_v2;
    if (temp_v2 < 1) {
      *(unsigned short *)(temp_v3 + 8) = 10;
      return 0;
    }
    textFormatBuffer(temp_v5,&LAB_0020848c,temp_v2);
    temp_v1 = asdMdlManagerCreateSecondList(temp_v5,0x1c0);
    temp_v3 = g_mapDepartWork;
    *(unsigned int *)(g_mapDepartWork + 0x10) = temp_v1;
    *(short *)(temp_v3 + 8) = *(short *)(temp_v3 + 8) + 1;
  }
  temp_v3 = FUN_002adee0(*(unsigned int *)(g_mapDepartWork + 0x10));
  if (temp_v3 == 0) {
    return 0;
  }
  FUN_002a0428(*(unsigned int *)(g_mapDepartWork + 0x10),1);
  modelSelectPrimaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 8),0);
  modelSelectSecondaryMotion(*(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 8),0);
  temp_v0 = *(short *)(g_mapDepartWork + 4);
  if (temp_v0 == 0x13) {
    temp_v6 = (unsigned int)temp_v4;
    temp_v7 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
    temp_v8 = temp_v6;
    nodeSetTranslation(*(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 8),0,&temp_v6);
  }
  *(unsigned short *)(g_mapDepartWork + 8) = 10;
  return 0;
}

} /* extern "C" */
