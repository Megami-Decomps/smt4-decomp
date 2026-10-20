/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b21c` (_code @ 0x35b21c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int);
int FUN_0019c364(void);
int FUN_002c85b0(int);
int FUN_002e132c(int);
int FUN_00318d6c(void);
int FUN_00333f6c(void);
int FUN_003343f0(int);
int FUN_003344cc(void);
int FUN_0037b450(void);

typedef struct fn_0035b21c_arg0 fn_0035b21c_arg0;
struct fn_0035b21c_arg0 {
    unsigned char pad_0x0[0x1c];
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    byte field_0x1e; /* +0x1e */
    unsigned char pad_0x1f[0x835];
    int field_0x854; /* +0x854 */
    int field_0x858; /* +0x858 */
    int field_0x85c; /* +0x85c */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_0057f208; /* 0x57f208 */
extern signed char DAT_0057f20a; /* 0x57f20a */
extern unsigned int *DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003344cc. */
/* Supplied declaration required: FUN_0037b450. */


void FUN_0035b21c(fn_0035b21c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if (param_1->field_0x85c != 0) {
    FUN_0019c364();
    param_1->field_0x85c = 0;
  }
  if (param_1->field_0x854 != 0) {
    FUN_0019a5a0();
    param_1->field_0x854 = 0;
  }
  if (param_1->field_0x858 != 0) {
    FUN_0019a5a0();
    param_1->field_0x858 = 0;
  }
  FUN_002c85b0(0);
  FUN_003343f0(0);
  FUN_00333f6c();
  if (param_1->field_0x1e != 0) {
    temp_v0 = 0;
    do {
      FUN_0019a7f4(0x14,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_002e132c(0x14);
    param_1->field_0x1e = 0;
  }
  if (param_1->field_0x1d != 0) {
    param_1->field_0x1d = 0;
  }
  if (param_1->field_0x1c != 0) {
    FUN_0037b450();
    FUN_00318d6c();
    param_1->field_0x1c = 0;
  }
  puVar1 = DAT_0057f20c;
  DAT_0057f208 = DAT_0057f208 - '\x01';
  if (DAT_0057f208 < '\x01') {
    FUN_001631d0(*DAT_0057f20c,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f20c = (unsigned int *)0x0;
    DAT_0057f208 = '\0';
    FUN_003344cc();
    puVar1 = DAT_0057f214;
    if ((DAT_0057f214 != (unsigned int *)0x0) &&
       (DAT_0057f20a = DAT_0057f20a - '\x01', DAT_0057f20a < '\x01')) {
      FUN_001631d0(*DAT_0057f214,0);
      FUN_0019a5a0(puVar1);
      DAT_0057f214 = (unsigned int *)0x0;
      DAT_0057f20a = '\0';
    }
  }
  return;
}

} /* extern "C" */
