/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016182c` (_code @ 0x16182c, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178bd4(int *);
int FUN_00179178(unsigned int *, unsigned int);
int FUN_0017cbdc(int *);
int nngxGetError(void);
int FUN_0017e8f4(void);
int FUN_00195af0(unsigned int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int DAT_00589188; /* 0x589188 */
extern unsigned int *DAT_005b4400; /* 0x5b4400 */

/* Supplied declaration required: FUN_00178bd4. */
/* Supplied declaration required: FUN_00179178. */
/* Supplied declaration required: FUN_0017cbdc. */
/* Supplied declaration required: nngxGetError. */
/* Supplied declaration required: FUN_0017e8f4. */
/* Supplied declaration required: FUN_00195af0. */


void FUN_0016182c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_005b4400;
  temp_v0 = param_4;
  nngxGetError();
  param_1 = param_1 & ~puVar1[2];
  if ((puVar1[1] & param_1 & 0x2000) != 0) {
    FUN_0017e8f4();
  }
  if (((param_1 & 0x80) != 0) && (temp_v0 = 0x1c00, (*puVar1 & 0x1c00) != 0)) {
    FUN_0017cbdc(&temp_v0);
  }
  if (((param_1 & 0x100) != 0) && (temp_v0 = 1, (*puVar1 & 1) != 0)) {
    FUN_00178bd4(&temp_v0);
  }
  if (((param_1 & 0x200) != 0) && ((*(unsigned int *)(DAT_00589188 + 8) & *puVar1) != 0)) {
    FUN_00195af0(puVar1);
  }
  if ((param_1 & 0x1e7f) != 0) {
    *(unsigned char *)(puVar1 + 6) = 1;
    if (param_2 == 0) {
      *(unsigned char *)((int)puVar1 + 0x19) = 1;
    }
    FUN_00179178(puVar1,param_1);
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
  nngxGetError();
  return;
}

} /* extern "C" */
