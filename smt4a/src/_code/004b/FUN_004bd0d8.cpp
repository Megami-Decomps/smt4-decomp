/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd0d8` (_code @ 0x4bd0d8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004bd0d8_arg0 fn_004bd0d8_arg0;
struct fn_004bd0d8_arg0 {
    unsigned char pad_0x0[0x66];
    byte field_0x66; /* +0x66 */
    unsigned char pad_0x67[0x67];
    byte field_0xce; /* +0xce */
    unsigned char pad_0xcf[0x5d];
    unsigned char field_0x12c; /* +0x12c */
    unsigned char pad_0x12d[0x1d07];
    char field_0x1e34; /* +0x1e34 */
    char field_0x1e35; /* +0x1e35 */
    char field_0x1e36; /* +0x1e36 */
};

extern int gameGetSlotTable(void);


unsigned int FUN_004bd0d8(fn_004bd0d8_arg0 *param_1)

{
  int temp_v0;
  fn_004bd0d8_arg0 *pfVar2;
  int temp_v1;
  
  if (param_1 != (fn_004bd0d8_arg0 *)0x0) {
    temp_v0 = gameGetSlotTable();
    pfVar2 = (fn_004bd0d8_arg0 *)(temp_v0 + 0x68);
    temp_v0 = 0;
    do {
      if ((pfVar2 == param_1) || (pfVar2->field_0x66 == param_1->field_0x66)) {
        temp_v1 = gameGetSlotTable();
        if ((((*(char *)(temp_v1 + 0x1ca0) < 0) || (*(char *)(temp_v1 + 0x1ca0) != temp_v0)) &&
            ((*(char *)(temp_v1 + 0x1ca1) < 0 || (*(char *)(temp_v1 + 0x1ca1) != temp_v0)))) &&
           ((*(char *)(temp_v1 + 0x1ca2) < 0 || (*(char *)(temp_v1 + 0x1ca2) != temp_v0)))) {
          return 0;
        }
        return 1;
      }
      temp_v0 = temp_v0 + 1;
      pfVar2 = (fn_004bd0d8_arg0 *)&pfVar2->field_0x12c;
    } while (temp_v0 < 0x18);
  }
  temp_v0 = -1;
  temp_v1 = gameGetSlotTable();
  if ((((*(char *)(temp_v1 + 0x1ca0) < 0) || (*(char *)(temp_v1 + 0x1ca0) != temp_v0)) &&
      ((*(char *)(temp_v1 + 0x1ca1) < 0 || (*(char *)(temp_v1 + 0x1ca1) != temp_v0)))) &&
     ((*(char *)(temp_v1 + 0x1ca2) < 0 || (*(char *)(temp_v1 + 0x1ca2) != temp_v0)))) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
