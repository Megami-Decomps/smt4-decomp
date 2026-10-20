/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5e08` (_code @ 0x2b5e08, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_00470ce0(int, unsigned int);
int FUN_00480838(void);
int flagValueAdd(...);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern int g_aocSystem; /* 0x570280 */
extern unsigned char *g_mapDepart; /* 0x5806c4 */

extern int randRange(unsigned int);
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_00470ce0. */
/* Supplied declaration required: FUN_00480838. */
/* Supplied declaration required: flagValueAdd. */
extern int FUN_004813bc(int);
extern unsigned int __aeabi_idivmod(int, unsigned int);


unsigned int FUN_002b5e08(unsigned int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  short asStack_1e0 [200];
  unsigned int temp_v14;
  unsigned char *temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int iStack_30;
  int iStack_2c;
  unsigned int *puStack_28;
  
  temp_v15 = g_mapDepart;
  temp_v11 = g_aocSystem;
  temp_v20 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  FUN_00470ce0(g_aocSystem,param_1);
  temp_v8 = temp_v20;
  temp_v16 = temp_v20 * 7;
  if (temp_v11 == 0) {
    temp_v4 = dataTableGet(0x21,0);
    temp_v11 = dataTableGetEntries();
    temp_v13 = dataTableGetCount(temp_v4);
    if (temp_v13 <= temp_v8) {
      jyoucyuGetTableEntry(0);
      return 0;
    }
    temp_v11 = temp_v11 + temp_v16 * 4;
  }
  if (temp_v11 != 0) {
    temp_v6 = (unsigned int)*(unsigned char *)(temp_v11 + 4);
    temp_v12 = (unsigned int)*(unsigned char *)(temp_v11 + 5);
    temp_v5 = 0;
    temp_v13 = temp_v12;
    temp_v8 = temp_v6;
    if (temp_v12 < temp_v6) {
      temp_v13 = temp_v6;
      temp_v8 = temp_v12;
    }
    if (temp_v12 == temp_v6) {
      temp_v14 = 0x32;
    }
    else {
      temp_v2 = randRange((temp_v13 - temp_v8) & 0xffff);
      temp_v14 = __aeabi_idivmod(temp_v2 * 100,temp_v13 - temp_v8);
      temp_v13 = temp_v8 + temp_v2;
    }
    if (0 < (int)temp_v13) {
      temp_v2 = 0;
      *(unsigned int *)(temp_v15 + 0xb0) = (unsigned int)*(unsigned short *)(temp_v11 + 0x18);
      puVar4 = temp_v15;
      if (param_4 != (unsigned int *)0x0) {
        *param_4 = temp_v13;
      }
      do {
        temp_v10 = temp_v11 + temp_v2 * 4;
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v10 + 8);
        if (temp_v8 != 0) {
          puVar4 = (unsigned char *)(unsigned int)*(unsigned char *)(temp_v10 + 0xb);
        }
        if ((temp_v8 != 0 && puVar4 != (unsigned char *)0x0) &&
           (puVar4 = (unsigned char *)(unsigned int)*(unsigned char *)(temp_v10 + 10), puVar4 == (unsigned char *)0x0)) {
          temp_v3 = randRange(99);
          puVar4 = (unsigned char *)((temp_v3 + 1U) & 0xffff);
          if (puVar4 <= (unsigned char *)(unsigned int)*(unsigned char *)(temp_v10 + 0xb)) {
            puVar4 = (unsigned char *)flagValueAdd(temp_v8,1);
            if (param_2 != 0) {
              *(unsigned int *)(param_2 + temp_v5 * 4) = temp_v8;
            }
            temp_v5 = temp_v5 + 1;
            if ((int)temp_v13 <= temp_v5) {
              return temp_v14;
            }
          }
        }
        temp_v8 = temp_v20;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      temp_v11 = g_aocSystem;
      temp_v15 = (unsigned char *)asStack_1e0;
      FUN_00470ce0(g_aocSystem,temp_v20);
      if (temp_v11 == 0) {
        temp_v4 = dataTableGet(0x21,0);
        temp_v11 = dataTableGetEntries();
        temp_v6 = dataTableGetCount(temp_v4);
        if (temp_v8 >= temp_v6) {
          temp_v11 = 0;
        }
        else {
          temp_v11 = temp_v11 + temp_v16 * 4;
        }
      }
      temp_v16 = (unsigned int)*(unsigned char *)(temp_v11 + 0x14);
      temp_v0 = *(unsigned char *)(temp_v11 + 6);
      temp_v9 = *(unsigned char *)(temp_v11 + 7);
      temp_v17 = (unsigned int)*(unsigned char *)(temp_v11 + 0x15);
      temp_v18 = (unsigned int)*(unsigned char *)(temp_v11 + 0x16);
      temp_v19 = (unsigned int)*(unsigned char *)(temp_v11 + 0x17);
      temp_v7 = temp_v0;
      if (temp_v9 < temp_v0) {
        temp_v7 = temp_v9;
        temp_v9 = temp_v0;
      }
      temp_v8 = 0x3b7;
      temp_v11 = 0;
      do {
        temp_v6 = temp_v8;
        FUN_00480838();
        if (((temp_v6 != 0) && (temp_v7 <= *(unsigned char *)(temp_v6 + 0x24))) &&
           (*(unsigned char *)(temp_v6 + 0x24) <= temp_v9)) {
          temp_v12 = (unsigned int)*(unsigned char *)(temp_v6 + 0x25);
          if (temp_v12 != temp_v16) {
            temp_v1 = temp_v16;
            if (temp_v12 != temp_v17) {
              temp_v1 = temp_v18;
            }
            if ((!(temp_v12 != temp_v17 && temp_v12 != temp_v1)) || (temp_v12 == temp_v19)) {
              temp_v2 = temp_v11 * 2;
              temp_v11 = temp_v11 + 1;
              *(unsigned short *)(temp_v15 + temp_v2) = *(unsigned short *)(temp_v6 + 0x20);
            }
          }
          else {
            temp_v2 = temp_v11 * 2;
            temp_v11 = temp_v11 + 1;
            *(unsigned short *)(temp_v15 + temp_v2) = *(unsigned short *)(temp_v6 + 0x20);
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x47f);
      if ((short)temp_v11 != 0) {
        if (temp_v5 < (int)temp_v13) {
          do {
            temp_v2 = randRange(((int)(short)temp_v11 - 1U) & 0xffff);
            temp_v10 = (int)asStack_1e0[temp_v2];
            temp_v2 = FUN_004813bc(temp_v10);
            if (temp_v2 == 0) {
              *(unsigned char *)(param_3 + temp_v5) = 1;
            }
            else {
              *(unsigned char *)(param_3 + temp_v5) = 0;
            }
            flagValueAdd(temp_v10,1);
            if (param_2 != 0) {
              *(int *)(param_2 + temp_v5 * 4) = temp_v10;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < (int)temp_v13);
        }
        return temp_v14;
      }
    }
  }
  jyoucyuGetTableEntry(0);
  return 0;
}

} /* extern "C" */
