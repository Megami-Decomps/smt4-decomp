/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ef1e4` (_code @ 0x3ef1e4, 0x41c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

extern unsigned int DAT_005739e8; /* 0x5739e8 */
extern unsigned int DAT_005739ec; /* 0x5739ec */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_005739f8; /* 0x5739f8 */
extern unsigned int DAT_005739fc; /* 0x5739fc */
extern unsigned int DAT_00573a20; /* 0x573a20 */
extern unsigned int DAT_00573a24; /* 0x573a24 */
extern unsigned int DAT_00573aa8; /* 0x573aa8 */
extern unsigned int DAT_00573aac; /* 0x573aac */
extern unsigned int DAT_00573b28; /* 0x573b28 */
extern unsigned int DAT_00573b2c; /* 0x573b2c */
extern unsigned int DAT_00573b30; /* 0x573b30 */
extern unsigned int DAT_00573b34; /* 0x573b34 */
extern unsigned int DAT_00573b70; /* 0x573b70 */
extern unsigned int DAT_00573b74; /* 0x573b74 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001633a0. */
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_001ab888(void);
extern int FUN_00213b5c(void);
extern int FUN_00228ab0(int);


void FUN_003ef1e4(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 7 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *puVar11;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  int temp_v16;
  float temp_v17;
  float temp_v18;
  
  temp_v4 = DAT_005739f4;
  temp_v3 = DAT_005739f0;
  temp_v7 = DAT_005739ec;
  temp_v5 = DAT_005739e8;
  puVar11 = (unsigned int *)(param_1 + 0x45a0);
  temp_v10 = *puVar11 & ~DAT_005739f0 & ~DAT_005739e8;
  temp_v11 = *(unsigned int *)(param_1 + 0x45a4) & ~DAT_005739f4 & ~DAT_005739ec;
  *puVar11 = temp_v10;
  *(unsigned int *)(param_1 + 0x45a4) = temp_v11;
  temp_v8 = *(unsigned int *)(param_1 + 0x45ac);
  temp_v12 = *(unsigned int *)(param_1 + 0x45a8);
  if ((temp_v8 & DAT_00573b74) != 0 || (DAT_00573b70 & temp_v12) != 0) {
    return;
  }
  if ((temp_v8 & DAT_00573b2c) != 0 || (DAT_00573b28 & temp_v12) != 0) {
    return;
  }
  if ((DAT_00573b30 & temp_v12) != 0 || (temp_v8 & DAT_00573b34) != 0) {
    *(unsigned int *)(param_1 + 0x45a4) = temp_v7 | temp_v11 | temp_v4;
    *puVar11 = temp_v10 | temp_v3 | temp_v5;
    return;
  }
  if ((DAT_00573a24 & temp_v11) != 0 || (DAT_00573a20 & temp_v10) != 0) {
    return;
  }
  temp_v9 = 0;
  if ((*(unsigned int *)(param_1 + 0x10c) & 0x10000) != 0) {
    *(unsigned int *)(param_1 + 0x45a4) = temp_v7 | temp_v11 | temp_v4;
    *puVar11 = temp_v10 | temp_v3 | temp_v5;
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x10c) & 0x20000) != 0) {
    return;
  }
  if (param_2 != 0) {
    temp_v9 = FUN_001633a0(99);
    if (temp_v9 < 0x5a) {
      return;
    }
    temp_v5 = DAT_005739f0 | *puVar11 | DAT_005739e8;
    temp_v7 = *(unsigned int *)(param_1 + 0x45a4) | DAT_005739f4 | DAT_005739ec;
    *puVar11 = temp_v5;
    *(unsigned int *)(param_1 + 0x45a4) = temp_v7;
    return;
  }
  temp_v0 = *(char *)(param_1 + 0x188);
  if (temp_v0 != '\x01') {
    if (temp_v0 == '\x02') {
      *(unsigned int *)(param_1 + 0x45a4) = temp_v7 | temp_v11 | temp_v4;
      *puVar11 = temp_v10 | temp_v3 | temp_v5;
      temp_v5 = FUN_001633a0(100);
      if (*(unsigned short *)(param_1 + 0x152) <= temp_v5) {
        return;
      }
      temp_v5 = DAT_00573aa8 | *puVar11;
      temp_v7 = DAT_00573aac | *(unsigned int *)(param_1 + 0x45a4);
      *puVar11 = temp_v5;
      *(unsigned int *)(param_1 + 0x45a4) = temp_v7;
      return;
    }
    if (temp_v0 == '\x03') {
      return;
    }
  }
  else {
    do {
      temp_v5 = *(unsigned int *)(param_1 + temp_v9 * 4 + 0xf4);
      if (temp_v5 != 0) {
        temp_v5 = temp_v5 & 0xffff;
        FUN_00184310();
        if ((temp_v5 != 0) && (*(char *)(temp_v5 + 2) == '\'')) break;
      }
      temp_v9 = temp_v9 + 1;
      if (temp_v9 >= 6) {
        temp_v5 = DAT_005739f8 | *puVar11;
        *(unsigned int *)(param_1 + 0x45a4) = DAT_005739fc | *(unsigned int *)(param_1 + 0x45a4);
        *puVar11 = temp_v5;
        return;
      }
    } while( 1 );
  }
  temp_v17 = 0.0f;
  temp_v18 = temp_v17;
  temp_v9 = FUN_001801a4();
  if ((*(unsigned short *)(temp_v9 + 0x5e) & 2) == 0) {
    temp_v9 = FUN_001801a4();
    temp_v1 = *(short *)(temp_v9 + 0x26);
    temp_v9 = FUN_001801a4();
    temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x28) + (int)temp_v1,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v9 = 0;
  do {
    temp_v6 = FUN_001ab888();
    if ((-1 < *(char *)(temp_v6 + temp_v9 + 0x1ca0)) &&
       (temp_v6 = FUN_00228ab0(temp_v9),
       (*(unsigned short *)(temp_v6 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v6 + 0x60) & 0x400) == 0)) {
      temp_v6 = (int)*(short *)(temp_v6 + 0x1a) + (int)*(short *)(temp_v6 + 0x18);
      temp_v15 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v17) << 0x1f) |
              ((unsigned int)(temp_v15 == temp_v17) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v17 != temp_v17)) << 0x1c);
      temp_v2 = (unsigned char)(temp_v5 >> 0x18);
      if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v17 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 3);
  temp_v9 = 0;
  do {
    temp_v5 = *(unsigned int *)(param_1 + temp_v9 * 4 + 0xf4);
    if (temp_v5 != 0) {
      temp_v5 = temp_v5 & 0xffff;
      FUN_0019cac4();
      if (temp_v5 != 0) {
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v5 + 0x14) + (unsigned int)*(unsigned short *)(temp_v5 + 0x12);
        temp_v15 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v18) << 0x1f) |
                ((unsigned int)(temp_v15 == temp_v18) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v18 != temp_v18)) << 0x1c);
        temp_v2 = (unsigned char)(temp_v5 >> 0x18);
        if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v18 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 6);
  temp_v16 = (int)((temp_v17 - temp_v18) * 0.2f);
  temp_v9 = temp_v16 + 0x32;
  temp_v6 = FUN_00213b5c();
  if (temp_v6 != 0) {
    temp_v6 = FUN_00213b5c();
    if ((temp_v6 != 1) && (temp_v6 = FUN_00213b5c(), temp_v6 != 3)) {
      temp_v6 = FUN_00213b5c();
      if (temp_v6 != 2) {
        temp_v6 = FUN_00213b5c();
        if (temp_v6 != 4) goto LAB_003ef5b0;
        temp_v18 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (int)(temp_v18 * 0.1f);
      }
      else {
        temp_v9 = temp_v9 / 2;
      }
      if (temp_v9 >= 0x47) {
        temp_v9 = 0x46;
      }
    }
    else {
      temp_v9 = 1000;
    }
  }
  else {
    temp_v14 = SBORROW4(temp_v9,0x1e);
    temp_v6 = temp_v16 + 0x14;
    temp_v13 = temp_v9 == 0x1e;
    if (temp_v9 < 0x1e) {
      temp_v9 = 0x1e;
    }
    else {
      temp_v14 = SBORROW4(temp_v9,0x46);
      temp_v6 = temp_v16 - 0x14;
      temp_v13 = temp_v9 == 0x46;
    }
    if (!(temp_v13 || temp_v6 < 0 != temp_v14)) {
      temp_v9 = 0x46;
    }
  }
LAB_003ef5b0:
  temp_v6 = FUN_001633a0(100);
  if (temp_v6 <= temp_v9) {
    return;
  }
  temp_v5 = DAT_005739f0 | *puVar11 | DAT_005739e8;
  *(unsigned int *)(param_1 + 0x45a4) = DAT_005739f4 | *(unsigned int *)(param_1 + 0x45a4) | DAT_005739ec;
  *puVar11 = temp_v5;
  return;
}
