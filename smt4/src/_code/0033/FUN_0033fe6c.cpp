/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fe6c` (_code @ 0x33fe6c, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023dc38(unsigned int *, int);
int FUN_0026242c(void);
int FUN_00269bf0(void);

typedef struct fn_0033fe6c_arg0 fn_0033fe6c_arg0;
typedef struct fn_0033fe6c_arg2 fn_0033fe6c_arg2;
struct fn_0033fe6c_arg0 {
    unsigned char pad_0x0[0x10];
    short field_0x10; /* +0x10 */
    unsigned char pad_0x12[0x18];
    short field_0x2a; /* +0x2a */
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x16];
    ushort field_0x44; /* +0x44 */
};
struct fn_0033fe6c_arg2 {
    unsigned char pad_0x0[0x64];
    ushort field_0x64; /* +0x64 */
    ushort field_0x66; /* +0x66 */
    byte field_0x68; /* +0x68 */
    byte field_0x69; /* +0x69 */
    byte field_0x6a; /* +0x6a */
};

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0023dc38. */
extern int FUN_002542ec(void);
/* Supplied declaration required: FUN_0026242c. */
/* Supplied declaration required: FUN_00269bf0. */
extern int FUN_002a8740(fn_0033fe6c_arg0 *);
extern int FUN_002b63ac(void);


unsigned int
FUN_0033fe6c(fn_0033fe6c_arg0 *param_1,int param_2,fn_0033fe6c_arg2 *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v2 = 0;
  if (param_4 != 0) {
    temp_v4 = param_3->field_0x68 != 0 || param_3->field_0x64 != 0;
    if (param_3->field_0x66 != 0) {
      temp_v4 = temp_v4 | 2;
    }
    if (param_3->field_0x69 != 0) {
      temp_v4 = temp_v4 | 2;
    }
    if ((param_3->field_0x6a & 0x7f) != 0) {
      temp_v4 = temp_v4 | 4;
    }
  }
  if ((param_3->field_0x6a & 0x7f) == 1) {
    temp_v4 = temp_v4 | 4;
  }
  temp_v6 = param_4;
  if ((int)param_1 < 0) {
    temp_v0 = FUN_002b63ac();
    if ((((temp_v4 & 1) != 0) && ((*(unsigned short *)(temp_v0 + 0x72) & 2) == 0)) &&
       (temp_v1 = temp_v0, FUN_0026242c(), temp_v1 != *(short *)(temp_v0 + 0x2a))) {
      temp_v2 = 1;
    }
    if ((((temp_v4 & 2) != 0) && ((*(unsigned short *)(temp_v0 + 0x72) & 2) == 0)) &&
       (*(short *)(temp_v0 + 0x2c) != *(short *)(temp_v0 + 0x1e))) {
      temp_v2 = temp_v2 | 2;
    }
    temp_v3 = temp_v2;
    if ((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) &&
        (((temp_v2 & 1) == 0 || (((temp_v2 & 2) == 0 && (temp_v3 = temp_v2 | 2, (temp_v2 & 1) == 0)))))) &&
       ((temp_v3 & 2) != 0)) {
      temp_v3 = temp_v3 | 1;
    }
    if ((temp_v4 & 4) == 0) {
      if (temp_v4 != temp_v3) {
        temp_v5 = 3;
      }
      return temp_v5;
    }
    temp_v6 = temp_v6 & 0xffff0000;
    FUN_0023dc38(&temp_v6,param_3->field_0x6a & 0x7f);
    (*(unsigned short *)((unsigned char *)&temp_v6 + 0)) = (unsigned short)temp_v6 & *(unsigned short *)(temp_v0 + 0x72);
  }
  else {
    if (param_2 != 0) {
      temp_v0 = FUN_002542ec();
    }
    else {
      temp_v0 = FUN_002a8740(param_1);
    }
    if (temp_v0 == 0) {
      return 3;
    }
    if ((((temp_v4 & 1) != 0) && ((*(unsigned short *)(temp_v0 + 0x44) & 0x406) == 0)) &&
       (temp_v1 = temp_v0, FUN_00269bf0(), temp_v1 != *(short *)(temp_v0 + 0x2a))) {
      temp_v2 = 1;
    }
    if ((((temp_v4 & 2) != 0) && ((*(unsigned short *)(temp_v0 + 0x44) & 0x406) == 0)) &&
       (*(short *)(temp_v0 + 0x2c) != *(short *)(temp_v0 + 0x10))) {
      temp_v2 = temp_v2 | 2;
    }
    temp_v3 = temp_v2;
    if (((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) &&
       ((((temp_v2 & 1) == 0 || (((temp_v2 & 2) == 0 && (temp_v3 = temp_v2 | 2, (temp_v2 & 1) == 0)))) &&
        ((temp_v3 & 2) != 0)))) {
      temp_v3 = temp_v3 | 1;
    }
    if ((temp_v4 & 4) == 0) {
      if (temp_v4 != temp_v3) {
        temp_v5 = 3;
      }
      return temp_v5;
    }
    temp_v6 = temp_v6 & 0xffff0000;
    FUN_0023dc38(&temp_v6,param_3->field_0x6a & 0x7f);
    (*(unsigned short *)((unsigned char *)&temp_v6 + 0)) = (unsigned short)temp_v6 & *(unsigned short *)(temp_v0 + 0x44);
  }
  if ((unsigned short)temp_v6 != 0) {
    temp_v3 = temp_v3 | 4;
  }
  if (temp_v4 != temp_v3) {
    temp_v5 = 3;
  }
  return temp_v5;
}

} /* extern "C" */
