/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471f64` (_code @ 0x471f64, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);
int FUN_00429f38(void);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
} param_2_stack;

extern unsigned char LAB_00476dfc; /* 0x476dfc */
extern int g_aocMain; /* 0x570260 */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern int FUN_001d109c(void);
/* Supplied declaration required: FUN_00429f38. */


unsigned int FUN_00471f64(int param_1,unsigned short param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  unsigned short temp_v1 [158];
  
  puVar1 = temp_v1;
  temp_v1[0] = param_2;
  FUN_00100854(puVar1,*(unsigned int *)(param_1 + 0x388),*(unsigned int *)(g_aocSystem + 900),0x134,
               &LAB_00476dfc);
  if (puVar1 != (unsigned short *)0x0) {
    FUN_00429f38();
    if (puVar1 != (unsigned short *)0x0) {
      temp_v0 = FUN_001d109c();
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
