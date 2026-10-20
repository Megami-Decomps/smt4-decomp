/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003457b8` (_code @ 0x3457b8, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);
int taskCreateDraw(...);
int asdMemoryAlloc(int, int, int, int, int);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, unsigned char *);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0031a5e4(...); /* 0x31a5e4 */
extern unsigned char LAB_00345924; /* 0x345924 */
extern unsigned char LAB_00345934; /* 0x345934 */
extern unsigned char LAB_0034596c; /* 0x34596c */
extern unsigned char LAB_00345980; /* 0x345980 */
extern int FUN_0036dfa8(...); /* 0x36dfa8 */
extern int FUN_0036dff4(...); /* 0x36dff4 */
extern unsigned int *DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f210; /* 0x57f210 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_0023723c. */


void FUN_003457b8(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x24,1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  DAT_0057f210 = puVar1;
  temp_v0 = spriteHandleCreate(0);
  puVar1[3] = temp_v0;
  FUN_0023723c(temp_v0,2,0xffffffff,0,0,&LAB_00345924);
  temp_v0 = spriteHandleCreate(0);
  puVar1[4] = temp_v0;
  FUN_0023723c(temp_v0,2,0xffffffff,0,0,&LAB_00345934);
  FUN_0014384c(0x22);
  FUN_0014afd0(0x22,0);
  puVar3 = &LAB_0034596c;
  taskCreateDraw(&LAB_0034596c,4,8,0,FUN_0031a5e4,FUN_0036dfa8,puVar1,*DAT_0057f20c);
  *puVar1 = (unsigned int)puVar3;
  taskCreateDraw(&LAB_00345980,0xeb,8,0,FUN_0036dff4,0,puVar1,puVar3);
  return;
}

} /* extern "C" */
