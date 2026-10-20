#include "common.h"

extern "C" {

typedef struct Part001d381c {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ void *manager;
} Part001d381c;

typedef struct Object001d381c {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Part001d381c part;
} Object001d381c;

typedef struct Holder001d381c {
    /* 0x00 */ Object001d381c *object;
} Holder001d381c;

void asdMdlManagerDestroy(void *manager);

/* Destroys the model manager the object's part holds, if any. */
void objectDestroyModelManager(Holder001d381c *holder)
{
    Part001d381c *part = &holder->object->part;

    if (part->manager != NULL) {
        asdMdlManagerDestroy(part->manager);
        part->manager = NULL;
    }
}

} /* extern "C" */
