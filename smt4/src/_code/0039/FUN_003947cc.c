/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003947cc` (_code @ 0x3947cc, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_00394a24; /* 0x394a24 */
extern int DAT_004342c8; /* 0x4342c8 */
extern char s_ef_e_atk01_00436028[11]; /* 0x436028 */

/* Supplied declaration required: FUN_002505c0. */
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002aa568. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c564c(unsigned int);


unsigned int FUN_003947cc(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 9 goto(s); irregular input(s): in_s0; 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  float temp_v1;
  unsigned int temp_v2;
  char *pcVar5;
  unsigned int in_s0;
  float temp_v3;
  unsigned long long temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v4 = (unsigned long long)in_s0;
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 != 0) {
    return 0;
  }
  temp_v0 = 0;
  do {
    temp_v5 = 0;
    pcVar5 = s_ef_e_atk01_00436028 + temp_v0 * 0x24;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    FUN_002be624(&temp_v5,&LAB_00394a24,pcVar5);
    puVar2 = (unsigned int *)&temp_v5;
    FUN_002aa568(&temp_v5,param_1);
    temp_v3 = (float)temp_v4;
    if (puVar2 == (unsigned int *)0x0) goto LAB_0039488c;
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x191);
  pcVar5 = (char *)0x0;
LAB_0039488c:
  temp_v0 = FUN_002939f4();
  switch(param_3) {
  case 2:
  case 5:
  case 8:
  case 9:
  case 0xc:
    if (temp_v3 < -2.9650002f) {
LAB_00394938:
      temp_v2 = 5;
      goto LAB_00394998;
    }
    if (temp_v3 < -0.99f) {
LAB_00394954:
      temp_v2 = 4;
      goto LAB_00394998;
    }
    if (2.94f < temp_v3) {
LAB_00394970:
      temp_v2 = 1;
      goto LAB_00394998;
    }
    if (0.96500003f < temp_v3) {
LAB_0039498c:
      temp_v2 = 2;
      goto LAB_00394998;
    }
    break;
  default:
    temp_v1 = *(float *)(DAT_004342c8 + 0x574);
    if (temp_v3 < temp_v1 + -17.0f) goto LAB_00394938;
    if (temp_v3 < temp_v1 + -9.0f) goto LAB_00394954;
    if (temp_v1 + 17.0f < temp_v3) goto LAB_00394970;
    if (temp_v1 + 9.0f < temp_v3) goto LAB_0039498c;
    break;
  case 6:
  case 7:
  case 0xb:
    break;
  }
  temp_v2 = 3;
LAB_00394998:
  if (pcVar5 == (char *)0x0) {
    return 0;
  }
  if (*(int *)(pcVar5 + 0x10) != 0) {
    temp_v5 = 0;
    temp_v7 = 0;
    temp_v6 = temp_v2;
    FUN_002505c0(*(unsigned short *)(pcVar5 + 0x14),param_2,*(int *)(pcVar5 + 0x10),0);
  }
  if (*(int *)(pcVar5 + 0x18) != 0) {
    temp_v5 = 0;
    temp_v7 = 0;
    temp_v6 = temp_v2;
    FUN_002505c0(*(unsigned short *)(pcVar5 + 0x1c),param_2,*(int *)(pcVar5 + 0x18),0);
  }
  *(unsigned int *)(temp_v0 + 0x49e4) = *(unsigned int *)(pcVar5 + 0x20);
  return 1;
}
