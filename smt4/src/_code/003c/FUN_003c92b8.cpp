/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c92b8` (_code @ 0x3c92b8, 0x2d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229c94(...);
int dataTable05Sub0GetEntries(void);
int FUN_002b9024(void);
int FUN_003c9a04(unsigned short *, int, unsigned int, int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: FUN_00229c94. */
/* Supplied declaration required: dataTable05Sub0GetEntries. */
extern int FUN_0029ea68(unsigned int);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
extern int FUN_002b066c(unsigned int);
/* Supplied declaration required: FUN_002b9024. */
extern unsigned int randNextInRange(unsigned int);
extern int FUN_00311be4(void);
/* Supplied declaration required: FUN_003c9a04. */
extern int FUN_003c9b94(unsigned short *, unsigned short *, unsigned short *, unsigned int *);


unsigned int FUN_003c92b8(unsigned short *param_1,unsigned short *param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned short *puVar5;
  unsigned int temp_v2;
  unsigned short *puVar7;
  unsigned int temp_v3;
  unsigned short *puVar9;
  unsigned short *puVar10;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  
  temp_v0 = 0;
  dataTable05Sub0GetEntries();
  temp_v1 = FUN_003c9b94(param_1,param_2,param_3,param_4);
  if (temp_v1 == 0) {
    return 0;
  }
  puVar5 = (unsigned short *)((param_4[1] & 0x1ffff) >> 2);
  FUN_002b9024();
  temp_v1 = FUN_00311be4();
  temp_v7 = temp_v1 + (unsigned int)*(unsigned char *)((int)puVar5 + 3);
  temp_v2 = randNextInRange(99);
  if (temp_v2 < 5) {
    temp_v1 = FUN_002b066c(0x218);
    if (temp_v1 == 0) {
      puVar7 = (unsigned short *)0x218;
      *param_4 = *param_4;
      param_4[1] = (((unsigned int)puVar7 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
      return 1;
    }
    temp_v2 = 1;
    if (temp_v2 < temp_v7) {
      do {
        puVar7 = param_2;
        FUN_00229c94(param_2,param_3,*puVar5,temp_v2);
        if (puVar7 != (unsigned short *)0x0) {
          *param_4 = *param_4;
          param_4[1] = (((unsigned int)puVar7 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
          return 1;
        }
        temp_v2 = (temp_v2 + 1) & 0xff;
      } while (temp_v2 < temp_v7);
    }
  }
  temp_v6 = 0x19;
  temp_v2 = 0;
  do {
    temp_v3 = temp_v2 & 0xffff;
    FUN_002b9024();
    if ((*(char *)(temp_v3 + 2) == '3') && (temp_v1 = FUN_0029ea68(temp_v2 & 0xffff), temp_v1 != 0)) {
      temp_v6 = 10;
      break;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x4b1);
  temp_v3 = randNextInRange(99);
  temp_v2 = temp_v7;
  if (temp_v3 < temp_v6) {
    do {
      puVar7 = param_1;
      FUN_003c9a04(param_1,0x33,temp_v2,1);
      puVar9 = puVar7;
      FUN_002b9024();
      puVar10 = (unsigned short *)(unsigned int)*puVar9;
      temp_v8 = puVar10 != (unsigned short *)(unsigned int)*puVar5;
      puVar1 = (unsigned short *)(unsigned int)*puVar5;
      if (temp_v8) {
        puVar1 = param_2;
      }
      puVar2 = puVar1;
      if (temp_v8 && puVar10 != puVar1) {
        puVar2 = param_3;
      }
      if (((temp_v8 && puVar10 != puVar1) && puVar10 != puVar2) &&
         (*(unsigned char *)((int)puVar9 + 3) <= temp_v2)) {
        temp_v1 = FUN_002a8764();
        temp_v5 = 0;
        do {
          if (*(unsigned char *)(temp_v1 + temp_v5 + 0x90f0) < 0x18) {
            temp_v4 = FUN_002a8764();
            temp_v4 = FUN_002a8740((int)*(char *)(temp_v4 + temp_v5 + 0x90f0));
            if (*(unsigned short *)(temp_v4 + 0x46) == *puVar9) break;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x18);
        if (temp_v5 == 0x18) {
          if (puVar7 != (unsigned short *)0x0) {
            *param_4 = *param_4;
            param_4[1] = (((unsigned int)puVar7 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
            return 1;
          }
          break;
        }
      }
      temp_v2 = (*(unsigned char *)((int)puVar9 + 3) - 1) & 0xff;
    } while (*(unsigned short *)(*(int *)(param_1 + 0x82) + ((unsigned int)*(unsigned char *)((int)param_1 + 0x33) * 4 - 2))
             < temp_v2);
  }
  puVar7 = param_2;
  FUN_00229c94(param_2,param_3,*puVar5,temp_v7);
  if (puVar7 == (unsigned short *)0x0) {
    temp_v2 = 1;
    do {
      if (temp_v7 + temp_v2 <= (unsigned int)*(unsigned char *)(temp_v0 + 7)) {
        puVar7 = param_2;
        FUN_00229c94(param_2,param_3,(param_4[1] & 0x1ffff) >> 2,(temp_v2 + temp_v7) & 0xff);
        if (puVar7 != (unsigned short *)0x0) {
          *param_4 = *param_4;
          param_4[1] = (((unsigned int)puVar7 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
          return 1;
        }
        break;
      }
      temp_v2 = (temp_v2 + 1) & 0xffff;
    } while (temp_v2 < 6);
    if ((int)(temp_v7 - *(unsigned char *)((int)puVar5 + 3)) < 1) {
      return 0;
    }
    FUN_00229c94(param_2,param_3,(param_4[1] & 0x1ffff) >> 2,(temp_v7 - 1) & 0xff);
    puVar7 = param_2;
    if (param_2 == (unsigned short *)0x0) {
      return 0;
    }
  }
  *param_4 = *param_4;
  param_4[1] = (((unsigned int)puVar7 & 0x3fff7fff) << 2) | (param_4[1] & 0xfffe0003);
  return 1;
}

} /* extern "C" */
