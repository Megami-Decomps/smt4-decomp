/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f41b0` (_code @ 0x4f41b0, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004f41b0_arg0 fn_004f41b0_arg0;
struct fn_004f41b0_arg0 {
    unsigned char pad_0x0[0x5bc];
    undefined4 field_0x5bc; /* +0x5bc */
    unsigned char pad_0x5c0[0x4];
    undefined4 field_0x5c4; /* +0x5c4 */
    undefined4 field_0x5c8; /* +0x5c8 */
    undefined4 field_0x5cc; /* +0x5cc */
    unsigned char pad_0x5d0[0x24];
    undefined4 field_0x5f4; /* +0x5f4 */
    unsigned char pad_0x5f8[0x8];
    undefined4 field_0x600; /* +0x600 */
    undefined4 field_0x604; /* +0x604 */
    undefined4 field_0x608; /* +0x608 */
    undefined4 field_0x60c; /* +0x60c */
    undefined4 field_0x610; /* +0x610 */
    unsigned char pad_0x614[0x24];
    undefined4 field_0x638; /* +0x638 */
    unsigned char pad_0x63c[0x8];
    undefined4 field_0x644; /* +0x644 */
    undefined4 field_0x648; /* +0x648 */
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0x74];
    undefined4 field_0x6c4; /* +0x6c4 */
    undefined4 field_0x6c8; /* +0x6c8 */
    undefined4 field_0x6cc; /* +0x6cc */
    unsigned char pad_0x6d0[0xc];
    undefined4 field_0x6dc; /* +0x6dc */
    unsigned char pad_0x6e0[0xc];
    undefined4 field_0x6ec; /* +0x6ec */
    undefined4 field_0x6f0; /* +0x6f0 */
    unsigned char pad_0x6f4[0x10];
    undefined4 field_0x704; /* +0x704 */
    unsigned char pad_0x708[0xc];
    undefined4 field_0x714; /* +0x714 */
    unsigned char pad_0x718[0xc];
    undefined4 field_0x724; /* +0x724 */
    unsigned char pad_0x728[0x10];
    undefined4 field_0x738; /* +0x738 */
    undefined4 field_0x73c; /* +0x73c */
    undefined4 field_0x740; /* +0x740 */
    unsigned char pad_0x744[0xc];
    undefined4 field_0x750; /* +0x750 */
    undefined4 field_0x754; /* +0x754 */
    undefined4 field_0x758; /* +0x758 */
    unsigned char pad_0x75c[0xa4];
    undefined4 field_0x800; /* +0x800 */
    undefined4 field_0x804; /* +0x804 */
    undefined4 field_0x808; /* +0x808 */
    unsigned char pad_0x80c[0x4];
    undefined4 field_0x810; /* +0x810 */
    unsigned char pad_0x814[0x4];
    undefined4 field_0x818; /* +0x818 */
    undefined4 field_0x81c; /* +0x81c */
    undefined4 field_0x820; /* +0x820 */
    unsigned char pad_0x824[0x4];
    undefined4 field_0x828; /* +0x828 */
    unsigned char pad_0x82c[0x4];
    undefined4 field_0x830; /* +0x830 */
    undefined4 field_0x834; /* +0x834 */
    undefined4 field_0x838; /* +0x838 */
    undefined4 field_0x83c; /* +0x83c */
    undefined4 field_0x840; /* +0x840 */
    undefined4 field_0x844; /* +0x844 */
    unsigned char pad_0x848[0x4];
    undefined4 field_0x84c; /* +0x84c */
    unsigned char pad_0x850[0x4];
    undefined4 field_0x854; /* +0x854 */
    undefined4 field_0x858; /* +0x858 */
    undefined4 field_0x85c; /* +0x85c */
    undefined4 field_0x860; /* +0x860 */
    undefined4 field_0x864; /* +0x864 */
    undefined4 field_0x868; /* +0x868 */
    undefined4 field_0x86c; /* +0x86c */
    undefined4 field_0x870; /* +0x870 */
    undefined4 field_0x874; /* +0x874 */
    unsigned char pad_0x878[0x4];
    undefined4 field_0x87c; /* +0x87c */
    unsigned char pad_0x880[0x4];
    undefined4 field_0x884; /* +0x884 */
    undefined4 field_0x888; /* +0x888 */
    undefined4 field_0x88c; /* +0x88c */
    undefined4 field_0x890; /* +0x890 */
    undefined4 field_0x894; /* +0x894 */
    undefined4 field_0x898; /* +0x898 */
    undefined4 field_0x89c; /* +0x89c */
    undefined4 field_0x8a0; /* +0x8a0 */
    undefined4 field_0x8a4; /* +0x8a4 */
    unsigned char pad_0x8a8[0x4];
    undefined4 field_0x8ac; /* +0x8ac */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int DAT_00571534; /* 0x571534 */
extern unsigned int DAT_00571538; /* 0x571538 */
extern unsigned int DAT_005e1518; /* 0x5e1518 */
extern unsigned int DAT_005e151c; /* 0x5e151c */
extern unsigned int DAT_005e1520; /* 0x5e1520 */
extern unsigned int DAT_005e1524; /* 0x5e1524 */
extern unsigned int DAT_005e1528; /* 0x5e1528 */
extern unsigned int DAT_005e152c; /* 0x5e152c */
extern unsigned int g_cameraAlternateProgressStart; /* 0x5e1530 */
extern unsigned int DAT_005e1534; /* 0x5e1534 */
extern unsigned int DAT_005e1538; /* 0x5e1538 */
extern unsigned int g_cameraAlternateProgressPrevious; /* 0x5e153c */
extern unsigned int DAT_005e1540; /* 0x5e1540 */
extern unsigned int DAT_005e1544; /* 0x5e1544 */


void FUN_004f41b0(fn_004f41b0_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1->field_0x64c;
  param_1->field_0x64c = temp_v0 & 0xffdfffff;
  if ((temp_v0 & 0x100000) == 0) {
    param_1->field_0x724 = 0;
    param_1->field_0x804 = param_1->field_0x800;
    param_1->field_0x81c = param_1->field_0x818;
    param_1->field_0x840 = param_1->field_0x83c;
    param_1->field_0x834 = param_1->field_0x830;
    param_1->field_0x860 = param_1->field_0x854;
    param_1->field_0x864 = param_1->field_0x858;
    param_1->field_0x868 = param_1->field_0x85c;
    param_1->field_0x890 = param_1->field_0x884;
    param_1->field_0x894 = param_1->field_0x888;
    param_1->field_0x898 = param_1->field_0x88c;
    param_1->field_0x808 = 0;
    param_1->field_0x820 = 0;
    param_1->field_0x844 = 0;
    param_1->field_0x838 = 0;
    param_1->field_0x874 = 0;
    param_1->field_0x870 = 0;
    param_1->field_0x86c = 0;
    param_1->field_0x8a4 = 0;
    param_1->field_0x8a0 = 0;
    param_1->field_0x89c = 0;
    param_1->field_0x810 = 0;
    param_1->field_0x828 = 0;
    param_1->field_0x84c = 0;
    param_1->field_0x87c = 0;
    param_1->field_0x8ac = 0;
    param_1->field_0x638 = param_1->field_0x704;
    DAT_00571534 = param_1->field_0x6dc;
    param_1->field_0x648 = param_1->field_0x714;
    param_1->field_0x644 = param_1->field_0x5bc;
    param_1->field_0x608 = param_1->field_0x738;
    param_1->field_0x60c = param_1->field_0x73c;
    param_1->field_0x610 = param_1->field_0x740;
    DAT_005e1518 = param_1->field_0x6c4;
    DAT_005e151c = param_1->field_0x6c8;
    DAT_005e1520 = param_1->field_0x6cc;
    g_cameraAlternateProgressStart = param_1->field_0x750;
    DAT_005e1534 = param_1->field_0x754;
    DAT_005e1538 = param_1->field_0x758;
    param_1->field_0x5f4 = 0;
    DAT_00571538 = 0;
    param_1->field_0x604 = 0;
    param_1->field_0x600 = 0;
    param_1->field_0x5cc = 0;
    param_1->field_0x5c8 = 0;
    param_1->field_0x5c4 = 0;
    DAT_005e152c = 0;
    DAT_005e1528 = 0;
    DAT_005e1524 = 0;
    DAT_005e1544 = 0;
    DAT_005e1540 = 0;
    g_cameraAlternateProgressPrevious = 0;
    param_1->field_0x6f0 = 1;
    param_1->field_0x6ec = param_3;
    param_1->field_0x64c = param_1->field_0x64c | 0x10;
  }
  return;
}

} /* extern "C" */
