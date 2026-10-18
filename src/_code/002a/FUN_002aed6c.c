/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aed6c` (_code @ 0x2aed6c, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002aed6c_arg0 fn_002aed6c_arg0;
struct fn_002aed6c_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    byte field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x4b];
    byte field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x5];
    byte field_0x8d; /* +0x8d */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a515c. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a6228. */
extern int FUN_002a63f8(unsigned int);
/* Supplied declaration required: FUN_002a6410. */
/* Supplied declaration required: FUN_002a8978. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002aec20(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aef6c. */
extern int FUN_002c0ac8(void);
extern int FUN_002c1f28(void);


/* WARNING: Removing unreachable block (ram,0x002a8c14) */
/* WARNING: Removing unreachable block (ram,0x002a8b50) */
/* WARNING: Removing unreachable block (ram,0x002a8b7c) */
/* WARNING: Removing unreachable block (ram,0x002a8bac) */
/* WARNING: Removing unreachable block (ram,0x002a8ba4) */
/* WARNING: Removing unreachable block (ram,0x002a8bbc) */
/* WARNING: Removing unreachable block (ram,0x002a8c74) */
/* WARNING: Removing unreachable block (ram,0x002a8c60) */
/* WARNING: Removing unreachable block (ram,0x002a8c24) */
/* WARNING: Removing unreachable block (ram,0x002a8c30) */
/* WARNING: Removing unreachable block (ram,0x002a8bc8) */
/* WARNING: Removing unreachable block (ram,0x002a8b8c) */
/* WARNING: Removing unreachable block (ram,0x002a8b60) */
/* WARNING: Removing unreachable block (ram,0x002a8af4) */
/* WARNING: Removing unreachable block (ram,0x002a8b04) */

void FUN_002aed6c(fn_002aed6c_arg0 *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c0ac8();
  if (param_2 < 1) {
    param_2 = 1;
  }
  temp_v1 = param_3;
  if (0 < param_3) {
    temp_v1 = param_4;
  }
  temp_v3 = 0;
  if (0 < temp_v1) {
    temp_v1 = FUN_002aef6c(*(unsigned int *)(temp_v0 + 4),param_2);
    temp_v3 = (unsigned int)*(unsigned short *)((temp_v1 + param_3 * 6 + param_4 * 2) - 6);
  }
  do {
    if (*(unsigned int *)(temp_v0 + 0x14) == temp_v3) {
      return;
    }
    if (*(char *)(temp_v0 + 0x7c) != '\0') {
      if (*(int *)(temp_v0 + 0x84) != -1) {
        FUN_002aeb2c(*(unsigned int *)(temp_v0 + 0x10));
        FUN_002a6410(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
        *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
        *(unsigned int *)(temp_v0 + 0x80) = 0;
      }
      *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
      return;
    }
    if (*(char *)(temp_v0 + 0x8d) != '\0') {
      return;
    }
    if ((*(unsigned int *)(temp_v0 + 0x14) != 0xffffffff) &&
       (temp_v1 = FUN_002a63f8(*(unsigned int *)(temp_v0 + 0x10)), temp_v1 == 0)) {
      if (*(int *)(temp_v0 + 0x18) == -1) {
        *(unsigned int *)(temp_v0 + 0x18) = temp_v3;
      }
      return;
    }
    if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(float *)(temp_v0 + 0x28) == 0.0f)) &&
       (*(int *)(temp_v0 + 0xc) != 0)) {
      FUN_002aeb2c(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      FUN_002a6410(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    temp_v1 = FUN_002c1f28();
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v0 + 0x7c) = 1;
      return;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      *(int *)(temp_v0 + 0x80) = *(int *)(temp_v0 + 0xc);
      *(unsigned int *)(temp_v0 + 0x84) = *(unsigned int *)(temp_v0 + 0x14);
    }
    *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
    temp_v1 = FUN_002aec20(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),temp_v3,1);
    if (temp_v1 != 0) {
      temp_v2 = DAT_00433158;
      FUN_002a6228(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),0x10000)
      ;
    }
    else {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x10);
      FUN_002a6214(temp_v2,*(unsigned int *)(temp_v0 + 0x14));
    }
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
    if (*(int *)(temp_v0 + 0x80) == 0) {
      return;
    }
    if (param_5 < 0) {
      temp_v3 = 3;
    }
    else {
      temp_v3 = 4;
    }
    *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
                    /* WARNING: Switch table taken from the stored dispatch table */
    if (temp_v3 >= 10) {
      if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(int *)(temp_v0 + 0xc) != 0)) ||
         ((*(int *)(temp_v0 + 0x14) != -1 || (*(int *)(temp_v0 + 4) == 0)))) {
        return;
      }
      temp_v1 = FUN_002aef6c(*(int *)(temp_v0 + 4),1);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
      param_5 = -1;
      continue;
    }
    switch(temp_v3) {
    case 1:
      *(unsigned int *)(temp_v0 + 0x74) = 0x40800000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0x30) = 0;
      break;
    case 2:
      temp_v2 = 0x41400000;
      *(unsigned int *)(temp_v0 + 0x74) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      FUN_002a8978(temp_v0);
      break;
    case 3:
      *(unsigned char *)(temp_v0 + 0x8d) = 1;
      *(unsigned int *)(temp_v0 + 0x74) = 0x40c00000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x88) = 0x3f800000;
      break;
    case 4:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41400000;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x88) = 0x3f800000;
      break;
    case 5:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41200000;
      break;
    case 6:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41200000;
      FUN_002a515c(temp_v0 + 0x34,*(unsigned int *)(temp_v0 + 8));
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x5c) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0;
      *(unsigned int *)(temp_v0 + 0x60) = 0;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      FUN_002a8978(temp_v0);
      break;
    case 7:
      temp_v2 = 0x40800000;
      *(unsigned int *)(temp_v0 + 0x74) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      FUN_002a8978(temp_v0);
      break;
    case 8:
      *(unsigned int *)(temp_v0 + 0x74) = 0x42f00000;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      FUN_002a8978(temp_v0);
      break;
    case 9:
      *(unsigned int *)(temp_v0 + 0x74) = 0x42f00000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      FUN_002a8978(temp_v0);
    }
    if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(int *)(temp_v0 + 0xc) != 0)) ||
       ((*(int *)(temp_v0 + 0x14) != -1 || (*(int *)(temp_v0 + 4) == 0)))) {
      return;
    }
    temp_v1 = FUN_002aef6c(*(int *)(temp_v0 + 4),1);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
    param_5 = -1;
  } while( 1 );
}
