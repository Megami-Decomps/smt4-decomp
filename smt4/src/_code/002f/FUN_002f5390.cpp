/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5390` (_code @ 0x2f5390, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ff9f4(void);
int FUN_002102ec(unsigned char **, int, unsigned int, unsigned int);
int FUN_0024aab4(...);
int FUN_0024aaec(...);
int FUN_0024ab24(unsigned char **);
int FUN_0024ab5c(void);
int FUN_002bb688(unsigned char **, int);

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

extern unsigned char DAT_00420b78; /* 0x420b78 */

extern unsigned char *FUN_001ff93c(unsigned char **);
/* Supplied declaration required: FUN_001ff9f4. */
extern unsigned char *FUN_001ffaf0(void);
extern unsigned char **FUN_001ffb70(void);
/* Supplied declaration required: FUN_002102ec. */
/* Supplied declaration required: FUN_0024aab4. */
/* Supplied declaration required: FUN_0024aaec. */
/* Supplied declaration required: FUN_0024ab24. */
/* Supplied declaration required: FUN_0024ab5c. */
extern unsigned char *FUN_0024ab94(unsigned char **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb688. */
extern unsigned char *FUN_002cbfe8(unsigned char **);


unsigned int FUN_002f5390(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
  temp_v0 = &DAT_00420b78;
  temp_v1 = 0x420bf0;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        puVar1 = puVar4;
        if (param_1 == 3) {
          puVar1 = (unsigned char *)FUN_001ffaf0();
        }
      }
      else {
        puVar1 = (unsigned char *)FUN_002cbfe8(&temp_v0);
      }
    }
    else {
      puVar1 = (unsigned char *)FUN_001ff93c(&temp_v0);
    }
  }
  else {
    puVar1 = (unsigned char *)FUN_0024ab94(&temp_v0,param_2,2);
  }
  if (-1 < (int)puVar1) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        ppuVar2 = (unsigned char **)puVar4;
        if ((param_1 != 2) && (param_1 == 3)) {
          ppuVar2 = (unsigned char **)FUN_001ffb70();
        }
      }
      else {
        FUN_001ff9f4();
        ppuVar2 = ppuVar3;
      }
    }
    else {
      FUN_002102ec(&temp_v0,0,param_3,param_4);
    }
    if ((int)ppuVar2 < 0) {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              FUN_0024ab5c();
            }
          }
          else {
            FUN_0024aab4();
          }
        }
        else {
          FUN_0024aaec();
        }
      }
      else {
        FUN_0024ab24(&temp_v0);
      }
    }
    else {
      if (param_1 != 0) {
        if (param_1 != 1) {
          if (param_1 != 2) {
            if (param_1 == 3) {
              puVar4 = (unsigned char *)FUN_0024ab5c();
            }
          }
          else {
            puVar4 = (unsigned char *)FUN_0024aab4(&temp_v0);
          }
        }
        else {
          puVar4 = (unsigned char *)FUN_0024aaec(&temp_v0);
        }
      }
      else {
        puVar4 = (unsigned char *)FUN_0024ab24(&temp_v0);
      }
      if (-1 < (int)puVar4) {
        FUN_002bb688(&temp_v0,0);
        return 1;
      }
    }
  }
  FUN_002bb688(&temp_v0,0);
  return 0;
}

} /* extern "C" */
