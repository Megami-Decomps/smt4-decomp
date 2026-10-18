/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d078` (_code @ 0x23d078, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp74; /* 0x74: local_74 */
    unsigned char sp75; /* 0x75: local_75 */
    unsigned char sp76; /* 0x76: local_76 */
    unsigned char sp83; /* 0x83: local_83 */
    unsigned char sp88; /* 0x88: local_88 */
} param_2_stack;

/* Supplied declaration required: FUN_002b612c. */
/* Supplied declaration required: nn_gr_CTR_Combiner_MakeCommand. */
/* Supplied declaration required: nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0. */


void FUN_0023d078(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [24];
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  FUN_002b612c(temp_v0);
  nn_gr_CTR_Combiner_Stage_SetupPrimaryModulateTexture0(temp_v0);
  temp_v1 = 2;
  temp_v3 = (unsigned char)((unsigned int)param_2 >> 0x18);
  temp_v4 = (unsigned char)((unsigned int)param_2 >> 0x10);
  temp_v2 = 0xe;
  temp_v5 = (unsigned char)((unsigned int)param_2 >> 8);
  nn_gr_CTR_Combiner_MakeCommand(temp_v0,param_1);
  return;
}
