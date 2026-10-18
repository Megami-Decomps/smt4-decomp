/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5348` (_code @ 0x2f5348, 0x234 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_004207c0; /* 0x4207c0 */

/* Supplied declaration required: FUN_001ff88c. */
extern unsigned char *FUN_001ff988(void);
extern unsigned char **FUN_001ffa08(void);
/* Supplied declaration required: FUN_00210188. */
/* Supplied declaration required: FUN_0024ac10. */
/* Supplied declaration required: FUN_0024ac48. */
/* Supplied declaration required: FUN_0024ac80. */
/* Supplied declaration required: FUN_0024acb8. */
extern unsigned char *FUN_0024acf0(unsigned char **);
extern unsigned char *FUN_0024ada8(unsigned char **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb9c8. */
extern unsigned char *FUN_002cbf38(unsigned char **);


unsigned int FUN_002f5348(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char **ppuVar2;
  unsigned char **ppuVar3;
  unsigned char *puVar4;
  unsigned char *temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  ppuVar2 = &temp_v0;
  ppuVar3 = &temp_v0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  puVar4 = (unsigned char *)0xe7e3ffff;
  temp_v0 = &DAT_004207c0;
  temp_v1 = 0x420838;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        puVar1 = puVar4;
        if (param_1 == 3) {
          puVar1 = (unsigned char *)FUN_001ff988();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_002cbf38(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_0024acf0(&temp_v0);
    }
  }
  else {
    puVar1 = (unsigned char *)FUN_0024ada8(&temp_v0,param_2,2);
  }
  if (-1 < (int)puVar1) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        ppuVar2 = (unsigned char **)puVar4;
        if ((param_1 != 2) && (param_1 == 3)) {
          ppuVar2 = (unsigned char **)FUN_001ffa08();
        }
      }
      else {
        FUN_001ff88c();
        ppuVar2 = ppuVar3;
      }
    }
    else {
      FUN_00210188(&temp_v0,0,param_3,param_4);
    }
    if ((int)ppuVar2 < 0) {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              FUN_0024acb8();
            }
          }
          else {
            FUN_0024ac10();
          }
        }
        else {
          FUN_0024ac48();
        }
      }
      else {
        FUN_0024ac80(&temp_v0);
      }
    }
    else {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              puVar4 = (unsigned char *)FUN_0024acb8();
            }
          }
          else {
            puVar4 = (unsigned char *)FUN_0024ac10(&temp_v0);
          }
        }
        else {
          puVar4 = (unsigned char *)FUN_0024ac48(&temp_v0);
        }
      }
      else {
        puVar4 = (unsigned char *)FUN_0024ac80(&temp_v0);
      }
      if (-1 < (int)puVar4) {
        FUN_002bb9c8(&temp_v0,0);
        return 1;
      }
    }
  }
  FUN_002bb9c8(&temp_v0,0);
  return 0;
}
