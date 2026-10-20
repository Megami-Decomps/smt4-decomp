/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ec6e0` (_code @ 0x1ec6e0, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int cecProcessStart(void);
int FUN_002005a0(int *);
int FUN_00259784(int);
int FUN_002597c0(void);
int FUN_00262f78(void);
int FUN_00295720(void);
int FUN_00297410(int);
int FUN_00297468(unsigned char *, int *, int);
int FUN_002a5ed0(int, int);
int FUN_002bb150(...);
int FUN_002bd2b4(...);
int FUN_002c3940(...);
int asdTMTexTableLoadSprites(int);

typedef struct fn_001ec6e0_arg0 fn_001ec6e0_arg0;
struct fn_001ec6e0_arg0 {
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

extern unsigned char LAB_001ec94c; /* 0x1ec94c */
extern unsigned char LAB_001ec964; /* 0x1ec964 */
extern unsigned char LAB_001ec97c; /* 0x1ec97c */
extern unsigned char LAB_001ec990; /* 0x1ec990 */
extern int DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: cecProcessStart. */
/* Supplied declaration required: FUN_002005a0. */
extern int gameDataBlockTestFlag(unsigned int);
extern int FUN_002595bc(void);
/* Supplied declaration required: FUN_00259784. */
/* Supplied declaration required: FUN_002597c0. */
extern unsigned int FUN_002597e0(void);
extern unsigned int FUN_00259800(void);
/* Supplied declaration required: FUN_00262f78. */
/* Supplied declaration required: FUN_00295720. */
/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bd2b4. */
extern int rt_memcmp(unsigned char *, int, unsigned int);
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */


void FUN_001ec6e0(fn_001ec6e0_arg0 *param_1)

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
      cecProcessStart();
      FUN_00297410(0x25);
      FUN_00295720();
      FUN_00297468(&LAB_001ec94c,&param_1->field_0xcec,0);
      FUN_00297468(&LAB_001ec964,&param_1->field_0xcf0,0);
      FUN_00297468(&LAB_001ec97c,&param_1->field_0xcf4,0);
      FUN_00297468(&LAB_001ec990,temp_v6,0);
      asdTMTexTableLoadSprites(0x39);
      FUN_002a5ed0(0x39,0);
      temp_v4 = FUN_00259800();
      temp_v3 = FUN_002597e0();
      temp_v0 = FUN_00262f78();
      FUN_002bd2b4(DAT_0043daa8 + 0x48,temp_v0,temp_v3,temp_v4);
      temp_v1 = FUN_00262f78();
      if (temp_v1 == 0) {
        FUN_002c3940(DAT_0043daa8 + 0x80,0x14);
      }
      temp_v1 = FUN_002595bc();
      param_1->field_0xd60 = (char)temp_v1;
      if ((temp_v1 != 0) && (temp_v1 = gameDataBlockTestFlag(0x20), temp_v1 != 0)) {
        FUN_002005a0(&temp_v3);
        temp_v1 = rt_memcmp(temp_v5,DAT_0043daa8 + 0x80,0x14);
        if (temp_v1 != 0) {
          if (*(short *)(DAT_0043daa8 + 0x90) != 0) {
            FUN_002597c0();
            FUN_00259784(DAT_0043daa8 + 0x48);
          }
          else {
            temp_v7 = FUN_00259800();
            temp_v0 = FUN_002597e0();
            FUN_002bd2b4(DAT_0043daa8 + 0x48,0,temp_v0,temp_v7);
            FUN_002597c0();
            FUN_00259784(DAT_0043daa8 + 0x48);
            FUN_002c3940(DAT_0043daa8 + 0x80,0x14);
          }
        }
      }
      param_1->field_0xd68 = param_1->field_0xd68 + 1;
    }
    FUN_002bb150(10000000,0);
  }
  return;
}

} /* extern "C" */
