/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdb44` (_code @ 0x2bdb44, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013b608(void);
int FUN_002a8554(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int FUN_002aa624(int, unsigned char *);
int FUN_002ba2b8(void);
int hasExclusiveAccess(int);

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int g_commandBufferEnd; /* 0x4652a4 */
extern unsigned int DAT_00471b58; /* 0x471b58 */
extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c6330; /* 0x4c6330 */
extern int DAT_004e6c5c; /* 0x4e6c5c */
extern unsigned int uRam004e6c60; /* 0x4e6c60 */
extern int iRam004e6c64; /* 0x4e6c64 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: FUN_002aa624. */
/* Supplied declaration required: FUN_002ba2b8. */


void FUN_002bdb44(void)

{
/* irregular: irregular input(s): in_lr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  unsigned char *puVar4;
  unsigned int in_lr;
  unsigned char temp_v2;
  
  temp_v0 = DAT_004c632c;
  temp_v1 = (int)g_commandBufferCursor - *(int *)(DAT_004c632c + 4);
  temp_v2 = (temp_v1 & 8) != 0;
  puVar2 = g_commandBufferCursor;
  if (temp_v2) {
    puVar2 = (unsigned int *)(temp_v1 + 0x18);
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v1;
  if (temp_v2) {
    *(unsigned int **)(temp_v0 + 0xc) = puVar2;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v1 + 0x20;
    if ((unsigned int)puVar2 < g_commandBufferEnd) {
      g_commandBufferCursor = puVar2 + 2;
      puVar2[1] = 0x8025e;
      *puVar2 = 0;
    }
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 1;
    g_commandBufferCursor[1] = 0xf0111;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 1;
    g_commandBufferCursor[1] = 0xf0110;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 0x12345678;
    g_commandBufferCursor[1] = 0xf0010;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  puVar4 = (unsigned char *)(*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x20) * 0x1c);
  *puVar4 = 1;
  *(int *)(puVar4 + 4) = *(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0x14);
  *(int *)(puVar4 + 8) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_002aa624(temp_v0,puVar4);
  }
  temp_v1 = *(unsigned int *)(puVar4 + 0xc);
  *(unsigned int *)(puVar4 + 0xc) = temp_v1 & 0xfffffffd;
  if (*(char *)(temp_v0 + 0x3d) != '\0') {
    *(unsigned int *)(puVar4 + 0xc) = (temp_v1 & 0xfffffffd) | 1;
  }
  *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(temp_v0 + 0xc);
  FUN_0013b608();
  *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
  if (((DAT_004c6330 == temp_v0) && (DAT_004c62a2 != '\0')) && (DAT_004c62a1 == '\0')) {
    DAT_004c62a1 = '\x01';
    FUN_002ba2b8();
  }
  iRam004e6c64 = iRam004e6c64 - 1;
  if (iRam004e6c64 != 0) {
    return;
  }
  uRam004e6c60 = 0;
  do {
    temp_v0 = -DAT_004e6c5c;
    temp_v2 = (unsigned char)hasExclusiveAccess(0x4e6c5c);
  } while (!temp_v2);
  temp_v2 = DAT_004e6c5c != -1;
  DAT_004e6c5c = temp_v0;
  if (temp_v2 && 0 < temp_v0) {
    FUN_002a8554(DAT_00471b58,&DAT_004e6c5c,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}

} /* extern "C" */
