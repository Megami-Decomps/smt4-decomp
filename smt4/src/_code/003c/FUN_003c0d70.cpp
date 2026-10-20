/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0d70` (_code @ 0x3c0d70, 0x4c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023eab0(...);
int FUN_002505c0(int, int, int, int, int, int, int);
int FUN_00262f68(...);
int rt_memclr(...);
int __aeabi_memset4(...);
int memClear(...);
int FUN_003369e0(int, unsigned int, int);
int FUN_00336a70(int);
int FUN_00337a34(int);
int FUN_003390dc(int, int, int);
int FUN_00394b0c(void);
int FUN_003ae2d0(unsigned int, int, unsigned int, int);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023eab0. */
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00262f68. */
extern int btlGetMainState(void);
extern int flagWordTestBit(unsigned int, unsigned int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_003369e0. */
/* Supplied declaration required: FUN_00336a70. */
/* Supplied declaration required: FUN_00337a34. */
/* Supplied declaration required: FUN_003390dc. */
/* Supplied declaration required: FUN_00394b0c. */
/* Supplied declaration required: FUN_003ae2d0. */


void FUN_003c0d70(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int unaff_r6;
  unsigned char temp_v6;
  
  temp_v1 = btlGetMainState();
  puVar6 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + param_1 * 0x288);
  if ((*puVar6 & 0x200000) != 0) {
    FUN_00337a34(temp_v1);
    return;
  }
  if ((*puVar6 & 1) != 0) {
    temp_v4 = *puVar6;
    temp_v6 = (temp_v4 & 0x800080) == 0;
    *puVar6 = temp_v4 & 0xfffffffe;
    temp_v0 = (temp_v4 & 0x800000) >> 0x17;
    if (temp_v6) {
      unaff_r6 = temp_v1 + 0x1c00;
    }
    temp_v4 = (temp_v4 & 2) >> 1;
    if (temp_v6) {
      temp_v5 = 0;
      do {
        if (*(short *)(*(int *)(unaff_r6 + 0x298) + temp_v5 * 0x114 + 0x60) ==
            *(short *)((int)puVar6 + 0x6e)) {
          temp_v3 = *(int *)(unaff_r6 + 0x298) + temp_v5 * 0x114;
          *(unsigned int *)(temp_v3 + 0x50) = 0;
          *(unsigned int *)(temp_v3 + 0x54) = 0;
          *(unsigned short *)(temp_v3 + 0x58) = 0;
          *(unsigned int *)(temp_v3 + 0x48) = 0;
          if (temp_v4 == 0) {
            *(unsigned short *)(temp_v3 + 0x60) = 0xffff;
          }
          *(unsigned int *)(temp_v3 + 0x5c) = 0;
          *(unsigned int *)(temp_v3 + 100) = 0;
          *(unsigned int *)(temp_v3 + 0x68) = 0;
          *(unsigned int *)(temp_v3 + 0x6c) = 0;
          *(unsigned int *)(temp_v3 + 0x70) = 0;
          *(unsigned int *)(temp_v3 + 0x74) = 0;
          *(unsigned int *)(temp_v3 + 0x78) = 0;
          *(unsigned int *)(temp_v3 + 0x7c) = 0;
          *(unsigned int *)(temp_v3 + 0x80) = 0;
          *(unsigned int *)(temp_v3 + 0x84) = 0;
          *(unsigned int *)(temp_v3 + 0x88) = 0;
          *(unsigned int *)(temp_v3 + 0x8c) = 0;
          *(unsigned int *)(temp_v3 + 0x90) = 0;
          *(unsigned int *)(temp_v3 + 0x94) = 0;
          *(unsigned int *)(temp_v3 + 0xf0) = 0xffffffff;
          *(unsigned int *)(temp_v3 + 0xf8) = 0;
          *(unsigned int *)(temp_v3 + 0xf4) = 0xffffffff;
          *(unsigned int *)(temp_v3 + 0xfc) = 0;
          *(unsigned int *)(temp_v3 + 0x100) = 0;
          *(unsigned int *)(temp_v3 + 0x104) = 0;
          *(unsigned int *)(temp_v3 + 0x108) = 0;
          *(unsigned int *)(temp_v3 + 0x10c) = 0;
          *(unsigned int *)(temp_v3 + 0x110) = 0;
          FUN_003390dc(temp_v1,temp_v3,(int)(short)puVar6[2]);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      *puVar6 = *puVar6 | 0x80;
    }
    temp_v2 = *puVar6;
    if ((temp_v2 & 0x10) != 0) {
      if (param_3 != 0) {
        temp_v2 = puVar6[0xa1];
      }
      if (param_3 != 0 && temp_v2 != 0) {
        if (0 < (int)puVar6[0x9d]) {
          FUN_00336a70(temp_v1);
        }
        temp_v2 = puVar6[0x9c];
        do {
          if (puVar6[temp_v2 + 0x96] != 0) {
            FUN_003369e0(temp_v1,puVar6[temp_v2 + 0x96],1);
            puVar6[temp_v2 + 0x96] = 0;
          }
          temp_v2 = temp_v2 - 1;
          if ((int)temp_v2 < 0) {
            temp_v2 = 5;
          }
        } while (puVar6[0x9c] != temp_v2);
        puVar6[0xa1] = 0;
        puVar6[0x9d] = 0;
        puVar6[0x9c] = 0;
      }
      *(short *)(temp_v1 + 0x1fc6) = *(short *)(temp_v1 + 0x1fc6) - 1;
    }
    else if ((temp_v2 & 0x20) != 0) {
      if (puVar6[0xa0] != 0 && param_3 != 0) {
        *(unsigned short *)(puVar6[0xa0] + 0x44) = 2;
        *(unsigned short *)(puVar6[0xa0] + 0x2a) = 0;
      }
      *(unsigned char *)(temp_v1 + 0x49c4) = 0;
    }
    else {
      if ((temp_v2 & 8) != 0) {
        if (param_4 != 0) {
          temp_v2 = puVar6[0x9f];
          if (temp_v2 != 0) {
            *(unsigned short *)(temp_v2 + 0x44) = *(unsigned short *)(temp_v2 + 0x44) & 0xffef;
            if (0 < (short)puVar6[0x6d]) {
              FUN_0023eab0(puVar6[0x9f]);
            }
            puVar6[0x9f] = 0;
          }
        }
        else {
          temp_v5 = gameGetSlotTable();
          temp_v5 = temp_v5 + (param_1 - 1);
          if (-1 < *(char *)(temp_v5 + 0x9108)) {
            *(unsigned char *)(temp_v5 + 0x9108) = 0xff;
            if (param_3 == 0) {
              FUN_003ae2d0(g_btlUiBlock,param_1,0xffffffff,1);
              FUN_002505c0(0,0,0x1000172,0,0,0,0);
            }
            temp_v2 = puVar6[0x9f];
            if ((temp_v2 != 0) &&
               (*(unsigned short *)(temp_v2 + 0x44) = *(unsigned short *)(temp_v2 + 0x44) & 0xffef,
               0 < (short)puVar6[0x6d])) {
              FUN_0023eab0(puVar6[0x9f]);
            }
          }
        }
      }
      if (param_3 != 0) {
        if (puVar6[0x9e] != 0) {
          *(unsigned short *)(puVar6[0x9e] + 0x72) = 2;
          *(unsigned short *)(puVar6[0x9e] + 0x2a) = 0;
          *(unsigned short *)((int)puVar6 + 0x1c6) = 2;
          *(unsigned short *)(puVar6 + 0x6d) = 0;
          *(unsigned short *)((int)puVar6 + 0x1b6) = *(unsigned short *)(puVar6[0x9e] + 0x1c);
          FUN_00394b0c();
        }
        if (puVar6[0x9f] != 0) {
          *(unsigned short *)(puVar6[0x9f] + 0x44) = 2;
          *(unsigned short *)(puVar6[0x9f] + 0x2a) = 0;
        }
      }
      else if (puVar6[0x9f] != 0) {
        temp_v5 = flagWordTestBit(puVar6[0x9f],10);
        if (temp_v5 != 0) {
          FUN_00262f68(puVar6[0x9f],0x10);
          FUN_00262f68(puVar6[0x9f],0x20);
          FUN_00262f68(puVar6[0x9f],0x40);
          FUN_00262f68(puVar6[0x9f],0x80);
          FUN_00262f68(puVar6[0x9f],0x100);
          FUN_00262f68(puVar6[0x9f],0x200);
          FUN_00262f68(puVar6[0x9f],8);
        }
        if ((*(unsigned short *)((int)puVar6 + 0x1c6) & 0x400) != 0) {
          *(unsigned short *)((int)puVar6 + 0x1c6) = *(unsigned short *)((int)puVar6 + 0x1c6) & 0xfc07;
        }
        if ((0 < (short)puVar6[0x6d]) &&
           (*(short *)(puVar6[0x9f] + 0x46) == *(short *)((int)puVar6 + 0xce))) {
          FUN_0023eab0();
        }
      }
      *(short *)(temp_v1 + 0x1fc4) = *(short *)(temp_v1 + 0x1fc4) - 1;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    if (temp_v4 != 0) {
      *puVar6 = 6;
      puVar6[1] = 0;
    }
    if (temp_v0 != 0) {
      *puVar6 = *puVar6 | 0x11;
    }
    if (temp_v0 == 0 && temp_v4 == 0) {
      __aeabi_memset4(puVar6 + 2,100,0xffffffff);
      *(unsigned short *)(puVar6 + 2) = 0;
      memClear(puVar6 + 0x33,0x18c);
    }
    *(unsigned short *)(puVar6 + 0x1b) = 0xffff;
    rt_memclr((int)puVar6 + 0x72,0x3c);
    *(unsigned int *)((int)puVar6 + 0xae) = 0;
    *(unsigned int *)((int)puVar6 + 0xb2) = 0;
    *(unsigned int *)((int)puVar6 + 0xb6) = 0;
    *(unsigned int *)((int)puVar6 + 0xba) = 0;
    *(unsigned short *)((int)puVar6 + 0xbe) = 0;
    puVar6[0x96] = 0;
    puVar6[0x97] = 0;
    puVar6[0x98] = 0;
    puVar6[0x99] = 0;
    puVar6[0x9a] = 0;
    puVar6[0x9b] = 0;
    puVar6[0x30] = 0;
    puVar6[0x9c] = 0;
    puVar6[0x9d] = 0;
    *(unsigned short *)(puVar6 + 0x35) = 0xffff;
  }
  return;
}

} /* extern "C" */
