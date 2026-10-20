/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129478` (_code @ 0x129478, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00129214(unsigned char *, int);
int FUN_00146e40(unsigned char *);
int nn_os_LightEvent_Signal(unsigned char *);
int coproc_moveto_Data_Synchronization(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0044e7c0; /* 0x44e7c0 */
extern unsigned char DAT_0044e7c1; /* 0x44e7c1 */
extern unsigned char DAT_0044e7c2; /* 0x44e7c2 */
extern unsigned char DAT_0044e7c4; /* 0x44e7c4 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char g_nnSndMasterManager; /* 0x4e6f14 */
extern unsigned char g_dspsndState; /* 0x4e6f64 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_00129214. */
/* Supplied declaration required: FUN_00146e40. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */


void FUN_00129478(void)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_0044e7c0 & DAT_0044e7c1) != 0) {
    FUN_00129214(&g_dspsndState,1);
    DAT_0044e7c4 = uRam1ff810c0;
    FUN_00146e40(&g_nnSndMasterManager);
    DAT_0044e7c1 = 0;
    DAT_0044e7c2 = 0;
    coproc_moveto_Data_Synchronization(0);
    nn_os_LightEvent_Signal(&DAT_0044e7c8);
    return;
  }
  return;
}

} /* extern "C" */
