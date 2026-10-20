/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f42be` (_code @ 0x2f42be, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00102870(unsigned char [512], int, unsigned int, int *);
int FUN_002f76ca(unsigned int, unsigned char [512]);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Supplied declaration required: FUN_00102870. */
/* Supplied declaration required: FUN_002f76ca. */


void FUN_002f42be(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [512];
  int uStack_8;
  unsigned int uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00102870(temp_v0,0x100,param_2,&uStack_8);
  FUN_002f76ca(param_1,temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
