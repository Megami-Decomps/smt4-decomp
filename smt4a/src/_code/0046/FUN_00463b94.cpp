/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463b94` (_code @ 0x463b94, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int objectCommandReserveWords(int, int);
int FUN_001911a4(int, int);
int FUN_004632f8(int, int);
int FUN_00463618(int, int);

typedef struct fn_00463b94_arg0 fn_00463b94_arg0;
typedef struct fn_00463b94_arg0_p174 fn_00463b94_arg0_p174;
struct fn_00463b94_arg0 {
    undefined4 field_0x0; /* +0x0 */
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x14f];
    void *field_0x16c; /* +0x16c */
    undefined4 *field_0x170; /* +0x170 */
    fn_00463b94_arg0_p174 *field_0x174; /* +0x174 */
    unsigned char pad_0x178[0xc];
    undefined4 field_0x184; /* +0x184 */
};
struct fn_00463b94_arg0_p174 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined1 field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x7];
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x164];
    undefined4 field_0x184; /* +0x184 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: objectCommandReserveWords. */
/* Supplied declaration required: FUN_001911a4. */
extern int FUN_00191330(void);
/* Supplied declaration required: FUN_004632f8. */
/* Supplied declaration required: FUN_00463618. */


void FUN_00463b94(fn_00463b94_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)&param_1->field_0x1c;
  temp_v1 = FUN_00191330();
  temp_v2 = temp_v1;
  objectCommandReserveWords(temp_v1,0xf);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 0x2a;
  if (*(char *)(temp_v3 + 0x1c) != '\0') {
    if (*(char *)(temp_v3 + 0x1c) != '\x01') {
      temp_v0 = 0;
    }
    else {
      FUN_00463618(temp_v3,temp_v2);
      temp_v0 = (unsigned char)temp_v3;
    }
  }
  else {
    FUN_004632f8(temp_v3,temp_v2);
    temp_v0 = (unsigned char)temp_v3;
  }
  *(unsigned char *)(temp_v2 + 0x14) = temp_v0;
  listAppendNode(temp_v1,temp_v2);
  FUN_001911a4(temp_v1,1);
  return;
}

} /* extern "C" */
