/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c5ec` (_code @ 0x11c5ec, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern signed char DAT_00471ad8; /* 0x471ad8 */

/* Supplied declaration required: FUN_001285c4. */
/* Supplied declaration required: FUN_00128610. */
extern int FUN_00128c2c(void);
/* Supplied declaration required: FUN_0012a758. */
/* Supplied declaration required: FUN_0013bcac. */
extern int FUN_002bb978(void);
extern int FUN_002bc9c8(void);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0011c5ec(int *param_1,unsigned int *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [4];
  
  temp_v2[2] = 0xffffffff;
  temp_v2[3] = 0xffffffff;
  temp_v2[1] = 0xffffffff;
  temp_v0 = FUN_00128c2c();
  if (temp_v0 == 0) {
    FUN_001285c4(param_1 + 3);
    FUN_0012a758(*(unsigned int *)(*param_1 + 4),param_2,1,temp_v2,temp_v2 + 2,temp_v2 + 1);
    if (0 < temp_v2[0]) {
      FUN_00128610(param_1 + 3,param_2 + 3,(int)param_2 + 0xe,(int)(short)param_2[3],
                   (int)*(short *)((int)param_2 + 0xe));
      if ((char)param_1[0xc] != '\0') {
        param_1[2] = *param_2;
        *(unsigned char *)(param_1 + 0xc) = 0;
      }
      temp_v1 = *param_2 & 0xffffdfff;
      *param_2 = temp_v1;
      param_2[1] = (temp_v1 ^ param_1[2]) & ~param_1[2];
      param_2[2] = param_1[2] & ~temp_v1;
      temp_v0 = FUN_002bb978();
      if ((temp_v0 != 0) && (temp_v0 = FUN_002bc9c8(), temp_v0 == 0)) {
        *param_2 = 0;
        param_2[2] = 0;
        param_2[1] = 0;
        *(unsigned short *)(param_2 + 3) = 0;
        *(unsigned short *)((int)param_2 + 0xe) = 0;
      }
      param_1[2] = *param_2;
      if (DAT_00471ad8 == '\0') {
        FUN_0013bcac(param_2);
      }
      return 1;
    }
  }
  return 0;
}
