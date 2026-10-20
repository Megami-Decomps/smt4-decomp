/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a208c` (_code @ 0x2a208c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015d38c(unsigned char *);
int FUN_002bb150(unsigned char *, int);
int FUN_002c3424(unsigned char *);
int nn_snd_CTR_Dspsnd_WaitPipe_15D540(unsigned char *, unsigned int, int, int);
int nn_snd_CTR_Dspsnd_WaitPipe_15D5E0(unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern signed char DAT_0044e7c1; /* 0x44e7c1 */
extern signed char DAT_0044e7c2; /* 0x44e7c2 */
extern signed char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_0044e7c5; /* 0x44e7c5 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char DAT_004a95c0; /* 0x4a95c0 */
extern unsigned char g_dspsndState; /* 0x4e6f64 */

/* Supplied declaration required: FUN_0015d38c. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c3424. */
extern void nn_os_LightEvent_ClearSignal(unsigned int);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_WaitPipe_15D540. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_WaitPipe_15D5E0. */


void FUN_002a208c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  
  if (DAT_0044e7c2 != '\0') {
    puVar1 = &g_dspsndState;
    nn_snd_CTR_Dspsnd_WaitPipe_15D540(&g_dspsndState,param_2,0x952b80,0);
    if (puVar1 != (unsigned char *)0x0) {
      FUN_0015d38c(&g_dspsndState);
      DAT_0044e7c5 = 0;
      return;
    }
    DAT_0044e7c1 = '\x01';
  }
  if (DAT_0044e7c1 != '\0') {
    FUN_002c3424(&DAT_0044e7c8);
    nn_os_LightEvent_ClearSignal((unsigned int)&DAT_0044e7c8);
  }
  if (DAT_0044e7c3 != '\0') {
    FUN_002bb150(&DAT_004a95c0,0);
    return;
  }
  nn_snd_CTR_Dspsnd_WaitPipe_15D5E0(&g_dspsndState);
  FUN_0015d38c(&g_dspsndState);
  DAT_0044e7c5 = 0;
  return;
}

} /* extern "C" */
