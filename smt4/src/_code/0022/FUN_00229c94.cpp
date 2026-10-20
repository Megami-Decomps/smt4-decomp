/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229c94` (_code @ 0x229c94, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9024(void);
int dataTableGetEntries(void);

/* stack frame of param_4: 13 slot(s), 50 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned short sp72; /* 0x72: local_72 */
} param_4_stack;

extern int FUN_00288154(unsigned short, unsigned char *);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b9024. */
extern int FUN_002c09d0(void);
extern int randNextInRange(unsigned int);
extern unsigned short *dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned int FUN_00229c94(unsigned short *param_1,unsigned short *param_2,unsigned short *param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar10;
  unsigned char temp_v5;
  unsigned char temp_v6 [46];
  unsigned short temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned short *temp_v18;
  unsigned short *temp_v19;
  unsigned short *puStack_2c;
  unsigned int uStack_28;
  
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v5 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = param_1;
  temp_v19 = param_2;
  puStack_2c = param_3;
  uStack_28 = param_4;
  temp_v1 = dataTableGet(0,0);
  dataTableGetEntries();
  puVar4 = (unsigned short *)dataTableGetCount(temp_v1);
  puVar10 = (unsigned short *)0x0;
  if (puVar4 == (unsigned short *)0x0) {
    return 0;
  }
  do {
    puVar5 = puVar10;
    FUN_002b9024();
    if ((*(unsigned char *)((int)puVar5 + 3) == param_4) && (puVar10 != param_3)) {
      puVar2 = temp_v18;
      if (puVar10 != temp_v18) {
        puVar2 = temp_v19;
      }
      if (puVar10 != temp_v18 && puVar10 != puVar2) {
        puVar6 = (unsigned short *)(unsigned int)*puVar5;
        FUN_002b9024();
        if (((*(unsigned int *)(puVar6 + 0x16) & 0x1c00000) == 0) &&
           ((puVar6[0x1b] == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 != 0)))) {
          temp_v0 = puVar6[0x1a];
          if ((temp_v0 & 1) != 0) {
            if ((temp_v0 & 0xfffe) != 0) {
              temp_v2 = FUN_00288154(temp_v0 >> 1,temp_v6);
            }
            else {
              temp_v2 = FUN_00288154(*puVar6,temp_v6);
            }
            if ((temp_v2 == 0) || ((temp_v7 & 0xfc) == 0)) goto LAB_00229e38;
          }
          if ((puVar6[3] & 1) != 0) {
            temp_v2 = FUN_002a8764();
            temp_v4 = 0;
            do {
              if (*(unsigned char *)(temp_v2 + temp_v4 + 0x90f0) < 0x18) {
                temp_v3 = FUN_002a8764();
                temp_v3 = FUN_002a8740((int)*(char *)(temp_v3 + temp_v4 + 0x90f0));
                if (*(unsigned short *)(temp_v3 + 0x46) == *puVar5) break;
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 0x18);
            if (temp_v4 == 0x18) {
              temp_v2 = temp_v5 * 2;
              temp_v5 = temp_v5 + 1;
              *(short *)((int)&temp_v8 + temp_v2) = (short)(int)puVar10;
            }
          }
        }
      }
    }
LAB_00229e38:
    puVar10 = (unsigned short *)(((int)puVar10 + 1U) & 0xffff);
    if (puVar4 <= puVar10) {
      if (temp_v5 == 1) {
        temp_v8 = temp_v8 & 0xffff;
      }
      else {
        if (temp_v5 < 2) {
          return 0;
        }
        temp_v2 = randNextInRange((temp_v5 - 1) & 0xffff);
        temp_v8 = (unsigned int)*(unsigned short *)((int)&temp_v8 + temp_v2 * 2);
      }
      return temp_v8;
    }
  } while( 1 );
}

} /* extern "C" */
