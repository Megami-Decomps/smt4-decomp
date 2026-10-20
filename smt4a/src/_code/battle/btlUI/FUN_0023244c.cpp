/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023244c` (_code @ 0x23244c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163060(int, int, int, int, int);
int FUN_0031a400(void);
int FUN_004a8ef4(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_002248f8(...); /* 0x2248f8 */
extern unsigned char LAB_002325d0; /* 0x2325d0 */
extern unsigned char LAB_002325e0; /* 0x2325e0 */
extern unsigned char LAB_002325f4; /* 0x2325f4 */
extern unsigned char LAB_0023260c; /* 0x23260c */
extern unsigned char LAB_00232620; /* 0x232620 */
extern int FUN_0024e31c(...); /* 0x24e31c */
extern unsigned char LAB_00298670; /* 0x298670 */
extern unsigned char LAB_00298674; /* 0x298674 */
extern unsigned char LAB_002df668; /* 0x2df668 */
extern int *DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_004a8ef4. */


void FUN_0023244c(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  FUN_0031a400();
  if (DAT_0057a9c8 == (int *)0x0) {
    piVar1 = (int *)0x100;
    FUN_00163060(0x100,0x100,0,0x13018,1);
    DAT_0057a9c8 = piVar1;
  }
  piVar1 = DAT_0057a9c8;
  puVar2 = &LAB_002325d0;
  FUN_0015155c(&LAB_002325d0,4,0,0,FUN_002248f8,&LAB_00298670,param_1,*param_1);
  param_1[0x1e] = (unsigned int)puVar2;
  FUN_0015155c(&LAB_002325e0,0x7e,0,0,FUN_0024e31c,0,param_1,puVar2);
  FUN_0015155c(&LAB_002325f4,0xda,0,0,FUN_0024e31c,0,param_1,param_1[0x1e]);
  FUN_0015155c(&LAB_0023260c,0xeb,0,0,&LAB_00298674,0,param_1,param_1[0x1e]);
  FUN_0015155c(&LAB_00232620,0xed,0,0,&LAB_002df668,0,param_1,param_1[0x1e]);
  FUN_004a8ef4(piVar1,param_1);
  *piVar1 = (int)param_1;
  return;
}

} /* extern "C" */
