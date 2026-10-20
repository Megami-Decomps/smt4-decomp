/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033be90` (_code @ 0x33be90, 0x230 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029e974(void);
int FUN_002b9024(void);
int FUN_002c09f4(...);
int FUN_0033c164(void);

typedef struct fn_0033be90_arg2 fn_0033be90_arg2;
struct fn_0033be90_arg2 {
    unsigned char pad_0x0[0x4e];
    ushort field_0x4e; /* +0x4e */
    unsigned char pad_0x50[0x2];
    ushort field_0x52; /* +0x52 */
    unsigned char pad_0x54[0x2];
    ushort field_0x56; /* +0x56 */
    unsigned char pad_0x58[0x2];
    ushort field_0x5a; /* +0x5a */
    unsigned char pad_0x5c[0x2];
    ushort field_0x5e; /* +0x5e */
    unsigned char pad_0x60[0x2];
    ushort field_0x62; /* +0x62 */
    unsigned char pad_0x64[0x2];
    ushort field_0x66; /* +0x66 */
    unsigned char pad_0x68[0x2];
    ushort field_0x6a; /* +0x6a */
};

/* stack frame of param_3: 12 slot(s), 32 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int padIsButtonDown(unsigned int);
/* Supplied declaration required: FUN_0029e974. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c09f4. */
/* Supplied declaration required: FUN_0033c164. */


short FUN_0033be90(unsigned int *param_1,int param_2,fn_0033be90_arg2 *param_3)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  unsigned char temp_v6;
  short *psVar9;
  unsigned char temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  
  if (param_2 < 0) {
    return 0;
  }
  temp_v1 = (unsigned int)*(unsigned short *)((int)param_1 + param_2 * 2);
  FUN_0029e974();
  temp_v0 = *(unsigned char *)(temp_v1 + 3);
  temp_v2 = temp_v0 & 0x1f;
  temp_v1 = temp_v2;
  FUN_0033c164();
  temp_v7 = 0;
  temp_v6 = 0;
  temp_v3 = FUN_002c09f4(99);
  do {
    temp_v6 = *(unsigned char *)(temp_v1 + 1 + temp_v7) + temp_v6;
    if (temp_v3 < temp_v6) break;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 5);
  if (temp_v7 != 0) {
    if (temp_v7 != 1) {
      if (temp_v7 == 3) {
        temp_v2 = (temp_v2 + 1) & 0xff;
      }
      else if (temp_v7 == 4) {
        temp_v2 = (temp_v2 + 2) & 0xff;
      }
    }
    else if ((temp_v0 & 0x1f) != 0) {
      temp_v2 = (temp_v2 - 1) & 0xff;
    }
  }
  else if (temp_v2 >= 2) {
    temp_v2 = (temp_v2 - 2) & 0xff;
  }
  temp_v4 = padIsButtonDown(5);
  if (temp_v4 != 0) {
    temp_v2 = (temp_v2 + 1) & 0xff;
  }
  temp_v8 = *param_1;
  temp_v9 = param_1[1];
  temp_v10 = param_1[2];
  temp_v11 = param_1[3];
  FUN_002b9024();
  temp_v12 = param_3->field_0x4e;
  temp_v4 = 0;
  psVar9 = (short *)0x1;
  temp_v13 = param_3->field_0x52;
  temp_v14 = param_3->field_0x56;
  temp_v15 = param_3->field_0x5a;
  temp_v16 = param_3->field_0x5e;
  temp_v17 = param_3->field_0x62;
  temp_v18 = param_3->field_0x66;
  temp_v19 = param_3->field_0x6a;
  do {
    psVar6 = psVar9;
    FUN_0029e974();
    if (((*(unsigned char *)((int)psVar6 + 3) & 0x80) != 0) && ((*(unsigned char *)((int)psVar6 + 3) & 0x1f) == temp_v2)
       ) {
      temp_v5 = 0;
      do {
        if (*(short *)((int)&temp_v8 + temp_v5 * 2) == *psVar6) goto LAB_0033c00c;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x10);
      temp_v4 = temp_v4 + 1;
    }
LAB_0033c00c:
    psVar9 = (short *)(((int)psVar9 + 1U) & 0xffff);
  } while (psVar9 < (short *)0x1f5);
  if (temp_v4 != 0) {
    temp_v4 = FUN_002c09f4((temp_v4 - 1U) & 0xffff);
    psVar9 = (short *)0x1;
    do {
      psVar6 = psVar9;
      FUN_0029e974();
      if (((*(unsigned char *)((int)psVar6 + 3) & 0x80) != 0) &&
         ((*(unsigned char *)((int)psVar6 + 3) & 0x1f) == temp_v2)) {
        temp_v5 = 0;
        do {
          if (*(short *)((int)&temp_v8 + temp_v5 * 2) == *psVar6) goto LAB_0033c088;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x10);
        temp_v4 = temp_v4 - 1;
        if (temp_v4 == 0) {
          return *psVar6;
        }
      }
LAB_0033c088:
      psVar9 = (short *)(((int)psVar9 + 1U) & 0xffff);
    } while (psVar9 < (short *)0x1f5);
  }
  return 0;
}

} /* extern "C" */
