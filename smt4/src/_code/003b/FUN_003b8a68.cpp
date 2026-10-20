#include "romwright_types.h"

extern "C" {

int FUN_002305e8(int);
int FUN_0026374c(int);
int FUN_0027e774(int, int);
int FUN_0027e7b4(unsigned int, int);
int scrScriptProcessDestroy(undefined4);
int asdMemFree(undefined4);

typedef struct fn_003b8a68_arg0 fn_003b8a68_arg0;
struct fn_003b8a68_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x69c];
    undefined1 field_0x6cc; /* +0x6cc */
    unsigned char pad_0x6cd[0x68f];
    void *field_0xd5c; /* +0xd5c */
    unsigned char pad_0xd60[0x20];
    unsigned char field_0xd80; /* +0xd80 */
    unsigned char pad_0xd81[0x1f];
    undefined4 field_0xda0; /* +0xda0 */
    undefined4 field_0xda4; /* +0xda4 */
    undefined4 field_0xda8; /* +0xda8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_002305e8. */
/* Supplied declaration required: FUN_0026374c. */
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFree. */


void FUN_003b8a68(fn_003b8a68_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(param_1->field_0xda8);
  if (temp_v0 == 2) {
    scrScriptProcessDestroy(param_1->field_0xda8);
    param_1->field_0xda8 = 0;
    asdMemFree(param_1->field_0xda0);
    param_1->field_0xda0 = 0;
    asdMemFree(param_1->field_0xda4);
    param_1->field_0xda4 = 0;
    FUN_0027e774(0,0);
    FUN_0027e7b4(*(unsigned int *)&param_1->field_0xd80,
                 *(unsigned char *)((int)param_1->field_0xd5c + 0x3f));
    param_1->field_0x28 = 5;
    param_1->field_0x2c = 0;
    param_1->field_0x6cc = 0;
    FUN_0026374c((int)param_1->field_0xd5c + 2);
    FUN_002305e8(1);
    return;
  }
  return;
}

} /* extern "C" */
