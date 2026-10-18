/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245e38` (_code @ 0x245e38, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00245f00; /* 0x245f00 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_00245e38(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  temp_v0 = DAT_0058103c;
  puVar4 = (unsigned int *)(DAT_0058103c + 0xcc28);
  *(unsigned char *)(DAT_0058103c + 0xcc1c) = 1;
  *(unsigned int *)(temp_v0 + 0xcc20) = 0;
  *(unsigned int *)(temp_v0 + 0xcc24) = 0;
  temp_v1 = 0x20;
  *puVar4 = in_s0;
  *(unsigned int *)(temp_v0 + 0xcc2c) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcc30) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcc34) = in_s3;
  FUN_00178b04(0x20,&LAB_00245f00,0x1827);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  *(unsigned int *)(temp_v0 + 0xcc38) = temp_v2;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(temp_v0 + 0xcc38),0);
  temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0xcc38) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v2);
  FUN_003fd76c(temp_v2,temp_v0 + 0xcc28);
  FUN_003fdb18(temp_v2);
  FUN_003fe86c(temp_v2,0,2);
  return;
}
