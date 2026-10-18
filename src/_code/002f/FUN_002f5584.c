/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5584` (_code @ 0x2f5584, 0x304 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_004207c0; /* 0x4207c0 */
extern unsigned int DAT_004651f8; /* 0x4651f8 */

extern unsigned char *FUN_001ff988(void);
/* Supplied declaration required: FUN_00210364. */
/* Supplied declaration required: FUN_00220184. */
extern unsigned char *FUN_00220234(unsigned char **);
/* Supplied declaration required: FUN_0022033c. */
extern unsigned char *FUN_0024ac10(unsigned char **);
extern unsigned char *FUN_0024ac48(unsigned char **);
extern unsigned char *FUN_0024ac80(unsigned char **);
extern unsigned char *FUN_0024acb8(void);
extern unsigned char *FUN_0024acf0(unsigned char **);
extern unsigned char *FUN_0024ada8(unsigned char **, int, unsigned int);
/* Supplied declaration required: FUN_002bb9c8. */
extern unsigned char *FUN_002cbde4(unsigned char **, int, unsigned int);
/* Supplied declaration required: FUN_002cbee0. */
extern unsigned char *FUN_002cbf38(unsigned char **);
/* Supplied declaration required: FUN_002d5f20. */
extern unsigned char *FUN_002e130c(void);
/* Supplied declaration required: FUN_002e13e4. */


unsigned int FUN_002f5584(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char **ppuVar2;
  unsigned char **ppuVar3;
  unsigned char **ppuVar4;
  unsigned char *puVar5;
  unsigned char *temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  ppuVar3 = &temp_v0;
  ppuVar4 = &temp_v0;
  ppuVar2 = &temp_v0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  puVar5 = (unsigned char *)0xe7e3ffff;
  temp_v0 = &DAT_004207c0;
  temp_v1 = 0x420838;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        puVar1 = puVar5;
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
    puVar1 = (unsigned char *)FUN_0024ada8(&temp_v0,param_2,1);
  }
  if ((((((unsigned int)puVar1 & 0x3fc00) == 0x4400) && (((unsigned int)puVar1 & 0x3ff) >= 100)) &&
      (((unsigned int)puVar1 & 0x3ff) < 0xb4)) || ((int)puVar1 < 0)) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        puVar1 = puVar5;
        if (param_1 == 2) {
          puVar1 = (unsigned char *)FUN_002e130c();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_00220234(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_002cbde4(&temp_v0,param_2,param_4);
    }
    if ((int)puVar1 < 0) {
      if (param_2 != 0) {
        if (param_1 != 0) {
          if (param_1 != 1) {
            if (param_1 == 2) {
              FUN_002e13e4();
            }
          }
          else {
            FUN_0022033c();
          }
        }
        else {
          FUN_002cbee0();
        }
      }
      else {
        DAT_004651f8 = 0xc8804464;
      }
      if (param_1 != 0) {
        if (param_1 != 1) {
          puVar1 = puVar5;
          if (param_1 == 2) {
            puVar1 = (unsigned char *)FUN_002e130c();
          }
        }
        else {
          puVar1 = (unsigned char *)FUN_00220234(&temp_v0);
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_002cbde4(&temp_v0,param_2,param_4);
      }
    }
  }
  if (-1 < (int)puVar1) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        ppuVar3 = (unsigned char **)puVar5;
        if (param_1 == 2) {
          FUN_002d5f20();
          ppuVar3 = ppuVar2;
        }
      }
      else {
        FUN_00210364();
        ppuVar3 = ppuVar4;
      }
    }
    else {
      FUN_00220184(&temp_v0,0,param_3,param_4);
    }
    if (-1 < (int)ppuVar3) {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              puVar5 = (unsigned char *)FUN_0024acb8();
            }
          }
          else {
            puVar5 = (unsigned char *)FUN_0024ac10(&temp_v0);
          }
        }
        else {
          puVar5 = (unsigned char *)FUN_0024ac48(&temp_v0);
        }
      }
      else {
        puVar5 = (unsigned char *)FUN_0024ac80(&temp_v0);
      }
      if (-1 < (int)puVar5) {
        FUN_002bb9c8(&temp_v0,0);
        return 1;
      }
    }
  }
  FUN_002bb9c8(&temp_v0,0);
  return 0;
}
