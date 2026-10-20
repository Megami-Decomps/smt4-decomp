/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e31d0` (_code @ 0x2e31d0, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295720(...);
int FUN_00297410(...);
int FUN_002bff50(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_002e3308; /* 0x2e3308 */
extern unsigned char LAB_002e3318; /* 0x2e3318 */
extern int FUN_00329b70(...); /* 0x329b70 */
extern int FUN_0032ae80(...); /* 0x32ae80 */
extern int FUN_00330ac8(...); /* 0x330ac8 */
extern unsigned int *DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_00295720. */
/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_002e31d0(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043dd90 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x958,1);
    DAT_0043dd90 = puVar1;
  }
  puVar1 = DAT_0043dd90;
  FUN_002c4938();
  puVar2 = &LAB_002e3308;
  FUN_002c5788(&LAB_002e3308,2,0,0,FUN_00329b70,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_002e3318,0xe7,0,0,FUN_00330ac8,0,0,puVar2);
  FUN_002c4a08(&LAB_002e3318,0x6f,0,0,FUN_0032ae80,0,0,*puVar1);
  FUN_00295720();
  FUN_002bff50();
  FUN_00297410(0x25);
  return;
}

} /* extern "C" */
