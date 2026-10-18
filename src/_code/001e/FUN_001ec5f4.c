/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ec5f4` (_code @ 0x1ec5f4, 0x268 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001ec5f4_arg0 fn_001ec5f4_arg0;
struct fn_001ec5f4_arg0 {
    unsigned char pad_0x0[0xcec];
    int field_0xcec; /* +0xcec */
    int field_0xcf0; /* +0xcf0 */
    int field_0xcf4; /* +0xcf4 */
    int field_0xcf8; /* +0xcf8 */
    unsigned char pad_0xcfc[0x64];
    char field_0xd60; /* +0xd60 */
    unsigned char pad_0xd61[0x4];
    byte field_0xd65; /* +0xd65 */
    unsigned char pad_0xd66[0x2];
    int field_0xd68; /* +0xd68 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char LAB_001ec860; /* 0x1ec860 */
extern unsigned char LAB_001ec878; /* 0x1ec878 */
extern unsigned char LAB_001ec890; /* 0x1ec890 */
extern unsigned char LAB_001ec8a4; /* 0x1ec8a4 */
extern int DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: FUN_001a06d4. */
/* Supplied declaration required: FUN_0020043c. */
extern int FUN_002597cc(unsigned int);
extern int FUN_002597f4(void);
/* Supplied declaration required: FUN_002599bc. */
/* Supplied declaration required: FUN_002599f8. */
extern unsigned int FUN_00259a18(void);
extern unsigned int FUN_00259a38(void);
/* Supplied declaration required: FUN_002631a4. */
/* Supplied declaration required: FUN_002959c4. */
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bd4a4. */
extern int FUN_002c1a48(unsigned char *, int, unsigned int);
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_002c4e28. */


void FUN_001ec5f4(fn_001ec5f4_arg0 *param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [20];
  int *temp_v6;
  unsigned int temp_v7;
  
  temp_v6 = &param_1->field_0xcf8;
  while (param_1->field_0xd65 == 0) {
    if (param_1->field_0xd68 != 0) {
      if ((param_1->field_0xd68 == 1) && (param_1->field_0xcec != 0)) {
        temp_v2 = param_1->field_0xcf0 != 0;
        temp_v1 = 0;
        if (temp_v2) {
          temp_v1 = param_1->field_0xcf4;
        }
        if ((temp_v2 && temp_v1 != 0) && (param_1->field_0xcf8 != 0)) {
          param_1->field_0xd68 = 2;
        }
      }
    }
    else {
      FUN_001a06d4();
      FUN_002976ac(0x25);
      FUN_002959c4();
      FUN_00297704(&LAB_001ec860,&param_1->field_0xcec,0);
      FUN_00297704(&LAB_001ec878,&param_1->field_0xcf0,0);
      FUN_00297704(&LAB_001ec890,&param_1->field_0xcf4,0);
      FUN_00297704(&LAB_001ec8a4,temp_v6,0);
      FUN_002c4e28(0x39);
      FUN_002a6214(0x39,0);
      temp_v4 = FUN_00259a38();
      temp_v3 = FUN_00259a18();
      temp_v0 = FUN_002631a4();
      FUN_002bd4a4(DAT_0043daa8 + 0x48,temp_v0,temp_v3,temp_v4);
      temp_v1 = FUN_002631a4();
      if (temp_v1 == 0) {
        FUN_002c3b44(DAT_0043daa8 + 0x80,0x14);
      }
      temp_v1 = FUN_002597f4();
      param_1->field_0xd60 = (char)temp_v1;
      if ((temp_v1 != 0) && (temp_v1 = FUN_002597cc(0x20), temp_v1 != 0)) {
        FUN_0020043c(&temp_v3);
        temp_v1 = FUN_002c1a48(temp_v5,DAT_0043daa8 + 0x80,0x14);
        if (temp_v1 != 0) {
          if (*(short *)(DAT_0043daa8 + 0x90) != 0) {
            FUN_002599f8();
            FUN_002599bc(DAT_0043daa8 + 0x48);
          }
          else {
            temp_v7 = FUN_00259a38();
            temp_v0 = FUN_00259a18();
            FUN_002bd4a4(DAT_0043daa8 + 0x48,0,temp_v0,temp_v7);
            FUN_002599f8();
            FUN_002599bc(DAT_0043daa8 + 0x48);
            FUN_002c3b44(DAT_0043daa8 + 0x80,0x14);
          }
        }
      }
      param_1->field_0xd68 = param_1->field_0xd68 + 1;
    }
    FUN_002bb490(10000000,0);
  }
  return;
}
