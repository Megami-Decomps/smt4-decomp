/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bbc4c` (_code @ 0x4bbc4c, 0x674 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
struct AocSystemA;
struct Table03Record;

extern "C" {

int sysMemClear(unsigned int *, int);
int libc_strcmp(unsigned char *, unsigned int *);
Table03Record *aocFindTable03RecordByKey(AocSystemA *, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char LAB_004bc2c0; /* 0x4bc2c0 */
extern AocSystemA *g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int *dataTableGetEntries(unsigned int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: libc_strcmp. */


void FUN_004bbc4c(unsigned int *param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned char *puVar6;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v1 = dataTableGet(3,0);
  puVar3 = (unsigned int *)dataTableGetEntries(temp_v1);
  puVar5 = puVar3;
  if (((-1 < (int)param_2) && (temp_v2 = dataTableGetCount(temp_v1), param_2 < temp_v2)) &&
     (puVar5 = (unsigned int *)aocFindTable03RecordByKey(g_aocSystem,param_2), puVar5 == (unsigned int *)0x0)) {
    puVar5 = puVar3 + param_2 * 0x18;
  }
  sysMemClear(param_1,0x84);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  temp_v0 = *(char *)((int)puVar5 + 0xd);
  *(char *)(param_1 + 8) = temp_v0;
  if ('\0' < temp_v0) {
    temp_v0 = *(char *)((int)puVar5 + 0xe);
  }
  *(char *)((int)param_1 + 0x21) = *(char *)((int)puVar5 + 0xe);
  if (temp_v0 < '\x01') {
    *(unsigned char *)(param_1 + 8) = param_3;
    *(unsigned char *)((int)param_1 + 0x21) = param_4;
  }
  param_1[9] = puVar5[4];
  temp_v6 = param_1[6];
  temp_v2 = (*puVar5 & 0x800) << 0x13;
  param_1[6] = temp_v2 | (temp_v6 & 0xbfffffff);
  temp_v2 = ((*puVar5 & 0x1000) << 0x13) | temp_v2 | (temp_v6 & 0x3fffffff);
  param_1[6] = temp_v2;
  *param_1 = (unsigned int)(unsigned short)puVar5[5];
  param_1[1] = (unsigned int)*(unsigned short *)((int)puVar5 + 0x16);
  param_1[2] = (unsigned int)(unsigned short)puVar5[6];
  param_1[3] = (unsigned int)*(unsigned short *)((int)puVar5 + 0x1a);
  param_1[4] = (unsigned int)(unsigned short)puVar5[7];
  param_1[5] = (unsigned int)*(unsigned short *)((int)puVar5 + 0x1e);
  if ((char)puVar5[10] == '0') {
    *(unsigned char *)(param_1 + 0xf) = 0;
  }
  else {
    temp_v6 = puVar5[0xb];
    temp_v7 = puVar5[0xc];
    temp_v9 = puVar5[0xd];
    param_1[0xf] = puVar5[10];
    param_1[0x10] = temp_v6;
    param_1[0x11] = temp_v7;
    param_1[0x12] = temp_v9;
  }
  if ((*puVar5 & 1) != 0) {
    param_1[6] = temp_v2 | 0x10000;
  }
  if ((*puVar5 & 2) != 0) {
    param_1[6] = param_1[6] | 0x20000;
  }
  if ((*puVar5 & 4) != 0) {
    param_1[6] = param_1[6] | 0x600000;
  }
  if ((*puVar5 & 8) == 0) {
    param_1[6] = param_1[6] | 0x40000;
  }
  if ((*puVar5 & 0x10) != 0) {
    param_1[6] = param_1[6] | 0x80000;
  }
  temp_v10 = param_1[6];
  temp_v8 = (*puVar5 & 0x100) << 0xf;
  param_1[6] = (temp_v10 & 0xff7fffff) | temp_v8;
  temp_v2 = (*puVar5 & 0x200) << 0xf;
  param_1[6] = temp_v2 | (temp_v10 & 0xfe7fffff) | temp_v8;
  temp_v6 = (*puVar5 & 0x20) << 0x14;
  param_1[6] = temp_v6 | temp_v2 | (temp_v10 & 0xfc7fffff) | temp_v8;
  temp_v7 = (*puVar5 & 0x40) << 0x14;
  param_1[6] = temp_v6 | temp_v2 | (temp_v10 & 0xf87fffff) | temp_v8 | temp_v7;
  temp_v9 = (*puVar5 & 0x80) << 0x14;
  param_1[6] = temp_v6 | temp_v2 | (temp_v10 & 0xf07fffff) | temp_v8 | temp_v7 | temp_v9;
  temp_v4 = temp_v6 | temp_v2 | (temp_v10 & 0xd07fffff) | temp_v8 | temp_v7 | temp_v9 |
          ((*puVar5 & 0x400) << 0x13);
  param_1[6] = temp_v4;
  temp_v5 = param_1[7];
  temp_v2 = (*puVar5 & 0x3fff) >> 0xd;
  param_1[7] = (temp_v5 & 0xfffffffe) | temp_v2;
  temp_v6 = (*puVar5 >> 0x16) & 2;
  param_1[7] = temp_v6 | (temp_v5 & 0xfffffffc) | temp_v2;
  temp_v7 = (*puVar5 >> 0x16) & 4;
  param_1[7] = temp_v7 | temp_v6 | (temp_v5 & 0xfffffff8) | temp_v2;
  *(short *)(param_1 + 10) = (short)puVar5[1];
  *(unsigned short *)((int)param_1 + 0x2a) = *(unsigned short *)((int)puVar5 + 6);
  temp_v9 = (*puVar5 >> 0x16) & 8;
  param_1[7] = temp_v9 | temp_v7 | temp_v6 | (temp_v5 & 0xfffffff0) | temp_v2;
  temp_v8 = (*puVar5 >> 0x16) & 0x10;
  param_1[7] = temp_v8 | temp_v9 | temp_v7 | temp_v6 | (temp_v5 & 0xffffffe0) | temp_v2;
  temp_v10 = (*puVar5 >> 0x16) & 0x20;
  param_1[7] = temp_v10 | temp_v8 | temp_v9 | temp_v7 | temp_v6 | (temp_v5 & 0xffffffc0) | temp_v2;
  param_1[7] = temp_v10 | temp_v8 | temp_v9 | temp_v7 | temp_v6 | (temp_v5 & 0xffffff80) | temp_v2 |
               ((*puVar5 >> 0x16) & 0x40);
  *(unsigned char *)((int)param_1 + 0x1f) = (unsigned char)((*puVar5 << 0xf) >> 0x1d) - 1;
  *(char *)(param_1 + 0xb) = (char)puVar5[2];
  *(unsigned char *)((int)param_1 + 0x2d) = *(unsigned char *)((int)puVar5 + 9);
  *(unsigned char *)((int)param_1 + 0x2e) = *(unsigned char *)((int)puVar5 + 10);
  *(unsigned char *)((int)param_1 + 0x2f) = *(unsigned char *)((int)puVar5 + 0xb);
  *(unsigned short *)((int)param_1 + 0x5e) = 0;
  param_1[0x18] = (unsigned int)*(unsigned char *)((int)puVar5 + 0xf);
  param_1[7] = (param_1[7] & 0xffffff7f) | ((*puVar5 >> 0x16) & 0x80);
  if ((short)puVar5[0xe] == 0) {
    *(unsigned short *)(param_1 + 0x13) = 0;
  }
  else {
    *(short *)(param_1 + 0x13) = (short)puVar5[0xe];
    param_1[6] = temp_v4 | 0x10000000;
  }
  if (*(short *)((int)puVar5 + 0x3a) == 0) {
    *(unsigned short *)((int)param_1 + 0x4e) = 0;
  }
  else {
    *(short *)((int)param_1 + 0x4e) = *(short *)((int)puVar5 + 0x3a);
    param_1[6] = param_1[6] | 0x10000000;
  }
  if ((short)puVar5[0xf] == 0) {
    *(unsigned short *)(param_1 + 0x14) = 0;
  }
  else {
    *(short *)(param_1 + 0x14) = (short)puVar5[0xf];
    param_1[6] = param_1[6] | 0x10000000;
  }
  if (*(short *)((int)puVar5 + 0x3e) == 0) {
    *(unsigned short *)((int)param_1 + 0x52) = 0;
  }
  else {
    *(short *)((int)param_1 + 0x52) = *(short *)((int)puVar5 + 0x3e);
    param_1[6] = param_1[6] | 0x10000000;
  }
  param_1[0xe] = (unsigned int)(unsigned char)puVar5[3];
  if ((short)puVar5[0x10] == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = 100;
  }
  *(unsigned short *)(param_1 + 0x15) = temp_v3;
  *(short *)((int)param_1 + 0x56) = (short)puVar5[0x10];
  if ((short)puVar5[0x10] == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = 100;
  }
  *(unsigned short *)(param_1 + 0x16) = temp_v3;
  *(short *)((int)param_1 + 0x5a) = (short)puVar5[0x10];
  *(unsigned short *)(param_1 + 0x17) = *(unsigned short *)((int)puVar5 + 0x42);
  puVar6 = &LAB_004bc2c0;
  libc_strcmp(&LAB_004bc2c0,puVar5 + 0x12);
  if (puVar6 == (unsigned char *)0x0) {
    *(unsigned char *)(param_1 + 0x19) = 0;
  }
  else {
    param_1[0x1a] = puVar5[0x11];
    temp_v2 = puVar5[0x12];
    temp_v6 = puVar5[0x13];
    temp_v8 = puVar5[0x14];
    temp_v7 = puVar5[0x15];
    temp_v9 = puVar5[0x16];
    param_1[0x20] = puVar5[0x17];
    param_1[0x1b] = temp_v2;
    param_1[0x1c] = temp_v6;
    param_1[0x1d] = temp_v8;
    param_1[0x1e] = temp_v7;
    param_1[0x1f] = temp_v9;
  }
  return;
}

} /* extern "C" */
