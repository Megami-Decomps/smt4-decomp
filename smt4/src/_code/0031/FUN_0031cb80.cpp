/* Reports through scrSetResult whether bit 8 of the record's flag halfword is set; always returns 1. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 unused : 8;
    /*      */ u16 flag : 1;
    /*      */ u16 rest : 7;
} Record;

extern s32 scrGetArg(void);
extern Record *dataTable00FindById(u16 id);
extern void scrSetResult(s32 value);

u32 FUN_0031cb80(void)
{
    scrSetResult(dataTable00FindById(scrGetArg())->flag);
    return 1;
}

}
