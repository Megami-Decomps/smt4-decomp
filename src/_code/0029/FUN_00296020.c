/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296020` (_code @ 0x296020, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00296020_arg0 fn_00296020_arg0;
struct fn_00296020_arg0 {
    unsigned char pad_0x0[0x4a];
    byte field_0x4a; /* +0x4a */
    unsigned char pad_0x4b[0x8f];
    byte field_0xda; /* +0xda */
    unsigned char pad_0xdb[0x529];
    unsigned char field_0x604; /* +0x604 */
    unsigned char pad_0x605[0x9197];
    char field_0x979c; /* +0x979c */
    char field_0x979d; /* +0x979d */
    char field_0x979e; /* +0x979e */
};

extern int FUN_002a8a08(void);


unsigned int FUN_00296020(fn_00296020_arg0 *param_1)

{
  int temp_v0;
  fn_00296020_arg0 *pfVar2;
  int temp_v1;
  
  if (param_1 != (fn_00296020_arg0 *)0x0) {
    temp_v0 = FUN_002a8a08();
    pfVar2 = (fn_00296020_arg0 *)(temp_v0 + 0x90);
    temp_v0 = 0;
    do {
      if ((pfVar2 == param_1) || (pfVar2->field_0x4a == param_1->field_0x4a)) {
        temp_v1 = FUN_002a8a08();
        if ((((*(char *)(temp_v1 + 0x9108) < 0) || (*(char *)(temp_v1 + 0x9108) != temp_v0)) &&
            ((*(char *)(temp_v1 + 0x9109) < 0 || (*(char *)(temp_v1 + 0x9109) != temp_v0)))) &&
           ((*(char *)(temp_v1 + 0x910a) < 0 || (*(char *)(temp_v1 + 0x910a) != temp_v0)))) {
          return 0;
        }
        return 1;
      }
      temp_v0 = temp_v0 + 1;
      pfVar2 = (fn_00296020_arg0 *)&pfVar2->field_0x604;
    } while (temp_v0 < 0x18);
  }
  temp_v0 = -1;
  temp_v1 = FUN_002a8a08();
  if ((((*(char *)(temp_v1 + 0x9108) < 0) || (*(char *)(temp_v1 + 0x9108) != temp_v0)) &&
      ((*(char *)(temp_v1 + 0x9109) < 0 || (*(char *)(temp_v1 + 0x9109) != temp_v0)))) &&
     ((*(char *)(temp_v1 + 0x910a) < 0 || (*(char *)(temp_v1 + 0x910a) != temp_v0)))) {
    return 0;
  }
  return 1;
}
