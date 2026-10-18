/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fed8` (_code @ 0x10fed8, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_0011bc7c; /* 0x11bc7c */
extern unsigned char LAB_0011cc44; /* 0x11cc44 */
extern unsigned char LAB_00123b9c; /* 0x123b9c */
extern unsigned char LAB_00123bbc; /* 0x123bbc */
extern unsigned char LAB_00123bd4; /* 0x123bd4 */
extern unsigned int *DAT_00471b94; /* 0x471b94 */
extern unsigned int DAT_00471b9c; /* 0x471b9c */
extern unsigned int DAT_004e9db8; /* 0x4e9db8 */

extern unsigned int FUN_0011cde8(unsigned int **);
/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002c1570. */
/* Supplied declaration required: FUN_002c5468. */


unsigned int FUN_0010fed8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *temp_v1;
  unsigned int uStack_3c;
  unsigned int temp_v2;
  unsigned int uStack_34;
  unsigned char *temp_v3;
  int temp_v4;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  
  FUN_002c1570();
  temp_v1 = (unsigned int *)0x0;
  temp_v0 = FUN_0011cde8(&temp_v1);
  if ((temp_v0 & 0x80000000) == 0) {
    DAT_00471b94 = temp_v1;
  }
  if (-1 < (int)temp_v0) {
    temp_v3 = &LAB_0011cc44;
    temp_v4 = 4;
    puVar2 = &DAT_00471b9c;
    temp_v5 = &LAB_00123b9c;
    temp_v6 = &LAB_00123bd4;
    temp_v7 = &LAB_00123bbc;
    temp_v1 = &DAT_004e9db8;
    uStack_3c = 0x5109d500;
    temp_v2 = 0xfffffffe;
    uStack_34 = 0;
    FUN_002bce50(&DAT_00471b9c,&temp_v4,&LAB_0011bc7c,&temp_v3);
    if ((int)puVar2 < 0) {
      FUN_002c5468();
    }
  }
  return temp_v0;
}
