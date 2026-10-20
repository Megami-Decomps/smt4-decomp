/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d368` (_code @ 0x42d368, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0eb0(void);
int FUN_0042fbc4(void);
int FUN_0042fe3c(void);
int nn_cec_CTR_detail_InitializeCecControl(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_005b4486; /* 0x5b4486 */
extern unsigned char DAT_005b4487; /* 0x5b4487 */
extern unsigned char DAT_005b448a; /* 0x5b448a */

extern int FUN_0015997c(void);
/* Supplied declaration required: FUN_001a0eb0. */
/* Supplied declaration required: FUN_0042fbc4. */
/* Supplied declaration required: FUN_0042fe3c. */
/* Supplied declaration required: nn_cec_CTR_detail_InitializeCecControl. */
extern void nn_cfg_CTR_Initialize(void);
extern unsigned char nn_cfg_CTR_IsDebugMode(void);


void FUN_0042d368(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_0042fbc4();
  temp_v0 = (unsigned int)DAT_005b4486;
  if ((temp_v0 == 0) && (nn_cec_CTR_detail_InitializeCecControl(), -1 < (int)temp_v0)) {
    FUN_0042fe3c();
    temp_v1 = FUN_0015997c();
    if (-1 < temp_v1) {
      DAT_005b4487 = 1;
      nn_cfg_CTR_Initialize();
      DAT_005b448a = nn_cfg_CTR_IsDebugMode();
      FUN_001a0eb0();
      DAT_005b4486 = 1;
    }
  }
  return;
}

} /* extern "C" */
