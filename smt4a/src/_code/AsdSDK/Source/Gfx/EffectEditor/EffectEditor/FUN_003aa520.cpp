/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa520` (_code @ 0x3aa520, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e342c(unsigned char *);
int effMenuNodeCreate(void);
int FUN_00390364(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_003aa574; /* 0x3aa574 */
extern unsigned char DAT_0059dbe0; /* 0x59dbe0 */
extern unsigned char DAT_00634c50; /* 0x634c50 */

extern unsigned int wstrlen(unsigned char *);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: effMenuNodeCreate. */
/* Supplied declaration required: FUN_00390364. */


void FUN_003aa520(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if ((*(unsigned int * *)((unsigned char *)&DAT_0059dbe0 + 0x48)) != (unsigned int *)0x0) {
    FUN_00390364();
    (*(unsigned int * *)((unsigned char *)&DAT_0059dbe0 + 0x48)) = (unsigned int *)0x0;
  }
  puVar2 = (unsigned int *)&LAB_003aa574;
  effMenuNodeCreate();
  (*(unsigned int * *)((unsigned char *)&DAT_0059dbe0 + 0x48)) = puVar2;
  *puVar2 = 0xb6;
  puVar2[1] = 100;
  puVar2 = (*(unsigned int * *)((unsigned char *)&DAT_0059dbe0 + 0x48));
  FUN_002e342c((unsigned char *)((int)(*(unsigned int * *)((unsigned char *)&DAT_0059dbe0 + 0x48)) + 0x21));
  temp_v0 = wstrlen(&DAT_00634c50);
  puVar2[4] = temp_v0;
  return;
}

} /* extern "C" */
