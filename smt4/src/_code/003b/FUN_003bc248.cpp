/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc248` (_code @ 0x3bc248, 0x428 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
struct AocSystem;
struct Table03Record;

extern "C" {

int libc_strcmp(unsigned char *, unsigned int *);
int memClear(unsigned int *, int);
Table03Record *aocFindTable03RecordByKey(AocSystem *, unsigned int);
int VectorUnsignedToFloat(unsigned int, int);

extern unsigned char LAB_003bc65c; /* 0x3bc65c */
extern AocSystem *g_aocSystem; /* 0x433158 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: libc_strcmp. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int *dataTableGetEntries(unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: memClear. */


void FUN_003bc248(unsigned int *param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  
  temp_v2 = dataTableGet(3,0);
  puVar4 = (unsigned int *)dataTableGetEntries(temp_v2);
  puVar6 = puVar4;
  if (((-1 < (int)param_2) && (temp_v3 = dataTableGetCount(temp_v2), param_2 < temp_v3)) &&
     (puVar6 = (unsigned int *)aocFindTable03RecordByKey(g_aocSystem,param_2), puVar6 == (unsigned int *)0x0)) {
    puVar6 = puVar4 + param_2 * 0x18;
  }
  memClear(param_1,0x74);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  temp_v0 = *(char *)((int)puVar6 + 0xd);
  *(char *)((int)param_1 + 0x1f) = temp_v0;
  if ('\0' < temp_v0) {
    temp_v0 = *(char *)((int)puVar6 + 0xe);
  }
  *(char *)(param_1 + 8) = *(char *)((int)puVar6 + 0xe);
  if (temp_v0 < '\x01') {
    *(unsigned char *)((int)param_1 + 0x1f) = param_3;
    *(unsigned char *)(param_1 + 8) = param_4;
  }
  param_1[9] = puVar6[4];
  temp_v4 = param_1[6];
  temp_v3 = (*puVar6 & 0x800) << 0x13;
  param_1[6] = temp_v3 | (temp_v4 & 0xbfffffff);
  temp_v3 = temp_v3 | (temp_v4 & 0x3fffffff) | ((*puVar6 & 0x1000) << 0x13);
  param_1[6] = temp_v3;
  *param_1 = (unsigned int)(unsigned short)puVar6[5];
  param_1[1] = (unsigned int)*(unsigned short *)((int)puVar6 + 0x16);
  param_1[2] = (unsigned int)(unsigned short)puVar6[6];
  param_1[3] = (unsigned int)*(unsigned short *)((int)puVar6 + 0x1a);
  param_1[4] = (unsigned int)(unsigned short)puVar6[7];
  param_1[5] = (unsigned int)*(unsigned short *)((int)puVar6 + 0x1e);
  if ((char)puVar6[10] == '0') {
    *(unsigned char *)(param_1 + 0xe) = 0;
  }
  else {
    temp_v4 = puVar6[0xb];
    temp_v6 = puVar6[0xc];
    temp_v9 = puVar6[0xd];
    param_1[0xe] = puVar6[10];
    param_1[0xf] = temp_v4;
    param_1[0x10] = temp_v6;
    param_1[0x11] = temp_v9;
  }
  if ((*puVar6 & 1) != 0) {
    param_1[6] = temp_v3 | 0x10000;
  }
  if ((*puVar6 & 2) != 0) {
    param_1[6] = param_1[6] | 0x20000;
  }
  if ((*puVar6 & 4) != 0) {
    param_1[6] = param_1[6] | 0x600000;
  }
  if ((*puVar6 & 8) == 0) {
    param_1[6] = param_1[6] | 0x40000;
  }
  temp_v3 = param_1[6];
  if ((*puVar6 & 0x10) != 0) {
    temp_v3 = temp_v3 | 0x80000;
    param_1[6] = temp_v3;
  }
  temp_v7 = (*puVar6 & 0x100) << 0xf;
  param_1[6] = (temp_v3 & 0xff7fffff) | temp_v7;
  temp_v8 = (*puVar6 & 0x200) << 0xf;
  param_1[6] = (temp_v3 & 0xfe7fffff) | temp_v7 | temp_v8;
  temp_v4 = (*puVar6 & 0x20) << 0x14;
  param_1[6] = (temp_v3 & 0xfc7fffff) | temp_v7 | temp_v8 | temp_v4;
  temp_v6 = (*puVar6 & 0x40) << 0x14;
  param_1[6] = (temp_v3 & 0xf87fffff) | temp_v7 | temp_v8 | temp_v4 | temp_v6;
  temp_v9 = (*puVar6 & 0x80) << 0x14;
  param_1[6] = (temp_v3 & 0xf07fffff) | temp_v7 | temp_v8 | temp_v4 | temp_v6 | temp_v9;
  temp_v4 = (temp_v3 & 0xd07fffff) | temp_v7 | temp_v8 | temp_v4 | temp_v6 | temp_v9 |
          ((*puVar6 & 0x400) << 0x13);
  param_1[6] = temp_v4;
  temp_v6 = param_1[7];
  temp_v3 = (*puVar6 & 0x3fff) >> 0xd;
  param_1[7] = (temp_v6 & 0xfffffffe) | temp_v3;
  temp_v9 = (*puVar6 >> 0x16) & 2;
  param_1[7] = (temp_v6 & 0xfffffffc) | temp_v3 | temp_v9;
  temp_v7 = (*puVar6 >> 0x16) & 4;
  param_1[7] = (temp_v6 & 0xfffffff8) | temp_v3 | temp_v9 | temp_v7;
  *(short *)(param_1 + 10) = (short)puVar6[1];
  *(unsigned short *)((int)param_1 + 0x2a) = *(unsigned short *)((int)puVar6 + 6);
  temp_v8 = (*puVar6 >> 0x16) & 8;
  param_1[7] = (temp_v6 & 0xfffffff0) | temp_v3 | temp_v9 | temp_v7 | temp_v8;
  temp_v5 = (*puVar6 >> 0x16) & 0x10;
  param_1[7] = (temp_v6 & 0xffffffe0) | temp_v3 | temp_v9 | temp_v7 | temp_v8 | temp_v5;
  param_1[7] = (temp_v6 & 0xffffffc0) | temp_v3 | temp_v9 | temp_v7 | temp_v8 | temp_v5 |
               ((*puVar6 >> 0x16) & 0x20);
  *(unsigned char *)((int)param_1 + 0x1e) = (unsigned char)((*puVar6 << 0xf) >> 0x1d) - 1;
  *(char *)(param_1 + 0xb) = (char)puVar6[2];
  *(unsigned char *)((int)param_1 + 0x2d) = *(unsigned char *)((int)puVar6 + 9);
  *(unsigned char *)((int)param_1 + 0x2e) = *(unsigned char *)((int)puVar6 + 10);
  *(unsigned char *)((int)param_1 + 0x2f) = *(unsigned char *)((int)puVar6 + 0xb);
  if ((short)puVar6[0xe] != 0) {
    *(short *)(param_1 + 0x12) = (short)puVar6[0xe];
    param_1[6] = temp_v4 | 0x10000000;
  }
  else {
    *(unsigned short *)(param_1 + 0x12) = 0;
  }
  if (*(short *)((int)puVar6 + 0x3a) == 0) {
    *(unsigned short *)((int)param_1 + 0x4a) = 0;
  }
  else {
    *(short *)((int)param_1 + 0x4a) = *(short *)((int)puVar6 + 0x3a);
    param_1[6] = param_1[6] | 0x10000000;
  }
  if ((short)puVar6[0xf] == 0) {
    *(unsigned short *)(param_1 + 0x13) = 0;
  }
  else {
    *(short *)(param_1 + 0x13) = (short)puVar6[0xf];
    param_1[6] = param_1[6] | 0x10000000;
  }
  if (*(short *)((int)puVar6 + 0x3e) == 0) {
    *(unsigned short *)((int)param_1 + 0x4e) = 0;
  }
  else {
    *(short *)((int)param_1 + 0x4e) = *(short *)((int)puVar6 + 0x3e);
    param_1[6] = param_1[6] | 0x10000000;
  }
  if ((unsigned char)puVar6[3] != 0) {
    temp_v10 = (float)VectorUnsignedToFloat((unsigned int)(unsigned char)puVar6[3],(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1[0xd] = (unsigned int)(temp_v10 * 0.01f);
  }
  temp_v1 = 0;
  if ((short)puVar6[0x10] != 0) {
    temp_v1 = 100;
  }
  *(unsigned short *)(param_1 + 0x14) = temp_v1;
  *(short *)((int)param_1 + 0x52) = (short)puVar6[0x10];
  *(unsigned short *)(param_1 + 0x15) = *(unsigned short *)((int)puVar6 + 0x42);
  puVar7 = &LAB_003bc65c;
  libc_strcmp(&LAB_003bc65c,puVar6 + 0x12);
  if (puVar7 == (unsigned char *)0x0) {
    *(unsigned char *)((int)param_1 + 0x56) = 0;
  }
  else {
    param_1[0x16] = puVar6[0x11];
    temp_v3 = puVar6[0x12];
    temp_v4 = puVar6[0x13];
    temp_v6 = puVar6[0x14];
    temp_v9 = puVar6[0x15];
    temp_v7 = puVar6[0x16];
    param_1[0x1c] = puVar6[0x17];
    param_1[0x17] = temp_v3;
    param_1[0x18] = temp_v4;
    param_1[0x19] = temp_v6;
    param_1[0x1a] = temp_v9;
    param_1[0x1b] = temp_v7;
  }
  return;
}

} /* extern "C" */
