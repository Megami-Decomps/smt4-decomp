/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018291c` (_code @ 0x18291c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_6_stack;

extern unsigned char LAB_00192824; /* 0x192824 */
extern unsigned char DAT_0053cd64; /* 0x53cd64 */
extern unsigned int DAT_00630724; /* 0x630724 */
extern unsigned int DAT_00630728; /* 0x630728 */
extern unsigned int DAT_0063072c; /* 0x63072c */
extern unsigned int DAT_00630730; /* 0x630730 */
extern unsigned int DAT_00630734; /* 0x630734 */
extern unsigned int DAT_00630738; /* 0x630738 */
extern unsigned int DAT_0063073c; /* 0x63073c */
extern unsigned int DAT_00630740; /* 0x630740 */
extern unsigned int DAT_00630744; /* 0x630744 */
extern unsigned int DAT_00630748; /* 0x630748 */
extern unsigned int DAT_0063074c; /* 0x63074c */
extern unsigned int DAT_00630750; /* 0x630750 */
extern unsigned int DAT_00630754; /* 0x630754 */
extern unsigned int DAT_00630758; /* 0x630758 */
extern unsigned int DAT_0063075c; /* 0x63075c */
extern unsigned int DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630764; /* 0x630764 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern unsigned int DAT_0063077c; /* 0x63077c */

/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0018291c(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                 int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [4];
  unsigned int temp_v2;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int temp_v7;
  int aiStack_70 [21];
  
  FUN_002f5020(temp_v1,&LAB_00192824,0x10,4);
  rt_memcpy_w(aiStack_70,&DAT_0053cd64,0x50);
  if (param_6 != 0) {
    temp_v1[0] = *param_1;
    temp_v1[1] = param_1[1];
    temp_v1[2] = param_1[2];
    temp_v1[3] = param_1[3];
    temp_v2 = *param_2;
    uStack_9c = param_2[1];
    uStack_98 = param_2[2];
    temp_v3 = param_2[3];
    temp_v4 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    temp_v5 = param_3[3];
    temp_v6 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    temp_v7 = param_4[3];
  }
  else {
    temp_v1[0] = *param_1;
    temp_v1[1] = param_1[1];
    temp_v1[2] = param_1[2];
    temp_v1[3] = DAT_0063077c;
    temp_v2 = *param_2;
    uStack_9c = param_2[1];
    uStack_98 = param_2[2];
    temp_v3 = DAT_0063077c;
    temp_v4 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    temp_v5 = DAT_0063077c;
    temp_v6 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    temp_v7 = DAT_0063077c;
  }
  DAT_00630764 = (char)param_5;
  temp_v0 = aiStack_70[param_5 * 4];
  DAT_00630724 = temp_v1[temp_v0 * 4];
  DAT_00630728 = temp_v1[temp_v0 * 4 + 1];
  DAT_0063072c = temp_v1[temp_v0 * 4 + 2];
  DAT_00630730 = temp_v1[temp_v0 * 4 + 3];
  temp_v0 = aiStack_70[param_5 * 4 + 1];
  DAT_0063073c = temp_v1[temp_v0 * 4 + 2];
  DAT_00630740 = temp_v1[temp_v0 * 4 + 3];
  DAT_00630734 = temp_v1[temp_v0 * 4];
  DAT_00630738 = temp_v1[temp_v0 * 4 + 1];
  temp_v0 = aiStack_70[param_5 * 4 + 2];
  DAT_0063074c = temp_v1[temp_v0 * 4 + 2];
  DAT_00630750 = temp_v1[temp_v0 * 4 + 3];
  DAT_00630744 = temp_v1[temp_v0 * 4];
  DAT_00630748 = temp_v1[temp_v0 * 4 + 1];
  temp_v0 = aiStack_70[param_5 * 4 + 3];
  DAT_00630760 = temp_v1[temp_v0 * 4 + 3];
  DAT_00630754 = temp_v1[temp_v0 * 4];
  DAT_00630758 = temp_v1[temp_v0 * 4 + 1];
  DAT_0063075c = temp_v1[temp_v0 * 4 + 2];
  DAT_00630775 = 1;
  return;
}
