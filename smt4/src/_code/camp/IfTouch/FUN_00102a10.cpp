/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102a10` (_code @ 0x102a10, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(void);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c5788(unsigned char *, int, int, int, unsigned char *, unsigned char *, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00102b04; /* 0x102b04 */
extern unsigned char LAB_00107d28; /* 0x107d28 */
extern unsigned char LAB_0010a2f4; /* 0x10a2f4 */
extern signed char DAT_0043dcb0; /* 0x43dcb0 */
extern unsigned int *DAT_0043dcb4; /* 0x43dcb4 */

/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_00102a10(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043dcb0 < '\x01') {
    if (DAT_0043dcb4 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      FUN_002c498c(0x100,0x100,0,0x680,1);
      DAT_0043dcb4 = puVar1;
    }
    puVar1 = DAT_0043dcb4;
    FUN_002c4938();
    puVar2 = &LAB_00102b04;
    FUN_002c5788(&LAB_00102b04,1,0,0,&LAB_00107d28,&LAB_0010a2f4,0);
    *puVar1 = (unsigned int)puVar2;
    *(unsigned short *)((int)puVar1 + 0x64e) = 0xffff;
    *(unsigned short *)((int)puVar1 + 0x64a) = 10;
    *(unsigned short *)(puVar1 + 0x193) = 0;
  }
  DAT_0043dcb0 = DAT_0043dcb0 + '\x01';
  return;
}

} /* extern "C" */
