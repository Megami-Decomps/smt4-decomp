/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7c04` (_code @ 0x4e7c04, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
} param_2_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */


void FUN_004e7c04(int *param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int *puVar13;
  unsigned int temp_v12;
  
  temp_v9 = DAT_00571194;
  temp_v8 = DAT_00571190;
  temp_v7 = DAT_0057117c;
  temp_v6 = DAT_00571178;
  temp_v5 = DAT_00571174;
  temp_v4 = DAT_00571170;
  temp_v3 = DAT_0057116c;
  temp_v2 = DAT_00571168;
  temp_v1 = DAT_0057114c;
  temp_v0 = DAT_00571148;
  temp_v10 = 0;
  do {
    puVar13 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v10 * 0x408);
    if (-1 < *(short *)((int)puVar13 + 0x6e)) {
      temp_v11 = *puVar13;
      temp_v12 = puVar13[1];
      if (((temp_v11 & temp_v0) != 0 || (temp_v12 & temp_v1) != 0) &&
         ((temp_v12 & temp_v7) == 0 && (temp_v11 & temp_v6) == 0)) {
        if (param_2 != 1) {
          if (((temp_v11 & temp_v2) == 0 && (temp_v3 & temp_v12) == 0) &&
             (((temp_v11 & temp_v4) == 0 && (temp_v12 & temp_v5) == 0 ||
              (*(char *)(*param_1 + 0x4cd0) != '\0')))) {
            *puVar13 = temp_v11 | temp_v8;
            puVar13[1] = temp_v12 | temp_v9;
          }
        }
        else if ((temp_v3 & temp_v12) != 0 || (temp_v11 & temp_v2) != 0) {
          *puVar13 = temp_v11 | temp_v8;
          puVar13[1] = temp_v12 | temp_v9;
        }
      }
    }
    temp_v10 = temp_v10 + 1;
    if (temp_v10 >= 0x6d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
