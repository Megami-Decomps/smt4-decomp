#include "common.h"

extern "C" {

void FUN_0010032e(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
} Holder;

/* Runs FUN_0010032e and sets the byte at 4. */
void FUN_002fb244(Holder *object)
{
    FUN_0010032e();
    object->flag = 1;
}

} /* extern "C" */
