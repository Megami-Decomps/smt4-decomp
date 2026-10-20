#include "romwright_types.h"

extern "C" {

int FUN_00184c00(int, int, int);
int FUN_002c2160(int);
int FUN_0033e164(void);

typedef struct fn_0020b660_arg0 fn_0020b660_arg0;
struct fn_0020b660_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    undefined4 field_0x58; /* +0x58 */
    undefined2 field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_002c2160. */
/* Supplied declaration required: FUN_0033e164. */
extern int FUN_0038b568(void);


void FUN_0020b660(fn_0020b660_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f108;
  *(unsigned int *)(DAT_0057f108 + 0x28) = *(unsigned int *)(DAT_0057f108 + 0x1c);
  *(fn_0020b660_arg0 **)(temp_v0 + 0x1c) = param_1;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  if (param_1 == (fn_0020b660_arg0 *)0x33) {
    FUN_0033e164();
    FUN_002c2160(2);
    FUN_00184c00(temp_v0 + 0x1634,7,0);
    return;
  }
  if ((param_1 == (fn_0020b660_arg0 *)0x55) && (temp_v1 = FUN_0038b568(), temp_v1 == 0)) {
    *(unsigned int *)(temp_v0 + 0x1c) = 0x56;
  }
  return;
}

} /* extern "C" */
