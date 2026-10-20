#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x434];
    /* 0x434 */ u32 request;
} Record;
extern Record *DAT_0057f290;

/* Returns the request word of the record at 0x57F290, or -1 when there is none. */
u32 FUN_002ab790(void)
{
    u32 request;

    if (DAT_0057f290 != NULL) {
        request = DAT_0057f290->request;
    } else {
        request = 0xFFFFFFFF;
    }
    return request;
}

} /* extern "C" */
