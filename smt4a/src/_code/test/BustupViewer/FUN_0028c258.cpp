/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c258` (_code @ 0x28c258, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [68], unsigned char *, int);
int FUN_00180118(int);
int FUN_0023723c(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char DAT_00536bd4; /* 0x536bd4 */
extern unsigned char DAT_00536bd8; /* 0x536bd8 */
extern int DAT_00588ff0; /* 0x588ff0 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_0023723c. */


void FUN_0028c258(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = DAT_00588ff0;
  temp_v2 = *(unsigned int *)(DAT_00588ff0 + *(int *)(DAT_00588ff0 + 0x50) * 4 + 0x54);
  temp_v1 = temp_v2;
  FUN_00180118(temp_v1);
  FUN_00100388(temp_v3,&DAT_00536bd4,temp_v1);
  if (temp_v2 != 0) {
    FUN_0023723c(*(unsigned int *)(temp_v0 + 0xa0),2,0xffffffff,0,0,temp_v3);
    return;
  }
  FUN_0023723c(*(unsigned int *)(temp_v0 + 0xa0),2,0xffffffff,0,0,&DAT_00536bd8);
  return;
}

} /* extern "C" */
