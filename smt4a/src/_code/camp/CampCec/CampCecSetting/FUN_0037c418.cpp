/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c418` (_code @ 0x37c418, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_0015155c(...);
int FUN_00163060(int, int, int, int, int);
int FUN_001681cc(...);
int FUN_002804b0(...);
int FUN_002e6354(void);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_002c0480; /* 0x2c0480 */
extern unsigned char LAB_002c049c; /* 0x2c049c */
extern unsigned char LAB_0037c598; /* 0x37c598 */
extern unsigned char LAB_0037c5b0; /* 0x37c5b0 */
extern unsigned char LAB_0037c5cc; /* 0x37c5cc */
extern unsigned char LAB_0037c5e8; /* 0x37c5e8 */
extern unsigned char LAB_0037c600; /* 0x37c600 */
extern unsigned int *DAT_0057f12c; /* 0x57f12c */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_0037c418(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f12c == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x44,1);
    DAT_0057f12c = puVar1;
  }
  puVar1 = DAT_0057f12c;
  FUN_002e6354();
  puVar2 = &LAB_0037c598;
  FUN_0014e38c(&LAB_0037c598,3,0,0,&LAB_002c049c,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0037c5b0,0x86,0,0,&LAB_002c0480,0,0,puVar2);
  FUN_0015155c(&LAB_0037c5cc,0xe2,0,0,&LAB_002c0480,0,0,*puVar1);
  FUN_002804b0(&LAB_0037c5e8,puVar1 + 2,0);
  FUN_002804b0(&LAB_0037c600,puVar1 + 3,0);
  puVar1[0xe] = 0;
  *(unsigned char *)(puVar1 + 0xf) = 2;
  puVar1[6] = 2;
  puVar1[7] = 3;
  puVar1[8] = 4;
  puVar1[9] = 5;
  puVar1[10] = 6;
  puVar1[4] = 0;
  puVar1[5] = 1;
  puVar1[0xb] = 10;
  puVar1[0xc] = 7;
  puVar1[0xd] = 0xb;
  FUN_001681cc(0xe4);
  return;
}

} /* extern "C" */
