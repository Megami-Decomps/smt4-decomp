/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387bb8` (_code @ 0x387bb8, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00281720(unsigned int, int);
int FUN_002c0b5c(int);
int FUN_002e264c(int);
int FUN_002e2680(int);
int FUN_002e6dd0(int, int);
int FUN_002f4014(int);
int FUN_00319e58(void);
int FUN_0031d890(void);
int FUN_0032e25c(int, int);
int FUN_0032e30c(int);
int FUN_003a4980(unsigned int, int, unsigned int);

typedef struct fn_00387bb8_arg0 fn_00387bb8_arg0;
struct fn_00387bb8_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    int field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x4b];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x8f];
    undefined4 field_0xe8; /* +0xe8 */
    undefined4 field_0xec; /* +0xec */
    unsigned char pad_0xf0[0x8];
    undefined4 field_0xf8; /* +0xf8 */
    unsigned char pad_0xfc[0xc];
    ushort field_0x108; /* +0x108 */
    unsigned char pad_0x10a[0x6];
    byte field_0x110; /* +0x110 */
    unsigned char pad_0x111[0x1];
    undefined1 field_0x112; /* +0x112 */
    unsigned char pad_0x113[0x39];
    undefined4 field_0x14c; /* +0x14c */
};

/* Supplied declaration required: FUN_00281720. */
extern int FUN_00284e94(void);
extern int FUN_002a2cf0(void);
/* Supplied declaration required: FUN_002c0b5c. */
extern int FUN_002c334c(void);
/* Supplied declaration required: FUN_002e264c. */
/* Supplied declaration required: FUN_002e2680. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_002f4014. */
/* Supplied declaration required: FUN_00319e58. */
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0032e25c. */
/* Supplied declaration required: FUN_0032e30c. */
extern int FUN_00345388(unsigned int);
/* Supplied declaration required: FUN_003a4980. */


unsigned int FUN_00387bb8(fn_00387bb8_arg0 *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_1->field_0x110 != 0) {
    param_1->field_0x110 = 0;
    FUN_0032e30c(param_1->field_0x8);
    if (param_1->field_0x108 == 0) {
      FUN_0032e25c(param_1->field_0x8,0);
    }
    temp_v0 = FUN_002a2cf0();
    if ((temp_v0 != 0) && (temp_v0 = FUN_00345388(0x20), temp_v0 != 0)) {
      FUN_00319e58();
      FUN_002c0b5c(param_1->field_0x8);
    }
    if (param_1->field_0x108 == 0) {
      FUN_002e6dd0(param_1->field_0x8 + 0x50,0x14);
    }
    FUN_003a4980(*(unsigned int *)&param_1->field_0xc,param_1->field_0x8,
                 *(unsigned int *)&param_1->field_0x58);
    FUN_002e264c(param_1->field_0x8);
    FUN_002f4014(param_1->field_0x8);
    FUN_00281720(*(unsigned int *)&param_1->field_0x4,1);
    param_1->field_0xe8 = 0xffffffff;
    param_1->field_0xf8 = 1;
    param_1->field_0xec = 0xffffffff;
    param_1->field_0x14c = 0;
    param_1->field_0x112 = 1;
    FUN_002e2680(0);
    FUN_0031d890();
    temp_v1 = 3;
  }
  else {
    switch(param_1->field_0x14c) {
    default:
      return temp_v1;
    case 1:
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
      if (*(int *)(param_1 + 1) < 1) {
        return 0;
      }
      break;
    case 6:
      if (param_1->field_0x108 != 0) {
        temp_v0 = FUN_002c334c();
        if (temp_v0 == 0) {
          return 0;
        }
        temp_v0 = FUN_00284e94();
        if (temp_v0 == 0) {
          return 0;
        }
      }
    }
    param_1->field_0x110 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
