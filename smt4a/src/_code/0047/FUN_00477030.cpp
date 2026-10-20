/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00477030` (_code @ 0x477030, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00473980(int *, unsigned int);
int FUN_00474734(int, int);
int FUN_00476e58(int, int, int);
int FUN_0047bc90(int, unsigned int *);
int FUN_0047daf4(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned int g_aocMain; /* 0x570260 */

extern int FUN_001d10ac(unsigned int *);
extern int FUN_001d25ec(unsigned int *);
/* Supplied declaration required: FUN_00473980. */
/* Supplied declaration required: FUN_00474734. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_0047bc90. */
extern int FUN_0047dae0(unsigned int *);
/* Supplied declaration required: FUN_0047daf4. */


void FUN_00477030(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_34;
  int temp_v5;
  unsigned int uStack_2c;
  unsigned int temp_v6;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  FUN_0047daf4(&temp_v2);
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 3) {
    if (temp_v0 >= 3) {
      if (temp_v0 != 4) {
        if (temp_v0 != 5) {
          if (temp_v0 != 9999) {
            return;
          }
          FUN_00476e58(param_1,0xc,3);
          return;
        }
        temp_v0 = *(int *)(param_1 + 0xc) - 1;
        *(int *)(param_1 + 0xc) = temp_v0;
        if (0 < temp_v0) {
          return;
        }
        *(unsigned int *)(param_1 + 4) = 6;
        *(unsigned int *)(param_1 + 8) = 0;
        if (*(int **)(param_1 + 0x208) == (int *)0x0) {
          return;
        }
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
        return;
      }
      FUN_00473980(&temp_v5,g_aocMain);
      temp_v4 = temp_v5;
      uStack_34 = uStack_2c;
      temp_v0 = FUN_001d25ec((unsigned int *)&temp_v4);
      if (temp_v0 < 0) {
        *(unsigned int *)(param_1 + 8) = 9999;
        *(unsigned char *)(param_1 + 0x210) = 100;
        *(unsigned int *)(param_1 + 0x214) = temp_v4;
        *(unsigned int *)(param_1 + 0x218) = uStack_34;
        return;
      }
      *(unsigned int *)(param_1 + 8) = 5;
      *(unsigned int *)(param_1 + 0xc) = 3;
      return;
    }
    if (temp_v0 == 0) {
      temp_v0 = param_1 + 0x20c;
      FUN_00474734(temp_v0,0);
      *(unsigned int *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0x208) = temp_v0;
      return;
    }
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return;
      }
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
      }
      temp_v0 = param_1 + 0x20c;
      FUN_00474734(temp_v0,5);
      *(unsigned int *)(param_1 + 8) = 3;
      *(int *)(param_1 + 0x208) = temp_v0;
      return;
    }
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 0xc))(&temp_v3);
    temp_v2 = temp_v3;
    uStack_4c = temp_v4;
    uStack_48 = uStack_34;
    uStack_44 = temp_v5;
    uStack_40 = uStack_2c;
    temp_v0 = FUN_0047dae0(&temp_v2);
    if (temp_v0 != 0) {
      temp_v1 = 2;
      *(unsigned int *)(param_1 + 8) = temp_v1;
      return;
    }
    temp_v0 = FUN_001d10ac(&temp_v2);
  }
  else {
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 0xc))(&temp_v3);
    temp_v2 = temp_v3;
    uStack_4c = temp_v4;
    uStack_48 = uStack_34;
    uStack_44 = temp_v5;
    uStack_40 = uStack_2c;
    temp_v0 = FUN_0047dae0(&temp_v2);
    if (temp_v0 != 0) {
      temp_v1 = 4;
      *(unsigned int *)(param_1 + 8) = temp_v1;
      return;
    }
    temp_v0 = FUN_001d10ac(&temp_v2);
  }
  if (temp_v0 == 0) {
    return;
  }
  if ((temp_v2 & 0xff) == 0x66) {
    temp_v6 = temp_v2;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    uStack_1c = uStack_44;
    uStack_18 = uStack_40;
    FUN_0047bc90(param_1,&temp_v6);
    return;
  }
  if ((temp_v2 & 0xff) != 0x67) {
    *(unsigned int *)(param_1 + 8) = 9999;
    *(unsigned int *)(param_1 + 0x210) = temp_v2;
    *(unsigned int *)(param_1 + 0x214) = uStack_4c;
    *(unsigned int *)(param_1 + 0x218) = uStack_48;
    *(unsigned int *)(param_1 + 0x21c) = uStack_44;
    *(unsigned int *)(param_1 + 0x220) = uStack_40;
    return;
  }
  *(unsigned int *)(param_1 + 8) = 5;
  *(unsigned int *)(param_1 + 0xc) = 3;
  return;
}

} /* extern "C" */
