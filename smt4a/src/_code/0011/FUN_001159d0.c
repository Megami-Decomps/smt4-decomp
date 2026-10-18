/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001159d0` (_code @ 0x1159d0, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Supplied declaration required: FUN_00115998. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eba9c(unsigned char *, int);


void FUN_001159d0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [4];
  unsigned int temp_v4 [2];
  unsigned int temp_v5 [2];
  unsigned char *puVar3;
  
  puVar3 = temp_v2;
  temp_v0 = (**(romwright_code **)(param_1 + 0x68))();
  if (temp_v0 != 0) {
    temp_v0 = (**(romwright_code **)(param_1 + 0x6c))(param_1 + 0x70);
    if (temp_v0 == 0) {
      temp_v4[0] = 0x80010001;
    }
    else {
      temp_v4[0] = 0x10001;
    }
    puVar4 = temp_v4;
  }
  else {
    FUN_002eb588(temp_v2);
    temp_v0 = FUN_002eba9c(temp_v2,param_1 + 0x78);
    if (temp_v0 == 0) {
      FUN_002ea446(param_1,100);
      return;
    }
    puVar4 = temp_v5;
    temp_v5[0] = 0x8001000b;
    puVar3 = temp_v3;
  }
  temp_v1 = FUN_002e7908(puVar3,puVar4);
  FUN_00115998(param_1,temp_v1);
  return;
}
