/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471f64` (_code @ 0x471f64, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short *, unsigned int, unsigned int, int, unsigned char *);
int asdFsIsSdCardDetected(void);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
} param_2_stack;

extern unsigned char LAB_00476dfc; /* 0x476dfc */
extern int g_aocMain; /* 0x570260 */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: libc_bsearch. */
extern int objGetFlagBit16(void);
/* Supplied declaration required: asdFsIsSdCardDetected. */


unsigned int FUN_00471f64(int param_1,unsigned short param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  unsigned short temp_v1 [158];
  
  puVar1 = temp_v1;
  temp_v1[0] = param_2;
  libc_bsearch(puVar1,*(unsigned int *)(param_1 + 0x388),*(unsigned int *)(g_aocSystem + 900),0x134,
               &LAB_00476dfc);
  if (puVar1 != (unsigned short *)0x0) {
    asdFsIsSdCardDetected();
    if (puVar1 != (unsigned short *)0x0) {
      temp_v0 = objGetFlagBit16();
      if (temp_v0 != 0) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
    }
    else {
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return 1;
}

} /* extern "C" */
