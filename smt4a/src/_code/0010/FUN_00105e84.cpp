/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105e84` (_code @ 0x105e84, 0x102 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7526(...);
int FUN_002eb164(...);
int FUN_002ec674(...);
int FUN_002ec890(...);
int FUN_002ecb04(...);
int FUN_002ecdec(...);
int rt_memcpy(...);

typedef struct fn_00105e84_arg1 fn_00105e84_arg1;
struct fn_00105e84_arg1 {
    unsigned char pad_0x0[0x26];
    unsigned char field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x15];
    ushort field_0x3c; /* +0x3c */
    unsigned char pad_0x3e[0x27];
    unsigned char field_0x65; /* +0x65 */
    unsigned char pad_0x66[0x1e];
    byte field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x3];
    byte field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x4f];
    int field_0xd8; /* +0xd8 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7526. */
extern int FUN_002eac34(unsigned char);
/* Supplied declaration required: FUN_002eb164. */
extern int FUN_002eb6ae(fn_00105e84_arg1 *, unsigned int);
/* Supplied declaration required: FUN_002ec674. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ecb04. */
/* Supplied declaration required: FUN_002ecdec. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00105e84(int param_1,fn_00105e84_arg1 *param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char *pcVar7;
  char temp_v5;
  unsigned char temp_v6 [4];
  unsigned short temp_v7;
  unsigned char temp_v8 [12];
  int temp_v9;
  int temp_v10;
  
  temp_v0 = param_2->field_0x26;
  temp_v1 = FUN_002eac34(temp_v0 >> 4);
  if (((*(char *)(temp_v1 + 0xa8) != '\0') && (param_2->field_0x88 == 0)) &&
     (param_2->field_0xd8 != 0)) {
    temp_v2 = param_2->field_0x3c & 0xf;
    if ((temp_v2 == 2) || (temp_v2 == 5)) {
      if ((int)((unsigned int)param_2->field_0x3c << 0x1a) < 0) {
        piVar4 = *(int **)(*(int *)(param_1 + 0x10) + (unsigned int)param_2->field_0x84 * 4);
        (**(romwright_code **)(*piVar4 + 0x14))(piVar4,param_2->field_0xd8);
      }
      else {
        FUN_002ecdec(temp_v8,0x20);
        temp_v1 = FUN_002eb6ae(param_2,0x200);
        if ((temp_v1 != 0) || (temp_v1 = FUN_002eb6ae(param_2,0x400), temp_v1 != 0)) {
          temp_v1 = param_1 + 0x50;
        }
        else {
          temp_v1 = param_1 + 0x38;
        }
        temp_v3 = FUN_002ec674(temp_v1);
        temp_v4 = FUN_002ec674(temp_v8);
        rt_memcpy(temp_v4,temp_v3,0x20);
        FUN_002eb164(temp_v6,param_2);
        FUN_002e7526(temp_v7);
        pcVar7 = (char *)FUN_002ec674(temp_v8);
        *pcVar7 = *pcVar7 + temp_v0;
        temp_v1 = FUN_002ec674(temp_v8);
        *(char *)(temp_v1 + 1) = *(char *)(temp_v1 + 1) + temp_v5;
        temp_v1 = FUN_002ec674(temp_v8);
        pcVar7 = (char *)((temp_v1 + (temp_v10 - temp_v9)) - 1);
        *pcVar7 = param_2->field_0x65 + *pcVar7;
        FUN_002ecb04(*(unsigned int *)(param_1 + 0x1c),temp_v8);
        (**(romwright_code **)(**(int **)(param_1 + 0x1c) + 0x14))
                  (*(int **)(param_1 + 0x1c),param_2->field_0xd8);
        FUN_002ec890(temp_v8);
      }
    }
  }
  return;
}

} /* extern "C" */
