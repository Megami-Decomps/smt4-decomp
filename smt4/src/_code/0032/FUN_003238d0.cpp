/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003238d0` (_code @ 0x3238d0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002430c8(unsigned char *, int, unsigned char [256]);
int FUN_00246854(void);
int FUN_002bf694(unsigned int *, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00323944; /* 0x323944 */
extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400002; /* 0x400002 */
extern int DAT_0044ea94; /* 0x44ea94 */

/* Supplied declaration required: FUN_002430c8. */
/* Supplied declaration required: FUN_00246854. */
/* Supplied declaration required: FUN_002bf694. */
extern unsigned int *FUN_002f325c(int, unsigned char *);


unsigned char * FUN_003238d0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char temp_v0 [256];
  int temp_v1;
  
  puVar3 = &DAT_00400001;
  FUN_002430c8(&LAB_00323944,0x20,temp_v0);
  if (temp_v1 == 2) {
    puVar3 = (unsigned char *)0x400000;
  }
  else if (temp_v1 == 1) {
    if (DAT_0044ea94 != 0) {
      puVar1 = (unsigned int *)FUN_002f325c(DAT_0044ea94,temp_v0);
      puVar2 = puVar1;
      FUN_00246854();
      FUN_002bf694(puVar1 + 0x27,*puVar2);
    }
    puVar3 = &DAT_00400002;
  }
  return puVar3;
}

} /* extern "C" */
