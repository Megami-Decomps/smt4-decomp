/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a3b48` (_code @ 0x4a3b48, 0x2b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(int);
int FUN_0023b45c(int);
int FUN_002a7324(int);
int FUN_002c8550(int);
int FUN_002f0420(unsigned int);
int objBInitBlock19D0(unsigned char [16], int);
int FUN_0033449c(int);
int objBInitBlock12DC(void);
int FUN_0034a9c4(int, int);
int objBInitBlock12DC5(void);
int FUN_004a3e04(int);
int FUN_004bcd90(unsigned char [16]);
int rt_memcpy_w(unsigned char [16], int, int);

/* stack frame of param_1: 21 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned short spF0; /* 0xf0: local_f0 */
    unsigned short sp124; /* 0x124: local_124 */
    unsigned short sp126; /* 0x126: local_126 */
    unsigned short sp140; /* 0x140: local_140 */
} param_1_stack;

extern unsigned short FUN_0017760c(unsigned char *);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_001ab888(void);
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002c7e3c(void);
/* Supplied declaration required: FUN_002c8550. */
/* Supplied declaration required: FUN_002f0420. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: objBInitBlock12DC. */
/* Supplied declaration required: FUN_0034a9c4. */
/* Supplied declaration required: objBInitBlock12DC5. */
extern int FUN_00372014(void);
/* Supplied declaration required: FUN_004a3e04. */
/* Supplied declaration required: FUN_004bcd90. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004a3b48(int param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [16];
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  
  if (*(short *)(param_1 + 0x864) == 0) {
    FUN_0023b45c(0);
    return;
  }
  temp_v2 = FUN_004cfe4c(param_1 + 0x20);
  temp_v0 = *(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x868);
  temp_v2 = FUN_0023b3d0();
  if (temp_v2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x860) != '\x01') {
    if (*(unsigned short *)(param_1 + 0xa872) == temp_v0) {
      return;
    }
    temp_v2 = FUN_002c7e3c();
    FUN_0034a9c4(temp_v0,0);
    temp_v3 = FUN_002a4b28(temp_v0);
    if (temp_v3 == 0) {
      FUN_002c8550(0xe);
    }
    temp_v3 = FUN_002c7e3c();
    if (temp_v3 != 5) {
      if ((temp_v3 == 0xe) && (temp_v2 == 5)) {
        objBInitBlock12DC5();
      }
    }
    else if (temp_v2 == 0xe) {
      objBInitBlock12DC();
    }
    FUN_002a7324(1);
    FUN_004a3e04(param_1);
  }
  else {
    temp_v1 = (unsigned short)*(unsigned char *)(param_1 + 0x863);
    temp_v7 = temp_v1 == 0;
    if (temp_v7) {
      temp_v1 = *(unsigned short *)(param_1 + 0xa872);
    }
    if (temp_v7 && temp_v1 == temp_v0) {
      return;
    }
    if (*(char *)(param_1 + 0x861) != '\x01') {
      temp_v2 = FUN_002c7e3c();
      FUN_0034a9c4(temp_v0,0);
      FUN_0033449c(0);
      if (temp_v2 != 5) {
        objBInitBlock12DC();
      }
      if (*(char *)(param_1 + 0x863) == '\0') {
        FUN_002a7324(1);
        *(unsigned char *)(param_1 + 0x863) = 0;
        FUN_004a3e04(param_1);
        *(unsigned short *)(param_1 + 0xa872) = temp_v0;
        return;
      }
      temp_v4 = 0;
      FUN_002f0420(temp_v4);
    }
    else {
      temp_v2 = FUN_001ab888();
      temp_v3 = 0;
      temp_v5 = 0;
      if (temp_v5 < *(unsigned char *)(temp_v2 + 0x1ca3)) {
        do {
          temp_v6 = (int)*(char *)(temp_v2 + temp_v5 + 0x1c88);
          if ((-1 < temp_v6) &&
             (temp_v6 = temp_v2 + temp_v6 * 300, temp_v3 = temp_v6 + 0x68, *(unsigned short *)(temp_v6 + 0xca) == temp_v0)
             ) break;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < *(unsigned char *)(temp_v2 + 0x1ca3));
      }
      temp_v2 = FUN_002c7e3c();
      FUN_0034a9c4(temp_v0,0);
      FUN_002c8550(2);
      if ((temp_v2 == 5) && (temp_v2 = FUN_00372014(), temp_v2 != 0)) {
        objBInitBlock12DC5();
      }
      FUN_00184310(temp_v0);
      rt_memcpy_w(temp_v8,temp_v3,300);
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v24 = 0;
      temp_v25 = 0;
      temp_v26 = 0;
      temp_v27 = 0;
      temp_v28 = 0;
      FUN_004bcd90(temp_v8);
      temp_v10 = FUN_0017760c(temp_v8);
      temp_v11 = temp_v9;
      temp_v12 = 0;
      objBInitBlock19D0(temp_v8,0);
      FUN_0033449c(1);
      if (*(char *)(param_1 + 0x863) != '\0') {
        temp_v4 = 1;
        FUN_002f0420(temp_v4);
        *(unsigned char *)(param_1 + 0x863) = 0;
        FUN_004a3e04(param_1);
        *(unsigned short *)(param_1 + 0xa872) = temp_v0;
        return;
      }
      FUN_002a7324(1);
    }
    *(unsigned char *)(param_1 + 0x863) = 0;
    FUN_004a3e04(param_1);
  }
  *(unsigned short *)(param_1 + 0xa872) = temp_v0;
  return;
}

} /* extern "C" */
