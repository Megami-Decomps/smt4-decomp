/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313704` (_code @ 0x313704, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025011c(void);
int effMenuNodeCreate(void);
int FUN_002bf694(unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00313758; /* 0x313758 */
extern unsigned char DAT_0044ea80; /* 0x44ea80 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */

/* Supplied declaration required: FUN_0025011c. */
/* Supplied declaration required: effMenuNodeCreate. */
/* Supplied declaration required: FUN_002bf694. */
extern unsigned int FUN_002c30c4(unsigned char *);


void FUN_00313704(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if ((*(unsigned int * *)((unsigned char *)&DAT_0044ea80 + 0x48)) != (unsigned int *)0x0) {
    FUN_0025011c();
    (*(unsigned int * *)((unsigned char *)&DAT_0044ea80 + 0x48)) = (unsigned int *)0x0;
  }
  puVar2 = (unsigned int *)&LAB_00313758;
  effMenuNodeCreate();
  (*(unsigned int * *)((unsigned char *)&DAT_0044ea80 + 0x48)) = puVar2;
  *puVar2 = 0xb6;
  puVar2[1] = 100;
  puVar2 = (*(unsigned int * *)((unsigned char *)&DAT_0044ea80 + 0x48));
  FUN_002bf694((unsigned char *)((int)(*(unsigned int * *)((unsigned char *)&DAT_0044ea80 + 0x48)) + 0x21));
  temp_v0 = FUN_002c30c4(&DAT_004d8bd0);
  puVar2[4] = temp_v0;
  return;
}

} /* extern "C" */
