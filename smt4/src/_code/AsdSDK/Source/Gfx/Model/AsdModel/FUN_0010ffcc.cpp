/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ffcc` (_code @ 0x10ffcc, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bcc60(unsigned int *, int *, unsigned char *, unsigned char **);
int FUN_002c1398(void);
int FUN_002c526c(void);

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

extern unsigned char LAB_0011bd5c; /* 0x11bd5c */
extern unsigned char LAB_0011cd24; /* 0x11cd24 */
extern unsigned char LAB_00123c78; /* 0x123c78 */
extern unsigned char LAB_00123c98; /* 0x123c98 */
extern unsigned char LAB_00123cb0; /* 0x123cb0 */
extern unsigned int *DAT_00471b94; /* 0x471b94 */
extern unsigned int DAT_00471b9c; /* 0x471b9c */
extern unsigned int DAT_004e9db8; /* 0x4e9db8 */

extern unsigned int FUN_0011cec8(unsigned int **);
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c1398. */
/* Supplied declaration required: FUN_002c526c. */


unsigned int FUN_0010ffcc(void)

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
  
  FUN_002c1398();
  temp_v1 = (unsigned int *)0x0;
  temp_v0 = FUN_0011cec8(&temp_v1);
  if ((temp_v0 & 0x80000000) == 0) {
    DAT_00471b94 = temp_v1;
  }
  if (-1 < (int)temp_v0) {
    temp_v3 = &LAB_0011cd24;
    temp_v4 = 4;
    puVar2 = &DAT_00471b9c;
    temp_v5 = &LAB_00123c78;
    temp_v6 = &LAB_00123cb0;
    temp_v7 = &LAB_00123c98;
    temp_v1 = &DAT_004e9db8;
    uStack_3c = 0x5109d500;
    temp_v2 = 0xfffffffe;
    uStack_34 = 0;
    FUN_002bcc60(&DAT_00471b9c,&temp_v4,&LAB_0011bd5c,&temp_v3);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
  }
  return temp_v0;
}

} /* extern "C" */
