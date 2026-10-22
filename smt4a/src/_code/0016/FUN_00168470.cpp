#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
} Record;

extern Record *dataFindKeyedRecordWithOverrides(s32 id);
extern int FUN_0017ffa8(int a, int b, u32 message, u32 arg0, u32 arg1, u32 arg2);

/* Shows the message (0x411-0x416) for the record's kind, passing the three arguments on. */
void FUN_00168470(s32 id, u32 arg0, u32 arg1, u32 arg2)
{
    u32 message = 0;

    switch (dataFindKeyedRecordWithOverrides(id)->kind) {
    case 0:
        message = 0x411;
        break;
    case 1:
        message = 0x412;
        break;
    case 2:
        message = 0x413;
        break;
    case 3:
        message = 0x414;
        break;
    case 4:
        message = 0x415;
        break;
    case 5:
        message = 0x416;
        break;
    }
    FUN_0017ffa8(2, 11, message, arg0, arg1, arg2);
}

}
