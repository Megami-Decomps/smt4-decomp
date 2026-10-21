/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0274` (_code @ 0x2e0274, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerCreateLoaded(unsigned char *, int);
int FUN_002a0428(unsigned int, int);
int gameGetMapBlock(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002e0384; /* 0x2e0384 */
extern int g_mapStateSlots; /* 0x44cd88 */

/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: gameGetMapBlock. */


void FUN_002e0274(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  gameGetMapBlock();
  temp_v0 = g_mapStateSlots;
  *(unsigned short *)(g_mapStateSlots + 8) = 0;
  *(unsigned short *)(temp_v0 + 4) = 0x18;
  *(unsigned short *)(temp_v0 + 6) = 1;
  *(unsigned short *)(temp_v0 + 10) = 1;
  puVar2 = &LAB_002e0384;
  asdMdlManagerCreateLoaded(&LAB_002e0384,0x1c0);
  temp_v0 = g_mapStateSlots;
  *(unsigned char **)(g_mapStateSlots + *(short *)(g_mapStateSlots + 10) * 8 + 0x1c) = puVar2;
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v0 + temp_v1 * 0x4c + 0x58) == '\0') goto LAB_002e02f8;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  temp_v1 = -1;
LAB_002e02f8:
  *(short *)(temp_v0 + 0xc) = (short)temp_v1;
  temp_v1 = temp_v0 + (short)temp_v1 * 0x4c;
  *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
  *(unsigned char *)(temp_v1 + 0x58) = 1;
  *(unsigned int *)(temp_v1 + 0x60) = 0;
  *(unsigned int *)(temp_v1 + 0x5c) = 1;
  *(unsigned int *)(temp_v1 + 0x70) = 0;
  *(unsigned int *)(temp_v1 + 100) = in_s0;
  *(unsigned int *)(temp_v1 + 0x68) = in_s1;
  *(unsigned int *)(temp_v1 + 0x6c) = in_s2;
  *(unsigned int *)(temp_v1 + 0x74) = 0;
  *(unsigned char *)(temp_v1 + 0x78) = 1;
  *(unsigned short *)(temp_v1 + 0x7a) = 0;
  temp_v0 = g_mapStateSlots;
  *(unsigned short *)(temp_v1 + 0x7c) = *(unsigned short *)(g_mapStateSlots + 10);
  *(int *)(temp_v1 + 0x80) = -param_1;
  *(unsigned char *)(temp_v1 + 0x84) = 0;
  *(unsigned int *)(temp_v1 + 0x88) = 0;
  *(unsigned char *)(temp_v1 + 0x8c) = 0;
  temp_v2 = (int)*(short *)(temp_v0 + 10);
  *(int *)(temp_v1 + 0x90) = temp_v2;
  FUN_002a0428(*(unsigned int *)(temp_v0 + temp_v2 * 8 + 0x1c),1);
  return;
}

} /* extern "C" */
