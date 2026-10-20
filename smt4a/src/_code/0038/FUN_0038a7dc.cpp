/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a7dc` (_code @ 0x38a7dc, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(unsigned char [212], unsigned char *, int, int);
int FUN_0035cdac(unsigned int, unsigned int, unsigned int, int, int);
int FUN_0038aa84(...);
int rt_memcpy_w(...);

/* stack frame of param_5: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp128; /* 0x128: local_128 */
} param_5_stack;

extern unsigned char LAB_003df478; /* 0x3df478 */

/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0035cdac. */
/* Supplied declaration required: FUN_0038aa84. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0038a7dc(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar9;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_118;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15 [212];
  
  piVar9 = (int *)(int)*(char *)(param_3 + 7);
  temp_v5 = 0;
  temp_v3 = (int)piVar9 +
          (((short)(*(char *)(param_3 + 4) - 0x30) * 1000 + *(char *)(param_3 + 5) * 100 +
           *(char *)(param_3 + 6) * 10) - 0x14d0);
  if (*(char *)(param_3 + 10) != '\0') {
    if (*(char *)(param_3 + 10) == '\x01') {
      temp_v0 = (unsigned int)*(unsigned short *)(param_3 + 8) + param_3;
      if (temp_v3 >= 0x514) {
        temp_v4 = *(unsigned int *)(temp_v0 + 0x20);
        temp_v0 = temp_v0 + 0xf0;
        temp_v1 = *(int *)(param_3 + 0xc) - 0xf0;
      }
      else {
        temp_v4 = *(unsigned int *)(temp_v0 + 8);
        temp_v0 = temp_v0 + 0xd8;
        temp_v1 = *(int *)(param_3 + 0xc) - 0xd8;
      }
      if ((temp_v3 >= 1100) && (temp_v0 = temp_v0 + 4, temp_v3 >= 0x4b0)) {
        temp_v1 = temp_v1 - 4;
      }
      temp_v2 = temp_v1 >> 5;
      if ((int)param_2 < (int)(temp_v1 >> 5)) {
        temp_v2 = param_2;
      }
      rt_memcpy_w(param_1,temp_v0,temp_v2 << 5);
      if ((temp_v3 == 0x4b0) && (0 < (int)temp_v2)) {
        puVar2 = (unsigned int *)(param_1 - 0xc);
        if ((temp_v2 & 1) != 0) {
          puVar2 = (unsigned int *)(param_1 + 0x14);
          *puVar2 = temp_v5;
        }
        for (temp_v3 = (int)temp_v2 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          puVar2[8] = temp_v5;
          puVar2 = puVar2 + 0x10;
          *puVar2 = temp_v5;
        }
      }
      temp_v3 = param_2 - temp_v2;
      if (0 < temp_v3) {
        puVar2 = (unsigned int *)(param_1 + temp_v2 * 0x20);
        piVar9 = (int *)0xffffffff;
        puVar4 = puVar2 + 1;
        puVar5 = (unsigned char *)((int)puVar2 + 6);
        do {
          *puVar2 = 0xffffffff;
          *puVar5 = 0xff;
          temp_v3 = temp_v3 - 1;
          *(unsigned short *)puVar4 = 0;
          puVar2 = puVar2 + 8;
          puVar4 = puVar4 + 8;
          puVar5 = puVar5 + 0x20;
        } while (temp_v3 != 0);
      }
      temp_v3 = 0;
      if (temp_v3 < (int)temp_v2) {
        do {
          if (0 < param_5) {
            piVar9 = (int *)(param_1 + temp_v3 * 0x20);
          }
          temp_v0 = 0;
          if (temp_v0 < param_5) {
            do {
              if (*(int *)(param_4 + temp_v0 * 0x48 + 4) == *piVar9) {
                *(char *)((int)piVar9 + 6) = (char)temp_v0;
                break;
              }
              temp_v0 = temp_v0 + 1;
            } while (temp_v0 < param_5);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < (int)temp_v2);
      }
      FUN_0035cdac(param_1,temp_v2,temp_v4,param_4,param_5);
      return temp_v2;
    }
    param_1 = 0;
  }
  else {
    if (temp_v3 < 0x514) {
      puVar2 = (unsigned int *)((unsigned int)*(unsigned short *)(param_3 + 8) + param_3);
      temp_v12 = 1;
      temp_v13 = 1;
      temp_v14 = 1;
      temp_v11 = 0;
      FUN_002f5020(temp_v15,&LAB_003df478,0x14,10);
      temp_v11 = *puVar2;
      temp_v12 = puVar2[1];
      temp_v13 = puVar2[2];
      temp_v14 = puVar2[3];
      rt_memcpy_w(temp_v15,puVar2 + 4,200);
      temp_v7 = 0x40a00000;
      uStack_118 = 0x40400000;
      temp_v10 = 0x40400000;
      temp_v6 = temp_v5;
      temp_v8 = temp_v5;
      temp_v9 = temp_v5;
      FUN_0038aa84(param_1,param_2,&temp_v6,param_4,param_5);
      return param_1;
    }
    FUN_0038aa84(param_1,param_2,param_3 + (unsigned int)*(unsigned short *)(param_3 + 8),param_4,param_5);
  }
  return param_1;
}

} /* extern "C" */
