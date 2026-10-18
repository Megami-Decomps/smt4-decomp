/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047ed10` (_code @ 0x47ed10, 0x2b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern unsigned char LAB_0047efcc; /* 0x47efcc */
extern int DAT_00571508; /* 0x571508 */
extern char s_ef_e_atk01_00573e68[11]; /* 0x573e68 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0014aa78(void);
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_004fb43c. */


unsigned int FUN_0047ed10(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 9 goto(s); irregular input(s): in_s0; 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  float temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar6;
  unsigned int in_s0;
  float temp_v4;
  unsigned long long temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v5 = (unsigned long long)in_s0;
  temp_v0 = FUN_00180008(1);
  if (temp_v0 != 0) {
    return 0;
  }
  temp_v0 = 0;
  do {
    temp_v6 = 0;
    pcVar6 = s_ef_e_atk01_00573e68 + temp_v0 * 0x34;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    FUN_00100388(&temp_v6,&LAB_0047efcc,pcVar6);
    puVar2 = (unsigned int *)&temp_v6;
    FUN_0030ea58(&temp_v6,param_1);
    temp_v4 = (float)temp_v5;
    if (puVar2 == (unsigned int *)0x0) goto LAB_0047edd4;
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x1f6);
  pcVar6 = (char *)0x0;
LAB_0047edd4:
  temp_v0 = FUN_0014aa78();
  switch(param_3) {
  case 2:
  case 5:
  case 8:
  case 9:
  case 0xc:
    if (temp_v4 < -2.9650002f) {
LAB_0047ee80:
      temp_v3 = 5;
      goto LAB_0047eee0;
    }
    if (temp_v4 < -0.99f) {
LAB_0047ee9c:
      temp_v3 = 4;
      goto LAB_0047eee0;
    }
    if (2.94f < temp_v4) {
LAB_0047eeb8:
      temp_v3 = 1;
      goto LAB_0047eee0;
    }
    if (0.96500003f < temp_v4) {
LAB_0047eed4:
      temp_v3 = 2;
      goto LAB_0047eee0;
    }
    break;
  default:
    temp_v1 = *(float *)(DAT_00571508 + 0x58c);
    if (temp_v4 < temp_v1 + -17.0f) goto LAB_0047ee80;
    if (temp_v4 < temp_v1 + -9.0f) goto LAB_0047ee9c;
    if (temp_v1 + 17.0f < temp_v4) goto LAB_0047eeb8;
    if (temp_v1 + 9.0f < temp_v4) goto LAB_0047eed4;
    break;
  case 6:
  case 7:
  case 0xb:
    break;
  }
  temp_v3 = 3;
LAB_0047eee0:
  if (pcVar6 == (char *)0x0) {
    return 0;
  }
  temp_v2 = 0;
  do {
    if (*(int *)(pcVar6 + temp_v2 * 8 + 0x10) != 0) {
      temp_v6 = 0;
      temp_v8 = 0;
      temp_v7 = temp_v3;
      FUN_004fb43c(*(unsigned short *)(pcVar6 + temp_v2 * 8 + 0x14),param_2,
                   *(int *)(pcVar6 + temp_v2 * 8 + 0x10),0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    FUN_00100388(&temp_v6,&LAB_0047efcc,*(unsigned int *)(temp_v2 * 4 + 0x57a460));
    puVar2 = (unsigned int *)&temp_v6;
    FUN_0030ea58(&temp_v6,param_1);
    if (puVar2 == (unsigned int *)0x0) {
      temp_v3 = 0xffffffff;
      *(unsigned int *)(temp_v0 + 0x4cf0) = temp_v3;
      return 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v3 = *(unsigned int *)(pcVar6 + 0x30);
  *(unsigned int *)(temp_v0 + 0x4cf0) = temp_v3;
  return 1;
}
