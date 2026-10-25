/* Reports through scrSetResult whether bit 8 of the record's flag halfword is set; always returns 1. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 unused : 8;
    /*      */ u16 flag : 1;
    /*      */ u16 rest : 7;
} Record;

extern s32 scrGetArg(s32 index);
extern Record *dataTable00FindById(u16 id);

u32 FUN_0031cb7c(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->flag);
    return 1;
}

}
