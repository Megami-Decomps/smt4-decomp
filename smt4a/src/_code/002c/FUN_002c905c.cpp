#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x430];
    /* 0x430 */ u8 busy;
    /* 0x431 */ u8 unk431[3];
    /* 0x434 */ s32 request;
} Record;
extern Record *DAT_0057f290;

/* Returns 1 when the record is busy with request 8..0xE. */
u32 FUN_002c905c(void)
{
    s32 request;

    if ((DAT_0057f290->busy != 0) &&
        (((request = DAT_0057f290->request, request == 8 || request == 9 ||
           (request == 10 || request == 0xB)) || ((request == 0xC || request == 0xD) || request == 0xE)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
