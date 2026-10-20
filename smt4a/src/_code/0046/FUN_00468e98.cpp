/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00468e98` (_code @ 0x468e98, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00183318(int);
int FUN_0019de98(int, unsigned int);
int FUN_00334518(void);
int FUN_0034aae4(...);
int FUN_0037c8b4(int, int);
int FUN_0037c8e4(int, int);
int FUN_003a7630(int);
int FUN_003c5fc4(int);

typedef struct fn_00468e98_arg0 fn_00468e98_arg0;
struct fn_00468e98_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xa54];
    unsigned char field_0xa60; /* +0xa60 */
    unsigned char pad_0xa61[0x1];
    byte field_0xa62; /* +0xa62 */
    unsigned char pad_0xa63[0x1];
    byte field_0xa64; /* +0xa64 */
    unsigned char pad_0xa65[0x1];
    ushort field_0xa66; /* +0xa66 */
    undefined2 field_0xa68; /* +0xa68 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned short DAT_005f17a8; /* 0x5f17a8 */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00183318. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_002a746c(void);
extern int FUN_002f153c(void);
extern unsigned char FUN_0031f90c(void);
/* Supplied declaration required: FUN_00334518. */
extern unsigned char FUN_00334530(void);
/* Supplied declaration required: FUN_0034aae4. */
extern unsigned int FUN_00368390(void);
extern unsigned short FUN_00372140(void);
/* Supplied declaration required: FUN_0037c8b4. */
/* Supplied declaration required: FUN_0037c8e4. */
extern unsigned short FUN_0039c628(void);
/* Supplied declaration required: FUN_003a7630. */
/* Supplied declaration required: FUN_003c5fc4. */
extern int FUN_00467df8(void);


void FUN_00468e98(fn_00468e98_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = FUN_002a746c();
  if (temp_v3 != 0) {
    temp_v0 = FUN_00334530();
    param_1->field_0xa64 = temp_v0;
    temp_v1 = FUN_0039c628();
    param_1->field_0xa66 = temp_v1;
    temp_v2 = FUN_00372140();
    param_1->field_0xa68 = temp_v2;
    temp_v3 = FUN_002f153c();
    temp_v0 = FUN_0031f90c();
    param_1->field_0xa62 = temp_v0;
    FUN_00334518();
    temp_v5 = 0;
    if (param_1->field_0xa64 != 0) {
      temp_v4 = FUN_00162e8c();
      *(unsigned short *)(temp_v4 + 0x22) = 0;
      temp_v5 = FUN_00368390();
      if (temp_v3 == 0) {
        temp_v5 = (unsigned int)param_1->field_0xa66;
        *(unsigned short *)(temp_v4 + 0x1e) = param_1->field_0xa66;
      }
    }
    FUN_0034aae4(temp_v5);
    if (param_1->field_0xa62 != 0) {
      DAT_005f17a8 = 1;
      param_1->field_0x4 = 0x11;
      param_1->field_0x8 = 0;
      FUN_003a7630(0);
      return;
    }
    if (temp_v3 != 0) {
      param_1->field_0xa60 = (char)temp_v3;
      FUN_0019de98(0,0xf4f4f4ff);
      FUN_00183318(1);
      param_1->field_0x4 = 0xc;
      param_1->field_0x8 = 0;
      FUN_003a7630(0);
      return;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_0037c8e4(1,0);
      temp_v3 = FUN_00467df8();
      FUN_0037c8b4(-temp_v3,0);
      FUN_003c5fc4(1);
      *(unsigned char *)(param_1 + 1) = 0;
    }
    FUN_0034aae4();
    param_1->field_0x4 = 5;
    param_1->field_0x8 = 0;
  }
  return;
}

} /* extern "C" */
