/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471d00` (_code @ 0x471d00, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
} param_1_stack;

extern unsigned char LAB_00476dfc; /* 0x476dfc */
extern unsigned int g_aocMain; /* 0x570260 */
extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern int FUN_001d109c(unsigned int);
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);


unsigned int FUN_00471d00(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [154];
  
  temp_v0 = FUN_004186a4();
  if ((temp_v0 != 0) && (temp_v1 = FUN_004186e0(), temp_v1 >= 0x15e)) {
    temp_v2[0] = (unsigned short)temp_v1;
    puVar3 = temp_v2;
    FUN_00100854(puVar3,*(unsigned int *)(param_1 + 0x388),*(unsigned int *)(g_aocSystem + 900),0x134,
                 &LAB_00476dfc);
    if ((puVar3 == (unsigned short *)0x0) || (temp_v0 = FUN_001d109c(g_aocMain), temp_v0 == 0)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
