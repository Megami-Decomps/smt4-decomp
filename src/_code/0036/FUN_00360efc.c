/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360efc` (_code @ 0x360efc, 0x218 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 11 slot(s), 38 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned int *DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_004719d8; /* 0x4719d8 */
extern unsigned int DAT_004719dc; /* 0x4719dc */
extern unsigned char DAT_004c4b40; /* 0x4c4b40 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002a3198. */
/* Supplied declaration required: FUN_002a7f28. */
extern unsigned int FUN_002a808c(unsigned int);
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c0d50. */
/* Supplied declaration required: FUN_0035750c. */
/* Supplied declaration required: FUN_003600f4. */
/* Supplied declaration required: FUN_00360104. */


unsigned int FUN_00360efc(unsigned char *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  float in_s0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_5c;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int *temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13 [5];
  
  puVar2 = DAT_0044e368;
  temp_v4 = 0;
  temp_v13[0] = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = (unsigned int *)0x0;
  temp_v12 = 0;
  while (((temp_v0 = FUN_002a808c(0x407), (temp_v0 & 0x3fc00) != 0x4400 || ((temp_v0 & 0x3ff) < 100)) ||
         ((temp_v0 & 0x3ff) >= 0xb4))) {
    if (-1 < (int)temp_v0 || temp_v0 == 0xc8a0cffc) {
      if (param_3 != 0) {
        FUN_0035750c(&temp_v6,param_3,0xc000,3,3);
        puVar2 = temp_v11;
      }
      FUN_002a7f28(0x407,param_2,0xe30,puVar2);
      FUN_003600f4();
      temp_v3 = 0.2f;
      temp_v1 = in_s0;
      if ((int)in_s0 >= 0x3e4cccce) {
        temp_v2 = 0.01f;
        do {
          in_s0 = in_s0 - temp_v2;
          if ((int)in_s0 < 0x3e4ccccd) {
            in_s0 = temp_v3;
          }
          FUN_00360104();
          FUN_002bb150(&DAT_004c4b40,0);
        } while ((int)in_s0 >= 0x3e4cccce);
      }
      temp_v5 = DAT_004719d8;
      uStack_5c = DAT_004719dc;
      puVar2 = temp_v13;
      FUN_002c0d50(puVar2,param_2,0xe30,&temp_v4,0);
      *param_1 = (char)puVar2;
      if (in_s0 < temp_v1) {
        temp_v3 = 0.1f;
        do {
          in_s0 = in_s0 + temp_v3;
          if (temp_v1 < in_s0) {
            in_s0 = temp_v1;
          }
          FUN_00360104();
          puVar2 = (unsigned int *)FUN_002bb150(&DAT_004c4b40,0);
        } while (in_s0 < temp_v1);
      }
      if (param_3 != 0) {
        puVar2 = temp_v11;
      }
      if (param_3 != 0 && puVar2 != (unsigned int *)0x0) {
        FUN_002a3198();
      }
      temp_v0 = 0;
      FUN_002a3198(&temp_v6);
      if (temp_v11 != (unsigned int *)0x0) {
        software_interrupt(0x23);
      }
      return temp_v0;
    }
    if (temp_v0 == 0xe0a0cc08) {
      FUN_002bb150(10000000,0);
    }
  }
  FUN_002a3198(&temp_v6);
  if (temp_v11 == (unsigned int *)0x0) {
    return temp_v0;
  }
  software_interrupt(0x23);
  return temp_v0;
}
