/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb01c` (_code @ 0x3bb01c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcpy(unsigned char *);
int effMenuNodeCreate(void);
int FUN_00390364(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_003bb080; /* 0x3bb080 */
extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int *DAT_0059dc24; /* 0x59dc24 */
extern int DAT_0059e9b4; /* 0x59e9b4 */

extern unsigned int wstrlen(int);
/* Supplied declaration required: libc_strcpy. */
extern int FUN_00300778(unsigned int, int);
/* Supplied declaration required: effMenuNodeCreate. */
/* Supplied declaration required: FUN_00390364. */


void FUN_003bb01c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  if (DAT_0059dc24 != (unsigned int *)0x0) {
    FUN_00390364();
  }
  puVar2 = (unsigned int *)&LAB_003bb080;
  effMenuNodeCreate();
  DAT_0059dc24 = puVar2;
  *puVar2 = 0xc2;
  puVar2[1] = 200;
  DAT_0059dc24[5] = 9;
  temp_v1 = FUN_00300778(DAT_0059dbf4,DAT_0059dbec + DAT_0059e9b4);
  puVar2 = DAT_0059dc24;
  libc_strcpy((unsigned char *)((int)DAT_0059dc24 + 0x21));
  temp_v0 = wstrlen(temp_v1 + 0x9c);
  puVar2[4] = temp_v0;
  return;
}

} /* extern "C" */
