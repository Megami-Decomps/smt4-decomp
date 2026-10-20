/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b75b0` (_code @ 0x2b75b0, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [32], unsigned char *);
int FUN_0014aa88(void);
int asdMemoryAllocTracked(int, int, int, int);
int FUN_001642e4(unsigned char *, unsigned int [2], int, int);
int FUN_001abbc4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_002b7784; /* 0x2b7784 */
extern unsigned char LAB_002b77a0; /* 0x2b77a0 */
extern int DAT_00580c8c; /* 0x580c8c */
extern int g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0014aa88. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_001abbc4. */


void FUN_002b75b0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned int temp_v3 [2];
  unsigned char temp_v4 [32];
  
  if (DAT_00580c8c == 0) {
    temp_v3[0] = 1;
    temp_v0 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x64c);
    DAT_00580c8c = temp_v0;
    FUN_0014aa88();
    temp_v1 = 0;
    do {
      temp_v2 = temp_v1 + 1;
      temp_v1 = temp_v0 + temp_v1 * 100;
      *(unsigned int *)(temp_v1 + 0xc) = 0;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x20) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = 0;
      *(unsigned int *)(temp_v1 + 0x28) = 0;
      *(unsigned int *)(temp_v1 + 0x2c) = 0;
      *(unsigned int *)(temp_v1 + 0x30) = 0;
      *(unsigned int *)(temp_v1 + 0x34) = 0;
      *(unsigned int *)(temp_v1 + 0x38) = 0;
      *(unsigned int *)(temp_v1 + 0x3c) = 0;
      *(unsigned int *)(temp_v1 + 0x40) = 0;
      *(unsigned int *)(temp_v1 + 0x44) = 0;
      *(unsigned int *)(temp_v1 + 0x48) = 0;
      *(unsigned int *)(temp_v1 + 0x4c) = 0;
      *(unsigned int *)(temp_v1 + 0x50) = 0;
      *(unsigned int *)(temp_v1 + 100) = 0;
      *(unsigned int *)(temp_v1 + 0x68) = 0;
      *(unsigned int *)(temp_v1 + 0x54) = 0;
      *(unsigned int *)(temp_v1 + 0x58) = 0;
      *(unsigned int *)(temp_v1 + 0x5c) = 0;
      *(unsigned int *)(temp_v1 + 0x60) = 0;
      *(unsigned char *)(temp_v1 + 0x6c) = 0;
      temp_v1 = temp_v2;
    } while (temp_v2 < 0x10);
  }
  if (g_gameState == 0x26) {
    FUN_00100388(temp_v4,&LAB_002b7784);
    temp_v1 = DAT_00580c8c;
    puVar3 = temp_v4;
    if (*(int *)(DAT_00580c8c + 0x68) == 0) {
      FUN_001642e4(puVar3,temp_v3,1,0x80);
      *(unsigned char **)(temp_v1 + 100) = puVar3;
      FUN_001abbc4();
      *(unsigned char **)(temp_v1 + 0x68) = puVar3;
    }
  }
  if ((g_gameState == 0x2b || g_gameState == 0x2c) || g_gameState == 0x2f) {
    FUN_00100388(temp_v4,&LAB_002b7784);
    temp_v1 = DAT_00580c8c;
    puVar3 = temp_v4;
    if (*(int *)(DAT_00580c8c + 0x68) == 0) {
      FUN_001642e4(puVar3,temp_v3,1,0x80);
      *(unsigned char **)(temp_v1 + 100) = puVar3;
      FUN_001abbc4();
      *(unsigned char **)(temp_v1 + 0x68) = puVar3;
    }
  }
  temp_v1 = DAT_00580c8c;
  puVar3 = &LAB_002b77a0;
  if (*(int *)(DAT_00580c8c + 0x194) == 0) {
    FUN_001642e4(&LAB_002b77a0,temp_v3,1,0x80);
    *(unsigned char **)(temp_v1 + 400) = puVar3;
    FUN_001abbc4();
    *(unsigned char **)(temp_v1 + 0x194) = puVar3;
  }
  return;
}

} /* extern "C" */
