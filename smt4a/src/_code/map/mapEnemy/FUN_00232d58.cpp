/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232d58` (_code @ 0x232d58, 0x398 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(unsigned char *, int, int, int, unsigned char *, unsigned char *, int, unsigned int);
int asdMemoryAllocTracked(int, int, int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00233134; /* 0x233134 */
extern unsigned char LAB_0027d754; /* 0x27d754 */
extern unsigned char LAB_00315d0c; /* 0x315d0c */
extern unsigned int *g_mapEnemy; /* 0x5806d4 */

extern int randRange(unsigned int);
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */


void FUN_00232d58(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x4d84,1);
  puVar2 = &LAB_00233134;
  g_mapEnemy = puVar1;
  taskCreateDraw(&LAB_00233134,4,0,0,&LAB_0027d754,&LAB_00315d0c,0,param_1);
  *puVar1 = (unsigned int)puVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[0xf5d] = 0;
  puVar1[0xf5e] = 0;
  puVar1[0xf5f] = 0;
  puVar1[0xf60] = 0;
  temp_v2 = 0;
  temp_v3 = 0x47c34f80;
  *(unsigned char *)(puVar1 + 0xf62) = 0;
  *(unsigned char *)((int)puVar1 + 0x3d89) = 0;
  temp_v1 = 0;
  do {
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0xd) = 0;
    puVar1[temp_v1 * 0x62 + 0xe] = temp_v1;
    puVar1[temp_v1 * 0x62 + 0xf] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x10] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x11] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x12] = puVar1[temp_v1 * 0x62 + 0xf];
    puVar1[temp_v1 * 0x62 + 0x13] = puVar1[temp_v1 * 0x62 + 0x10];
    puVar1[temp_v1 * 0x62 + 0x14] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x15] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x16] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x17] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x18] = temp_v2;
    puVar1[temp_v1 * 0x62 + 0x19] = 0;
    puVar1[temp_v1 * 0x62 + 0x1a] = 0xffffffff;
    puVar1[temp_v1 * 0x62 + 0x1b] = 1;
    puVar1[temp_v1 * 0x62 + 0x1c] = temp_v3;
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0x21) = 0;
    puVar1[temp_v1 * 0x62 + 0x22] = 0;
    puVar1[temp_v1 * 0x62 + 0x23] = 0;
    puVar1[temp_v1 * 0x62 + 0x24] = 0;
    puVar1[temp_v1 * 0x62 + 0x25] = 0;
    puVar1[temp_v1 * 0x62 + 0x26] = 0;
    puVar1[temp_v1 * 0x62 + 0x27] = 0;
    puVar1[temp_v1 * 0x62 + 0x28] = 0;
    puVar1[temp_v1 * 0x62 + 0x29] = 0;
    puVar1[temp_v1 * 0x62 + 0x2a] = 0;
    puVar1[temp_v1 * 0x62 + 0x2b] = 1;
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0x2c) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0xb1) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0xb2) = 0;
    puVar1[temp_v1 * 0x62 + 0x2e] = 0;
    puVar1[temp_v1 * 0x62 + 0x2f] = 0;
    temp_v0 = randRange(200);
    puVar1[temp_v1 * 0x62 + 0x30] = temp_v0 + 0x3c;
    puVar1[temp_v1 * 0x62 + 0x31] = 0;
    puVar1[temp_v1 * 0x62 + 0x69] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0x5c) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x171) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x172) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x173) = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0x5d) = 0;
    *(unsigned short *)(puVar1 + temp_v1 * 0x62 + 0x5b) = 0;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x188 + 0x16e) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x175) = 0;
    puVar1[temp_v1 * 0x62 + 0x5e] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0x5f) = 0;
    puVar1[temp_v1 * 0x62 + 0x60] = temp_v2;
    *(unsigned short *)(puVar1 + temp_v1 * 0x62 + 0x6a) = 999;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x188 + 0x1aa) = 0;
    puVar1[temp_v1 * 0x62 + 0x6c] = 0;
    puVar1[temp_v1 * 0x62 + 0x6d] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x62 + 0x6e) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x1b9) = 0;
    temp_v0 = temp_v1 + 1;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x1ae) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x188 + 0x1af) = 1;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x28);
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 + 1;
    puVar1[temp_v1 * 2 + 0xf63] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 2 + 0xf64) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 8 + 0x3d91) = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x15);
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 + 1;
    puVar1[temp_v1 * 0x31 + 0xf8e] = 0;
    puVar1[temp_v1 * 0x31 + 0xf8d] = 0xffffffff;
    puVar1[temp_v1 * 0x31 + 0xf8f] = 0;
    puVar1[temp_v1 * 0x31 + 0xf90] = 0;
    puVar1[temp_v1 * 0x31 + 0xf91] = 0;
    puVar1[temp_v1 * 0x31 + 0xf92] = 0;
    puVar1[temp_v1 * 0x31 + 0xf93] = 0;
    puVar1[temp_v1 * 0x31 + 0xf94] = 0;
    puVar1[temp_v1 * 0x31 + 0xf95] = 0;
    puVar1[temp_v1 * 0x31 + 0xf96] = 0;
    puVar1[temp_v1 * 0x31 + 0xf97] = 0;
    puVar1[temp_v1 * 0x31 + 0xf98] = 0;
    puVar1[temp_v1 * 0x31 + 0xf99] = 0;
    puVar1[temp_v1 * 0x31 + 0xf9a] = 0;
    puVar1[temp_v1 * 0x31 + 0xf9b] = 0;
    puVar1[temp_v1 * 0x31 + 0xf9c] = 0;
    puVar1[temp_v1 * 0x31 + 0xf9d] = 0;
    puVar1[temp_v1 * 0x31 + 0xf9e] = 0;
    puVar1[temp_v1 * 0x31 + 3999] = 0;
    puVar1[temp_v1 * 0x31 + 4000] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa1] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa2] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa3] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa4] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa5] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa6] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa7] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa8] = 0;
    puVar1[temp_v1 * 0x31 + 0xfa9] = 0;
    puVar1[temp_v1 * 0x31 + 0xfaa] = 0;
    puVar1[temp_v1 * 0x31 + 0xfab] = 0;
    puVar1[temp_v1 * 0x31 + 0xfac] = 0;
    puVar1[temp_v1 * 0x31 + 0xfad] = 0;
    puVar1[temp_v1 * 0x31 + 0xfae] = 0;
    puVar1[temp_v1 * 0x31 + 0xfaf] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb0] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb1] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb2] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb3] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb4] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb5] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb6] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb7] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb8] = 0;
    puVar1[temp_v1 * 0x31 + 0xfb9] = 0;
    puVar1[temp_v1 * 0x31 + 0xfba] = 0;
    puVar1[temp_v1 * 0x31 + 0xfbb] = 0;
    puVar1[temp_v1 * 0x31 + 0xfbc] = 0;
    puVar1[temp_v1 * 0x31 + 0xfbd] = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x10);
  puVar1[0x129d] = 0;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 + 1;
    puVar1[temp_v1 * 4 + 0x129f] = 0;
    puVar1[temp_v1 * 4 + 0x129e] = 0xffffffff;
    puVar1[temp_v1 * 4 + 0x12a0] = 0;
    puVar1[temp_v1 * 4 + 0x12a1] = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x10);
  puVar1[0x12de] = 0;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 + 1;
    puVar1[temp_v1 * 4 + 0x12e0] = 0;
    puVar1[temp_v1 * 4 + 0x12df] = 0xffffffff;
    puVar1[temp_v1 * 4 + 0x12e1] = 0;
    puVar1[temp_v1 * 4 + 0x12e2] = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x10);
  puVar1[0x131f] = 0;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 + 1;
    puVar1[temp_v1 * 4 + 0x1321] = 0;
    puVar1[temp_v1 * 4 + 0x1320] = 0xffffffff;
    puVar1[temp_v1 * 4 + 0x1322] = 0;
    puVar1[temp_v1 * 4 + 0x1323] = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x10);
  puVar1[0x1360] = 0;
  return;
}

} /* extern "C" */
