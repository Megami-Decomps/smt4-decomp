/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011439c` (_code @ 0x11439c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00130900(unsigned char [8], int *, int *, int *);
int FUN_002e6e14(...);
int FUN_002e9ff4(int *);
int FUN_002f2878(void);
int FUN_002f4fd8(unsigned int *);
int FUN_002fa722(unsigned int, int, int *);
int FUN_002ff3b8(int *, int *, int, unsigned char [8]);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_0055963c; /* 0x55963c */
extern signed char DAT_00594966; /* 0x594966 */

/* Supplied declaration required: FUN_00130900. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e9ff4. */
/* Supplied declaration required: FUN_002f2878. */
/* Supplied declaration required: FUN_002f4fd8. */
/* Supplied declaration required: FUN_002fa722. */
/* Supplied declaration required: FUN_002ff3b8. */
extern int FUN_002ff3f8(unsigned int *, unsigned int *);


void FUN_0011439c(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  int iStack_28;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [8];
  
  *param_1 = (unsigned int)&DAT_0055963c;
  if (DAT_00594966 == '\0') {
    FUN_002e9ff4(&temp_v3);
    temp_v2 = *(unsigned int *)(param_1[0xc] + 8);
    while( 1 ) {
      temp_v4 = param_1[0xc];
      temp_v0 = FUN_002ff3f8((unsigned int *)&temp_v2,(unsigned int *)&temp_v4);
      if (temp_v0 == 0) break;
      temp_v5 = temp_v3;
      temp_v6 = uStack_2c;
      temp_v7 = iStack_28;
      FUN_002ff3b8(&temp_v1,&temp_v2,0,temp_v8);
      FUN_002fa722(*(unsigned int *)(temp_v1 + 0x14),4,&temp_v5);
    }
  }
  param_1 = param_1 + 0xf;
  FUN_002f2878();
  piVar3 = (int *)(param_1 + -7);
  temp_v0 = param_1[-3];
  if (temp_v0 != 0) {
    temp_v6 = *(unsigned int *)(temp_v0 + 8);
    temp_v7 = temp_v0;
    FUN_00130900(temp_v8,piVar3,&temp_v6,&temp_v7);
    temp_v0 = param_1[-3];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[-6];
    param_1[-6] = temp_v0;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
  }
  FUN_002f4fd8(param_1 + -0xf);
  return;
}

} /* extern "C" */
