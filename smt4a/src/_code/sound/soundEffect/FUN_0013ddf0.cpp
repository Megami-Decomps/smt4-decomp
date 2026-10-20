/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ddf0` (_code @ 0x13ddf0, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015e068(int, unsigned char *);
int FUN_001630d4(int, int, int, unsigned char *);
int nw_snd_FxReverb_AssignWorkBuffer(unsigned char *, unsigned int, unsigned char *);
int nw_snd_FxReverb_GetRequiredMemSize(unsigned char *);
int nw_snd_FxReverb_SetParam(unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int DAT_00588fbc; /* 0x588fbc */
extern unsigned char DAT_0061964c; /* 0x61964c */
extern unsigned int DAT_0061975c; /* 0x61975c */
extern unsigned int DAT_00619760; /* 0x619760 */
extern unsigned int DAT_00619764; /* 0x619764 */
extern unsigned int DAT_00619768; /* 0x619768 */
extern unsigned int DAT_0061976c; /* 0x61976c */
extern unsigned int *DAT_00619770; /* 0x619770 */
extern unsigned int DAT_00619774; /* 0x619774 */
extern unsigned int DAT_00619778; /* 0x619778 */
extern unsigned char DAT_0061977c; /* 0x61977c */
extern unsigned char DAT_0061977d; /* 0x61977d */
extern unsigned int DAT_00619780; /* 0x619780 */
extern unsigned int DAT_00619784; /* 0x619784 */
extern unsigned int DAT_00619788; /* 0x619788 */

/* Supplied declaration required: FUN_0015e068. */
/* Supplied declaration required: FUN_001630d4. */
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: nw_snd_FxReverb_AssignWorkBuffer. */
/* Supplied declaration required: nw_snd_FxReverb_GetRequiredMemSize. */
/* Supplied declaration required: nw_snd_FxReverb_SetParam. */


void FUN_0013ddf0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    DAT_0061975c = 0x5a;
    DAT_00619760 = 0x4b0;
    DAT_00619764 = 0x1e;
    DAT_00619768 = 0x3f000000;
    DAT_0061976c = 0x3f4ccccd;
    DAT_00619780 = 0xbe0;
    DAT_00619784 = 0xe60;
    DAT_00619788 = 0x820;
    DAT_00619770 = &DAT_00619780;
    DAT_00619774 = 0x3ecccccd;
    DAT_00619778 = 0x3ecccccd;
    DAT_0061977d = 1;
    DAT_0061977c = 0;
    nw_snd_FxReverb_SetParam(&DAT_0061964c);
    puVar2 = &DAT_0061964c;
    nw_snd_FxReverb_GetRequiredMemSize(&DAT_0061964c);
    temp_v1 = 0x10000;
    FUN_001630d4(0x10000,0x100,0,puVar2);
    DAT_00588fbc = temp_v1;
    nw_snd_FxReverb_AssignWorkBuffer(&DAT_0061964c,temp_v1,puVar2);
    FUN_0015e068(1,&DAT_0061964c);
    return;
  }
  return;
}

} /* extern "C" */
