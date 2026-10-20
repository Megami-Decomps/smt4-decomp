/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb378` (_code @ 0x2bb378, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c131c(int, int);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c526c(void);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_00465660; /* 0x465660 */
extern int DAT_00465664; /* 0x465664 */
extern int DAT_00465668; /* 0x465668 */
extern int DAT_004656b0; /* 0x4656b0 */

/* Supplied declaration required: FUN_002c131c. */
extern int FUN_002c1364(unsigned int *, int, unsigned int, unsigned int);
extern unsigned int FUN_002c30c4(void);
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_002bb378(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  
  if (DAT_00465668 != 0) {
    puVar1 = temp_v3;
    temp_v2 = DAT_00465668;
    FUN_002c40f8(puVar1,&temp_v2,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
  }
  if (DAT_00465664 == 0) {
    DAT_00465664 = DAT_00465660;
  }
  temp_v0 = DAT_00465664;
  if (DAT_004656b0 != 0) {
    temp_v0 = -0x1f5f3007;
  }
  else {
    temp_v1 = FUN_002c30c4();
    temp_v0 = FUN_002c1364((unsigned int *)&DAT_004656b0,temp_v0,temp_v1,0);
  }
  if (-1 < temp_v0) {
    return;
  }
  FUN_002c131c(temp_v0,0x2bb40c);
  return;
}

} /* extern "C" */
