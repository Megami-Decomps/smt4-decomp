/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111438` (_code @ 0x111438, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111482(unsigned int, unsigned int, unsigned char [32], unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002e74c4(unsigned char [32], unsigned int, unsigned int, unsigned int);
int FUN_002e7634(unsigned char [32]);
int FUN_002ec9f4(unsigned char [32]);

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_7_stack;

/* Supplied declaration required: FUN_00111482. */
extern unsigned int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7634. */
/* Supplied declaration required: FUN_002ec9f4. */


unsigned int
FUN_00111438(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v2;
  
  uStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v2 = param_4;
  FUN_002e7634(temp_v1);
  temp_v0 = FUN_002e3390(param_3);
  FUN_002e74c4(temp_v1,param_3,temp_v0,0xffffffff);
  FUN_00111482(param_1,param_2,temp_v1,temp_v2,param_5,param_6,param_7);
  FUN_002ec9f4(temp_v1);
  return param_1;
}

} /* extern "C" */
