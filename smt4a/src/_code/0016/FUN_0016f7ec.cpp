/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f7ec` (_code @ 0x16f7ec, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016f574(unsigned char *, int);
int nn_os_LightEvent_Signal(unsigned char *);
int FUN_001a167c(unsigned char *);
int coproc_moveto_Data_Synchronization(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_005894e4; /* 0x5894e4 */
extern unsigned char DAT_005894e5; /* 0x5894e5 */
extern unsigned char DAT_005894e6; /* 0x5894e6 */
extern unsigned char DAT_005894e8; /* 0x5894e8 */
extern unsigned char DAT_005894ec; /* 0x5894ec */
extern unsigned char g_nnSndMasterManager; /* 0x643380 */
extern unsigned char g_dspsndState; /* 0x6433d0 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_0016f574. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */
/* Supplied declaration required: FUN_001a167c. */


void FUN_0016f7ec(void)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_005894e4 & DAT_005894e5) != 0) {
    FUN_0016f574(&g_dspsndState,1);
    DAT_005894e8 = uRam1ff810c0;
    FUN_001a167c(&g_nnSndMasterManager);
    DAT_005894e5 = 0;
    DAT_005894e6 = 0;
    coproc_moveto_Data_Synchronization(0);
    nn_os_LightEvent_Signal(&DAT_005894ec);
    return;
  }
  return;
}

} /* extern "C" */
