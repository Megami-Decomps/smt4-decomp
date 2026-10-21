/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ef60` (_code @ 0x36ef60, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int FUN_002830cc(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int jobGroupStopWhenReady(...); /* 0x31aa60 */
extern unsigned char LAB_0036f03c; /* 0x36f03c */
extern unsigned char LAB_0036f054; /* 0x36f054 */
extern unsigned char LAB_0036f068; /* 0x36f068 */
extern unsigned char LAB_0036f07c; /* 0x36f07c */
extern unsigned char LAB_0036f090; /* 0x36f090 */
extern unsigned char LAB_00388a20; /* 0x388a20 */
extern unsigned char LAB_00388a40; /* 0x388a40 */
extern unsigned char LAB_00388a60; /* 0x388a60 */
extern unsigned char LAB_0039aec8; /* 0x39aec8 */
extern unsigned char *g_shutdownJobs; /* 0x57f398 */
extern unsigned char *DAT_0057f39c; /* 0x57f39c */
extern unsigned char *DAT_0057f3a0; /* 0x57f3a0 */
extern unsigned char *DAT_0057f3a4; /* 0x57f3a4 */
extern unsigned char *DAT_0057f3a8; /* 0x57f3a8 */
extern unsigned int DAT_0057f3ac; /* 0x57f3ac */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002830cc. */


unsigned char * FUN_0036ef60(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  
  puVar1 = &LAB_0036f03c;
  asdProcessCreateSimple(&LAB_0036f03c,4,0,0,jobGroupStopWhenReady,0,0);
  puVar2 = &LAB_0036f054;
  g_shutdownJobs = puVar1;
  asdProcessCreateSimple(&LAB_0036f054,0x65,0,0,&LAB_00388a40,0,0);
  puVar1 = &LAB_0036f068;
  DAT_0057f39c = puVar2;
  asdProcessCreateSimple(&LAB_0036f068,0x77,0,0,&LAB_00388a60,0,0);
  puVar2 = &LAB_0036f07c;
  DAT_0057f3a4 = puVar1;
  asdProcessCreateSimple(&LAB_0036f07c,0xd3,0,0,&LAB_0039aec8,0,0);
  puVar1 = &LAB_0036f090;
  DAT_0057f3a8 = puVar2;
  asdProcessCreateSimple(&LAB_0036f090,0xea,0,0,&LAB_00388a20,0,0);
  DAT_0057f3a0 = puVar1;
  FUN_002830cc();
  DAT_0057f3ac = 0;
  return g_shutdownJobs;
}

} /* extern "C" */
