/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2284` (_code @ 0x2e2284, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_00237650(void);
int FUN_00275bc8(void *, unsigned int);
int FUN_00275f44(int, int);
int FUN_00281720(int, int);
int FUN_002e2114(void);
int FUN_0032ed10(void);
int FUN_0035a204(int);

typedef struct fn_002e2284_arg0 fn_002e2284_arg0;
struct fn_002e2284_arg0 {
    unsigned char pad_0x0[0xe4];
    void *field_0xe4; /* +0xe4 */
    unsigned char field_0xe8; /* +0xe8 */
    unsigned char pad_0xe9[0xb];
    int field_0xf4; /* +0xf4 */
    unsigned char pad_0xf8[0x4c];
    undefined4 field_0x144; /* +0x144 */
};

extern unsigned char DAT_0057f110; /* 0x57f110 */

/* Supplied declaration required: sysPlaySe. */
extern int FUN_0018206c(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned int);
extern int FUN_002009a8(unsigned int);
/* Supplied declaration required: FUN_00237650. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00281720. */
/* Supplied declaration required: FUN_002e2114. */
/* Supplied declaration required: FUN_0032ed10. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_0035a204. */
extern int FUN_003f86c8(unsigned int);


unsigned int FUN_002e2284(fn_002e2284_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_00341940(0x2e);
  if ((((temp_v0 != 0) && (temp_v0 = FUN_0018206c(0x2e,0), temp_v0 != 0)) &&
      (temp_v0 = FUN_003f86c8(0x4a), temp_v0 != 0)) && (temp_v0 = FUN_002009a8(0x1000049), temp_v0 == 1)) {
    temp_v0 = (*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xb0;
    FUN_002e2114();
    if (temp_v0 != 0) {
      FUN_0035a204((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xb0);
      FUN_00281720((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xb0,0);
      pvVar2 = param_1->field_0xe4;
      FUN_00275bc8(pvVar2,*(unsigned int *)&param_1->field_0xe8);
      param_1->field_0xf4 = (int)pvVar2;
      *(unsigned int *)((int)pvVar2 + 0x108) = 2;
      FUN_0032ed10();
      temp_v0 = FUN_0018719c(0x4aa);
      if (temp_v0 != 0) {
        param_1->field_0x144 = 1;
        sysPlaySe(0x10d);
      }
      else {
        param_1->field_0x144 = 0xd;
        FUN_00275f44(param_1->field_0xf4,0x1f);
        FUN_00237650();
      }
      temp_v1 = 3;
    }
  }
  return temp_v1;
}

} /* extern "C" */
