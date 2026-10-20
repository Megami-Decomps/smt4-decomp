/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f74ec` (_code @ 0x2f74ec, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f1468(unsigned int *, unsigned int **);
int FUN_002fb208(void);

typedef struct fn_002f74ec_arg0 fn_002f74ec_arg0;
struct fn_002f74ec_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x30];
    undefined4 field_0x40; /* +0x40 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_00559070; /* 0x559070 */

/* Supplied declaration required: FUN_002f1468. */
extern unsigned int *FUN_002f18f8(int);
extern int FUN_002f5928(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002fb208. */
extern unsigned int *FUN_0030ce94(fn_002f74ec_arg0 *);


unsigned int *
FUN_002f74ec(fn_002f74ec_arg0 *param_1,unsigned int *param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *temp_v1;
  
  temp_v1 = param_4;
  puVar1 = (unsigned int *)FUN_0030ce94(param_1);
  *puVar1 = (unsigned int)&DAT_00559070;
  puVar1[3] = *param_2;
  temp_v0 = FUN_002f5928(puVar1 + 4,1);
  puVar3 = (unsigned int *)FUN_002f18f8(temp_v0 + 0x30);
  puVar4 = puVar3 + -0x10;
  puVar1 = puVar3;
  FUN_002fb208();
  temp_v1 = puVar1;
  FUN_002f1468(puVar3,&temp_v1);
  *puVar3 = *param_2;
  return puVar4;
}

} /* extern "C" */
