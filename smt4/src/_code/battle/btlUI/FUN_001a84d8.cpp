/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a84d8` (_code @ 0x1a84d8, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002898e4(void);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_003ad76c(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0019e138(...); /* 0x19e138 */
extern unsigned char LAB_001a8658; /* 0x1a8658 */
extern unsigned char LAB_001a8668; /* 0x1a8668 */
extern unsigned char LAB_001a867c; /* 0x1a867c */
extern unsigned char LAB_001a8694; /* 0x1a8694 */
extern unsigned char LAB_001a86a8; /* 0x1a86a8 */
extern int FUN_001b72e0(...); /* 0x1b72e0 */
extern unsigned char LAB_001e4bec; /* 0x1e4bec */
extern unsigned char LAB_001e4bf0; /* 0x1e4bf0 */
extern unsigned char LAB_0020f560; /* 0x20f560 */
extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_003ad76c. */


void FUN_001a84d8(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  FUN_002898e4();
  if ((*(int * *)((unsigned char *)&DAT_00439c88 + 0x20)) == (int *)0x0) {
    piVar1 = (int *)0x100;
    FUN_002c498c(0x100,0x100,0,0xf040,1);
    (*(int * *)((unsigned char *)&DAT_00439c88 + 0x20)) = piVar1;
  }
  piVar1 = (*(int * *)((unsigned char *)&DAT_00439c88 + 0x20));
  puVar2 = &LAB_001a8658;
  FUN_002c4a08(&LAB_001a8658,2,0,0,FUN_0019e138,&LAB_001e4bec,param_1,*param_1);
  param_1[0x15] = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_001a8668,0x7a,0,0,FUN_001b72e0,0,param_1,puVar2);
  FUN_002c4a08(&LAB_001a867c,0xd8,0,0,FUN_001b72e0,0,param_1,param_1[0x15]);
  FUN_002c4a08(&LAB_001a8694,0xe7,0,0,&LAB_001e4bf0,0,param_1,param_1[0x15]);
  FUN_002c4a08(&LAB_001a86a8,0xe9,0,0,&LAB_0020f560,0,param_1,param_1[0x15]);
  FUN_003ad76c(piVar1,param_1);
  *piVar1 = (int)param_1;
  return;
}

} /* extern "C" */
