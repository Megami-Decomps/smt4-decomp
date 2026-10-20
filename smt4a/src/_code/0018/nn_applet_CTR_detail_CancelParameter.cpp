/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_CancelParameter` (_code @ 0x18b89c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(void);
int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_001a3584(int, unsigned int, unsigned int, unsigned int, char [8]);

/* stack frame of param_4: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_001a3584. */


int nn_applet_CTR_detail_CancelParameter
              (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0 [8];
  
  nn_applet_CTR_detail_OpenSession();
  FUN_001a3584(param_1,param_2,param_3,param_4,temp_v0);
  if (param_1 < 0) {
    FUN_00189a38();
  }
  nn_applet_CTR_detail_CloseSession();
  return (int)temp_v0[0];
}

} /* extern "C" */
