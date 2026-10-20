/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cac54` (_code @ 0x2cac54, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiGetEntrySize(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int FUN_002c58c8(...);
int asdTMTexTableLoadTmx(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_002ca708; /* 0x2ca708 */
extern unsigned char LAB_002caf30; /* 0x2caf30 */
extern unsigned char LAB_002caf40; /* 0x2caf40 */
extern unsigned char LAB_002caf4c; /* 0x2caf4c */
extern unsigned char LAB_002caf60; /* 0x2caf60 */
extern unsigned char LAB_002e0820; /* 0x2e0820 */
extern unsigned char LAB_002eb734; /* 0x2eb734 */
extern int staffRollClose(...); /* 0x2f4b38 */
extern unsigned char LAB_002f4bc0; /* 0x2f4bc0 */
extern unsigned char LAB_0030947c; /* 0x30947c */
extern int staffRollScrollUpdate(...); /* 0x3094b8 */
extern unsigned char LAB_0031005c; /* 0x31005c */
extern int staffRollEnterState2(...); /* 0x316f20 */
extern unsigned char LAB_0031b82c; /* 0x31b82c */
extern int staffRollEnterState5(...); /* 0x321988 */
extern unsigned int *g_staffRoll; /* 0x432cc8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: uiGetEntrySize. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */


void FUN_002cac54(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned char *temp_v9;
  romwright_code *temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  
  puVar1 = (unsigned int *)0x10000;
  temp_v9 = (unsigned char *)0x1;
  asdMemAlloc(0x10000,0x100,0,0x764);
  temp_v6 = 0;
  g_staffRoll = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 0x4a) = 0;
  puVar1[0x54] = 0;
  asdTMTexTableLoadTmx(0x34,0);
  temp_v1 = 0;
  do {
    FUN_002c58c8(0x34,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xc);
  temp_v5 = (float)temp_v6;
  temp_v7 = 0.5f;
  temp_v6 = 0x43480000;
  temp_v8 = 520.0f;
  temp_v0 = 0;
  do {
    uiGetEntrySize(0x34,temp_v0 * 1000,&temp_v10,&temp_v9);
    temp_v3 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)&puVar1[temp_v0 * 2 + 0x32] = temp_v3;
    temp_v4 = VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[temp_v0 * 2 + 0x33] = temp_v4;
    puVar1[temp_v0 * 2 + 2] = (float)temp_v6 - temp_v3 * temp_v7;
    temp_v2 = temp_v0 + 1;
    temp_v3 = (float)VectorSignedToFloat(temp_v0 * (int)temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[temp_v0 * 2 + 3] = temp_v3 + temp_v8;
    temp_v0 = temp_v2;
  } while (temp_v2 < 0xc);
  temp_v2 = 0xc;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v2 - 1;
    puVar1[temp_v0 * 2 + 0x1a] = 160.0f - (float)puVar1[temp_v0 * 2 + 0x32] * temp_v7;
    puVar1[temp_v0 * 2 + 0x1b] = temp_v5 * (float)puVar1[temp_v0 * 2 + 0x33] + 240.0f;
    temp_v0 = temp_v0 + 1;
    temp_v5 = temp_v5 + 1.0f;
  } while (temp_v2 != 0);
  *(float *)&puVar1[0x52] = -(float)puVar1[0x49];
  puVar1[0x54] = 0x3f800000;
  puVar1[0x1d6] = 0;
  *(unsigned char *)(puVar1 + 0x1d7) = 0;
  puVar1[0x1d8] = 0xa5;
  g_staffRoll[0x53] = 0;
  puVar1[0x4b] = (unsigned int)&LAB_0030947c;
  puVar1[0x4c] = (unsigned int)staffRollEnterState2;
  puVar1[0x4d] = (unsigned int)staffRollScrollUpdate;
  puVar1[0x4e] = (unsigned int)&LAB_0031005c;
  puVar1[0x4f] = (unsigned int)staffRollEnterState5;
  puVar1[0x50] = (unsigned int)&LAB_002eb734;
  puVar1[0x51] = (unsigned int)&LAB_0031b82c;
  puVar1[0x53] = 0;
  *(unsigned char *)(puVar1 + 1) = 1;
  if (param_1 != 0) {
    *(unsigned char *)(puVar1 + 1) = 0;
  }
  *(unsigned char *)((int)puVar1 + 5) = 0;
  temp_v9 = &LAB_002ca708;
  temp_v10 = staffRollClose;
  temp_v11 = 0;
  puVar2 = &LAB_002caf30;
  asdProcessCreateSimple(&LAB_002caf30,2,0);
  *puVar1 = (unsigned int)puVar2;
  temp_v9 = &LAB_002e0820;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  temp_v12 = puVar2;
  taskCreateDraw(&LAB_002caf40,0x7a,0);
  temp_v12 = (unsigned char *)*puVar1;
  temp_v9 = &LAB_002e0820;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  taskCreateDraw(&LAB_002caf4c,0xd8,0);
  temp_v12 = (unsigned char *)*puVar1;
  temp_v9 = &LAB_002f4bc0;
  temp_v10 = (romwright_code *)0x0;
  temp_v11 = 0;
  taskCreateDraw(&LAB_002caf60,0xe8,0);
  return;
}

} /* extern "C" */
