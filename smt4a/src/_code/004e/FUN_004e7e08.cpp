/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7e08` (_code @ 0x4e7e08, 0x380 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004aa3d4(...);
int FUN_004c8284(...);
int FUN_004f6d34(...);
int FUN_004f7b84(...);
int FUN_004fbeac(...);
int FUN_004fdc0c(...);
int FUN_004fdcd8(...);

typedef struct fn_004e7e08_arg1 fn_004e7e08_arg1;
struct fn_004e7e08_arg1 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x14];
    void *field_0x20; /* +0x20 */
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
};

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_004e8190; /* 0x4e8190 */
extern unsigned char LAB_004e81a0; /* 0x4e81a0 */
extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_003e8430(int);
extern int FUN_0040de1c(unsigned int, fn_004e7e08_arg1 *);
/* Supplied declaration required: FUN_004aa3d4. */
extern int FUN_004c3a98(int, unsigned int);
extern int FUN_004c52ec(unsigned int);
/* Supplied declaration required: FUN_004c8284. */
/* Supplied declaration required: FUN_004f6d34. */
/* Supplied declaration required: FUN_004f7b84. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fdc0c. */
/* Supplied declaration required: FUN_004fdcd8. */


unsigned int FUN_004e7e08(int *param_1,fn_004e7e08_arg1 *param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = FUN_003e8430(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),7);
    temp_v1 = FUN_004c52ec(7);
    temp_v2 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),8);
    temp_v3 = FUN_004c52ec(8);
    temp_v4 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),9);
    temp_v5 = FUN_004c52ec(9);
    temp_v6 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),10);
    temp_v7 = FUN_004c52ec(10);
    if ((temp_v6 != temp_v7) || (temp_v4 != temp_v5 || (temp_v2 != temp_v3 || temp_v0 != temp_v1))) {
      FUN_004c8284((int)*(short *)((int)param_2->field_0x24 + 0x6a),3,1,0);
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    return 1;
  }
  temp_v0 = param_2->field_0x8;
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      temp_v0 = DAT_00573808;
      FUN_004f6d34();
      if (temp_v0 == 0) {
        return 0;
      }
      param_2->field_0x8 = 2;
      return 0;
    }
    if (temp_v0 != 2) {
      if (temp_v0 != 3) {
        return 0;
      }
      temp_v0 = FUN_0040de1c(DAT_005712f0,param_2);
      if (0 < temp_v0) {
        return 0;
      }
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
      return 1;
    }
    if (!((DAT_0057116c & *(unsigned int *)((int)param_2->field_0x20 + 4)) == 0 &&
         (*(unsigned int *)param_2->field_0x20 & DAT_00571168) == 0)) {
      temp_v0 = (int)*(short *)((int)param_2->field_0x24 + 0x6a);
      FUN_004fdcd8(0,param_2,temp_v0,temp_v0,7,0,0,0);
    }
    else {
      temp_v0 = (int)*(short *)((int)param_2->field_0x24 + 0x6a);
      FUN_004fdcd8(0,param_2,temp_v0,temp_v0,7,0,2,0);
    }
    FUN_004aa3d4(DAT_0057a9c8,2,0x1cc,*(unsigned int *)((int)param_2->field_0x20 + 0x3f8),
                 *(unsigned short *)((int)param_2->field_0x28 + 2),0);
    temp_v0 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),7);
    temp_v1 = FUN_004c52ec(7);
    temp_v2 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),8);
    temp_v3 = FUN_004c52ec(8);
    temp_v4 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),9);
    temp_v5 = FUN_004c52ec(9);
    temp_v6 = FUN_004c3a98((int)*(short *)((int)param_2->field_0x24 + 0x6a),10);
    temp_v7 = FUN_004c52ec(10);
    if ((temp_v6 == temp_v7) && (temp_v4 == temp_v5 && (temp_v2 == temp_v3 && temp_v0 == temp_v1))) {
      FUN_004fdc0c(10,param_2,0x40,param_2->field_0x20,0);
    }
    else {
      FUN_004c8284((int)*(short *)((int)param_2->field_0x24 + 0x6a),3,1,0);
      FUN_004fbeac(10,param_2,0,0x3f,0);
    }
    temp_v0 = 3;
  }
  else {
    if (!((*(unsigned int *)param_2->field_0x20 & DAT_00571168) == 0 &&
         (*(unsigned int *)((int)param_2->field_0x20 + 4) & DAT_0057116c) == 0)) {
      FUN_004f7b84(DAT_00573808,&LAB_004e8190);
    }
    else {
      FUN_004f7b84(DAT_00573808,&LAB_004e81a0);
    }
    temp_v0 = 1;
  }
  param_2->field_0x8 = temp_v0;
  return 0;
}

} /* extern "C" */
