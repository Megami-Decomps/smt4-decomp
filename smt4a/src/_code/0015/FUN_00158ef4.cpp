/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158ef4` (_code @ 0x158ef4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e544(int);
int FUN_0016e800(int, int);

/* stack frame of void: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned char spE; /* 0xe: local_e */
} void_stack;

extern unsigned char LAB_00130000; /* 0x130000 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Supplied declaration required: FUN_0016e544. */
/* Supplied declaration required: FUN_0016e800. */
extern int FUN_00189738(unsigned char *, unsigned int, unsigned char *);
extern int nn_cfg_CTR_detail_InitializeProperPort(unsigned char *);


unsigned char FUN_00158ef4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [2];
  unsigned char temp_v2;
  unsigned char temp_v3 [12];
  
  if ((bRam1ff80014 & 1) == 0) {
    temp_v0 = nn_cfg_CTR_detail_InitializeProperPort(temp_v3);
    if ((temp_v0 < 0) && (temp_v0 < 0)) {
      FUN_0016e800(temp_v0,0x158f28);
    }
    temp_v0 = FUN_00189738(temp_v1,4,&LAB_00130000);
    if (temp_v0 < 0) {
      FUN_0016e800(temp_v0,0x158f44);
    }
    FUN_0016e544(temp_v3[0]);
                    /* WARNING: Treating indirect jump as return */
    return temp_v2;
  }
  return 0;
}

} /* extern "C" */
