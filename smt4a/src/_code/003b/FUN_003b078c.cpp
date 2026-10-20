/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b078c` (_code @ 0x3b078c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(unsigned int, unsigned int, int, unsigned char *);
int FUN_00312830(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0029092c; /* 0x29092c */
extern unsigned char LAB_002b2d30; /* 0x2b2d30 */
extern unsigned char LAB_003370ec; /* 0x3370ec */
extern unsigned char LAB_003372a8; /* 0x3372a8 */
extern unsigned char LAB_0034f3a4; /* 0x34f3a4 */
extern unsigned char LAB_00360378; /* 0x360378 */
extern unsigned char LAB_00360390; /* 0x360390 */
extern unsigned char LAB_0038e798; /* 0x38e798 */

/* Supplied declaration required: FUN_0010063a. */
extern int *FUN_0016a0f0(unsigned int);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_00312830. */


void FUN_003b078c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  
  temp_v0 = FUN_00187180(5,1);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,4,&LAB_003370ec);
  temp_v0 = FUN_00187180(5,2);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,4,&LAB_0038e798);
  temp_v0 = FUN_00187180(5,3);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,4,&LAB_003372a8);
  temp_v0 = FUN_00187180(5,4);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,0x1c,&LAB_002b2d30);
  temp_v0 = FUN_00187180(5,7);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,4,&LAB_00360378);
  temp_v0 = FUN_00187180(5,8);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,0x14,&LAB_00360390);
  temp_v0 = FUN_00187180(6,1);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  FUN_0010063a(temp_v1,temp_v0,4,&LAB_0034f3a4);
  piVar3 = (int *)FUN_0016a0f0(0x1f);
  FUN_00312830(piVar3 + 1,(*piVar3 - 4U) >> 3,8,&LAB_0029092c);
  return;
}

} /* extern "C" */
