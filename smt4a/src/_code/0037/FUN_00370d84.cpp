/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370d84` (_code @ 0x370d84, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_0015155c(...);
int FUN_0016007c(void);
int FUN_003f5598(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0035d080; /* 0x35d080 */
extern unsigned char LAB_00370e80; /* 0x370e80 */
extern unsigned char LAB_00370e98; /* 0x370e98 */
extern unsigned char LAB_00370ea8; /* 0x370ea8 */
extern unsigned char LAB_00370ebc; /* 0x370ebc */
extern unsigned char LAB_0037d994; /* 0x37d994 */
extern unsigned char LAB_0037d9b8; /* 0x37d9b8 */
extern unsigned int *DAT_0057f258; /* 0x57f258 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_003f5598. */


void FUN_00370d84(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x6d8;
  FUN_0016007c();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0x178] = 0;
    puVar1[4] = 0;
  }
  puVar2 = &LAB_00370e80;
  DAT_0057f258 = puVar1;
  FUN_0014e38c(&LAB_00370e80,4,0,0,&LAB_0035d080,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_00370e98,0x81,0,0,&LAB_0037d9b8,0,0,puVar2);
  FUN_0015155c(&LAB_00370ea8,0xdd,0,0,&LAB_0037d9b8,0,0,*puVar1);
  FUN_0015155c(&LAB_00370ebc,0xeb,0,0,&LAB_0037d994,0,0,*puVar1);
  FUN_003f5598(puVar1);
  return;
}

} /* extern "C" */
