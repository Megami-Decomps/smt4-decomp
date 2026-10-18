/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a410` (_code @ 0x13a410, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_0044e458; /* 0x44e458 */
extern signed char DAT_0044e459; /* 0x44e459 */
#ifndef ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0044e45a_2_2 {
    unsigned short whole;
    unsigned char u1[2];
    signed char s1[2];
    unsigned short u2[1];
    short s2[1];
};
typedef char romwright_storage_DAT_0044e45a_2_2_size_check[(sizeof(union romwright_storage_DAT_0044e45a_2_2) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0044e45a_2_2 DAT_0044e45a; /* 0x44e45a */
extern unsigned short DAT_0044e45c; /* 0x44e45c */
extern unsigned short DAT_0044e45e; /* 0x44e45e */
extern int DAT_0044e460; /* 0x44e460 */
extern unsigned int DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */
extern unsigned char DAT_004c6484; /* 0x4c6484 */

/* Supplied declaration required: FUN_002c131c. */
extern int nn_dsp_CTR_DSP_LoadComponent(int, unsigned int, unsigned int, unsigned short, unsigned short, unsigned char *);


void FUN_0013a410(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_0044e458 = 0;
  if ((char)DAT_0044e45a.whole != '\0') {
    if ((DAT_0044e460 == 0) || (DAT_0044e459 != '\0')) {
      temp_v0 = -0x375f5804;
    }
    else {
      temp_v0 = nn_dsp_CTR_DSP_LoadComponent
                        (DAT_0044e460,DAT_0044e470,DAT_0044e474,DAT_0044e45c,DAT_0044e45e,
                         (unsigned char *)&DAT_0044e459);
    }
    if (temp_v0 < 0) {
      FUN_002c131c(temp_v0,0x13a464);
    }
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_004c6484 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_004c6484 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    DAT_0044e45a.s1[0] = '\0';
  }
  return;
}
