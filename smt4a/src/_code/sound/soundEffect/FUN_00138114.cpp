/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138114` (_code @ 0x138114, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ddf0(void);
int FUN_00147f08(unsigned char *);
int FUN_0015e068(int, unsigned char *);
int asdMemoryAlloc(int, int, int, unsigned int);
int nw_snd_FxDelay_AssignWorkBuffer(unsigned char *, unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int g_soundEffectBuffers; /* 0x588fb8 */
extern unsigned char DAT_006195dc; /* 0x6195dc */
extern unsigned int DAT_0061963c; /* 0x61963c */
extern unsigned int DAT_00619640; /* 0x619640 */
extern unsigned int DAT_00619644; /* 0x619644 */
extern unsigned char DAT_00619648; /* 0x619648 */

/* Supplied declaration required: FUN_0013ddf0. */
/* Supplied declaration required: FUN_00147f08. */
/* Supplied declaration required: FUN_0015e068. */
/* Supplied declaration required: asdMemoryAlloc. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: nw_snd_FxDelay_AssignWorkBuffer. */
extern unsigned int nw_snd_FxDelay_GetRequiredMemSize(unsigned char *);


void FUN_00138114(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    DAT_0061963c = 0x96;
    DAT_00619640 = 0x3dcccccd;
    DAT_00619644 = 0x3f333333;
    DAT_00619648 = 1;
    FUN_00147f08(&DAT_006195dc);
    temp_v1 = nw_snd_FxDelay_GetRequiredMemSize(&DAT_006195dc);
    temp_v2 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,temp_v1);
    g_soundEffectBuffers = temp_v2;
    nw_snd_FxDelay_AssignWorkBuffer(&DAT_006195dc,temp_v2,temp_v1);
    FUN_0015e068(0,&DAT_006195dc);
  }
  FUN_0013ddf0();
  return;
}

} /* extern "C" */
