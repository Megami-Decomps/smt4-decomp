#include "common.h"

extern "C" {

typedef struct Header {
    /* 0x00 */ union {
        u32 word;
        struct {
            u8 type;
            u8 mode;
        } fields;
    } head;
    /* 0x04 */ u32 value;
} Header;

/* Initialises the header: type 8, mode 2, value 0. */
void FUN_00300c10(Header *header)
{
    header->head.word = 0;
    header->head.fields.mode = 2;
    header->head.fields.type = 8;
    header->value = 0;
}

} /* extern "C" */
