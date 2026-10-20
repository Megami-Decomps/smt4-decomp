/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123750` (_code @ 0x123750, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001330a0(int *);
int FUN_00133644(unsigned int *, unsigned int);
int FUN_001370a8(int *);
int FUN_00137cc4(void);
int FUN_00142a5c(unsigned int *);
int FUN_002bf0dc(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int DAT_0044e32c; /* 0x44e32c */
extern unsigned int *DAT_004655c0; /* 0x4655c0 */

/* Supplied declaration required: FUN_001330a0. */
/* Supplied declaration required: FUN_00133644. */
/* Supplied declaration required: FUN_001370a8. */
/* Supplied declaration required: FUN_00137cc4. */
/* Supplied declaration required: FUN_00142a5c. */
/* Supplied declaration required: FUN_002bf0dc. */


void FUN_00123750(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_004655c0;
  temp_v0 = param_4;
  FUN_002bf0dc();
  param_1 = param_1 & ~puVar1[2];
  if ((puVar1[1] & param_1 & 0x2000) != 0) {
    FUN_00137cc4();
  }
  if (((param_1 & 0x80) != 0) && (temp_v0 = 0x1c00, (*puVar1 & 0x1c00) != 0)) {
    FUN_001370a8(&temp_v0);
  }
  if (((param_1 & 0x100) != 0) && (temp_v0 = 1, (*puVar1 & 1) != 0)) {
    FUN_001330a0(&temp_v0);
  }
  if (((param_1 & 0x200) != 0) && ((*(unsigned int *)(DAT_0044e32c + 8) & *puVar1) != 0)) {
    FUN_00142a5c(puVar1);
  }
  if ((param_1 & 0x1e7f) != 0) {
    *(unsigned char *)(puVar1 + 6) = 1;
    if (param_2 == 0) {
      *(unsigned char *)((int)puVar1 + 0x19) = 1;
    }
    FUN_00133644(puVar1,param_1);
    *(unsigned char *)(puVar1 + 6) = 0;
    *(unsigned char *)((int)puVar1 + 0x19) = 0;
  }
  if ((param_1 & 1) != 0) {
    *puVar1 = *puVar1 & 0xffefffff;
  }
  if ((param_1 & 4) != 0) {
    *puVar1 = *puVar1 & 0xfe7fffff;
  }
  if ((param_1 & 8) != 0) {
    *puVar1 = *puVar1 & 0xff9fffff;
  }
  if ((param_1 & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  if ((param_1 & 0x20) != 0) {
    *puVar1 = *puVar1 & 0xfff7ffff;
  }
  if ((param_1 & 0x40) != 0) {
    *puVar1 = *puVar1 & 0xfdffbfc7;
  }
  if ((param_1 & 0x80) != 0) {
    *puVar1 = *puVar1 & 0xffffe3ff;
  }
  if ((param_1 & 0x100) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1 & 0x200) != 0) {
    *puVar1 = *puVar1 & 0xffff7f3d;
  }
  if ((param_1 & 0x400) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1 & 0x800) != 0) {
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  if ((param_1 & 0x1000) != 0) {
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  puVar1[1] = puVar1[1] & ~param_1;
  FUN_002bf0dc();
  return;
}

} /* extern "C" */
