/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035243c` (_code @ 0x35243c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [68], unsigned char *, unsigned int, unsigned int, unsigned int);
int FUN_0013c174(unsigned char [68], int *, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_0032cb48(int);
int FUN_003f9c0c(void);
int FUN_003f9e80(void);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern unsigned char LAB_00352518; /* 0x352518 */
extern unsigned char LAB_00352538; /* 0x352538 */
extern int DAT_005806a4; /* 0x5806a4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_0032c1ac(void);
/* Supplied declaration required: FUN_0032cb48. */
/* Supplied declaration required: FUN_003f9c0c. */
/* Supplied declaration required: FUN_003f9e80. */


void FUN_0035243c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int uStack_5c;
  unsigned char temp_v2 [68];
  
  if (*(int **)(DAT_005806a4 + 700) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_005806a4 + 700) + 4))();
    temp_v0 = DAT_005806a4;
    puVar2 = (unsigned int *)(DAT_005806a4 + 0x2c0);
    *(unsigned int *)(DAT_005806a4 + 700) = 0;
    temp_v1 = *puVar2;
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x2c4);
    *(unsigned int *)(temp_v0 + 0x40) = *(unsigned int *)(temp_v0 + 0x2c8);
    *(unsigned int *)(temp_v0 + 0x44) = *(unsigned int *)(temp_v0 + 0x2cc);
    *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(temp_v0 + 0x2d0);
    *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x2d4);
    *(unsigned char *)(temp_v0 + 0x2b8) = 0;
    *(unsigned char *)(temp_v0 + 0x304) = 0;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x2c4);
    *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x2c8);
    *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x2cc);
    *(unsigned int *)(temp_v0 + 0x60) = *(unsigned int *)(temp_v0 + 0x2d0);
    *(unsigned int *)(temp_v0 + 100) = *(unsigned int *)(temp_v0 + 0x2d4);
  }
  uStack_5c = 0;
  FUN_00100388(temp_v2,&LAB_00352518,param_1,param_1,param_2);
  FUN_0013c174(temp_v2,&uStack_5c,1);
  temp_v0 = 0x48;
  FUN_00178b04(0x48,&LAB_00352538,0x15ad);
  if (temp_v0 != 0) {
    FUN_003f9e80();
  }
  *(int *)(DAT_005806a4 + 700) = temp_v0;
  FUN_003f9c0c();
  temp_v0 = FUN_0032c1ac();
  if (temp_v0 != 0) {
    FUN_0032cb48(0);
  }
  return;
}

} /* extern "C" */
