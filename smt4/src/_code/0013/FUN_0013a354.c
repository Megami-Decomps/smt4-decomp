/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a354` (_code @ 0x13a354, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char DAT_0044e458; /* 0x44e458 */
extern signed char DAT_0044e459; /* 0x44e459 */
extern signed char DAT_0044e45a; /* 0x44e45a */
extern unsigned short DAT_0044e45c; /* 0x44e45c */
extern unsigned short DAT_0044e45e; /* 0x44e45e */
extern int DAT_0044e460; /* 0x44e460 */
extern unsigned char *DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */
extern unsigned char DAT_004c6484; /* 0x4c6484 */

/* Supplied declaration required: FUN_002c131c. */
extern unsigned int nn_dsp_CTR_DSP_LoadComponent(unsigned int, unsigned char *, unsigned int, unsigned short, unsigned short, unsigned char *);


void FUN_0013a354(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if ((DAT_0044e458 != '\0') && (DAT_0044e458 = '\0', DAT_0044e45a != '\0')) {
    if ((DAT_0044e460 == 0) || (DAT_0044e459 != '\0')) {
      temp_v0 = 0xc8a0a7fc;
    }
    else {
      temp_v0 = nn_dsp_CTR_DSP_LoadComponent
                        (DAT_0044e460,DAT_0044e470,DAT_0044e474,DAT_0044e45c,DAT_0044e45e,
                         (unsigned char *)&DAT_0044e459);
    }
    if ((int)temp_v0 < 0) {
      FUN_002c131c(temp_v0,0x13a3b4);
    }
    temp_v1 = 0;
    do {
      if (*(romwright_code **)(&DAT_004c6484 + temp_v1 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_004c6484 + temp_v1 * 4))();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
    DAT_0044e45a = '\0';
  }
  return;
}
