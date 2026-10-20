#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x434];
    /* 0x434 */ u32 request;
} Record;
extern Record *g_unite;

/* Returns the request word of the record at 0x57F290, or -1 when there is none. */
u32 FUN_002ab790(void)
{
    u32 request;

    if (g_unite != NULL) {
        request = g_unite->request;
    } else {
        request = 0xFFFFFFFF;
    }
    return request;
}

} /* extern "C" */
