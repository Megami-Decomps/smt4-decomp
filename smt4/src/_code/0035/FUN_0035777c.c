/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035777c` (_code @ 0x35777c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004656ca; /* 0x4656ca */
extern unsigned char DAT_004656cb; /* 0x4656cb */
extern unsigned char DAT_004656ce; /* 0x4656ce */

extern int FUN_0011c834(void);
/* Supplied declaration required: FUN_001467a4. */
/* Supplied declaration required: FUN_00358d24. */
/* Supplied declaration required: FUN_00358f98. */
/* Supplied declaration required: nn_cec_CTR_detail_InitializeCecControl. */
extern unsigned char nn_cfg_CTR_Initialize(void);
/* Supplied declaration required: nn_cfg_CTR_IsDebugMode. */


void FUN_0035777c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_00358d24();
  temp_v1 = (unsigned int)DAT_004656ca;
  if ((temp_v1 == 0) && (nn_cec_CTR_detail_InitializeCecControl(), -1 < (int)temp_v1)) {
    FUN_00358f98();
    temp_v2 = FUN_0011c834();
    if (-1 < temp_v2) {
      DAT_004656cb = 1;
      temp_v0 = nn_cfg_CTR_Initialize();
      nn_cfg_CTR_IsDebugMode();
      DAT_004656ce = temp_v0;
      FUN_001467a4();
      DAT_004656ca = 1;
    }
  }
  return;
}
