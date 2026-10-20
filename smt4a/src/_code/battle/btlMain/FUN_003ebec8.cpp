/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ebec8` (_code @ 0x3ebec8, 0x6a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(...);
int asdMemoryAlloc(...);
int dataTableGet(...);
int dataTableGetEntries(void);
int asdMemFree(...);
int FUN_001ab854(...);
int FUN_001ab888(void);
int FUN_001b4a90(...);
int sysMemClear(...);
int FUN_00480e30(...);
int dispatchIfFound(...);
int bitsAt60Clear(...);
int rt_memcpy(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0057392c; /* 0x57392c */
extern int DAT_00573930; /* 0x573930 */
extern int DAT_00573934; /* 0x573934 */
extern int DAT_00573938; /* 0x573938 */
extern int DAT_0057393c; /* 0x57393c */

/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemoryAlloc. */
extern unsigned int saveSlotFindById(unsigned short);
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001ab854. */
/* Supplied declaration required: FUN_001ab888. */
/* Supplied declaration required: FUN_001b4a90. */
extern unsigned int FUN_001bce18(void);
/* Supplied declaration required: sysMemClear. */
extern unsigned short FUN_0036fcd0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00480e30. */
extern unsigned char FUN_004bca20(void);
/* Supplied declaration required: dispatchIfFound. */
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: bitsAt60Clear. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003ebec8(int param_1)

{
/* irregular: 14 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  short *psVar11;
  unsigned char temp_v10;
  unsigned long long temp_v11;
  
  temp_v8 = *(int *)(param_1 + 300);
  if (temp_v8 < 1) {
    return;
  }
  temp_v3 = dataTableGet(0x4e,0);
  temp_v4 = dataTableGetEntries();
  temp_v5 = dataTableGetCount(temp_v3);
  if (temp_v5 - 1 < temp_v8) {
    return;
  }
  temp_v4 = temp_v4 + temp_v8 * 0xc;
  psVar11 = (short *)(temp_v4 - 0xc);
  temp_v10 = DAT_0057392c != 0;
  if (!temp_v10) {
    temp_v8 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,0x2d30,0);
    DAT_0057392c = temp_v8;
  }
  temp_v8 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x2d30,1);
  temp_v3 = FUN_001ab888();
  rt_memcpy_w(temp_v8,temp_v3,0x2d30);
  if (DAT_00573938 == 0) {
    temp_v5 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x2d30,1);
    DAT_00573938 = temp_v5;
    rt_memcpy_w();
  }
  temp_v5 = FUN_001ab888();
  sysMemClear(temp_v5 + 0x68,0x1c20);
  FUN_001b4a90(temp_v5 + 0x1c88,0x18,0xffffffff);
  *(unsigned short *)(temp_v5 + 0x1ca0) = 0xffff;
  *(unsigned char *)(temp_v5 + 0x1ca2) = 0xff;
  *(unsigned char *)(temp_v5 + 0x1ca3) = 8;
  if (DAT_00573934 != 0) {
    if (temp_v10) {
      temp_v5 = bitsAt60Test(DAT_00573934,1);
      if (temp_v5 != 0) {
        bitsAt60Clear(DAT_00573934,2);
        *(unsigned short *)(DAT_00573934 + 0x2a) = 1;
      }
    }
    else {
      dispatchIfFound(0,(int)*psVar11);
      temp_v3 = FUN_001ab854(0);
      rt_memcpy_w(DAT_00573934,temp_v3,300);
    }
  }
  else {
    temp_v5 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,300,0);
    temp_v10 = 0;
    DAT_00573934 = temp_v5;
    dispatchIfFound(0,(int)*psVar11);
    temp_v3 = FUN_001ab854(0);
    rt_memcpy_w(DAT_00573934,temp_v3,300);
  }
  temp_v5 = FUN_001ab888();
  sysMemClear(temp_v5 + 0x68,0x1c20);
  FUN_001b4a90(temp_v5 + 0x1c88,0x18,0xffffffff);
  *(unsigned short *)(temp_v5 + 0x1ca0) = 0xffff;
  *(unsigned char *)(temp_v5 + 0x1ca2) = 0xff;
  *(unsigned char *)(temp_v5 + 0x1ca3) = 8;
  if (!temp_v10) {
    temp_v5 = 1;
    do {
      temp_v9 = (int)psVar11[temp_v5];
      if (temp_v9 == 0) break;
      dispatchIfFound(temp_v5 - 1,temp_v9,0);
      temp_v9 = FUN_001ab854(temp_v5 - 1);
      if ((temp_v9 != 0) && (*(short *)(temp_v9 + 0x62) == 0x2a1)) {
        temp_v2 = FUN_0036fcd0(7,0);
        temp_v3 = saveSlotFindById(temp_v2);
        temp_v1 = *(unsigned char *)(temp_v9 + 0x66);
        temp_v9 = FUN_001ab888();
        rt_memcpy_w((temp_v9 + temp_v5 * 300) - 0xc4,temp_v3,300);
        temp_v9 = FUN_001ab888();
        *(unsigned char *)((temp_v9 + temp_v5 * 300) - 0x5e) = temp_v1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
    temp_v9 = 0;
    temp_v6 = 0;
    temp_v5 = FUN_001ab888();
    if (*(char *)(temp_v5 + 0x1ca3) != '\0') {
      do {
        temp_v11 = FUN_001ab854(temp_v6);
        temp_v7 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
        temp_v5 = (int)temp_v11;
        if (temp_v5 != 0) {
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + 0x62);
        }
        if (temp_v5 != 0 && temp_v7 != 0) {
          temp_v1 = FUN_004bca20();
          temp_v5 = FUN_001ab888();
          temp_v5 = temp_v5 + temp_v9;
          temp_v9 = temp_v9 + 1;
          *(unsigned char *)(temp_v5 + 0x1ca0) = temp_v1;
        }
        if (temp_v9 >= 3) break;
        temp_v6 = temp_v6 + 1;
        temp_v5 = FUN_001ab888();
      } while (temp_v6 < (int)(unsigned int)*(unsigned char *)(temp_v5 + 0x1ca3));
    }
    temp_v3 = FUN_001ab888();
    rt_memcpy_w(DAT_0057392c,temp_v3,0x2d30);
  }
  else {
    temp_v3 = FUN_001ab888();
    rt_memcpy_w(temp_v3,DAT_0057392c,0x2d30);
    temp_v9 = 0;
    temp_v5 = FUN_001ab888();
    if (*(char *)(temp_v5 + 0x1ca3) != '\0') {
      do {
        temp_v5 = FUN_001ab854(temp_v9);
        temp_v0 = 0;
        if (temp_v5 != 0) {
          temp_v0 = *(short *)(temp_v5 + 0x62);
        }
        if ((temp_v5 != 0 && temp_v0 != 0) && (temp_v6 = bitsAt60Test(temp_v5,1), temp_v6 != 0)) {
          bitsAt60Clear(temp_v5,2);
          *(unsigned short *)(temp_v5 + 0x2a) = 1;
        }
        temp_v9 = temp_v9 + 1;
        temp_v5 = FUN_001ab888();
      } while (temp_v9 < (int)(unsigned int)*(unsigned char *)(temp_v5 + 0x1ca3));
    }
    temp_v3 = FUN_001ab888();
    rt_memcpy_w(DAT_0057392c,temp_v3,0x2d30);
  }
  temp_v3 = FUN_001ab888();
  rt_memcpy_w(temp_v3,temp_v8,0x2d30);
  if (temp_v8 != 0) {
    asdMemFree();
  }
  temp_v3 = dataTableGet(0x4e,*(int *)(temp_v4 - 4) + 1);
  psVar11 = (short *)dataTableGetEntries();
  temp_v8 = dataTableGetCount(temp_v3);
  if (DAT_00573930 == 0) {
    temp_v4 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,0x10b8,0);
    temp_v10 = 0;
    DAT_00573930 = temp_v4;
  }
  temp_v4 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x10b8,1);
  temp_v3 = FUN_001bce18();
  rt_memcpy(temp_v4,temp_v3,0x10b8);
  if (DAT_0057393c == 0) {
    temp_v5 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x10b8,1);
    DAT_0057393c = temp_v5;
    rt_memcpy();
  }
  temp_v3 = FUN_001bce18();
  rt_memcpy(temp_v3,DAT_00573930,0x10b8);
  if ((!temp_v10) && (temp_v5 = 0, 0 < temp_v8)) {
    do {
      FUN_00480e30((int)*psVar11,psVar11[1]);
      temp_v5 = temp_v5 + 1;
      psVar11 = psVar11 + 2;
    } while (temp_v5 < temp_v8);
  }
  temp_v3 = FUN_001bce18();
  rt_memcpy(DAT_00573930,temp_v3,0x10b8);
  temp_v3 = FUN_001bce18();
  rt_memcpy(temp_v3,temp_v4,0x10b8);
  if (temp_v4 != 0) {
    asdMemFree(temp_v4);
  }
  if (*(int *)(param_1 + 0x4e48) == 0) {
    temp_v8 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x34a0,1);
    *(int *)(param_1 + 0x4e48) = temp_v8;
  }
  return;
}

} /* extern "C" */
