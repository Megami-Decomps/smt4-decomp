/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050ff60` (_code @ 0x50ff60, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0045eb98(unsigned char *);
int FUN_0045f08c(unsigned char *, unsigned int *, int);

extern unsigned char DAT_006195dc; /* 0x6195dc */
extern unsigned int DAT_0061963c; /* 0x61963c */
extern unsigned int DAT_00619640; /* 0x619640 */
extern unsigned int DAT_00619644; /* 0x619644 */
extern unsigned char DAT_00619648; /* 0x619648 */
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
extern unsigned int DAT_006306ec; /* 0x6306ec */

/* Supplied declaration required: FUN_0045eb98. */
/* Supplied declaration required: FUN_0045f08c. */


void FUN_0050ff60(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_0045eb98(&DAT_006195dc);
  temp_v0 = 0x3ecccccd;
  temp_v1 = 0x3f000000;
  DAT_0061963c = 0xfa;
  DAT_00619640 = 0x3ecccccd;
  DAT_00619644 = 0x3f000000;
  DAT_00619648 = 0;
  FUN_0045f08c(&DAT_0061964c,&DAT_00619640,0x100000);
  DAT_0061975c = 0x3c;
  DAT_00619760 = 4000;
  DAT_00619764 = 100;
  DAT_00619768 = temp_v1;
  DAT_0061976c = temp_v0;
  DAT_00619770 = &DAT_006306ec;
  DAT_00619774 = 0x3f19999a;
  DAT_00619778 = temp_v0;
  DAT_0061977c = 0;
  DAT_0061977d = 0;
  DAT_00619780 = 0xbe0;
  DAT_00619784 = 0xe60;
  DAT_00619788 = 0x820;
  return;
}

} /* extern "C" */
